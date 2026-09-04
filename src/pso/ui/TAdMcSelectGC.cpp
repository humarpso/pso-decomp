#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TAdMcSelectGCFv(void *arg0);

void run_task__13TAdMcSelectGCFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        return;
    case 1:
        return;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80329DA4
#include "types.h"

extern "C" {

void update_state__13TAdMcSelectGCFv(void);
int TAdMcSelectGC__sub_8032A140();
u32 get_mc_count__13TAdMcSelectGCFv();

void update_state__13TAdMcSelectGCFv(void) {
    if (get_mc_count__13TAdMcSelectGCFv() != 0U) {
        TAdMcSelectGC__sub_8032A140();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80329E08
#include "types.h"

extern "C" {

void select_if_mc_present__13TAdMcSelectGCFv(void);
u32 get_mc_count__13TAdMcSelectGCFv();
int TAdMcSelectGC__sub_8032A15C();

void select_if_mc_present__13TAdMcSelectGCFv(void) {
    if (get_mc_count__13TAdMcSelectGCFv() != 0U) {
        TAdMcSelectGC__sub_8032A15C();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80329E58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__13TAdMcSelectGCFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);

extern M2C_UNK __vt__13TAdMcSelectGC[];
extern u32 lbl_805D6C88;

void *__dt__13TAdMcSelectGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TAdMcSelectGC;
        if ((u32) lbl_805D6C88 != 0U) {
            lbl_805D6C88 = 0U;
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
#if PSO_CLASS_PACKAGE == 0x8032A0A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__13TAdMcSelectGCFPv(void *arg0);
void *TAdMcSelectGC__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *lbl_805D6C88;

void * create__13TAdMcSelectGCFPv(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x34);
    if (o != NULL) {
        o = TAdMcSelectGC__ct(o, arg0);
    }
    lbl_805D6C88 = o;
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032A0F0
#include "types.h"

extern "C" {

void open__13TAdMcSelectGCFv(void);
void close__13TAdMcSelectGCFv(void);
void TAdMcSelectGC__sub_8032A140(void* p);
int get_mc_count__13TAdMcSelectGCFv(void);
int TAdMcSelectCursorGC__sub_8032A668(void);
int init_resource__19TAdMcSelectCursorGCFv(void);
int TAdMcSelectMcGC__sub_8032AA54(void);
int init_memorycard__15TAdMcSelectMcGCFv(void);
int TLobby__sub_802C78EC(void);
int TLobby__sub_802C7920(void);

void open__13TAdMcSelectGCFv(void) { TLobby__sub_802C78EC(); TAdMcSelectMcGC__sub_8032AA54(); TAdMcSelectCursorGC__sub_8032A668(); }
void close__13TAdMcSelectGCFv(void) { init_resource__19TAdMcSelectCursorGCFv(); init_memorycard__15TAdMcSelectMcGCFv(); TLobby__sub_802C7920(); }
void TAdMcSelectGC__sub_8032A140(void* p) { *(s32*)((char*)p + 0x1c) = 0; }

    extern int lbl_805D6C94;
int get_mc_count__13TAdMcSelectGCFv(void) {  return lbl_805D6C94; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032A154
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_slot_index__13TAdMcSelectGCFPv(void* p);
void TAdMcSelectGC__sub_8032A15C(void* p);
void set_field_13c__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_field_0x1c__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_select_index__13TAdMcSelectGCFPvi(void* p, s32 v);
void TAdMcSelectGC__sub_8032A180(void* p, s32 v);
void set_field_24__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_field20__13TAdMcSelectGCFPvf(void* p, f32 v);
void set_field_20__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_float_1c__13TAdMcSelectGCFPvf(void* p, f32 v);

s32 get_slot_index__13TAdMcSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x20); }
void TAdMcSelectGC__sub_8032A15C(void* p) { *(s32*)((char*)p + 0x1c) = 1; }
void set_field_13c__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x13c) = v; }
void set_field_0x1c__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x1c) = v; }
void set_select_index__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x124) = v; }
void TAdMcSelectGC__sub_8032A180(void* p, s32 v) { *(s32*)((char*)p + 0x28) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032A1B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_slot_index__13TAdMcSelectGCFPv(void* p);
void TAdMcSelectGC__sub_8032A15C(void* p);
void set_field_13c__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_field_0x1c__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_select_index__13TAdMcSelectGCFPvi(void* p, s32 v);
void TAdMcSelectGC__sub_8032A180(void* p, s32 v);
void set_field_24__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_field20__13TAdMcSelectGCFPvf(void* p, f32 v);
void set_field_20__13TAdMcSelectGCFPvi(void* p, s32 v);
void set_float_1c__13TAdMcSelectGCFPvf(void* p, f32 v);

void set_field_24__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x24) = v; }
void set_field20__13TAdMcSelectGCFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x20) = v; }
void set_field_20__13TAdMcSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }
void set_float_1c__13TAdMcSelectGCFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x1c) = v; }

}
#endif
#endif
