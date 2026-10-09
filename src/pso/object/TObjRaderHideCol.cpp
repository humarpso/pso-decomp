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

struct RecoveredGlobal_80197490___vt__16TObjRaderHideCol {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct Pl_801973B0 { u8 pad0[0x38]; f32 pos[3]; };

struct Hide_801973B0 { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0x4C]; f32 f90; s32 f94; };

extern "C" {
s32 disallow_rendering__7TObjectFv(void *);
s32 TPhotonMagicSquare__sub_801A2640(void *);
extern M2C_UNK __vt__16TObjRaderHideCol[];
extern s32 lbl_805D3414;
u8 *TObjRaderHideCol__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
f32 xyz_distance_squared(void *, void *);
Pl_801973B0 *get_player_by_client_id(s32);
void hide_radar__13TRaderMapCoreFv();
void show_radar__13TRaderMapCoreFv();
extern s32 local_client_id;
void run_task__16TObjRaderHideColFv(Hide_801973B0 *arg0);
}

extern "C" {

void *__dt__16TObjRaderHideColFv(void *arg0, s16 arg1);
void render__16TObjRaderHideColFv(void);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

void render__16TObjRaderHideColFv(void) {  }

extern M2C_UNK __vt__16TObjRaderHideCol[];

void run_task__16TObjRaderHideColFv(Hide_801973B0 *arg0) {
    Pl_801973B0 *p = get_player_by_client_id(local_client_id);
    if (p != 0) {
        if (xyz_distance_squared(arg0->pos, p->pos) < arg0->f90 * arg0->f90) {
            if (!(arg0->f94 & 1)) {
                hide_radar__13TRaderMapCoreFv();
                arg0->f94 = 1;
            }
        } else if (arg0->f94 & 1) {
            show_radar__13TRaderMapCoreFv();
            arg0->f94 = 0;
        }
    }
}

void *__dt__16TObjRaderHideColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjRaderHideCol;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80197490___vt__16TObjRaderHideCol_size[sizeof(RecoveredGlobal_80197490___vt__16TObjRaderHideCol) == 0x34 ? 1 : -1];
u8 *TObjRaderHideCol__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80197490___vt__16TObjRaderHideCol *)&__vt__16TObjRaderHideCol).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3414;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    disallow_rendering__7TObjectFv((void *) (arg0));
    return arg0;
}

}
