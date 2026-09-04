#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void run_task__17TWindowMainMenu1PFv(void* p);
void render__17TWindowMainMenu1PFv(void);
int TWindowMainMenu__sub_80263FE0(void*);
int TWindowMainMenu__sub_802647CC(void*);
int TWindowMainMenu1P__sub_80288520(void*);

void render__17TWindowMainMenu1PFv(void) {  }
void run_task__17TWindowMainMenu1PFv(void* p) { TWindowMainMenu__sub_802647CC(p); TWindowMainMenu__sub_80263FE0(p); TWindowMainMenu1P__sub_80288520(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80264124
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_char_select_slot__17TWindowMainMenu1PFPv(void *arg0);
void *__nw__7TObjectFUl(int);
void set_scale_f__15TWindowSubEquipFPv(void *);
void destroy_submenu__15TWindowMainMenuFPv(void *);
void *TAdChrSelSlotGC__sub_802C7250(void *, void *, void *);

void create_char_select_slot__17TWindowMainMenu1PFPv(void *arg0) {
    void *o;
    destroy_submenu__15TWindowMainMenuFPv(arg0);
    set_scale_f__15TWindowSubEquipFPv(arg0);
    o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = TAdChrSelSlotGC__sub_802C7250(o, arg0, M2C_FIELD(arg0, void **, 0x54));
    }
    M2C_FIELD(arg0, void **, 0x20) = o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802883EC
#include "types.h"

extern "C" {

void TWindowMainMenu1P__vt7(void* p);
int close_active_submenu__15TWindowMainMenuFPv(void*);
int create_char_select_slot__17TWindowMainMenu1PFPv(void*);

void TWindowMainMenu1P__vt7(void* p) { if (close_active_submenu__15TWindowMainMenuFPv(p) != 0) { create_char_select_slot__17TWindowMainMenu1PFPv(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80288428
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowMainMenu1P__vt5(u8 *arg0);
M2C_UNK TCameraCtrl__sub_800695A0(void *);

void TWindowMainMenu1P__vt5(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (!(temp_r3 & 2)) {
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_r3 | 2);
        TCameraCtrl__sub_800695A0(arg0 + 0x64);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80288464
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowMainMenu1P__vt6(void *arg0);
M2C_UNK close_and_clear_flags__15TWindowMainMenuFPv();

void TWindowMainMenu1P__vt6(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x4C) & 1) {
        close_and_clear_flags__15TWindowMainMenuFPv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802888A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowMainMenu1P__ct(void *arg0);
void TWindowMainMenu__ct(void *);

extern M2C_UNK __vt__17TWindowMainMenu1P[];
extern const f32 lbl_805DD8A8;
extern const f32 lbl_805DD8B0;
extern void *lbl_805D3AE8;
extern const f32 lbl_805DD8C4;
extern const f32 lbl_805DD8BC;
extern const f32 lbl_805DD8CC;
extern const f32 lbl_805DD8D0;
extern const f32 lbl_805DD8D4;
extern const f32 lbl_805DD8D8;
extern const f32 lbl_805DD8C8;

void *TWindowMainMenu1P__ct(void *arg0) {
    TWindowMainMenu__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowMainMenu1P;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3AE8;
    M2C_FIELD(arg0, u8 *, 0x60) = 0;
    M2C_FIELD(arg0, u8 *, 0x61) = 0;
    M2C_FIELD(arg0, f32 *, 0x6C) = lbl_805DD8A8;
    M2C_FIELD(arg0, f32 *, 0x70) = lbl_805DD8B0;
    M2C_FIELD(arg0, f32 *, 0x8C) = lbl_805DD8C4;
    M2C_FIELD(arg0, f32 *, 0x90) = lbl_805DD8BC;
    M2C_FIELD(arg0, f32 *, 0x94) = lbl_805DD8CC;
    M2C_FIELD(arg0, f32 *, 0x98) = lbl_805DD8CC;
    M2C_FIELD(arg0, f32 *, 0x9C) = lbl_805DD8D0;
    M2C_FIELD(arg0, f32 *, 0xA0) = lbl_805DD8D4;
    M2C_FIELD(arg0, f32 *, 0xA4) = lbl_805DD8D8;
    M2C_FIELD(arg0, f32 *, 0xA8) = lbl_805DD8C8;
    return arg0;
}

}
#endif
#endif
