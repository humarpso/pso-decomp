#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int TAdEnterSerialAccessGC__sub_80321F18(void* p);
int TAdEnterSerialAccessGC__sub_80321F3C(void* p);

int TAdEnterSerialAccessGC__sub_80321B28(void*, int);

int TAdEnterSerialAccessGC__sub_80321F18(void* p) { return TAdEnterSerialAccessGC__sub_80321B28(p, 1); }
int TAdEnterSerialAccessGC__sub_80321F3C(void* p) { return TAdEnterSerialAccessGC__sub_80321B28(p, 0); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80202978
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_serial_result__22TAdEnterSerialAccessGCFv(void);

extern u8 *lbl_805D5F70;

s32 get_serial_result__22TAdEnterSerialAccessGCFv(void) {
    return M2C_FIELD(lbl_805D5F70, s32 *, 0x118);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80202984
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field_118__22TAdEnterSerialAccessGCFv(void);

extern void *lbl_805D5F6C;

s32 get_field_118__22TAdEnterSerialAccessGCFv(void) {
    return M2C_FIELD(lbl_805D5F6C, s32 *, 0x118);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023EA94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_state__22TAdEnterSerialAccessGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void init_state__22TAdEnterSerialAccessGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x10;
    lbl_805D63C8 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ACF04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_callback__22TAdEnterSerialAccessGCFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TWindowCallBack__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_callback__22TAdEnterSerialAccessGCFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        o = TWindowCallBack__ct(o, arg0, arg1, arg2);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E0110
#include "types.h"

extern "C" {

void set_active__22TAdEnterSerialAccessGCFPv(void* p);

void set_active__22TAdEnterSerialAccessGCFPv(void* p) { *(s32*)((char*)p + 0xb0) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80321478
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_serial_separators__22TAdEnterSerialAccessGCFv(void);
M2C_UNK render_status_line__15TAdSubPlyItemGCFPvi(void *, int, f32, f32, f32);

extern const f32 TAdEnterSerialAccessGC__data_805DF4DC;
extern const f32 lbl_805DF4E4;
extern const f32 lbl_805DF4E8;
extern M2C_UNK lbl_805DF4EC;
extern const f32 lbl_805DF4F0;

void draw_serial_separators__22TAdEnterSerialAccessGCFv(void) {
    render_status_line__15TAdSubPlyItemGCFPvi((void *) (&lbl_805DF4EC), (int) (-1), (f32) (lbl_805DF4E8), (f32) (lbl_805DF4E4), (f32) (TAdEnterSerialAccessGC__data_805DF4DC));
    render_status_line__15TAdSubPlyItemGCFPvi((void *) (&lbl_805DF4EC), (int) (-1), (f32) (lbl_805DF4F0), (f32) (lbl_805DF4E4), (f32) (TAdEnterSerialAccessGC__data_805DF4DC));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803218E8
#include "types.h"

extern "C" {

void init__22TAdEnterSerialAccessGCFv(void);

int TAdEnterSerialAccessGC__sub_8032195C(void);
int TAdEnterSerialAccessGC__sub_8032B12C(void);

void init__22TAdEnterSerialAccessGCFv(void) { TAdEnterSerialAccessGC__sub_8032B12C(); TAdEnterSerialAccessGC__sub_8032195C(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803221D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TAdEnterSerialAccessGCFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__14TAdEnterBaseGCFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__22TAdEnterSerialAccessGC[];

void *__dt__22TAdEnterSerialAccessGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TAdEnterSerialAccessGC;
        if (M2C_FIELD(arg0, void **, 0x58) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x58)); M2C_FIELD(arg0, M2C_UNK *, 0x58) = 0; }
        if (M2C_FIELD(arg0, void **, 0x5C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x5C)); M2C_FIELD(arg0, M2C_UNK *, 0x5C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x54) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x54)); M2C_FIELD(arg0, M2C_UNK *, 0x54) = 0; }
        __dt__14TAdEnterBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803223E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field20_state__22TAdEnterSerialAccessGCFPv(void *arg0);
s32 get_state__19TWindowKeyBoardSoftFPv(u32);

s32 get_field20_state__22TAdEnterSerialAccessGCFPv(void *arg0) {
    u32 temp_r3 = M2C_FIELD(arg0, u32 *, 0x20);
    if (temp_r3 == 0U) {
        return 0;
    }
    return get_state__19TWindowKeyBoardSoftFPv(temp_r3);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032242C
#include "types.h"

extern "C" {

void set_state_3__22TAdEnterSerialAccessGCFPv(void* p);

void set_state_3__22TAdEnterSerialAccessGCFPv(void* p) { *(s32*)((char*)p + 0x700) = 3; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032AFD0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 has_serial_input__22TAdEnterSerialAccessGCFv(void);
void clear_serial_buffer__22TAdEnterSerialAccessGCFv(void);
u8 *TAdEnterSerialAccessGC__sub_8032AEB4();
u32 get_instance__23TAdSinglePlyChrSelectGCFv();
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);

s32 has_serial_input__22TAdEnterSerialAccessGCFv(void) {
    return (s8) *TAdEnterSerialAccessGC__sub_8032AEB4() ? 1 : 0;
}

void clear_serial_buffer__22TAdEnterSerialAccessGCFv(void) {
    u32 temp_r3;

    temp_r3 = get_instance__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != 0U) {
        memset(temp_r3 + 0x1154C, 0, 0x10);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032B0A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void store_serial_access_key__22TAdEnterSerialAccessGCFiii(s32 arg0, s32 arg1, s32 arg2);
s32 TAdPsoPassSaveGC__sub_8032B584();
s32 get_instance__23TAdSinglePlyChrSelectGCFv();
M2C_UNK strncpy(s32, s32, M2C_UNK);

void store_serial_access_key__22TAdEnterSerialAccessGCFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = get_instance__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != 0) {
        strncpy(temp_r3 + 0x1152C, arg0, 0xF);
        strncpy(temp_r3 + 0x1153C, arg1, 0xF);
        if (TAdPsoPassSaveGC__sub_8032B584() != 0) {
            strncpy(temp_r3 + 0x1154C, arg2, 0xF);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032B2F8
#include "types.h"

extern "C" {

int forward_input__22TAdEnterSerialAccessGCFPv(void* p);
int TAdEnterSerialAccessGC__sub_8032B1A4(void*);

int forward_input__22TAdEnterSerialAccessGCFPv(void* p) { return TAdEnterSerialAccessGC__sub_8032B1A4(p); }

}
#endif
#endif
