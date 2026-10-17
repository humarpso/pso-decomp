#include "types.h"
#include "pso/misc/TPlyPhotonChair_80143888.h"
#include "pso/system/memory.h"
#include "pso/misc/TUnk_804A7478.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TPlyPhotonChair.h"

extern "C" {

extern s32 lbl_804A7478[];

void *TUnk_804A7478::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 * *)&(*(u16 *)((u8 *)this + 0x4)) = lbl_804A7478;
        __dt__13TUnk_804A7488Fv(this, (s16)(0));
        if (arg1 > 0) {
            ::operator delete(this);
        }
    }
    return this;
}

extern s32 lbl_804A7488[];

void *__dt__13TUnk_804A7488Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 4) = lbl_804A7488;
        if (arg1 > 0) {
            ::operator delete(arg0);
        }
    }
    return arg0;
}

f32 TPlyPhotonChair::get_float_c() { return *(f32 *)&this->m_next; }

s32 TPlyPhotonChair__sub_80143930(void* p) { return *(s32*)((char*)p + 0x8); }
s32 TPlyPhotonChair::get_id() { return *(s32 *)&this->m_name; }
void TPlyPhotonChair::activate() { *(s32*)((char*)this + 0x18) = 1; }

void TObjMotion::set_motion_interpolation_flag() {
    u8 *temp_r3;
    temp_r3 = *(u8 * *)&this->unknownF8;
    *(u16 *)((s8 *)temp_r3 + 0xA) = (u16) (*(u16 *)((s8 *)temp_r3 + 0xA) | 0x80);
}

u8 TObjMotion::sub_80143960(s32 arg1) {
    return (u8) ((this->animationFlags & arg1) != 0);
}

}
