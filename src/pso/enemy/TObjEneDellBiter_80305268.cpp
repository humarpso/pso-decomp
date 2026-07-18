#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_80305268 { char pad[0x18]; };
struct VObj_80305268 : VBase_80305268 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79(); virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91(); virtual void m92();
    virtual void m93();
};

extern "C" {

void handle_movement_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
M2C_UNK TObjEneEpsilon__sub_800B96A4(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);

extern const f64 TObjEneDellBiter__data_80475328;
extern const f32 TObjEneDellBiter__data_805DF00C;

void handle_movement_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (1));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 1);
        ((VObj_80305268 *) arg0)->m93();
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x50));
        return;
    case 3:
        if (update_linked_position__14TObjEneEpsilonFPv((f32) (TObjEneDellBiter__data_805DF00C)) != 0) {
            TObjEneEpsilon__sub_800B96A4((void *) (arg0));
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (TObjEneDellBiter__data_80475328 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8))));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4BC) == 1) {
                TObjEneDD__sub_800BBA18((void *) (arg0), (int) (3));
                return;
            }
            TObjEneDD__sub_800BBA18((void *) (arg0), (int) (2));
        } else {
        case 5:
        case 0:
            return;
        }
        break;
    }
}

}
