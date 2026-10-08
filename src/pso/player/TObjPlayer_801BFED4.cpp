#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_8 { u8 bytes[0x8]; };

extern "C" {
extern const f32 TObjPlayer__data_805DC278;
void TObjPlayer__sub_801BFF80(u8 *arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();
u8 *copy_hold_params__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
}

extern "C" {

void TObjPlayer__sub_801BFED4(void* p);
s32 TObjPlayer__sub_801BFFA0(void* p);
int TObjPlayer__sub_801C000C(void);
int TObjPlayer__sub_801C0014(void);
int TObjPlayer__sub_801C001C(void);
s16 get_floor__10TObjPlayerFPv(void* p);
u8 *init_subobject__10TObjPlayerFPv(u8 *arg0);
int is_handle_valid__10TObjPlayerFPv(void* p);
s32 setup_state__10TObjPlayerFi(s32 arg0);
int setup_state_helper__10TObjPlayerFPv(void* p);
int sub_802a7290_fwd__10TObjPlayerFPv(void* p);
int clear_id__10TObjPlayerFPv(void*);
int get_valid_child__6TLobbyFPv(void*);
s32 init_forward__10TObjPlayerFPv();
M2C_UNK init_gc_tag(void *);
int validate_handle__6TLobbyFPv(void*);

void TObjPlayer__sub_801BFED4(void* p) { *(s32*)((char*)p + 0x4) = -1; }
s32 setup_state__10TObjPlayerFi(s32 arg0) {
    init_forward__10TObjPlayerFPv();
    setup_state_helper__10TObjPlayerFPv((void*)((void*)(arg0)));
    return arg0;
}
int setup_state_helper__10TObjPlayerFPv(void* p) { return clear_id__10TObjPlayerFPv(p); }

extern M2C_UNK lbl_804C3E50[];

u8 *init_subobject__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 8) = lbl_804C3E50;
    init_gc_tag(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return arg0;
}

void TObjPlayer__sub_801BFF80(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 8) = (f32) TObjPlayer__data_805DC278;
}

s32 TObjPlayer__sub_801BFFA0(void* p) { return *(s32*)((char*)p + 0x0); }

u8 *copy_hold_params__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228();
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    *(M2CCopy_8 *)((s32) arg0 + 8) = *(const M2CCopy_8 *)((s32) arg1 + 8);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    return arg0;
}

s16 get_floor__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0xb8); }
int TObjPlayer__sub_801C000C(void) { return 0; }
int TObjPlayer__sub_801C0014(void) { return 0; }
int TObjPlayer__sub_801C001C(void) { return 0; }
int sub_802a7290_fwd__10TObjPlayerFPv(void* p) { return get_valid_child__6TLobbyFPv(p); }
int is_handle_valid__10TObjPlayerFPv(void* p) { return validate_handle__6TLobbyFPv(p); }

}
