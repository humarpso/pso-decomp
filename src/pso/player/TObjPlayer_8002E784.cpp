#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8002E784 { char pad[0xC]; };
struct VObj_8002E784 : Base_8002E784 {
    virtual void m0(int);
};

typedef struct Unit { u8 pad[0x2C]; } Unit;

typedef struct Boss2 { u8 pad[0x20]; Unit units[0x13]; } Boss2;

extern "C" {
extern f32 lbl_805D4B90;
extern const f32 lbl_805D8258;
void TObjPlayer__sub_8002EF80(void);
void TObjPlayer__sub_8002ECC4(void *, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * TBreakUpMdl__sub_8009705C(void *, s32);
extern void *lbl_805D4B8C;
extern u8 *lbl_805D4BA4;
void TObjPlayer__sub_8002E7C8(void);
void TObjPlayer__sub_8002ECC4(void *, s32);
void TObjPlayer__sub_8002ED48(void *, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * TBreakUpMdl__sub_8009705C(void *, s32);
extern struct VObj8002EB88_8002eb88_8002E784 *lbl_805D4B88;
extern u8 *lbl_805D4BA4;
void TObjPlayer__sub_8002EBCC(void);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK create_particle__17TObjBoss2CeilJunkFv(void *, M2C_UNK);
void TObjPlayer__sub_8002E974(u8 *arg0);
f32 TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 lbl_805D822C;
extern const f32 lbl_805D8230;
extern const f32 lbl_805D8250;
extern const f32 lbl_805D8254;
extern const f32 lbl_805D8258;
extern const f32 lbl_805D8264;
extern const f32 lbl_805D8268;
extern const f32 lbl_805D826C;
extern const f32 lbl_805D8270;
extern const f32 lbl_805D8274;
s32 TObjPlayer__sub_8002EDCC(u8 *arg0);
}

extern "C" {

struct VObj8002EB88_8002eb88_8002E784 {
    char pad[0xC];
    virtual void m0(int);
};

int TObjLight__sub_8002F238(void* p);
void *TObjPlayer__sub_8002EA0C(void *arg0, s16 arg1);
void TObjPlayer__sub_8002EB88(void);
s32 calc_random_scaled__10TObjPlayerFv(void);
void clear_target_ref__10TObjPlayerFv(void);
void *deleting_dtor__10TObjPlayerFPvs(void *arg0, s16 arg1);
void *init_base__10TObjPlayerFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int get_target_info__9TObjEneDDFPv(void*);
s32 rand__11TOBoss4RockFv();

extern void *lbl_805D4B8C;

void clear_target_ref__10TObjPlayerFv(void) {
    if (lbl_805D4B8C != NULL) {
        ((VObj_8002E784 *)lbl_805D4B8C)->m0(1);
    }
    lbl_805D4B8C = NULL;
}

extern M2C_UNK lbl_804820A8[];

void TObjPlayer__sub_8002E7C8(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x10);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TBreakUpMdl__sub_8009705C((void *) temp_r3, M2C_FIELD(M2C_FIELD(lbl_805D4BA4, u8 **, 0x42C), s32 *, 0x58)));
    }
    (*(u8 * *)&lbl_805D4B8C) = (unsigned char *) ((void *) var_r0);
    TObjPlayer__sub_8002ECC4((void *) var_r0, 0x1C);
}

void TObjPlayer__sub_8002E974(u8 *arg0) {
    u8 *temp_r30;
    s32 var_r29;
    Boss2 *self;
    M2C_FIELD(arg0, s32 *, 0x1C) += 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) >= 0xA0) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    var_r29 = 0;
    do {
        temp_r30 = (u8 *)&((Boss2 *)arg0)->units[var_r29];
        if (TObjPlayer__sub_8002EDCC((u8 *)(temp_r30)) != 0) {
            if ((var_r29 % 2) == 0) {
                create_particle__17TObjBoss2CeilJunkFv(temp_r30, 0x171);
            }
        }
        var_r29 += 1;
    } while (var_r29 < 0x13);
}

void *TObjPlayer__sub_8002EA0C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804820A8;
        deleting_dtor__10TObjPlayerFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern struct VObj8002EB88_8002eb88_8002E784 *lbl_805D4B88;

void TObjPlayer__sub_8002EB88(void) {
    if (lbl_805D4B88 != NULL) {
        lbl_805D4B88->m0(1);
    }
    lbl_805D4B88 = NULL;
}

extern M2C_UNK lbl_804820C0[];

void TObjPlayer__sub_8002EBCC(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x10);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TBreakUpMdl__sub_8009705C((void *) temp_r3, M2C_FIELD(M2C_FIELD(lbl_805D4BA4, u8 **, 0x42C), s32 *, 0x68)));
    }
    (*(u8 * *)&lbl_805D4B88) = (unsigned char *) ((void *) var_r0);
    TObjPlayer__sub_8002ED48((void *) var_r0, 0x13);
    TObjPlayer__sub_8002ECC4((*(u8 * *)&lbl_805D4B88), 0x13);
}

void *deleting_dtor__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804820C0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804820C0[];

void *init_base__10TObjPlayerFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804820C0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

extern M2C_UNK lbl_80435620;
extern const f32 lbl_805D8244;
extern const f32 lbl_805D8248;

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
s32 TObjPlayer__sub_8002EDCC(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    s32 temp_r0;
    s32 temp_r31;
    s32 var_r30;
    var_r30 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28);
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) - lbl_805D8250);
        TBoss4Zako__sub_803D8910((void *) (arg0), (void *) (arg0 + 0xC));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x10);
        if (temp_f1 < lbl_805D822C) {
            temp_f2 = M2C_FIELD(arg0, f32 *, 4);
            if (temp_f2 < lbl_805D8264) {
                temp_f3 = M2C_FIELD(arg0, f32 *, 0);
                temp_f4 = M2C_FIELD(arg0, f32 *, 8);
                if ((temp_f3 <= lbl_805D8268) && (temp_f3 >= lbl_805D826C) && (temp_f4 <= lbl_805D8270) && (temp_f4 >= lbl_805D8274)) {
                    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (temp_f1 * lbl_805D8230);
                    M2C_FIELD(arg0, s32 *, 0x28) = 2;
                } else if (temp_f2 < lbl_805D8258) {
                    var_r30 = 1;
                    M2C_FIELD(arg0, s32 *, 0x28) = 1;
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + temp_r31);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + (temp_r31 * 2));
        break;
    case 2:
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) - lbl_805D8250);
        TBoss4Zako__sub_803D8910((void *) (arg0), (void *) (arg0 + 0xC));
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) - lbl_805D8254);
        if (M2C_FIELD(arg0, f32 *, 0x24) < lbl_805D822C) {
            M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805D822C;
            M2C_FIELD(arg0, s32 *, 0x28) = 3;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + temp_r31);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + (temp_r31 * 2));
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 4) = (f32) ((lbl_805D8250 * M2C_FIELD(arg0, f32 *, 0x10)) + M2C_FIELD(arg0, f32 *, 4));
        M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(arg0, f32 *, 0x14));
        break;
    }
    return var_r30;
}
#pragma pop

void TObjPlayer__sub_8002EF80(void) {
    lbl_805D4B90 = lbl_805D8258;
}

s32 calc_random_scaled__10TObjPlayerFv(void) {
    return (s32) (lbl_805D8248 * (lbl_805D8244 * (f32) rand__11TOBoss4RockFv()));
}

int TObjLight__sub_8002F238(void* p) { return get_target_info__9TObjEneDDFPv(p); }

}
