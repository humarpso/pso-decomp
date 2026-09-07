#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80288838___vt__17TWindowMainMenu1P { M2C_UNK value; u8 remaining[0x24]; };
typedef char RecoveredGlobal_80288838___vt__17TWindowMainMenu1P_size[sizeof(RecoveredGlobal_80288838___vt__17TWindowMainMenu1P) == 0x28 ? 1 : -1];

extern "C" {
void TCameraCtrl__sub_800694A8(void);
void __dl__7TObjectFPv(s32);
u8 * __dt__15TWindowMainMenuFv(void *, s16);
extern M2C_UNK __vt__17TWindowMainMenu1P[];
u8 *__dt__17TWindowMainMenu1PFv(u8 *arg0, s16 arg1);
}

extern "C" {

void *TWindowMainMenu1P__ct(void *arg0);
void render__17TWindowMainMenu1PFv(void);
void run_task__17TWindowMainMenu1PFv(void* p);
int TWindowMainMenu1P__sub_80288520(void*);
void TWindowMainMenu__ct(void *);
int TWindowMainMenu__sub_80263FE0(void*);
int TWindowMainMenu__sub_802647CC(void*);

void render__17TWindowMainMenu1PFv(void) {  }
void run_task__17TWindowMainMenu1PFv(void* p) { TWindowMainMenu__sub_802647CC(p); TWindowMainMenu__sub_80263FE0(p); TWindowMainMenu1P__sub_80288520(p); }

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

u8 *__dt__17TWindowMainMenu1PFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80288838___vt__17TWindowMainMenu1P *)&__vt__17TWindowMainMenu1P).value;
        if (M2C_FIELD(arg0, s32 *, 0x4C) & 2) {
            TCameraCtrl__sub_800694A8();
        }
        __dt__15TWindowMainMenuFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

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
