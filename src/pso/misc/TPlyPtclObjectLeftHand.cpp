#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_PTR18_8030A400 { char pad[0x18]; };
struct VObj_PTR18_8030A400 : VBase_PTR18_8030A400 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62();
    virtual M2C_UNK m63(M2C_UNK, s32);
};

extern "C" {

void *__dt__22TPlyPtclObjectLeftHandFv(void *arg0, s16 arg1);
s32 update_attachment__22TPlyPtclObjectLeftHandFi(s32 arg0);
void *get_player_by_client_id(u16);
void __dl__7TObjectFPv(void *);
void __dt__22TPlyFollowParticleCtrlFv(void *, int);
u16 get_lifetime__22TPlyFollowParticleCtrlFPv();
s32 get_position_ptr__10TObjPlayerFPv(s32);

s32 update_attachment__22TPlyPtclObjectLeftHandFi(s32 arg0) {
    void *temp_r3;

    temp_r3 = get_player_by_client_id((u16) get_lifetime__22TPlyFollowParticleCtrlFPv());
    if (temp_r3 == NULL) {
        return 0;
    }
    ((VObj_PTR18_8030A400 *) temp_r3)->m63(0x23, get_position_ptr__10TObjPlayerFPv(arg0));
    return get_position_ptr__10TObjPlayerFPv(arg0);
}

extern M2C_UNK __vt__22TPlyPtclObjectLeftHand[];

void *__dt__22TPlyPtclObjectLeftHandFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TPlyPtclObjectLeftHand;
        __dt__22TPlyFollowParticleCtrlFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
