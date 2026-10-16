#include "types.h"
#include "pso/misc/TPlyPhotonChair.h"

extern "C" {
u8 TBoss1Dragon__sub_80143960(u8 *arg0, s32 arg1);
void set_motion_interpolation_flag(u8 *arg0);
}

extern "C" {

void *TPlyPhotonChair__sub_801438E0(void *arg0, s16 arg1);
s32 TPlyPhotonChair__sub_80143930(void* p);
s32 __dl__FPv(void *);

extern s32 lbl_804A7478[];

void *TPlyPhotonChair::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 * *)&this->m_flags = lbl_804A7478;
        TPlyPhotonChair__sub_801438E0((void *)(this), (s16)(0));
        if (arg1 > 0) {
            __dl__FPv(this);
        }
    }
    return this;
}

extern s32 lbl_804A7488[];

void *TPlyPhotonChair__sub_801438E0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 4) = lbl_804A7488;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

f32 TPlyPhotonChair::get_float_c() { return *(f32 *)&this->m_next; }

s32 TPlyPhotonChair__sub_80143930(void* p) { return *(s32*)((char*)p + 0x8); }
s32 TPlyPhotonChair::get_id() { return *(s32 *)&this->m_name; }
void TPlyPhotonChair::activate() { *(s32*)((char*)this + 0x18) = 1; }

void set_motion_interpolation_flag(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = *(u8 **)((s8 *)arg0 + 0xF8);
    *(u16 *)((s8 *)temp_r3 + 0xA) = (u16) (*(u16 *)((s8 *)temp_r3 + 0xA) | 0x80);
}

u8 TBoss1Dragon__sub_80143960(u8 *arg0, s32 arg1) {
    return (u8) ((*(s32 *)((s8 *)arg0 + 0xB0) & arg1) != 0);
}

}
