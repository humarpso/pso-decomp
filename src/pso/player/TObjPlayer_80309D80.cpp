#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjPlayer__sub_8030A2CC(void* p, void* a1, void* a2);
int TObjEneDellBiter__sub_80087350(void*, void*);
void TObjPlayer__sub_8030A2CC(void* p, void* a1, void* a2);
void *__nw__7TObjectFUl(int);
void *TPlyPtclObjectRightHand__ct(void *, void *);
void TObjPlayer__sub_8030A030(void *arg0, void *arg1);
void *__nw__7TObjectFUl(int);
void *TPlyPtclObjectLeftHand__ct(void *, void *);
void TObjPlayer__sub_8030A07C(void *arg0, void *arg1);
}

extern "C" {

struct VOff_80309DD0_arg0_80309dd0_80309D80 { char pad_0[0x4]; char f_4[1]; };

s32 TObjPlayer__sub_80309E4C(s32 arg0, s16 arg1);
int TObjPlayer__sub_80309F30(void);
int TObjPlayer__sub_80309F78(void);
int TObjPlayer__sub_80309FD4(void);
int TObjPlayer__sub_8030A150(void);
s32 check_hit_by_id_431__10TObjPlayerFPvi(void* p, int a1);
s32 check_hit_by_id__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void clear_foot_stamp__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 dt_follow_particle_ctrl__10TObjPlayerFis(s32 arg0, s16 arg1);
void enable_foot_stamp__10TObjPlayerFii(s32 arg1, s32 arg2);
void* init_follow_particle_ctrl__10TObjPlayerFPv(void* p);
void update_child__10TObjPlayerFPvPv(void *arg0, void *arg1);
void update_follow_particle__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 TOSwitchAttack__sub_80087278(s32, s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_80087638(s32, s32);
u32 TPhotonMylla__sub_80154CB4(s32);
int TPlyFollowParticleCtrl__sub_8030A694(void*);
s32 __dl__FPv(s32 a0 = 0);
s32 __dt__22TPlyFollowParticleCtrlFis(s32 a0 = 0, s32 a1 = 0);
M2C_UNK create__16TPlayerFootStampFPvPv(s32, M2C_UNK);
s32 obj_getField1c(void *);
M2C_UNK set_type__22TPlyFollowParticleCtrlFPvs(void *, void *);

void enable_foot_stamp__10TObjPlayerFii(s32 arg1, s32 arg2) {
    create__16TPlayerFootStampFPvPv(arg2, 1);
}

void clear_foot_stamp__10TObjPlayerFii(s32 arg0, s32 arg1) {
    create__16TPlayerFootStampFPvPv(arg1, 0);
}

void update_child__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    struct VOff_80309DD0_arg0_80309dd0_80309D80 *self = (struct VOff_80309DD0_arg0_80309dd0_80309D80 *)arg0;
    TObjPlayer__sub_8030A07C((void *)((void *)(self->f_4)), (void *)(arg1));
    TObjPlayer__sub_8030A030((void *)((void *)(self->f_4)), (void *)((void *)(arg1)));
}

void update_follow_particle__10TObjPlayerFii(s32 arg0, s32 arg1) {
    set_type__22TPlyFollowParticleCtrlFPvs((void *) (arg0), (void *) (obj_getField1c((void *) (arg1))));
}

s32 TObjPlayer__sub_80309E4C(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        dt_follow_particle_ctrl__10TObjPlayerFis((s32)(arg0 + 4), (s16)(-1));
        if (arg1 > 0) {
            __dl__FPv((s32)(arg0));
        }
    }
    return arg0;
}

s32 check_hit_by_id_431__10TObjPlayerFPvi(void* p, int a1) { return check_hit_by_id__10TObjPlayerFiii((s32)(p), (s32)(a1), (s32)(431)); }

int TObjPlayer__sub_80309F30(void) { return 0; }
int TObjPlayer__sub_80309F78(void) { return 0; }
int TObjPlayer__sub_80309FD4(void) { return 0; }

void TObjPlayer__sub_8030A030(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TPlyPtclObjectRightHand__ct(o, arg1);
    }
    M2C_FIELD(arg0, void **, 0x4) = o;
}

void TObjPlayer__sub_8030A07C(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TPlyPtclObjectLeftHand__ct(o, arg1);
    }
    M2C_FIELD(arg0, void **, 0x0) = o;
}

s32 dt_follow_particle_ctrl__10TObjPlayerFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__22TPlyFollowParticleCtrlFis(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv((s32)(arg0));
        }
    }
    return arg0;
}
void* init_follow_particle_ctrl__10TObjPlayerFPv(void* p) { TPlyFollowParticleCtrl__sub_8030A694(p); *(int*)(p) = 0; *(int*)((char*)p + 0x4) = 0; return p; }

int TObjPlayer__sub_8030A150(void) { return 0; }

s32 check_hit_by_id__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    u32 temp_r3_2;

    temp_r3_2 = TPhotonMylla__sub_80154CB4(arg1);
    if (temp_r3_2 == 0U) {
        return 0;
    }
    temp_r3 = TOSwitchAttack__sub_80087278(temp_r3_2 + 0x74, arg2, 0x50);
    if (temp_r3 != 0) {
        TObjPlayer__sub_80087638(temp_r3, arg1);
    }
    return temp_r3;
}

void TObjPlayer__sub_8030A2CC(void* p, void* a1, void* a2) { TObjEneDellBiter__sub_80087350(a1, a2); }

}
