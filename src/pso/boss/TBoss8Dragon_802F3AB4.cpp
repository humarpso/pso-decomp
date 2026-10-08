#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TBoss8Dragon__sub_802F3C94(void *arg0, s32 arg1);
u16 get_part_count_plus__12TBoss8DragonFPvi(void *arg0, s32 arg1);
void TBoss8Dragon__sub_802F3C78(void);
    extern void* boss8_dragon_leader_part;
void TBoss8Dragon__sub_802F3C78(void);
void TBoss8Dragon__sub_802F3C74(void);
void TBoss8Dragon__sub_802F3C74(void);
void *__nw__7TObjectFUl(int);
void * TBoss8Dragon__sub_802F3C24(void *arg0, void *arg1);
void * TBoss8Dragon__sub_802F3C24(void *arg0, void *arg1);
void *ct__12TBoss8DragonFPvPvPv(void *arg0, void *arg1, void *arg2);
void TBoss4DarkFalz__sub_8004B4F0(void *, void *);
void __ct__7TObjectFP7TObject(void *);
extern M2C_UNK lbl_804E4BF0[];
extern void *boss8_dragon_leader_part;
void *ct__12TBoss8DragonFPvPvPv(void *arg0, void *arg1, void *arg2);
void *dt__12TBoss8DragonFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
extern M2C_UNK lbl_804E4BF0[];
extern void *boss8_dragon_leader_part;
void *dt__12TBoss8DragonFPvs(void *arg0, s16 arg1);
void TBoss8Dragon__sub_802F3B54(void);
void TBoss8Dragon__sub_802F3B54(void);
void TBoss8Dragon__sub_802F3B50(void);
void TBoss8Dragon__sub_802F3B50(void);
s32 setup_attack_slot__12TBoss8DragonFiUiiiPv(s32 arg0, u32 arg1, s32 arg2, s32 arg3, u8 *arg4);
void TBoss4DarkFalz__sub_8004B4F0(void *, void *);
u16 get_part_count_plus__12TBoss8DragonFPvi(void *arg0, s32 arg1);
s32 TBoss8Dragon__sub_802F3C94(void *arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 setup_attack_slot__12TBoss8DragonFiUiiiPv(s32 arg0, u32 arg1, s32 arg2, s32 arg3, u8 *arg4);
}

extern "C" {

}
extern "C" {

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 setup_attack_slot__12TBoss8DragonFiUiiiPv(s32 arg0, u32 arg1, s32 arg2, s32 arg3, u8 *arg4) {
    if ((arg3 < 0) || (arg3 > 5)) {
        return 0;
    }
    TBoss4DarkFalz__sub_8004B4F0((void *) (arg4), (void *) (arg0 + 0x1C));
    M2C_FIELD(arg4, s16 *, 0) = TBoss8Dragon__sub_802F3C94((void *)((void *) (arg0)), (s32)((void *) (arg3)));
    M2C_FIELD(arg4, s16 *, 2) = 0;
    M2C_FIELD(arg4, s16 *, 6) = get_part_count_plus__12TBoss8DragonFPvi((void *)((void *) (arg0)), (s32)((void *) (arg3)));
    if (arg1 != 0U) {
        VecCopy__FP3VecPC3Vec((void *) (arg4 + 0x10), (void *) (arg1));
    }
    M2C_FIELD(arg4, s32 *, 0x20) = arg2;
    return 1;
}
}

void TBoss8Dragon__sub_802F3B50(void) {  }

void TBoss8Dragon__sub_802F3B54(void) {  }

void *dt__12TBoss8DragonFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E4BF0;
        if (boss8_dragon_leader_part == arg0) {
            boss8_dragon_leader_part = NULL;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *ct__12TBoss8DragonFPvPvPv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E4BF0;
    if (boss8_dragon_leader_part == NULL) {
        boss8_dragon_leader_part = arg0;
    }
    TBoss4DarkFalz__sub_8004B4F0((void *)((char *)arg0 + 28), arg2);
    return arg0;
}

void * TBoss8Dragon__sub_802F3C24(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x5C);
    if (o != NULL) {
        o = ct__12TBoss8DragonFPvPvPv((void *)(o), (void *)(arg0), (void *)(arg1));
    }
    return o;
}

void TBoss8Dragon__sub_802F3C74(void) {  }

void TBoss8Dragon__sub_802F3C78(void) { boss8_dragon_leader_part = 0; }

u16 get_part_count_plus__12TBoss8DragonFPvi(void *arg0, s32 arg1) {
    return (u16) (M2C_FIELD(arg0, u16 *, 0x22) + arg1);
}

s32 TBoss8Dragon__sub_802F3C94(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s16 *, 0x1C) + arg1;
}

}
