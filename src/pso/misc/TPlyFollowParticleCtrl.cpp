#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int TPlyFollowParticleCtrl__vt7(void);
void set_type__22TPlyFollowParticleCtrlFPvs(void* p, s16 v);
s32 __dt__22TPlyFollowParticleCtrlFis(s32 arg0, s16 arg1);
void TPlyFollowParticleCtrl__sub_8030A694(void);
u16 get_lifetime__22TPlyFollowParticleCtrlFPv(void* p);

int __dl__FPv();

void set_type__22TPlyFollowParticleCtrlFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
s32 __dt__22TPlyFollowParticleCtrlFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void TPlyFollowParticleCtrl__sub_8030A694(void) {  }
u16 get_lifetime__22TPlyFollowParticleCtrlFPv(void* p) { return *(u16*)((char*)p + 0xac); }
int TPlyFollowParticleCtrl__vt7(void) { return 0; }

}
#else
#if PSO_CLASS_PACKAGE == 0x8030A50C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_if_inactive__22TPlyFollowParticleCtrlFi(s32 arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 get_lifetime__22TPlyFollowParticleCtrlFPv();
M2C_UNK queue_destruction__7TObjectFv(s32);

void destroy_if_inactive__22TPlyFollowParticleCtrlFi(s32 arg0) {
    if (TPlayerBattleCtrl4P__sub_801BA74C((u16) get_lifetime__22TPlyFollowParticleCtrlFPv()) == 0U) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030A550
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TPlyFollowParticleCtrlFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_80154A00(void *);
void clear_obj_links(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

extern M2C_UNK __vt__22TPlyFollowParticleCtrl[];

void *__dt__22TPlyFollowParticleCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TPlyFollowParticleCtrl;
        TObjPlayer__sub_80154A00(arg0);
        clear_obj_links(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
