#include "types.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_80153FD0___vt__16TObjFogCollision {
    s32 value;
    u8 remaining[0x3C];
};

extern "C" {
s32 disallow_rendering__7TObjectFv(void *);
s32 construct_world_actor_base(void *);
extern s32 __vt__16TObjFogCollision[];
extern s32 lbl_805D2E78;
u8 *TObjFogCollision__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *TObjFogCollision__create(void *arg0);
void *__dt__16TObjFogCollisionFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern s32 __vt__16TObjFogCollision[];

void *__dt__16TObjFogCollisionFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjFogCollision;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_80153FD0___vt__16TObjFogCollision_size[sizeof(RecoveredGlobal_80153FD0___vt__16TObjFogCollision) == 0x40 ? 1 : -1];
u8 *TObjFogCollision__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_world_actor_base((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80153FD0___vt__16TObjFogCollision *)&__vt__16TObjFogCollision).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2E78;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x90) = 0;
    *(s32 *)((s8 *)arg0 + 0x94) = 0;
    disallow_rendering__7TObjectFv((void *) (arg0));
    return arg0;
}

void *TObjFogCollision__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = TObjFogCollision__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

}
