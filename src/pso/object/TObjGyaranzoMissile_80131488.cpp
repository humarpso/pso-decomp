// ---- pso/object/TObjGyaranzoMissile_80131100
#include "types.h"
#include "pso/item/TItemEquipVariant_80120CF8.h"
#include "pso/object/TObjGyaranzoMissile_80131100.h"
#include "pso/unk/text_80087278.h"
#include "pso/unk/TUnk_804A6CC8.h"
#include "pso/player/TObjPlayer.h"
#include "pso/object/TUnk_804A6DC0.h"


struct Ent_80131488 { void *p; s32 a; s32 b; };

struct Obj_80131488 { Ent_80131488 *ents; u32 count; };

extern "C" {
    
    
f32 vec_squared_length();
f32 newton_sqrtf();


extern u8 lbl_80506250[];
void TObjGyaranzoMissile__sub_80131488(Obj_80131488 *self);
}
#include "pso/object/TObjGyaranzoMissile.h"
void TObjGyaranzoMissile__sub_80131488(Obj_80131488 *self) {
    u32 i;
    for (i = 0; i < self->count; i++) {
        self->ents[i].p = lbl_80506250;
    }
}

f32 TObjGyaranzoMissile::scale_velocity(f32 farg0) {
    f32 temp_f1;
    f32 temp_f2;
    if (vec_squared_length() > 1e-05f) {
        temp_f1 = newton_sqrtf();
        temp_f2 = farg0 / temp_f1;
        *(f32 *)&this->m_name = (f32) (*(f32 *)&this->m_name * temp_f2);
        *(f32 *)&this->m_flags = (f32) (*(f32 *)&this->m_flags * temp_f2);
        *(f32 *)&this->m_prev = (f32) (*(f32 *)&this->m_prev * temp_f2);
        return temp_f1;
    }
    return 0.0f;
}

#pragma push
#pragma fp_contract on
void TObjPlayer::horizontal_distance(u8 *arg1) {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    temp_f2 = *(f32 *)((s8 *)arg0 + 0);
    temp_f3 = *(f32 *)((s8 *)arg0 + 8) - *(f32 *)((s8 *)arg1 + 8);
    temp_f1 = temp_f2 - *(f32 *)((s8 *)arg1 + 0);
    ((f32 (*)(f32, f32, f32))newton_sqrtf)((temp_f1 * temp_f1) + (temp_f3 * temp_f3), temp_f2, temp_f3);
}
#pragma pop
