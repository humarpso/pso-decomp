#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8022B288___vt__8TTecAnti { M2C_UNK value; u8 remaining[0x1C]; };
typedef char RecoveredGlobal_8022B288___vt__8TTecAnti_size[sizeof(RecoveredGlobal_8022B288___vt__8TTecAnti) == 0x20 ? 1 : -1];

struct RecoveredGlobal_8022B288_lbl_804CC1CC { M2C_UNK value; u8 remaining[0x340]; };
typedef char RecoveredGlobal_8022B288_lbl_804CC1CC_size[sizeof(RecoveredGlobal_8022B288_lbl_804CC1CC) == 0x344 ? 1 : -1];

extern "C" {
void TTecAnti__sub_8022B35C(u8 *arg0, u8 *arg1);
s32 obj_getField1c(int);
s32 TObjPlayer__sub_8004433C(void *);
s32 fn_8022ACB4(void *);
int TTecAnti__sub_8022AD74(void* p);
void TTecAnti__sub_8022AD94(void *);
void TTecAnti__sub_8022B35C(u8 *arg0, u8 *arg1);
int TTecAnti__sub_8022B3E8(void *, void *);
s32 TTecPlayerInfluence__ct(void *, void *, void *, void *);
extern M2C_UNK __vt__8TTecAnti[];
extern RecoveredGlobal_8022B288_lbl_804CC1CC lbl_804CC1CC;
extern s32 lbl_805D3790;
extern const f32 lbl_805DC798;
u8 *TTecAnti__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

int TTecAnti__sub_8022AD74(void* p);
void *__dt__8TTecAntiFPvs(void *arg0, s16 arg1);
void *__dt__8TTecAntiFv(void *arg0, s16 arg1);
void create__8TTecAntiFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
int queue_destruction__8TTecAntiFPv(void* p);
void render__8TTecAntiFv(void);
void __dl__7TObjectFPv(void *);
void __dt__19TTecPlayerInfluenceFv(void *, int);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
int fn_80236EE8(void*);
int queue_destruction__7TObjectFv(void*);

int TTecAnti__sub_8022AD74(void* p) { return fn_80236EE8(p); }
void TTecAnti__sub_8022AD94(void * _w0) {  }
int queue_destruction__8TTecAntiFPv(void* p) { return queue_destruction__7TObjectFv(p); }

extern M2C_UNK lbl_804CC0E8[];

void *__dt__8TTecAntiFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC0E8;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void create__8TTecAntiFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecAnti__ct((u8 *)(o), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3));
    }
}

extern M2C_UNK __vt__8TTecAnti[];

void *__dt__8TTecAntiFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TTecAnti;
        __dt__19TTecPlayerInfluenceFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TTecAnti__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 temp_r3_2;
    u8 *temp_r3;
    TTecPlayerInfluence__ct((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg4));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8022B288___vt__8TTecAnti *)&__vt__8TTecAnti).value;
    TObjPlayer__sub_8004433C((void *) (arg0 + 0xE0));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3790;
    M2C_FIELD(arg0, s32 *, 0x13C) = 1;
    TTecAnti__sub_8022B3E8((void *)((void *) (arg0 + 0xE0)), (void *)((void *) (arg3)));
    TTecAnti__sub_8022B35C((u8 *)((void *) (arg0 + 0x74)), (u8 *)((void *) ((u8 *)&lbl_804CC1CC.value + 0x2C0)));
    TTecAnti__sub_8022AD94((void *)((void *) (arg0)));
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xDC));
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0xA4), f32 *, 0xC) = (f32) (lbl_805DC798 + M2C_FIELD(arg0, f32 *, 0x7C));
    }
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x1C);
    if (temp_r3_2 != 0U) {
        M2C_FIELD(arg0, s16 *, 0xA8) = obj_getField1c((int) (temp_r3_2));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
        fn_8022ACB4((void *) (arg0));
        TTecAnti__sub_8022AD74((void*)((void *) (arg0)));
    }
    return arg0;
}

void TTecAnti__sub_8022B35C(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) M2C_FIELD(arg1, s16 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) M2C_FIELD(arg1, s16 *, 0x12);
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) M2C_FIELD(arg1, s16 *, 0x14);
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) M2C_FIELD(arg1, s16 *, 0x16);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s16 *, 0x20) = (s16) M2C_FIELD(arg1, s16 *, 0x20);
    M2C_FIELD(arg0, u8 *, 0x22) = (u8) M2C_FIELD(arg1, u8 *, 0x22);
    M2C_FIELD(arg0, u8 *, 0x23) = (u8) M2C_FIELD(arg1, u8 *, 0x23);
    M2C_FIELD(arg0, s16 *, 0x24) = (s16) M2C_FIELD(arg1, s16 *, 0x24);
    M2C_FIELD(arg0, s16 *, 0x26) = (s16) M2C_FIELD(arg1, s16 *, 0x26);
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg1, s16 *, 0x2A);
}

int TTecAnti__sub_8022B3E8(void * _w0, void * _w1) { return 0; }

void render__8TTecAntiFv(void) {  }

}
