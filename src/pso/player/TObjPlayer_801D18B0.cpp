#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

struct VOff_801D192C_arg0_801D18B0 { char pad_0[0x4]; char f_4[1]; };

void *TObjPlayer__sub_801D192C(void *arg0);
void TObjPlayer__sub_801D1A24(void* a0);
void bswap_font_lobby2__10TObjPlayerFPv(void* p);
void bswap_head_pair__10TObjPlayerFPv(void* p);
void init_and_send__10TObjPlayerFPv(void* p);
void init_field_4__10TObjPlayerFPv(void* p);
void init_revive_packet__10TObjPlayerFPv(void* p);
void read_swapped_fields__10TObjPlayerFPv(void* p);
void send_head_pair_packet__10TObjPlayerFPv(void* p);
void update_and_send3__10TObjPlayerFPv(void* p);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_801D28DC(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int bswap_field_u32__10TObjPlayerFPv(void*);
void bswap_fields__10TObjPlayerFPv(void* p);
void clear_id__10TObjPlayerFPv(void *);
void* copy_font_state__10TObjPlayerFPvPv(void* p, void* a1);
void* copy_head_fields__10TObjPlayerFPvPv(void* p, void* a1);
void init_forward__10TObjPlayerFPv(void *);
int read_be16_field2__10TObjPlayerFPv(void*);
void set_revived_state__10TObjPlayerFPv(void* p);
void set_type_53__10TObjPlayerFPv(void* p);

void init_revive_packet__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 78; *(u8*)((char*)p + 0x1) = 1; }
void bswap_font_lobby2__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void init_field_4__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_field_u32__10TObjPlayerFPv((char*)p + 0x4); }

void *TObjPlayer__sub_801D192C(void *arg0) {
    struct VOff_801D192C_arg0_801D18B0 *self = (struct VOff_801D192C_arg0_801D18B0 *)arg0;
    init_forward__10TObjPlayerFPv(self->f_4);
    clear_id__10TObjPlayerFPv(self->f_4);
    M2C_FIELD(arg0, u8 *, 0x0) = 77;
    M2C_FIELD(arg0, u8 *, 0x1) = 2;
    return arg0;
}

void init_and_send__10TObjPlayerFPv(void* p) { init_field_4__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void update_and_send3__10TObjPlayerFPv(void* p) { bswap_fields__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void bswap_head_pair__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); TObjPlayer__sub_801D28DC((char*)p + 0x8); }

    extern const float TObjPlayer__data_805DC36C;
void TObjPlayer__sub_801D1A24(void* a0) { *(short*)((char*)a0 + 0x6) = 0; *(short*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 76; *(unsigned char*)((char*)a0 + 0x1) = 4; }

void send_head_pair_packet__10TObjPlayerFPv(void* p) { bswap_head_pair__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void read_swapped_fields__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); TObjPlayer__sub_801D28DC((char*)p + 0x8); }

}
