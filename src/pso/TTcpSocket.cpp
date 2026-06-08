#include <global_types.h>
#include <stdio.h>
#include <string.h>
#include "pso/macros.h"
#include "pso/TMainTask.h"
#include "pso/TObject.h"
#include "pso/TSocket.h"
#include "pso/TTcpSocket.h"

OBJECT_NAME(TTcpSocket);
TTcpSocket *tcp_socket_table[16] = {nullptr};

struct at_ip4_opt {
	u8 ttl;
	u8 svctype;
	u8 df_flag;
};

struct at_ip6_opt {
	u8 traffic_class;
	u32 flow_label;
	u8 hop_limit;
};

struct at_ip_option {
	u32 type;
	union {
		struct at_ip6_opt ip6;
		struct at_ip4_opt ip4;
	} ip46;
};

struct at_ip_addr {
	u32 type;
	union {
		u8 ip6[16];
		u32 ip4;
	} ip46;
};

struct send_buffs {
	short len;
	u8 *buff;
};

void func_80019aa0();
void controller_stuff();
char func_801a5d1c();
void render_tick();
void func_803d96a4();
short tcp_abort(short nh);
short tcp_bind(short nh, struct at_ip_addr *addr, u16 port);
short tcp_connect(short nh, struct at_ip_addr *addr, u16 port, struct at_ip_option *option);
short tcp_create();
short tcp_delete(short nh);
short tcp_get_opt(short nh, short type, u32 *opt);
short tcp_send(short nh, void (*notify)(short size, short sock_fd), char bufnum, struct send_buffs *sb);
short tcp_stat(short nh, short *stat, short *backlog, u32 *sendwin, u32 *recvwin);
short tcp_receive(short nh, void (*notify)(short size, short sock_fd), short len, u8 *buf);
int get_link_status();
char *get_sock_status_name(short code);

TTcpSocket::~TTcpSocket() {
	close();
}

void TTcpSocket::recv() {
	if (m_sock_fd != -1) {
		memset(m_packet_buffer, 0, sizeof(m_packet_buffer));
		m_buffer_cleared = true;
		(int)tcp_receive(m_sock_fd, notify, sizeof(m_packet_buffer), m_packet_buffer);
	}
}

void TTcpSocket::notify(short size, short sock_fd) {
	char tmp_str[64];
	TTcpSocket *socket = tcp_socket_table[sock_fd];

	if (socket != nullptr) {
		if (size > 0) {
			socket->m_buffer_cleared = false;
			socket->m_size = size;
			socket->m_buffer_offset = 0;
			sprintf(tmp_str, "Rcv:%d byte", size);
			socket->log(tmp_str);
			if (socket->m_callback != nullptr) {
				socket->m_callback(socket);
			}
		} else {
			socket->m_is_invalid_packet |= 1;
		}
	}
}

short TTcpSocket::send(u8 *data, size_t size) {
	if (m_sock_fd != -1) {
		if (!m_is_encrypted) {
			m_send_crypt.encrypt(data, size);
		}

		if (m_is_invalid_packet || !get_link_status()) {
			return -1;
		} else {
			if (int status = stat()) {
				log(get_sock_status_name(status));
				m_is_invalid_packet |= 1;
				return 1;
			} else {
				if (m_send_window <= size) {
					m_is_invalid_packet |= 1;
					return 1;
				} else {
					if (m_stat_val < 0) {
						m_is_invalid_packet |= 1;
						return 1;
					} else {
						struct send_buffs sb;
						sb.buff = data;
						sb.len = size;
						m_unused = 0;
						int ret = tcp_send(m_sock_fd, nullptr, 1, &sb);
						if (ret >= 1 || ret < -1) {
							m_is_invalid_packet |= 1;
							log(get_sock_status_name(ret));
							close();
							return ret;
						}
					}
				}
			}
		}
	} else {
		return -1;
	}
}

short TTcpSocket::send(u8 *data) {
	if (m_sock_fd != -1) {
		if (m_is_invalid_packet || !get_link_status()) {
			return -1;
		} else {
			if (short status = stat()) {
				log(get_sock_status_name(status));
				m_is_invalid_packet |= 1;
				return 1;
			} else {
				if (m_stat_val < 0) {
					m_is_invalid_packet |= 1;
					return 1;
				} else {
					s8 len = strlen(reinterpret_cast<const char *>(data));
					struct send_buffs sb;
					sb.buff = data;
					sb.len = len;
					if (m_send_window <= len) {
						m_is_invalid_packet |= 1;
						return 1;
					} else {
						short ret = tcp_send(m_sock_fd, nullptr, 1, &sb);
						if (ret) {
							close();
						}
						return ret;
					}
				}
			}
		}
	} else {
		return -1;
	}
}

int TTcpSocket::test_connection() {
	for (int i = 0; i < 1800; ++i) {
		if (int status = stat()) {
			log(get_sock_status_name(status));
			m_is_invalid_packet |= 1;
			return 1;
		} else if (m_send_window <= 128) {
			m_is_invalid_packet |= 1;
			return 1;
		} else if (m_stat_val < 0) {
			m_is_invalid_packet |= 1;
			return 1;
		} else if (!get_link_status()) {
			m_is_invalid_packet |= 1;
			return 1;
		} else if (m_send_window > 4095) {
			return 0;
		} else {
			main_task.some_empty_func();
			main_task.run_tl_camera_tasks();
			main_task.render();
			main_task.render_screen_overlay();
			func_80019aa0();
			render_tick();
		}
	}

	m_is_invalid_packet |= 1;
	return 1;
}

void TTcpSocket::some_stub() {}

short TTcpSocket::stat() {
	if (m_sock_fd != -1) {
		return tcp_stat(m_sock_fd, &m_stat_val, nullptr, &m_send_window, &m_recv_window);
	} else {
		return 0;
	}
}

short TTcpSocket::close() {
	if (m_sock_fd != -1) {
		(short)tcp_abort(m_sock_fd);
		(short)tcp_delete(m_sock_fd);
		tcp_socket_table[m_sock_fd] = nullptr;
		m_sock_fd = -1;
		m_is_encrypted = 0;
		m_size = 0;
		m_buffer_offset = 0;
		m_buffer_cleared = true;
	}
	return m_sock_fd;
}

int TTcpSocket::open() {
	m_sock_fd = -1;
	m_is_encrypted = 0;
	m_size = 0;
	m_buffer_offset = 0;
	m_buffer_cleared = true;
	m_unused = 0;
	m_sock_fd = tcp_create();

	if (m_sock_fd < 0) {
		log(get_sock_status_name(m_sock_fd));
		return -1;
	} else {
		struct at_ip_option connect_option;
		struct at_ip_addr connect_addr;
		struct at_ip_addr bind_addr;

		u32 opt = 1;

		tcp_get_opt(m_sock_fd, 0x2001, &opt);

		bind_addr.type = 4;
		bind_addr.ip46.ip4 = 0;

		tcp_bind(m_sock_fd, &bind_addr, m_src_port);

		connect_addr.type = 4;
		connect_addr.ip46.ip4 = m_dst_addr.addr;

		connect_option.type = 4;
		connect_option.ip46.ip4.ttl = 120;
		connect_option.ip46.ip4.svctype = 0;
		connect_option.ip46.ip4.df_flag = 0;

		if (tcp_connect(m_sock_fd, &connect_addr, m_dst_port, &connect_option)) {
			log(get_sock_status_name(m_sock_fd));
			return -1;
		} else {
			for (;;) {
				func_803d96a4();
				controller_stuff();
				if (short status = stat()) {
					log(get_sock_status_name(status));
					return -2;
				} else if (m_stat_val < 0) {
					return -2;
				} else {
					some_stub();
					if (m_stat_val < 4) {
						if (!get_link_status()) {
							return -3;
						} else if (func_801a5d1c()) {
							return -2;
						} else {
							main_task.some_empty_func();
							main_task.run_tl_camera_tasks();
							main_task.render();
							main_task.render_screen_overlay();
							func_80019aa0();
							render_tick();
						}
					} else {
						tcp_socket_table[m_sock_fd] = this;
						return m_sock_fd;
					}
				}
			}
		}
	}
}

void func_80019aa0() {}
void controller_stuff() {}
char func_801a5d1c() {}
void render_tick() {}
void func_803d96a4() {}
short tcp_abort(short nh) {}
short tcp_bind(short nh, struct at_ip_addr *addr, u16 port) {}
short tcp_connect(short nh, struct at_ip_addr *addr, u16 port, struct at_ip_option *option) {}
short tcp_create() {}
short tcp_delete(short nh) {}
short tcp_get_opt(short nh, short type, u32 *opt) {}
short tcp_send(short nh, void (*notify)(short size, short sock_fd), char bufnum, struct send_buffs *sb) {}
short tcp_stat(short nh, short *stat, short *backlog, u32 *sendwin, u32 *recvwin) {}
short tcp_receive(short nh, void (*notify)(short size, short sock_fd), short len, u8 *buf) {}
int get_link_status() {}
char *get_sock_status_name(short code) {}
