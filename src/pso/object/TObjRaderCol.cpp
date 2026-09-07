#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_801976F4___vt__12TObjRaderCol {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
s32 disallow_rendering__7TObjectFv(void *);
s32 TPhotonMagicSquare__sub_801A2640(void *);
extern M2C_UNK __vt__12TObjRaderCol[];
extern s32 lbl_805D3410;
u8 *TObjRaderCol__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

int TObjRaderCol__sub_8019750C(void *);
void *__dt__12TObjRaderColFv(void *arg0, s16 arg1);
void render__12TObjRaderColFv(void);
void run_task__12TObjRaderColFv(void *arg0);
M2C_UNK TObjRaderCol__sub_801975DC(void *);
M2C_UNK TRaderMapCore__sub_801F9C54(s16);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
s32 is_not_split_screen__13TRaderMapCoreFv();

void render__12TObjRaderColFv(void) {  }

int TObjRaderCol__sub_8019750C(void *) { return 0; }

void run_task__12TObjRaderColFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x98);
    switch (temp_r0) {
    case 0:
        TRaderMapCore__sub_801F9C54((s16) M2C_FIELD(arg0, s32 *, 0x94));
        M2C_FIELD(arg0, s32 *, 0x98) = 1;
        return;
    case 1:
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            TObjRaderCol__sub_8019750C((void *)(arg0));
            return;
        }
        TObjRaderCol__sub_801975DC(arg0);
        return;
    }
}

extern M2C_UNK __vt__12TObjRaderCol[];

typedef char RecoveredGlobal_801976F4___vt__12TObjRaderCol_size[sizeof(RecoveredGlobal_801976F4___vt__12TObjRaderCol) == 0x38 ? 1 : -1];
u8 *TObjRaderCol__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801976F4___vt__12TObjRaderCol *)&__vt__12TObjRaderCol).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3410;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, s32 *, 0x94) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = 3;
    disallow_rendering__7TObjectFv((void *) (arg0));
    return arg0;
}

void *__dt__12TObjRaderColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjRaderCol;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
