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

struct Col_8019750C { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0x4C]; f32 f90; s32 f94; u8 pad98[4]; s32 f9C; };

struct Ply_8019750C { u8 pad0[0x38]; f32 pos[3]; };

extern "C" {
s32 disallow_rendering__7TObjectFv(void *);
s32 TPhotonMagicSquare__sub_801A2640(void *);
extern M2C_UNK __vt__12TObjRaderCol[];
extern s32 lbl_805D3410;
u8 *TObjRaderCol__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void queue_destruction__7TObjectFv(void *);
f32 xz_distance_squared(void *, void *);
int test_flag_2000000__10TObjPlayerFPv(void *);
Ply_8019750C *get_player_by_client_id(s32);
void TRaderMapCore__sub_801F9CB8(s16);
void TObjRaderCol__sub_8019750C(Col_8019750C *arg0);
extern s32 lbl_805D53A0;
}

extern "C" {

void *__dt__12TObjRaderColFv(void *arg0, s16 arg1);
void render__12TObjRaderColFv(void);
void run_task__12TObjRaderColFv(void *arg0);
void TObjRaderCol__sub_801975DC(void *);
M2C_UNK TRaderMapCore__sub_801F9C54(s16);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
s32 is_not_split_screen__13TRaderMapCoreFv();

void render__12TObjRaderColFv(void) {  }

void TObjRaderCol__sub_8019750C(Col_8019750C *arg0) {
    s32 found;
    s32 i;
    s32 j;
    Ply_8019750C *p;
    found = 0;
    for (i = 0; i < 4; i++) {
        p = get_player_by_client_id(i);
        if (p != 0 && test_flag_2000000__10TObjPlayerFPv(p) != 0) {
            found = 1;
        }
    }
    if (found == 0) {
        if (arg0->f9C > 0) {
            arg0->f9C--;
        } else {
            for (j = 0; j < 4; j++) {
                p = get_player_by_client_id(j);
                if (p != 0 && xz_distance_squared(p->pos, arg0->pos) < arg0->f90 * arg0->f90) {
                    TRaderMapCore__sub_801F9CB8(arg0->f94);
                    queue_destruction__7TObjectFv(arg0);
                    return;
                }
            }
        }
    }
}

#define arg0 ((Col_8019750C *)arg0_)
void TObjRaderCol__sub_801975DC(void *arg0_) {
    Ply_8019750C *p = get_player_by_client_id(lbl_805D53A0);
    if (p != 0) {
        if (test_flag_2000000__10TObjPlayerFPv(p) != 0) {
            return;
        }
    } else {
        return;
    }
    s32 t = arg0->f9C;
    if (t > 0) {
        arg0->f9C = t - 1;
        return;
    }
    if (p != 0) {
        if (xz_distance_squared(p->pos, arg0->pos) < arg0->f90 * arg0->f90) {
            TRaderMapCore__sub_801F9CB8((s16)arg0->f94);
            queue_destruction__7TObjectFv(arg0);
        }
    }
}
#undef arg0

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
            TObjRaderCol__sub_8019750C((Col_8019750C *)((void *)(arg0)));
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
