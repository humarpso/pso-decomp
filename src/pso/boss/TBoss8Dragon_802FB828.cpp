#include "types.h"
struct Eff_802FB828 { u32 w[5]; };

extern "C" {
s32 fn_8002B094(s32);
s32 spawn_particle_effect_with_flags(void *, void *, s32);
s32 reset_hp__9TObjEneDDFPv(void *, s32, s32, s32);
s32 emit_effect__12TBoss8DragonFPv(void *, void *, void *, s32);
extern Eff_802FB828 lbl_80474AA4;
extern s32 TBoss8Dragon__data_80541DC8[];
void TBoss8Dragon__sub_802FB828(u8 *arg0, s32 arg1);
}

extern "C" {

void TBoss8Dragon__sub_802FB828(u8 *arg0, s32 arg1) {
    Eff_802FB828 eff = lbl_80474AA4;
    u8 *a;
    u8 *b;
    fn_8002B094(*(s32 *)(arg0 + 0x680));
    if (arg1 == 0) {
        a = arg0 + 0x470;
        b = arg0 + 0x47C;
    } else {
        a = arg0 + 0x458;
        b = arg0 + 0x464;
    }
    reset_hp__9TObjEneDDFPv(arg0, 0, TBoss8Dragon__data_80541DC8[0], 0);
    emit_effect__12TBoss8DragonFPv(arg0, a, &eff, *(s32 *)(arg0 + 0x680));
    emit_effect__12TBoss8DragonFPv(arg0, b, &eff, *(s32 *)(arg0 + 0x680));
    reset_hp__9TObjEneDDFPv(arg0, 0, TBoss8Dragon__data_80541DC8[0], 0);
    spawn_particle_effect_with_flags(b, *(void **)(*(u8 **)(arg0 + 0x760) + 0x10), 0x40);
}

}
