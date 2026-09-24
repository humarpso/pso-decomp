#include "types.h"

struct Pkt_801D1888 { u8 cmd; u8 size; u8 pad[2]; u16 a; u16 b; };

extern "C" {
void TObjPlayer__sub_801D1888(Pkt_801D1888 *p);
}

extern "C" {
void bswap_fields__10TObjPlayerFPv(void* p);

int TFontSmallLobby__sub_801C0228(void*);
void* copy_font_state__10TObjPlayerFPvPv(void* p, void* a1);
void* copy_head_fields__10TObjPlayerFPvPv(void* p, void* a1);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int bswap_field_u32__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D28DC(void*);
int TLobby__send_and_handle_60(void*);
void set_type_53__10TObjPlayerFPv(void* p);
void set_revived_state__10TObjPlayerFPv(void* p);
void init_revive_packet__10TObjPlayerFPv(void* p);

void TObjPlayer__sub_801D1888(Pkt_801D1888 *p) {
    p->a = 0xFFFF;
    p->b = 0;
    p->cmd = 0x89;
    p->size = 2;
}

}
