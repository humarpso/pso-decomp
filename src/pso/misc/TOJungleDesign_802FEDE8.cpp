#include "types.h"
#include "pso/misc/TOJungleDesign.h"
#pragma fp_contract on

extern "C" {

s32 fn_802FF028(s32);
s32 fn_802FF064(s32);

extern s32 jungle_design_variant_table[];

void TOJungleDesign::init_design_variant() {
    *(s32 *)&this->m_b0 = (s32) this->m_84;
    if ((s32) *(s32 *)&this->m_b0 < 0) {
        *(s32 *)&this->m_b0 = 0;
    }
    if ((s32) *(s32 *)&this->m_b0 > 2) {
        *(s32 *)&this->m_b0 = 2;
    }
    *(s32 *)&this->m_ac = fn_802FF064(jungle_design_variant_table[*(s32 *)&this->m_b0]);
    this->texture_id = fn_802FF028(0);
}

}
