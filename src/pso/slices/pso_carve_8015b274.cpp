#include "types.h"

extern "C" {

int bswap_16__FPUs(void* a0 = 0);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);
void TOChatSensor__sub_8015B274(void* p);
void send_state__12TOChatSensorFPv(void* p);
int TLobby__send_and_handle_60(void*);
void init_packet_type__12TOChatSensorFPv(void* p);

void TOChatSensor__sub_8015B274(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
