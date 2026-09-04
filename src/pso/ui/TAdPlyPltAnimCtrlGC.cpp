#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 get_instance__19TAdPlyPltAnimCtrlGCFi(s32 arg0);
u32 TAdPlyPltAnimCtrlGC__ct(u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);

extern u32 lbl_805D6F08;

u32 get_instance__19TAdPlyPltAnimCtrlGCFi(s32 arg0) {
    u32 var_r0;

    if ((u32) lbl_805D6F08 == 0U) {
        var_r0 = __nw__7TObjectFUl(0x2C);
        if (var_r0 != 0U) {
            var_r0 = TAdPlyPltAnimCtrlGC__ct(var_r0, arg0);
        }
        lbl_805D6F08 = var_r0;
    }
    return lbl_805D6F08;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x803551C0
#include "types.h"

extern "C" {

s32 TObjPlayer__sub_80355098(s32 arg0, s16 arg1);
int __dl__FPv();
int init_forward__10TObjPlayerFPv(void*);
int clear_id__10TObjPlayerFPv(void*);
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*, void*);
int fn_8035510C(void* a0 = 0, void* a1 = 0);
int TAdPlyPltAnimCtrlGC__sub_80355168(void* a0 = 0);
void TObjPlayer__sub_80354F8C(void* p);
void reset_field4__10TObjPlayerFPv(void* p);
void* init_and_reset_forward__10TObjPlayerFPv(void* p);
void init__19TAdPlyPltAnimCtrlGCFPvPv(void* p, void* a1);
s32 get_quest_thread_id__10TObjPlayerFPv(void* p);
void set_player_index__10TObjPlayerFPvi(void* p, s32 v);
int TObjPlayer__sub_80354FB0(void* p);
int set_flag0_bits01__10TObjPlayerFPv(void* p);
int clear_lock_flag__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_8035501C(void* p);
int set_flag1__10TObjPlayerFPv(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);

void init__19TAdPlyPltAnimCtrlGCFPvPv(void* p, void* a1) { TAdPlyPltAnimCtrlGC__sub_80355168(p); copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((char*)p + 0x24, a1); *(int*)((char*)p + 0x1c) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803553A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__19TAdPlyPltAnimCtrlGCFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);

extern M2C_UNK __vt__19TAdPlyPltAnimCtrlGC[];
extern u32 lbl_805D6F08;

void *__dt__19TAdPlyPltAnimCtrlGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TAdPlyPltAnimCtrlGC;
        if ((u32) lbl_805D6F08 != 0U) {
            lbl_805D6F08 = 0U;
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
#if PSO_CLASS_PACKAGE == 0x803554DC
#include "types.h"

extern "C" {

int get_table_value__19TAdPlyPltAnimCtrlGCFi(int a0);

    extern int lbl_804F142C[];
int get_table_value__19TAdPlyPltAnimCtrlGCFi(int a0) {  return lbl_804F142C[a0]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80355D20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_anim_state__19TAdPlyPltAnimCtrlGCFPvi(void *arg0, s32 arg1);

void set_anim_state__19TAdPlyPltAnimCtrlGCFPvi(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x78) = -1;
    }
    M2C_FIELD(arg0, s32 *, 0x74) = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80355D38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdPlyPltAnimCtrlGC__sub_80355D38(void *arg0);
M2C_UNK set_anim_state__19TAdPlyPltAnimCtrlGCFPvi(void *, M2C_UNK);

void TAdPlyPltAnimCtrlGC__sub_80355D38(void *arg0) {
    set_anim_state__19TAdPlyPltAnimCtrlGCFPvi(arg0, 0);
}

}
#endif
#endif
