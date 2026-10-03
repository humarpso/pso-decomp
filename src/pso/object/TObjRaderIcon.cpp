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

struct Icon_80197110 { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0x1C]; s32 f60; u8 pad64[0x2C]; s32 f90; s32 f94; s32 f98; f32 f9C; u32 fA0; };

extern "C" {
s32 disallow_rendering__7TObjectFv(void *);
s32 TPhotonMagicSquare__sub_801A2640(void *);
extern M2C_UNK __vt__13TObjRaderIcon[];
extern s32 lbl_805D3418;
u8 *TObjRaderIcon__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void TObjRaderIcon__sub_801F9914(void *, u32, u16, s32, s32, f32);
u8 is_current_floor_switch_set(u16);
void run_task__13TObjRaderIconFv(Icon_80197110 *arg0);
extern const f32 lbl_805DBF08;
void TObjRaderIcon__sub_80197200(u8 *arg0);
}

extern "C" {

void *TObjRaderIcon__create(void *arg0);
void *__dt__13TObjRaderIconFv(void *arg0, s16 arg1);
void render__13TObjRaderIconFv(void);
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

extern M2C_UNK __vt__13TObjRaderIcon[];

void run_task__13TObjRaderIconFv(Icon_80197110 *arg0) {
    s32 all;
    s32 i;
    switch (arg0->f90) {
    case 0:
        all = 1;
        for (i = 0; i < arg0->f94; i++) {
            if (is_current_floor_switch_set(arg0->f98 + i) == 0) {
                all = 0;
            }
        }
        if (all == 1) {
            TObjRaderIcon__sub_801F9914(arg0->pos, 0xFF00FF00, arg0->f60, 0, 0, arg0->f9C);
        } else {
            TObjRaderIcon__sub_801F9914(arg0->pos, 0xFFFF0000, arg0->f60, 0, 0, arg0->f9C);
        }
        break;
    case 1:
        TObjRaderIcon__sub_801F9914(arg0->pos, arg0->fA0, arg0->f60, 0, 0, arg0->f9C);
        break;
    }
}

void TObjRaderIcon__sub_80197200(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 1;
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) lbl_805DBF08;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x90) < 0) {
        M2C_FIELD(arg0, s32 *, 0x90) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x90) > 1) {
        M2C_FIELD(arg0, s32 *, 0x90) = 1;
    }
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    if (M2C_FIELD(arg0, f32 *, 0x9C) < 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x9C) = 0.0f;
    }
    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) M2C_FIELD(arg0, s32 *, 0x8C);
    M2C_FIELD(arg0, s32 *, 0x94) = (s32) (u16) ((s32) M2C_FIELD(arg0, s32 *, 0x88) >> 0x10);
    M2C_FIELD(arg0, s32 *, 0x98) = (s32) (u16) M2C_FIELD(arg0, s32 *, 0x88);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x94) < 0) {
        M2C_FIELD(arg0, s32 *, 0x94) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x94) > 0xC) {
        M2C_FIELD(arg0, s32 *, 0x94) = 0xC;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x98) < 0) {
        M2C_FIELD(arg0, s32 *, 0x98) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x98) > 0xFF - M2C_FIELD(arg0, s32 *, 0x94)) {
        M2C_FIELD(arg0, s32 *, 0x98) = 0xFF - M2C_FIELD(arg0, s32 *, 0x94);
    }
}

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
    TObjRaderIcon__sub_80197200((u8 *)((void *) (arg0)));
    disallow_rendering__7TObjectFv((void *) (arg0));
    return arg0;
}

}
