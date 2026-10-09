#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8035C22C_lbl_804799DC {
    M2C_UNK value;
    u8 remaining[0x148];
};

struct RecoveredGlobal_8035C22C___vt__19TObjBoss8PillerCtrl {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Vec_8035C03C { f32 x, y, z; };

struct Ent_8035C03C { s32 x; s32 y; };

struct Self_8035C03C {
    u8 pad0[0x1c];
    Vec_8035C03C pos;
    s32 f28;
    u16 f2C;
    u8 pad2e[0x34 - 0x2e];
    Ent_8035C03C *list;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject();
void TObjBoss8PillerCtrl__sub_8035C034(void *, void *);
extern RecoveredGlobal_8035C22C_lbl_804799DC boss8_piller_ctrl_params;
extern M2C_UNK __vt__19TObjBoss8PillerCtrl[];
extern s32 lbl_805D4430;
extern const f32 lbl_805E017C;
u8 *TObjBoss8PillerCtrl__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s16 arg3);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void queue_destruction__7TObjectFv(void *);
void *__nw__7TObjectFUl(u32);
void __ct__15TObjBoss8PillerFv(void *, s32, Vec_8035C03C *, f32, u16);
s32 fn_8035BFF8(void *, Vec_8035C03C *);
extern s32 tl_05;
extern const f32 lbl_805E016C;
extern const f32 lbl_805E0170;
extern const f32 lbl_805E0174;
extern const f32 lbl_805E0178;
void run_task__19TObjBoss8PillerCtrlFv(Self_8035C03C *self);
}

extern "C" {

void *__dt__19TObjBoss8PillerCtrlFv(void *arg0, s16 arg1);
void render__19TObjBoss8PillerCtrlFv(void);
void __dl__7TObjectFPv(void *);
void __dl__FPv(void *);
void __dt__7TObjectFv(void *, int);

void TObjBoss8PillerCtrl__sub_8035C034(void * _w0, void * _w1) {  }
void render__19TObjBoss8PillerCtrlFv(void) {  }

extern M2C_UNK __vt__19TObjBoss8PillerCtrl[];

#pragma fp_contract on
void run_task__19TObjBoss8PillerCtrlFv(Self_8035C03C *self) {
    Vec_8035C03C v;
    void *p;
    switch (self->f28) {
    case 0:
    case 5:
    case 10:
    case 15:
        while (self->list->y != 0xFFFF) {
            VecCopy__FP3VecPC3Vec(&v, &self->pos);
            v.x = lbl_805E016C * self->list->y + v.x;
            v.z = lbl_805E0170 * self->list->x + v.z;
            if (self->list->y & 1) {
                v.z += lbl_805E0174;
            }
            if (fn_8035BFF8(self, &v) == 0) {
                p = __nw__7TObjectFUl(0x34);
                if (p != NULL) {
                    __ct__15TObjBoss8PillerFv(p, tl_05, &v, lbl_805E0178, self->f2C);
                }
            }
            self->list++;
        }
        self->list++;
        break;
    }
    if (self->f28++ > 0x32) {
        queue_destruction__7TObjectFv(self);
    }
}

void *__dt__19TObjBoss8PillerCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjBoss8PillerCtrl;
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { __dl__FPv(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8035C22C_lbl_804799DC_size[sizeof(RecoveredGlobal_8035C22C_lbl_804799DC) == 0x14C ? 1 : -1];
typedef char RecoveredGlobal_8035C22C___vt__19TObjBoss8PillerCtrl_size[sizeof(RecoveredGlobal_8035C22C___vt__19TObjBoss8PillerCtrl) == 0x18 ? 1 : -1];
u8 *TObjBoss8PillerCtrl__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s16 arg3) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8035C22C___vt__19TObjBoss8PillerCtrl *)&__vt__19TObjBoss8PillerCtrl).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4430;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x1C), (void *) (arg2));
    TObjBoss8PillerCtrl__sub_8035C034((void *)((void *) (arg0)), (void *)((void *) (arg0 + 0x1C)));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805E017C;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &boss8_piller_ctrl_params.value;
    return arg0;
}

}
