#include "types.h"

extern "C" {

void *TObjPlayer__sub_801C7360(void *arg0, void *arg1);
void bswap_shrink__10TObjPlayerFPv(void* p);
void check_flag_04000000__10TObjPlayerFPv(void* p);
void check_flag_0x8000__10TObjPlayerFPv(void* p);
void init_6x88_packet__10TObjPlayerFPv(void* p);
void init_shrink_effect__10TObjPlayerFPv(void* a0);
u16 interpolate_angle__10TObjPlayerFPvUsUsPv(void *arg0, u16 arg1, u16 arg2, s32 *arg3);
void* restore_shrunken_font__10TObjPlayerFPv(void* p);
void send_font_update_60__10TObjPlayerFPv(void* p);
void set_flag_0x8000__10TObjPlayerFPv(void* p);
void set_flag_2000000_alt__10TObjPlayerFPv(void* p);
void update_and_send_60__10TObjPlayerFPv(void* p);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_8011E204(void*, void*);
int bswap_32__FPUl(void*);
int check_flag__10TObjPlayerFPvi(void*, void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int set_state_flags__10TObjPlayerFPvUi(void*, void*);

void set_flag_2000000_alt__10TObjPlayerFPv(void* p) { set_state_flags__10TObjPlayerFPvUi(p, (void*)2097152); }
void check_flag_04000000__10TObjPlayerFPv(void* p) { check_flag__10TObjPlayerFPvi(p, (void*)4194304); }
void set_flag_0x8000__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8011E204(p, (void*)32768); }
void check_flag_0x8000__10TObjPlayerFPv(void* p) { check_flag__10TObjPlayerFPvi(p, (void*)32768); }
void* restore_shrunken_font__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void init_6x88_packet__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 136; *(u8*)((char*)p + 0x1) = 1; }
void send_font_update_60__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }

void bswap_shrink__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }

void *TObjPlayer__sub_801C7360(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    *(f32 *)((s8 *)arg0 + 0x4) = *(f32 *)((s8 *)arg1 + 0x4);
    return arg0;
}

    extern const float lbl_805DC320;
void init_shrink_effect__10TObjPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x4) = lbl_805DC320; *(unsigned char*)((char*)a0 + 0x0) = 135; *(unsigned char*)((char*)a0 + 0x1) = 2; }

void update_and_send_60__10TObjPlayerFPv(void* p) { bswap_shrink__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

u16 interpolate_angle__10TObjPlayerFPvUsUsPv(void *arg0, u16 arg1, u16 arg2, s32 *arg3) {
    s16 temp_r0;
    s32 var_r3;

    temp_r0 = (s16) ((u16) arg2 - arg1);
    if ((temp_r0 > -0x3000) && (temp_r0 < 0x3000)) {
        var_r3 = (temp_r0 >> 4) - (temp_r0 >> 5);
    } else {
        var_r3 = temp_r0 >> 4;
    }
    *arg3 = var_r3;
    return (u16) (arg1 + var_r3);
}

}
