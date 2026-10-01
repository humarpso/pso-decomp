#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8028B60C___vt__15TObjBoss5Pillar {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Info_8028B488 { u8 pad[4]; u32 frames; };

struct Pillar_8028B488 {
    u8 pad[0x1C];
    s32 state;
    f32 frame;
    f32 speed;
    s32 timer;
    u8 pad2[0x38 - 0x2C];
    void *smokeParent;
    u8 pad3[0x40 - 0x3C];
    Info_8028B488 *info;
    u8 pad4[0x48 - 0x44];
    void *smoke;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK __vt__15TObjBoss5Pillar[];
extern s32 lbl_805D3B40;
extern u8 *lbl_805D4DD8;
extern const f32 lbl_805DD918;
extern const f32 lbl_805DD91C;
u8 *TObjBoss5Pillar__ct(u8 *arg0, u8 *arg1, u8 *arg2);
void queue_destruction__7TObjectFv(void *);
void fn_8028AE1C(void *);
void *create_smoke__15TObjBoss5PillarFPvPv(Pillar_8028B488 *, void *);
void TObjBoss5Pillar__sub_8028B488(Pillar_8028B488 *arg0);
}

extern "C" {

void *__dt__15TObjBoss5PillarFv(void *arg0, s16 arg1);
void render__15TObjBoss5PillarFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss5PillarDemo__sub_8028ADB0(int);
M2C_UNK TObjDoor__sub_803DC894(int, int, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK fn_8028ADDC(int);
s32 is_any_teammate_in_state__10TObjPlayerFv();
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);

extern s32 lbl_805D4DDC;

void render__15TObjBoss5PillarFPv(u8 *arg0) {
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        TObjPlayer__sub_803D9B2C();
        set_global_param__8TObjFishFi((void *) (lbl_805D4DDC));
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x2C));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 3) {
            fn_8028ADDC((int) (M2C_FIELD(arg0, s32 *, 0x48)));
            TObjDoor__sub_803DC894((int) (M2C_FIELD(arg0, s32 *, 0x38)), (int) (M2C_FIELD(arg0, s32 *, 0x40)), (f32) (M2C_FIELD(arg0, f32 *, 0x20)));
            TObjBoss5PillarDemo__sub_8028ADB0((int) (M2C_FIELD(arg0, s32 *, 0x48)));
        }
        TObjDoor__sub_803DC894((int) (M2C_FIELD(arg0, s32 *, 0x3C)), (int) (M2C_FIELD(arg0, s32 *, 0x44)), (f32) (M2C_FIELD(arg0, f32 *, 0x20)));
        TObjPlayer__sub_803D9B78();
    }
}

extern M2C_UNK __vt__15TObjBoss5Pillar[];

void TObjBoss5Pillar__sub_8028B488(Pillar_8028B488 *arg0) {
    u32 last;
    switch (arg0->state) {
    case 0:
        break;
    case 1:
        if (arg0->smoke == NULL) {
            arg0->smoke = create_smoke__15TObjBoss5PillarFPvPv(arg0, arg0->smokeParent);
        }
        arg0->frame += arg0->speed;
        last = arg0->info->frames - 1;
        if ((f32)last <= arg0->frame) {
            arg0->frame = (f32)last;
            arg0->state = 2;
        }
        break;
    case 2:
        if (arg0->smoke != NULL) {
            fn_8028AE1C(arg0->smoke);
        }
        if (arg0->timer++ > 0x1E) {
            if (arg0->smoke != NULL) {
                queue_destruction__7TObjectFv(arg0->smoke);
                arg0->smoke = NULL;
            }
            arg0->state = 3;
        }
        break;
    case 3:
        break;
    }
}

void *__dt__15TObjBoss5PillarFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjBoss5Pillar;
        if (M2C_FIELD(arg0, void **, 0x48) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x48)); M2C_FIELD(arg0, M2C_UNK *, 0x48) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8028B60C___vt__15TObjBoss5Pillar_size[sizeof(RecoveredGlobal_8028B60C___vt__15TObjBoss5Pillar) == 0x18 ? 1 : -1];
u8 *TObjBoss5Pillar__ct(u8 *arg0, u8 *arg1, u8 *arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8028B60C___vt__15TObjBoss5Pillar *)&__vt__15TObjBoss5Pillar).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3B40;
    VecCopy__FP3VecPC3Vec(arg0 + 0x2C, arg2);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805DD918;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DD91C;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4DD8, u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4DD8, u8 **, 0x42C), s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4DD8, u8 **, 0x430), s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4DD8, u8 **, 0x430), s32 *, 0x1C);
    return arg0;
}

}
