#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_small_label__15TFontSmallLobbyFi(s32 arg0);

s32 obj_isState2_324();
s16 obj_getField1c(s32);
M2C_UNK TFontSmallLobby__sub_801C04C8(M2C_UNK *);
M2C_UNK fn_801C04DC(M2C_UNK *);

void draw_small_label__15TFontSmallLobbyFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        TFontSmallLobby__sub_801C04C8((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        fn_801C04DC((M2C_UNK *)&sp8);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800FCB04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TFontSmallLobbyFPv(void *arg0);
void *__nw__7TObjectFUl(int);
void *fn_800FCC78(void *, void *);

void *create__15TFontSmallLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        o = fn_800FCC78(o, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B10F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 disable_stealth_suit_effect__15TFontSmallLobbyFi(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();

s32 disable_stealth_suit_effect__15TFontSmallLobbyFi(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B1224
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TFontSmallLobby__sub_801B1224(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();

s32 TFontSmallLobby__sub_801B1224(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D5E28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 get_valid_index__15TFontSmallLobbyFPv(void *arg0);
s32 TFontSmallLobby__sub_801D6614(s16);

s16 get_valid_index__15TFontSmallLobbyFPv(void *arg0) {
    s16 var_r31;

    var_r31 = M2C_FIELD(arg0, s16 *, 2);
    if (TFontSmallLobby__sub_801D6614(var_r31) == 0) {
        var_r31 = 0;
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D5E68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_section_index__15TFontSmallLobbyFPvs(void *arg0, s16 arg1);

void set_section_index__15TFontSmallLobbyFPvs(void *arg0, s16 arg1) {
    s16 var_r4;

    var_r4 = arg1;
    if ((var_r4 < 0) || (var_r4 > 0xA)) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, s16 *, 4) = var_r4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D60F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_ready__15TFontSmallLobbyFPv(u8 *arg0);
void reset_targets__15TFontSmallLobbyFi(s32 arg0);
s32 get_state__15TFontSmallLobbyFPv(void *);
s32 get_field_04__15TFontSmallLobbyFPv(void *);
M2C_UNK check_flag_at_40__15TFontSmallLobbyFPv(s32);
M2C_UNK set_target_count__15TFontSmallLobbyFPvi(s32, M2C_UNK);
M2C_UNK set_target_index__15TFontSmallLobbyFPvi(s32, M2C_UNK);

extern const f32 lbl_805DC3D8;

s32 is_ready__15TFontSmallLobbyFPv(u8 *arg0) {
    if ((get_field_04__15TFontSmallLobbyFPv(arg0 + 0x4C) < 3) && (M2C_FIELD(arg0, f32 *, 0x3C) > lbl_805DC3D8) && (get_state__15TFontSmallLobbyFPv(arg0 + 0x4C) < 0)) {
        return 1;
    }
    return 0;
}

void reset_targets__15TFontSmallLobbyFi(s32 arg0) {
    set_target_index__15TFontSmallLobbyFPvi(arg0 + 0x4C, 0);
    set_target_count__15TFontSmallLobbyFPvi(arg0 + 0x4C, 0);
    check_flag_at_40__15TFontSmallLobbyFPv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D6230
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_party_label__15TFontSmallLobbyFiUis(s32 arg0, u32 arg1, s16 arg2);
M2C_UNK TFontSmallLobby__sub_801D62D0(s32, f32);
M2C_UNK set_target_index__15TFontSmallLobbyFPvi(s32, M2C_UNK);
M2C_UNK TFontSmallLobby__sub_801D671C(s32, M2C_UNK);
M2C_UNK set_flag_40_bit5__15TFontSmallLobbyFPv();
M2C_UNK TFontSmallLobby__sub_801D698C(M2C_UNK *);
M2C_UNK send_state__15TFontSmallLobbyFPv(M2C_UNK *);
M2C_UNK create_party_effect__11TWindowCtrlFPvPv(s16, s16);
s16 obj_getField1c(u32);
s32 obj_isState2_324(u32);

extern f32 lbl_805DC3D8;

struct Sp801D6230_801d6230 { s16 f0; s16 fA; s16 fC; };

void draw_party_label__15TFontSmallLobbyFiUis(s32 arg0, u32 arg1, s16 arg2) {
    Sp801D6230_801d6230 sp8;

    set_flag_40_bit5__15TFontSmallLobbyFPv();
    TFontSmallLobby__sub_801D62D0(arg0, lbl_805DC3D8);
    set_target_index__15TFontSmallLobbyFPvi(arg0 + 0x4C, 8);
    TFontSmallLobby__sub_801D671C(arg0 + 0x4C, 1);
    create_party_effect__11TWindowCtrlFPvPv(obj_getField1c(arg1), arg2);
    if ((arg1 == 0U) || (obj_isState2_324(arg1) == 0)) {
        TFontSmallLobby__sub_801D698C((M2C_UNK *) &sp8);
        sp8.fA = obj_getField1c(arg1);
        sp8.fC = arg2;
        send_state__15TFontSmallLobbyFPv((M2C_UNK *) &sp8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D6428
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_photon_blast_ready__15TFontSmallLobbyFv(void);
u16 get_type__15TFontSmallLobbyFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
M2C_UNK send_field_state__10TObjPlayerFPv();

void send_photon_blast_ready__15TFontSmallLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(get_type__15TFontSmallLobbyFPv()) != 0U) {
        send_field_state__10TObjPlayerFPv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D645C
#include "types.h"

extern "C" {

void update_if_ready__15TFontSmallLobbyFPv(void* p);

int update_ready__15TFontSmallLobbyFPv(void*);
int TFontSmallLobby__sub_801D67AC(void*);

void update_if_ready__15TFontSmallLobbyFPv(void* p) { if (TFontSmallLobby__sub_801D67AC(p) != 0) { update_ready__15TFontSmallLobbyFPv(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D6644
#include "types.h"

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
void reset_fields__15TFontSmallLobbyFPv(void* p);
int set_bit1_at_40__15TFontSmallLobbyFPv(void* p);
int update_ready__15TFontSmallLobbyFPv(void* p);
s32 get_state__15TFontSmallLobbyFPv(void* p);
s32 get_field_04__15TFontSmallLobbyFPv(void* p);
int check_flag_at_40__15TFontSmallLobbyFPv(void* p);
void set_target_count__15TFontSmallLobbyFPvi(void* p, s32 v);
void set_target_index__15TFontSmallLobbyFPvi(void* p, s32 v);
int set_flag_40_bit5__15TFontSmallLobbyFPv(void* p);
int update_field_40__15TFontSmallLobbyFPv(void* p);
int TFontSmallLobby__sub_801D677C(void* p);
u16 get_type__15TFontSmallLobbyFPv(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);

void reset_fields__15TFontSmallLobbyFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
int set_bit1_at_40__15TFontSmallLobbyFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x40, 2); }
void* clear_photon_blast_ready_flag__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
int update_ready__15TFontSmallLobbyFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x40, 2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D66D4
#include "types.h"

extern "C" {

s32 get_state__15TFontSmallLobbyFPv(void* p);
s32 get_field_04__15TFontSmallLobbyFPv(void* p);
int check_flag_at_40__15TFontSmallLobbyFPv(void* p);
void set_target_count__15TFontSmallLobbyFPvi(void* p, s32 v);
void set_target_index__15TFontSmallLobbyFPvi(void* p, s32 v);
void TFontSmallLobby__sub_801D671C(void* a0, int a1);
int set_flag_40_bit5__15TFontSmallLobbyFPv(void* p);
int update_field_40__15TFontSmallLobbyFPv(void* p);
int TFontSmallLobby__sub_801D677C(void* p);
u16 get_type__15TFontSmallLobbyFPv(void* p);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TFontSmallLobby__sub_801C0228(void*);
int set_bit1_at_40__15TFontSmallLobbyFPv(void* p);
int update_ready__15TFontSmallLobbyFPv(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
void reset_fields__15TFontSmallLobbyFPv(void* p);

s32 get_state__15TFontSmallLobbyFPv(void* p) { return *(s32*)((char*)p + 0x0); }
s32 get_field_04__15TFontSmallLobbyFPv(void* p) { return *(s32*)((char*)p + 0x4); }
int check_flag_at_40__15TFontSmallLobbyFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x40, 32); }
void set_target_count__15TFontSmallLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void set_target_index__15TFontSmallLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void TFontSmallLobby__sub_801D671C(void* a0, int a1) { *(int*)((char*)a0 + 0x4) = (*(int*)((char*)a0 + 0x4) + a1); }
int set_flag_40_bit5__15TFontSmallLobbyFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x40, 32); }
int update_field_40__15TFontSmallLobbyFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x40, 16); }
int TFontSmallLobby__sub_801D677C(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x40, 16); }
u16 get_type__15TFontSmallLobbyFPv(void* p) { return *(u16*)((char*)p + 0x0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D67C8
#include "types.h"

extern "C" {

void TFontSmallLobby__sub_801D67C8(void* p);
void init_pkt_cmd_3B__15TFontSmallLobbyFPv(void* p);
void init_6x3A_packet__15TFontSmallLobbyFPv(void* p);
void init_6x39_packet__15TFontSmallLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int reset_fields__15TFontSmallLobbyFPv(void*);

void TFontSmallLobby__sub_801D67C8(void* p) { *(s16*)((char*)p + 0x2) = 6; }
void* init_reset_fields__15TFontSmallLobbyFPv(void* p) { reset_fields__15TFontSmallLobbyFPv(p); return p; }
void* TFontSmallLobby__sub_801D6804(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void init_pkt_cmd_3B__15TFontSmallLobbyFPv(void* p) { *(u8*)((char*)p + 0x0) = 59; *(u8*)((char*)p + 0x1) = 1; }
void update_and_send__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void init_6x3A_packet__15TFontSmallLobbyFPv(void* p) { *(u8*)((char*)p + 0x0) = 58; *(u8*)((char*)p + 0x1) = 1; }
void draw_and_send__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void init_6x39_packet__15TFontSmallLobbyFPv(void* p) { *(u8*)((char*)p + 0x0) = 57; *(u8*)((char*)p + 0x1) = 1; }
void update_and_send_60__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void bswap_fields__15TFontSmallLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D69B4
#include "types.h"

extern "C" {
void bswap_fields__15TFontSmallLobbyFPv(void* p);

void TFontSmallLobby__sub_801D67C8(void* p);
void init_pkt_cmd_3B__15TFontSmallLobbyFPv(void* p);
void init_6x3A_packet__15TFontSmallLobbyFPv(void* p);
void init_6x39_packet__15TFontSmallLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int reset_fields__15TFontSmallLobbyFPv(void*);

void send_state__15TFontSmallLobbyFPv(void* p) { bswap_fields__15TFontSmallLobbyFPv(p); TLobby__send_and_handle_60(p); }
void* handle_photon_blast_ready__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D6948
#include "types.h"

extern "C" {
void bswap_fields__15TFontSmallLobbyFPv(void* p);

void* TFontSmallLobby__sub_801D6948(void* p, void* a1);
void update_cursor_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E17C(void* p, f32 v);
f32 TMainCursor__sub_8013E184(void* p);
void TMainCursor__sub_8013E18C(void* p, s16 v);
u16 TMainCursor__sub_8013E194(void* p);
void set_target__11TMainCursorFPvi(void* p, s32 a1);
void TMainCursor__sub_8013E1C0(void* p, s32 v);
void set_target_index__11TMainCursorFPvs(void* p, s16 v);
void TFontSmallLobby__sub_801D67C8(void* p);
void init_pkt_cmd_3B__15TFontSmallLobbyFPv(void* p);
void init_6x3A_packet__15TFontSmallLobbyFPv(void* p);
void init_6x39_packet__15TFontSmallLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int reset_fields__15TFontSmallLobbyFPv(void*);

void* TFontSmallLobby__sub_801D6948(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }

}
#endif
#endif
