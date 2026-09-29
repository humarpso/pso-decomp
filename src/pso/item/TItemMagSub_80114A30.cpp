#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80114DB8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_80114DB8_lbl_8043E5A8 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80114DB8_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct Vec_80114CD8 { f32 x, y, z; };

typedef struct TItemMagSub_801152AC {
    u8 pad0[0x34];
    f32 vec34[3];
    u8 pad40[0x58 - 0x40];
    f32 vec58[3];
    u8 pad64[0x7C - 0x64];
    f32 timer;
    u8 pad80[0x94 - 0x80];
    f32 f94;
    f32 f98;
    f32 f9C;
} TItemMagSub_801152AC;

typedef struct MagSub_80115800 { u8 pad0[0x70]; s32 slots[3]; } MagSub_80115800;

extern "C" {
s32 TItemMag__sub_80113EC8(void *);
s32 calc_feed_level__11TItemMagSubFPv(void *arg0);
M2C_UNK TBoss7Tentacle__sub_803D8A6C(int, int, int, int, int);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9214(int, void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
void TItemMagSub__sub_80114E4C(u8 *arg0);
s32 is_mag_active__11TItemMagSubFPv(int);
void TItemMagSub__sub_80114E4C(u8 *arg0);
s32 TObjPlayer__sub_803D97F0(void *);
f32 TObjPlayer__sub_803D9884(void *, void *);
s32 TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_80114DB8_lbl_8043E5A8 lbl_8043E5A8;
extern RecoveredGlobal_80114DB8_lbl_8058D490 lbl_8058D490;
s32 TItemMagSub__sub_80114DB8(u8 *arg0, u32 arg1);
extern void *TItemMagSub__data_805D54B8;
extern s32 TItemMagSub__data_805D54BC;
void TItemMagSub__sub_80114AB4(void *a, void *b);
void TItemMagSub__sub_80114C40(void *arg);
void TItemMagSub__sub_80114CD8(Vec_80114CD8 *target, Vec_80114CD8 *cur, f32 *t);
void TItemMagSub__sub_80115334(void *);
M2C_UNK clear_flags64__11TItemMagSubFPvUi(void *, M2C_UNK);
M2C_UNK memset(void *, int, int);
extern f32 lbl_805D2C08;
extern const f32 TItemMagSub__data_805DABC8;
extern const f32 TItemMagSub__data_805DABD8;
void TItemMagSub__sub_801152AC(TItemMagSub_801152AC *self);
void disallow_rendering__7TObjectFv(void *);
void reset__11TItemMagSubFPv(u8 *arg0);
void disallow_rendering_shadows__7TObjectFv(void *);
void init_object__21TItemEffArmorParticleFPv(void *, void *);
extern const f64 lbl_8043E5D8;
extern M2C_UNK __vt__11TItemMagSub[];
extern u32 lbl_805D2C10;
extern const f32 TItemMagSub__data_805DABC8;
extern const f32 TItemMagSub__data_805DABD8;
extern const f32 lbl_805DABDC;
extern const f32 lbl_805DABE0;
u8 *TItemMagSub__ct(u8 *self, u8 *player, u8 *item);
}

extern "C" {

void *TItemMagSub__vt0(void *arg0, s16 arg1);
void accumulate_stat__11TItemMagSubFPvPvPv(f32 *arg0, s32 *arg1, void *arg2);
s32 calc_feed_level__11TItemMagSubFPv(void *arg0);
void clear_flag2__11TItemMagSubFPv(void *arg0);
void *destroy__11TItemMagSubFPvs(void *arg0, s16 arg1);
void reset__11TItemMagSubFPv(u8 *arg0);
void reset_stats__11TItemMagSubFPv(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
void __dt__7TObjectFv(void *, int);
M2C_UNK clear_flags64__11TItemMagSubFPvUi(void *, M2C_UNK);
void free_to_heap__11TItemMagSubFPv(void *);
M2C_UNK memset(void *, int, int);

void clear_flag2__11TItemMagSubFPv(void *arg0) {
    if ((u32) arg0 != 0U) {
        clear_flags64__11TItemMagSubFPvUi(arg0, 2);
    }
}

extern const f32 TItemMagSub__data_805DABC8;

void reset_stats__11TItemMagSubFPv(u8 *arg0) {
    memset(arg0 + 0x34, 0, 0xC);
    memset(arg0 + 0x58, 0, 0xC);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) TItemMagSub__data_805DABC8;
}

void TItemMagSub__sub_80114C40(void *arg) {
    if (TItemMagSub__data_805D54B8 != 0) {
        TItemMagSub__sub_80114AB4(TItemMagSub__data_805D54B8, arg);
        TItemMagSub__data_805D54BC++;
    }
}

void accumulate_stat__11TItemMagSubFPvPvPv(f32 *arg0, s32 *arg1, void *arg2) {
    *arg1 = *arg1 + M2C_FIELD(arg2, s32 *, 0xC);
    *arg0 = M2C_FIELD(arg2, f32 *, 0) * TBoss8Dragon__sub_803D64C0(*arg1 + M2C_FIELD(arg2, s32 *, 8));
}

typedef char RecoveredGlobal_80114DB8_lbl_8043E5A8_size[sizeof(RecoveredGlobal_80114DB8_lbl_8043E5A8) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80114DB8_lbl_8058D490_size[sizeof(RecoveredGlobal_80114DB8_lbl_8058D490) == 0x30 ? 1 : -1];

#pragma push
#pragma fp_contract on
void TItemMagSub__sub_80114CD8(Vec_80114CD8 *target, Vec_80114CD8 *cur, f32 *t) {
    cur->x += *t * (target->x - cur->x);
    cur->y += *t * (target->y - cur->y);
    cur->z += *t * (target->z - cur->z);
}
#pragma pop

s32 TItemMagSub__sub_80114DB8(u8 *arg0, u32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_80114DB8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80114DB8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80114DB8, sp10) == 0x8) ? 1 : -1];
    Stack_80114DB8 stack;
    if ((is_mag_active__11TItemMagSubFPv((int) (M2C_FIELD(arg0, s32 *, 0x1C))) == 0) && (arg1 != 0U)) {
        TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490.value));
        TItemMagSub__sub_80114E4C((u8 *)((void *) (arg0)));
        stack.sp8 = M2C_FIELD(&lbl_8043E5A8.value, s32 *, 0);
        stack.spC = M2C_FIELD(&lbl_8043E5A8.value, s32 *, 4);
        stack.sp10 = M2C_FIELD(&lbl_8043E5A8.value, s32 *, 8);
        TObjPlayer__sub_803D9884((void *) (&stack.sp8), (void *) (arg1));
        TObjPlayer__sub_803D9B78();
        return 1;
    }
    return 0;
}

void TItemMagSub__sub_80114E4C(u8 *arg0) {
  f32 temp_f1;
  s32 temp_r7;
  u8 *temp_r6;
  void *feed;
  s32 a2;
  s32 a3;
  s32 a4;
  TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0xA0));
  if (TItemMag__sub_80113EC8((void *) (*((void **) (((s8 *) arg0) + 0x20)))) != 0)
  {
    feed = (void *) calc_feed_level__11TItemMagSubFPv((void *) arg0);
    TObjPlayer__sub_803D9214((int) 0, feed);
  }
  else
  {
    TObjPlayer__sub_803D9214((int) 0, (void *) (*((s32 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x20)))) + 0x60))));
  }
  TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0xAC));
  temp_r6 = (unsigned char *) (*((void **) (((s8 *) arg0) + 0x30)));
  if (temp_r6 != 0)
  {
    a2 = *((s32 *) (((s8 *) temp_r6) + 0x1C));
    a2 = a2 + (*((s32 *) (((s8 *) arg0) + 0x34)));
    a3 = (*((s32 *) (((s8 *) temp_r6) + 0x20))) + (*((s32 *) (((s8 *) arg0) + 0x38)));
    a4 = (*((s32 *) (((s8 *) temp_r6) + 0x24))) + (*((s32 *) (((s8 *) arg0) + 0x3C)));
    TBoss7Tentacle__sub_803D8A6C((int) 0, (int) a2, (int) a3, (int) a4, (int) (*((s32 *) (((s8 *) temp_r6) + 0x20))));
  }
  temp_f1 = *((f32 *) (((s8 *) arg0) + 0xC8));
  TOMonitorMachine01__sub_803D8B5C((int) 0, (f32) temp_f1, (f32) temp_f1, (f32) temp_f1);
}

s32 calc_feed_level__11TItemMagSubFPv(void *arg0) {
    s32 temp_r3;
    void **temp_r4_2;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_3;

    temp_r3_2 = M2C_FIELD(arg0, void **, 0x20);
    temp_r4_2 = M2C_FIELD(temp_r3_2, void ***, 0xF8);
    temp_r3 = M2C_FIELD(temp_r3_2, s32 *, 0x60);
    if (temp_r4_2 != NULL) {
        temp_r4_3 = *temp_r4_2;
        if (temp_r4_3 != NULL) {
            temp_r4 = M2C_FIELD(temp_r4_3, void **, 4);
            if (temp_r4 != NULL) {
                return temp_r3 + M2C_FIELD(temp_r4, s16 *, 4);
            }
        }
    }
    return temp_r3;
}

extern M2C_UNK __vt__11TItemMagSub[];

void TItemMagSub__sub_801152AC(TItemMagSub_801152AC *self) {
    self->timer += TItemMagSub__data_805DABD8;
    if (lbl_805D2C08 == self->timer) {
        clear_flags64__11TItemMagSubFPvUi((void *)(self), (M2C_UNK)(0x18));
        memset(self->vec34, 0, 0xC);
        memset(self->vec58, 0, 0xC);
        self->f9C = TItemMagSub__data_805DABC8;
        self->f98 = TItemMagSub__data_805DABC8;
        self->f94 = TItemMagSub__data_805DABC8;
    }
    TItemMagSub__sub_80115334(self);
}

void *TItemMagSub__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TItemMagSub;
        destroy__11TItemMagSubFPvs((void *)((void *)(arg0)), (s16)((s16)(0)));
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049F5A0[];

void *destroy__11TItemMagSubFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F5A0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern const f32 TItemMagSub__data_805DABC8;

void reset__11TItemMagSubFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0xAC, M2C_FIELD(arg0, s32 *, 0x20) + 0x2FC);
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}
#pragma push
#pragma fp_contract on
u8 *TItemMagSub__ct(u8 *self, u8 *player, u8 *item) {
    s32 i;
    init_object__21TItemEffArmorParticleFPv(self, item);
    M2C_FIELD(self, M2C_UNK **, 0x18) = __vt__11TItemMagSub;
    M2C_FIELD(self, u32 *, 0) = lbl_805D2C10;
    M2C_FIELD(self, u8 **, 0x20) = player;
    M2C_FIELD(self, s32 *, 0x24) = 0;
    M2C_FIELD(self, s32 *, 0x2C) = 0;
    M2C_FIELD(self, s32 *, 0x28) = 0;
    reset__11TItemMagSubFPv((u8 *)(self));
    M2C_FIELD(self, s32 *, 0x64) = 0;
    M2C_FIELD(self, u8 **, 0x1C) = item;
    M2C_FIELD(self, f32 *, 0x80) = TItemMagSub__data_805DABC8;
    M2C_FIELD(self, f32 *, 0x7C) = TItemMagSub__data_805DABC8;
    for (i = 0; i < 3; i++) {
        ((MagSub_80115800 *) self)->slots[i] = -1;
    }
    if (lbl_8043E5D8 < M2C_FIELD(player, f32 *, 0x8A8)) {
        M2C_FIELD(self, f32 *, 0xC8) = -((lbl_805DABE0 * M2C_FIELD(player, f32 *, 0x8A8)) - lbl_805DABDC);
    } else {
        M2C_FIELD(self, f32 *, 0xC8) = TItemMagSub__data_805DABD8;
    }
    disallow_rendering__7TObjectFv(self);
    disallow_rendering_shadows__7TObjectFv(self);
    return self;
}
#pragma pop

}
