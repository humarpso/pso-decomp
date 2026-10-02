#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Light_80191F90 { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0x18]; f32 rot[3]; u8 pad68[0x28]; f32 f90; void *f94; };

struct Ply_80191F90 { u8 pad0[0x38]; f32 pos[3]; };

extern "C" {
s32 TObjPlayer__sub_80019248(void *);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
void queue_destruction__7TObjectFv(void *);
void copy_vec3__11TBoss4Type2FPvPv(void *, void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 fn_800FD930();
f32 xz_distance_squared(void *, void *);
Ply_80191F90 *get_player_by_client_id(s32);
void fn_8020C408(void *, s32);
void run_task__13TObjItemLightFv(Light_80191F90 *arg0);
}

extern "C" {

struct VObjItemLight_80192060 {
    char pad[0x18];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(s32);
};

u8 *TObjItemLight__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void *__dt__13TObjItemLightFv(void *arg0, s16 arg1);
s32 TObjParticle__sub_800870BC(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TPhotonMagicSquare__sub_801A2640();
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void request_destroy__11TBoss4Type2FUi(void *);

extern M2C_UNK __vt__13TObjItemLight[];

void run_task__13TObjItemLightFv(Light_80191F90 *arg0) {
    s32 i;
    Ply_80191F90 *p;
    if (arg0->f94 != 0) {
        copy_pos__11TNowLoadingFPvPv(arg0->f94, arg0->pos);
        copy_vec3__11TBoss4Type2FPvPv(arg0->f94, arg0->rot);
    }
    if (fn_800FD930() != 0) {
        return;
    }
    for (i = 0; i < 4; i++) {
        p = get_player_by_client_id(i);
        if (p != 0 && get_field_3e4__10TObjPlayerFPv(p) == get_current_floor()
            && TObjPlayer__sub_80019248(p) != 0
            && xz_distance_squared(p->pos, arg0->pos) < arg0->f90 * arg0->f90) {
            fn_8020C408(arg0, 8);
            queue_destruction__7TObjectFv(arg0);
            return;
        }
    }
}

void *__dt__13TObjItemLightFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjItemLight;
        if (M2C_FIELD(arg0, void **, 0x94) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x94)); M2C_FIELD(arg0, M2C_UNK *, 0x94) = 0; }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__13TObjItemLight[];
extern s32 lbl_805D3390;
extern const f32 lbl_805DBE40;
extern const f32 lbl_805DBE44;

u8 *TObjItemLight__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjItemLight;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3390;
    ((VObjItemLight_80192060 *)arg0)->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    if (M2C_FIELD(arg0, f32 *, 0x90) < lbl_805DBE40) {
        M2C_FIELD(arg0, f32 *, 0x90) = (f32) lbl_805DBE44;
    }
    M2C_FIELD(arg0, s32 *, 0x94) = TObjParticle__sub_800870BC(arg0 + 0x38, arg0 + 0x5C, 0x1CA, 0x40);
    return arg0;
}

}
