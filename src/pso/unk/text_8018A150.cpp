#include "types.h"
#include "pso/misc/TLazerFenceSw.h"
#include "pso/unk/text_8018A150.h"
#include "pso/player/TUnk_804B6C24.h"
#include "pso/misc/TUnk_804AF8D8.h"
#include "pso/misc/TOAirconCave01.h"

struct RecoveredGlobal_8018A150_lbl_804B6C24 { s32 value; u8 remaining[0x148]; };

extern "C" {
u8 * construct_actor_base__10TObjPlayerFPvPv(void *);
extern RecoveredGlobal_8018A150_lbl_804B6C24 lbl_804B6C24;
extern s32 lbl_805D32E8;
extern const f32 lbl_805DBCF4;
extern const f32 lbl_805DBD00;
extern const f32 lbl_805DBD04;
extern const f32 lbl_805DBD08;
#pragma push
#pragma fp_contract on
u8 *init_container_base(u8 *arg0, s32 arg1, s32 arg2) {
    construct_actor_base__10TObjPlayerFPvPv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804B6C24.value;
    ((TUnk_804AF8D8 *)(arg0 + 0x340))->init_vtable_804AF8D8();
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D32E8;
    ((TUnk_804B6C24 *)(arg0))->apply_object_set_data((void *)arg2);
    *(f32 *)((s8 *)arg0 + 0x334) = (f32) lbl_805DBD00;
    ((TUnk_804B6C24 *)arg0)->m_338 = (f32) lbl_805DBD04;
    *(f32 *)((s8 *)arg0 + 0x33C) = (f32) lbl_805DBD00;
    if (((TUnk_804B6C24 *)arg0)->scale > lbl_805DBCF4) {
        ((TUnk_804B6C24 *)arg0)->m_360 = 1;
    } else {
        ((TUnk_804B6C24 *)arg0)->m_360 = 0;
    }
    ((TUnk_804AF8D8 *)(arg0 + 0x340))->sub_80156CEC();
    TLazerFenceSw__sub_8018A554((arg0 + 0x340), lbl_805DBD08);
    ((TUnk_804B6C24 *)arg0)->m_364 = 0;
    return arg0;
}
#pragma pop

}
