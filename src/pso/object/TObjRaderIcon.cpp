#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
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

struct RecoveredGlobal_8019733C___vt__13TObjRaderIcon {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
s32 disallow_rendering__7TObjectFv(void *);
s32 TObjRaderIcon__sub_80197200(void *);
s32 TPhotonMagicSquare__sub_801A2640(void *);
extern M2C_UNK __vt__13TObjRaderIcon[];
extern s32 lbl_805D3418;
u8 *TObjRaderIcon__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *TObjRaderIcon__create(void *arg0);
void *__dt__13TObjRaderIconFv(void *arg0, s16 arg1);
void render__13TObjRaderIconFv(void);
int run_task__13TObjRaderIconFv(void);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern void *tl_05;

void *TObjRaderIcon__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xA4);
    if (o != NULL) {
        o = TObjRaderIcon__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

void render__13TObjRaderIconFv(void) {  }

int run_task__13TObjRaderIconFv(void) { return 0; }

extern M2C_UNK __vt__13TObjRaderIcon[];

void *__dt__13TObjRaderIconFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjRaderIcon;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8019733C___vt__13TObjRaderIcon_size[sizeof(RecoveredGlobal_8019733C___vt__13TObjRaderIcon) == 0x34 ? 1 : -1];
u8 *TObjRaderIcon__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8019733C___vt__13TObjRaderIcon *)&__vt__13TObjRaderIcon).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3418;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    TObjRaderIcon__sub_80197200((void *) (arg0));
    disallow_rendering__7TObjectFv((void *) (arg0));
    return arg0;
}

}
