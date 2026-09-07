#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80239C48___vt__9TTecResta {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
s32 obj_getField1c(int);
s32 TObjPlayer__sub_8004433C(void *);
s32 TTecPlayerInfluence__ct(void *, void *, void *, void *);
s32 fn_802393D0(void *);
int init_cast__9TTecRestaFPv(void* p);
s32 TTecResta__sub_80239548(void *);
extern M2C_UNK __vt__9TTecResta[];
extern s32 lbl_805D3810;
extern const f32 TTecResta__data_805DC908;
u8 *TTecResta__sub_80239C48(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

void *__dt__9TTecRestaFPvs(void *arg0, s16 arg1);
void *__dt__9TTecRestaFv(void *arg0, s16 arg1);
void create__9TTecRestaFPvPvPv(void *arg0, void *arg1, void *arg2);
void create__9TTecRestaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
int init_cast__9TTecRestaFPv(void* p);
void render__9TTecRestaFv(void);
void tick_lifetime__9TTecRestaFPv(void *arg0);
void *TTecResta__ct(void *, void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__19TTecPlayerInfluenceFv(void *, int);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
int fn_80236EE8(void*);
M2C_UNK queue_destruction__7TObjectFv();

int init_cast__9TTecRestaFPv(void* p) { return fn_80236EE8(p); }

void tick_lifetime__9TTecRestaFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r4 + 1);
    if (temp_r4 > 0xB4) {
        queue_destruction__7TObjectFv();
    }
}

extern M2C_UNK lbl_804CCBC0[];

void *__dt__9TTecRestaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCBC0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void create__9TTecRestaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecResta__ct(o, arg0, arg1, arg2, arg3);
    }
}

void create__9TTecRestaFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecResta__sub_80239C48((u8 *)(o), (s32)(arg0), (s32)(arg1), (s32)(arg2));
    }
}

void render__9TTecRestaFv(void) {  }

extern M2C_UNK __vt__9TTecResta[];

void *__dt__9TTecRestaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TTecResta;
        __dt__19TTecPlayerInfluenceFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80239C48___vt__9TTecResta_size[sizeof(RecoveredGlobal_80239C48___vt__9TTecResta) == 0x20 ? 1 : -1];
u8 *TTecResta__sub_80239C48(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_r3_2;
    u8 *temp_r3;
    TTecPlayerInfluence__ct((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg3));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80239C48___vt__9TTecResta *)&__vt__9TTecResta).value;
    TObjPlayer__sub_8004433C((void *) (arg0 + 0xE0));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3810;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    TTecResta__sub_80239548((void *) (arg0));
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xDC));
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0xA4), f32 *, 0xC) = (f32) (TTecResta__data_805DC908 + M2C_FIELD(arg0, f32 *, 0x7C));
    }
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x1C);
    if (temp_r3_2 != 0U) {
        M2C_FIELD(arg0, s16 *, 0xA8) = obj_getField1c((int) (temp_r3_2));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
        init_cast__9TTecRestaFPv((void*)((void *) (arg0)));
        fn_802393D0((void *) (arg0));
    }
    return arg0;
}

}
