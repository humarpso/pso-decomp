#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VOff_802EE9A4_arg0_802EE9A4 { char pad_0[0x2FC]; char f_2FC[1]; };

void TBoss7Joint__vt26(void);
void TBoss7Joint__vt42(void);
void TBoss7Joint__vt43(void);
void TBoss7Joint__vt44(void);
void TBoss7Joint__vt45(void);
void TBoss7Joint__vt46(void);
void TBoss7Joint__vt47(void);
void TBoss7Joint__vt48(void);
void TBoss7Joint__vt59(void);
void TBoss7Joint__vt60(u8 *arg0);
int TBoss7Joint__vt61(void);
void TBoss7Joint__vt85(void);
void *__dt__11TBoss7JointFv(void *arg0, s16 arg1);
void store_position__11TBoss7JointFPv(void *arg0);
M2C_UNK TBoss7Joint__sub_802EE820(void *);
M2C_UNK TBoss8Dragon__sub_800BB780(void *);
void TObjEneDD__vt0(void *, int);
M2C_UNK TObjFish__sub_802EC468(void *, f32, f32);
M2C_UNK TObjFish__sub_802ECB70(int, int, int);
void VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
void clear_obj_links(void *);
u32 is_part_active__11TBoss7JointFPv(void *, int);
M2C_UNK set_flag_800__11TBoss7JointFPv(int);

void store_position__11TBoss7JointFPv(void *arg0) {
    struct VOff_802EE9A4_arg0_802EE9A4 *self = (struct VOff_802EE9A4_arg0_802EE9A4 *)arg0;
    VecCopy__FP3VecPC3Vec(self->f_2FC, (void *)((char *)arg0 + 56));
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 116), self->f_2FC);
}

extern const f32 lbl_805DEBB0;
extern const f32 lbl_805DEBB4;

void TBoss7Joint__vt60(u8 *arg0) {
    s16 temp_r4;
    s32 temp_r31;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x32C);
    temp_r31 = M2C_FIELD(arg0, s16 *, 0x2B8) - temp_r4;
    if (is_part_active__11TBoss7JointFPv((void *) (arg0), (int) (temp_r4)) != 0U) {
        TObjFish__sub_802EC468((void *) (arg0 + 0x38), (f32) (lbl_805DEBB0), (f32) (lbl_805DEBB4));
        TObjFish__sub_802ECB70((int) (M2C_FIELD(arg0, s32 *, 0x10)), (int) (temp_r31), (int) (M2C_FIELD(arg0, u16 *, 0x2D4)));
    } else {
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) - temp_r31);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
            TBoss7Joint__sub_802EE820((void *) (arg0));
        }
    }
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    set_flag_800__11TBoss7JointFPv((int) (M2C_FIELD(arg0, s32 *, 0x10)));
    TBoss8Dragon__sub_800BB780((void *) (arg0));
}

extern M2C_UNK __vt__11TBoss7Joint[];

void *__dt__11TBoss7JointFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TBoss7Joint;
        clear_obj_links(arg0);
        TObjEneDD__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TBoss7Joint__vt85(void) {  }
void TBoss7Joint__vt26(void) {  }

int TBoss7Joint__vt61(void) { return 0; }

void TBoss7Joint__vt59(void) {  }
void TBoss7Joint__vt42(void) {  }
void TBoss7Joint__vt43(void) {  }
void TBoss7Joint__vt44(void) {  }
void TBoss7Joint__vt45(void) {  }
void TBoss7Joint__vt46(void) {  }
void TBoss7Joint__vt47(void) {  }
void TBoss7Joint__vt48(void) {  }

}
