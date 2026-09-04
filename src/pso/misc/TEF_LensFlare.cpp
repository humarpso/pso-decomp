#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct Base_8008194C_80081278 { char pad[0x50]; };
struct VObj_8008194C_80081278 : Base_8008194C_80081278 {
    virtual void m0();
    virtual void m1();
};

extern "C" {

void TEF_LensFlare__sub_80081944(void);
void TEF_LensFlare__sub_80081948(void);
void *__dt_deleting__13TEF_LensFlareFPvs(void *arg0, s16 arg1);
void dispatch_vt1__13TEF_LensFlareFPv(void *arg0);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK lbl_8048E130[];

void *__dt_deleting__13TEF_LensFlareFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E130;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TEF_LensFlare__sub_80081944(void) {  }
void TEF_LensFlare__sub_80081948(void) {  }

void dispatch_vt1__13TEF_LensFlareFPv(void *arg0) {
    struct VObj_8008194C_80081278 *o = (struct VObj_8008194C_80081278 *)M2C_FIELD(arg0, void **, 0x1C);
    o->m1();
}

}
