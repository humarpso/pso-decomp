#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__19TAdMcSelectCursorGCFv(void *arg0);

s32 get_state_flag__9TMainTaskFv();
M2C_UNK set_depth_buffer_settings_2__Fv();
M2C_UNK fn_80141A30();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
s32 toggle_flag_9__10TObjPlayerFPv();
M2C_UNK render_cursor__19TAdMcSelectCursorGCFPv(void *);

void render__19TAdMcSelectCursorGCFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x13C) == 1) {
        if (get_state_flag__9TMainTaskFv() == 1) {
            return;
        }
        goto block_5;
    }
    if (toggle_flag_9__10TObjPlayerFPv() == 0) {
        set_depth_buffer_settings_2__Fv();
block_5:
        init_xyz_limits__10TObjPlayerFv();
        render_cursor__19TAdMcSelectCursorGCFPv(arg0);
        reset_transform_state__10TObjPlayerFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x13C) == 0) {
            fn_80141A30();
        }
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8032A1D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_cursor__19TAdMcSelectCursorGCFPv(u8 *arg0);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TWindowSubComCard__sub_803DEECC(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK TWindowSubStatusDisp__sub_803DF160(int, int);

extern s32 TAdMcSelectCursorGC__data_805D6C90;
extern const f32 lbl_805DF728;

void render_cursor__19TAdMcSelectCursorGCFPv(u8 *arg0) {
    TWindowSubStatusDisp__sub_803DEE6C((int) (1));
    set_global_param__8TObjFishFi((void *) (TAdMcSelectCursorGC__data_805D6C90));
    TWindowSubStatusDisp__sub_803DF160((int) (0), (int) ((M2C_FIELD(arg0, s32 *, 0x128) << 0x18) | 0xFF0000 | 0xFFFF));
    TWindowSubComCard__sub_803DEECC((void *) (arg0 + 0x28), (f32) (lbl_805DF728));
    get_player__20TWindowSubStatusDispFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032A504
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__19TAdMcSelectCursorGCFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);

extern M2C_UNK __vt__19TAdMcSelectCursorGC[];
extern u32 lbl_805D6C94;

void *__dt__19TAdMcSelectCursorGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TAdMcSelectCursorGC;
        if ((u32) lbl_805D6C94 != 0U) {
            lbl_805D6C94 = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032A610
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 get_instance__19TAdMcSelectCursorGCFi(s32 arg0);
u32 TAdMcSelectCursorGC__ct(u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);

extern u32 lbl_805D6C94;

u32 get_instance__19TAdMcSelectCursorGCFi(s32 arg0) {
    u32 var_r0;

    if ((u32) lbl_805D6C94 == 0U) {
        var_r0 = __nw__7TObjectFUl(0x140);
        if (var_r0 != 0U) {
            var_r0 = TAdMcSelectCursorGC__ct(var_r0, arg0);
        }
        lbl_805D6C94 = var_r0;
    }
    return lbl_805D6C94;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032A6A4
#include "types.h"

extern "C" {

void init_resource__19TAdMcSelectCursorGCFv(void);
s32 TAdMcSelectCursorGC__sub_8032A6D8(void* p);
int TLobby__sub_8023E4B4(void*, void*);

    extern unsigned char lbl_80477118[];
    extern unsigned char lbl_804ED99C[];
    extern int TAdMcSelectCursorGC__data_805D6C90;
void init_resource__19TAdMcSelectCursorGCFv(void) { TAdMcSelectCursorGC__data_805D6C90 = (int)lbl_804ED99C; TLobby__sub_8023E4B4(lbl_80477118, lbl_804ED99C); }

s32 TAdMcSelectCursorGC__sub_8032A6D8(void* p) { return *(s32*)((char*)p + 0x1c); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032A6E0
#include "types.h"

extern "C" {

int get_cursor_type__19TAdMcSelectCursorGCFi(int a0);

    extern int lbl_804EFAA0[];
int get_cursor_type__19TAdMcSelectCursorGCFi(int a0) {  return lbl_804EFAA0[a0]; }

}
#endif
#endif
