#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase_8017CED8 { char pad[0x18]; };
struct VObj_8017CED8 : VObjBase_8017CED8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
void TObjPlayer__sub_8019D250(void *);
extern const f32 lbl_805DBAC0;
extern const f32 lbl_805DBAC4;
void run_task__18TObjMapWarpAncientFv(u8 *arg0);
}

extern "C" {

void *TObjMapWarpAncient__create(void *arg0);
void render__18TObjMapWarpAncientFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
void *TObjMapWarpAncient__ct(void *, void *, void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *tl_05;

void *TObjMapWarpAncient__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x11C);
    if (o != NULL) {
        o = TObjMapWarpAncient__ct(o, tl_05, arg0);
    }
    return o;
}

extern const f32 lbl_805DBAB8;
extern const f32 lbl_805DBABC;

void render__18TObjMapWarpAncientFv(u8 *arg0) {
    if (((VObj_8017CED8*)arg0)->m8(lbl_805DBAB8, lbl_805DBABC) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        begin_effect_render__13TParticleCtrlFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x88) >= 0) {
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x10C));
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0x100), M2C_FIELD(arg0, s32 *, 0x118), M2C_FIELD(arg0, f32 *, 0xFC));
        }
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x110));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x104));
        end_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x114));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x108));
        TObjPlayer__sub_803D9B78();
    }
}
void run_task__18TObjMapWarpAncientFv(u8 *arg0) {
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x88)))) >= 0)
  {
    *((f32 *) (((s8 *) arg0) + 0xFC)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xFC))) + lbl_805DBAC0);
    if (((f32) (((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0x118)))) + 4))) - 1) & 0xFFFFFFFFu)) < (*((f32 *) (((s8 *) arg0) + 0xFC))))
    {
      *((f32 *) (((s8 *) arg0) + 0xFC)) = (f32) lbl_805DBAC4;
    }
    TObjPlayer__sub_8019D250(arg0);
  }
}

}
