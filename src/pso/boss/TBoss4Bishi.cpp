#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 lbl_805D8CBC;
extern const f32 lbl_805D8CC8;
extern const f32 lbl_805D8CE4;
void TBoss4Zako__vt6(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
extern const f32 lbl_805D8CB8;
extern const f32 lbl_805D8CBC;
extern const f32 lbl_805D8CC0;
void TBoss4Bishi__vt2(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
extern const f32 lbl_805D8CB8;
extern const f32 lbl_805D8CBC;
extern const f32 lbl_805D8CC0;
void TBoss4Zako__vt5(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
u16 TObjPlayer__sub_800115C4(void *, M2C_UNK, f32);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_instance__14TBoss4DarkFalzFv();
s32 get_position_ptr__10TObjPlayerFPv(s32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 lbl_805D8CBC;
extern const f32 lbl_805D8CF4;
extern const f32 lbl_805D8CF8;
extern const f32 lbl_805D8CFC;
void TBoss4Zako__sub_8005C368(u8 *arg0);
}

extern "C" {

struct VOff_8005C450_arg0_8005BABC { char pad_0[0x38]; char f_38[1]; };

void TBoss4Bishi__sub_8005BABC(void);
void TBoss4Bishi__sub_8005BAC0(void);
void TBoss4Bishi__sub_8005BAC4(void);
void TBoss4Bishi__sub_8005BAC8(void);
void TBoss4Bishi__sub_8005BACC(void);
void TBoss4Bishi__sub_8005BAD0(void);
void TBoss4Bishi__sub_8005BAD4(void);
void TBoss4Bishi__vt0(u8 *arg0);
void TBoss4Zako__vt4(void *arg0);
void *__dt_deleting__11TBoss4BishiFPvs(void *arg0, s16 arg1);
s32 create__11TBoss4BishiFi(s32 arg0);
void enter_state_3__11TBoss4BishiFPv(void* p);
void try_enter_state_3__11TBoss4BishiFPv(void* p);
s32 TBoss4Bishi__ct(s32, s32, s32);
int TBoss4Uro__sub_8005D6D4(void*);
void TBoss4Zako__sub_8005C218(void *);
void TBoss4Zako__sub_803D8910(void *, void *);
s32 TObjControl__ct(s32, s32);
int TObjPlayer__sub_800F6B68(void*);
void __dl__7TObjectFPv(void *);
void __dt__10TBoss4ZakoFPvs(void *, int);
s32 __nw__7TObjectFUl(M2C_UNK);

void TBoss4Bishi__sub_8005BABC(void) {  }
void TBoss4Bishi__sub_8005BAC0(void) {  }
void TBoss4Bishi__sub_8005BAC4(void) {  }
void TBoss4Bishi__sub_8005BAC8(void) {  }
void TBoss4Bishi__sub_8005BACC(void) {  }
void TBoss4Bishi__sub_8005BAD0(void) {  }
void TBoss4Bishi__sub_8005BAD4(void) {  }

extern const f32 lbl_805D8CC8;
extern const f32 lbl_805D8CCC;

void TBoss4Bishi__vt2(u8 *arg0) {
    f32 temp_f1;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805D8CB8);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    if ((temp_f1 < lbl_805D8CBC) && (temp_f1 >= lbl_805D8CB8)) {
        TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x38), (int) (0xF3));
    }
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x5C) + 0x111);
    if (M2C_FIELD(arg0, f32 *, 0x3C) < lbl_805D8CC0) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

void TBoss4Bishi__vt0(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f2;

    VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x44), (void *)(arg0 + 0x38));
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f2 < lbl_805D8CC8) {
        temp_f0 = temp_f2 + lbl_805D8CCC;
        M2C_FIELD(arg0, f32 *, 0x3C) = temp_f0;
        if (temp_f0 > lbl_805D8CC8) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8CC8;
            M2C_FIELD(arg0, s32 *, 0x374) = 2;
        }
    }
}

void enter_state_3__11TBoss4BishiFPv(void* p) { if (*(int*)((char*)p + 0x374) != 3) { TBoss4Uro__sub_8005D6D4(*(void**)((char*)p + 0x378)); *(int*)((char*)p + 0x374) = 3; } }

void try_enter_state_3__11TBoss4BishiFPv(void* p) { if (*(int*)((char*)p + 0x374) != 3) { TObjPlayer__sub_800F6B68(p); enter_state_3__11TBoss4BishiFPv((void*)(p)); } }

extern M2C_UNK lbl_80487460[];

void *__dt_deleting__11TBoss4BishiFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80487460;
        __dt__10TBoss4ZakoFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 tl_04;

s32 create__11TBoss4BishiFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3C4);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4Bishi__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

void TBoss4Zako__vt6(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x390);
    M2C_FIELD(arg0, f32 *, 0x390) = (f32) (temp_f1 + lbl_805D8CE4);
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x44)), (void *)((void *) (arg0 + 0x38)));
    TBoss4Zako__sub_803D8910((void *) (arg0 + 0x38), (void *) (arg0 + 0x38C));
    if (M2C_FIELD(arg0, f32 *, 0x3C) < lbl_805D8CC8) {
        M2C_FIELD(arg0, f32 *, 0x390) = (f32) lbl_805D8CBC;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8CC8;
        M2C_FIELD(arg0, s32 *, 0x374) = 2;
    }
}

void TBoss4Zako__vt5(u8 *arg0) {
    f32 temp_f1;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805D8CB8);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    if ((temp_f1 < lbl_805D8CBC) && (temp_f1 >= lbl_805D8CB8)) {
        TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x38), (int) (0xF3));
    }
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x5C) + 0x111);
    if (M2C_FIELD(arg0, f32 *, 0x3C) < lbl_805D8CC0) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

#pragma push
#pragma fp_contract on
void TBoss4Zako__sub_8005C368(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r3;
    if (!(M2C_FIELD(arg0, s32 *, 0x3B8) & 0x7F)) {
        if (M2C_FIELD(arg0, s32 *, 0x388) == 0xFFFF) {
            M2C_FIELD(arg0, u32 *, 0x388) = (u32) TObjPlayer__sub_800115C4(arg0, 0, lbl_805D8CF4);
            return;
        }
        M2C_FIELD(arg0, u32 *, 0x388) = 0xFFFFU;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x378) != 0U) {
            temp_r3 = get_instance__14TBoss4DarkFalzFv();
            if (temp_r3 != 0) {
                temp_r31 = (s32) (lbl_805D8CF8 * calc_boss4_scale__10TObjPlayerFi(arg0));
                VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x3C4), (void *)(get_position_ptr__10TObjPlayerFPv(temp_r3)));
                M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) lbl_805D8CBC;
                M2C_FIELD(arg0, f32 *, 0x3C4) = (f32) ((lbl_805D8CFC * TBoss8Dragon__sub_803D64C0(temp_r31)) + M2C_FIELD(arg0, f32 *, 0x3C4));
                M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) ((lbl_805D8CFC * TBoss8Dragon__sub_803D64DC(temp_r31)) + M2C_FIELD(arg0, f32 *, 0x3CC));
            }
        }
    }
}
#pragma pop

void TBoss4Zako__vt4(void *arg0) {
    struct VOff_8005C450_arg0_8005BABC *self = (struct VOff_8005C450_arg0_8005BABC *)arg0;
    TBoss4Zako__sub_8005C368((u8 *)(arg0));
    TBoss4Zako__sub_8005C218(arg0);
    VecCopy__FP3VecPC3Vec((void *)((void *)((char *)arg0 + 68)), (void *)(self->f_38));
    TBoss4Zako__sub_803D8910(self->f_38, (void *)((char *)arg0 + 908));
}

}
