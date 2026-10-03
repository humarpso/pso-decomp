#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
extern "C" {
void TObjEneDD__sub_800BA934(void *);
extern const f32 lbl_805DE9F0;
extern const f32 lbl_805DEBA8;
extern const f32 lbl_805DEBAC;
void TBoss7Joint__vt86(u8 *arg0);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
M2C_UNK reload_stats_keep_hp_tp__9TObjEneDDFPv(void *, int, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
u32 __nw__7TObjectFUl(int);
M2C_UNK TObjPlayer__sub_802E72DC(void *, void *, void *, int);
void TBoss7Joint__sub_802EE820(u8 *arg0);
}

extern "C" {

void TBoss7Joint__sub_802EE6E8(void);
void TBoss7Joint__sub_802EE6EC(void);
void TBoss7Joint__sub_802EE6F0(void);
void TBoss7Joint__sub_802EE6F4(void);
void TBoss7Joint__sub_802EE6F8(void);
void TBoss7Joint__sub_802EE6FC(void);
void TBoss7Joint__sub_802EE700(void);
void TBoss7Joint__sub_802EE7B8(void* p);
void TBoss7Joint__sub_802EE800(void* p);
void TBoss7Joint__vt91(void *arg0);
void broadcast_state__11TBoss7JointFPv(void* p);
void byteswap_action_packet__11TBoss7JointFPv(void* p);
int get_state__11TBoss7JointFv(void);
int is_part_active__11TBoss7JointFPv(void* p);
void read_state__11TBoss7JointFPv(void* p);
void update_and_send_60__11TBoss7JointFPv(void* p);
int TLobby__send_and_handle_60(void*);
M2C_UNK TObjEneDD__vt90(void *);
M2C_UNK TObjEneDD__vt91(void *);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

    extern int lbl_805D6938;
int get_state__11TBoss7JointFv(void) {  return lbl_805D6938; }

void TBoss7Joint__sub_802EE6E8(void) {  }
void TBoss7Joint__sub_802EE6EC(void) {  }
void TBoss7Joint__sub_802EE6F0(void) {  }
void TBoss7Joint__sub_802EE6F4(void) {  }
void TBoss7Joint__sub_802EE6F8(void) {  }
void TBoss7Joint__sub_802EE6FC(void) {  }
void TBoss7Joint__sub_802EE700(void) {  }
void read_state__11TBoss7JointFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void byteswap_action_packet__11TBoss7JointFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void update_and_send_60__11TBoss7JointFPv(void* p) { byteswap_action_packet__11TBoss7JointFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss7Joint__sub_802EE7B8(void* p) { *(u8*)((char*)p + 0x0) = 169; *(u8*)((char*)p + 0x1) = 2; }
void broadcast_state__11TBoss7JointFPv(void* p) { read_state__11TBoss7JointFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss7Joint__sub_802EE800(void* p) { *(u8*)((char*)p + 0x0) = 170; *(u8*)((char*)p + 0x1) = 3; }

int is_part_active__11TBoss7JointFPv(void* p) { return *(u32*)((char*)p + 0x3bc) & 0x1; }

void TBoss7Joint__sub_802EE820(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3BC) = M2C_FIELD(arg0, s32 *, 0x3BC) | 1;
    reload_stats_keep_hp_tp__9TObjEneDDFPv(arg0, register_boss__6TLobbyFPv(0x10), dispatch_shared_handler_b__6TLobbyFPv(0xF), register_object__6TLobbyFPv(0x10));
    M2C_FIELD(arg0, s16 *, 0x32C) = 0x4E20;
    M2C_FIELD(arg0, s16 *, 0x2B8) = 0x4E20;
    u32 p = __nw__7TObjectFUl(0x2C);
    if (p != 0U) {
        TObjPlayer__sub_802E72DC((void *)p, arg0, arg0 + 0x38, M2C_FIELD(arg0, s32 *, 0x3B8));
    }
    play_sound_effect(0x3A312, arg0 + 0x38, 0, 0);
}

void TBoss7Joint__vt91(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 6) {
        TObjEneDD__vt90(arg0);
        return;
    }
    TObjEneDD__vt91(arg0);
}
void TBoss7Joint__vt86(u8 *arg0) {
    f32 temp_f2;
    u8 *temp_r4;
    u8 *temp_r4_2;
    u8 *temp_r4_3;
    u8 *temp_r4_4;
    u8 *temp_r4_5;
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f2 < (lbl_805DE9F0 - lbl_805DEBA8)) {
        temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFF8);
    } else if (temp_f2 >= lbl_805DEBAC) {
        temp_r4_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r4_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0x18) | 5);
        temp_r4_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r4_3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4_3, s32 *, 0x18) & 0xFFFFFFFD);
    } else {
        temp_r4_4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r4_4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4_4, s32 *, 0x18) | 3);
        temp_r4_5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r4_5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4_5, s32 *, 0x18) & 0xFFFFFFFB);
    }
    TObjEneDD__sub_800BA934(arg0);
}

}
