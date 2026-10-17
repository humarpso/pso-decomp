#include "types.h"
#include "pso/unk/TObjEneDellBiter_Eff_TpAbsorb1.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/unk/text_80302F6C.h"
#include "pso/player/TUnk_804928CC.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void __dl__7TObjectFPv(void *);
extern s32 lbl_804E6AF8[];

void *__dt__30TObjEneDellBiter_Eff_TpAbsorb1Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E6AF8;
        if (((TObjEneDellBiter_Eff_TpAbsorb1 *)arg0)->m_cc != NULL) { queue_destruction__7TObjectFv(((TObjEneDellBiter_Eff_TpAbsorb1 *)arg0)->m_cc); }
        ((TUnk_804928CC *)arg0)->destroy_enemy_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
