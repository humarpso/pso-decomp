#include "types.h"
#include "pso/misc/TEF_LensFlare.h"

struct Base_8008194C_80081278 { char pad[0x50]; };
struct VObj_8008194C_80081278 : Base_8008194C_80081278 {
    virtual void m0();
    virtual void m1();
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_800818D8_lbl_8048E040 {
    s32 value;
    u8 remaining[0xEC];
};

struct RecoveredGlobal_800818D8_lbl_8048E130 {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
s32 construct_world_actor_base(void *, void *);
extern RecoveredGlobal_800818D8_lbl_8048E040 lens_flare_reflected_element_descriptors;
extern s32 lbl_8048E130[];
extern s32 TEF_LensFlare__class_name;
u8 *TEF_LensFlare__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TEF_LensFlare__sub_80081944(void);
void TEF_LensFlare__sub_80081948(void);
void *__dt_deleting__13TEF_LensFlareFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern s32 lbl_8048E130[];

void *__dt_deleting__13TEF_LensFlareFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_8048E130;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_800818D8_lbl_8048E040_size[sizeof(RecoveredGlobal_800818D8_lbl_8048E040) == 0xF0 ? 1 : -1];
typedef char RecoveredGlobal_800818D8_lbl_8048E130_size[sizeof(RecoveredGlobal_800818D8_lbl_8048E130) == 0x38 ? 1 : -1];
u8 *TEF_LensFlare__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_world_actor_base((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_800818D8_lbl_8048E130 *)&lbl_8048E130).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TEF_LensFlare__class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(s32 **)((s8 *)arg0 + 0x90) = &lens_flare_reflected_element_descriptors.value;
    return arg0;
}

void TEF_LensFlare__sub_80081944(void) {  }
void TEF_LensFlare__sub_80081948(void) {  }

void TEF_LensFlare::dispatch_vt1() {
    struct VObj_8008194C_80081278 *o = (struct VObj_8008194C_80081278 *)*(void **)((s8 *)this + 0x1C);
    o->m1();
}

}
