#include "types.h"
#include "pso/boss/TUnk_80484610.h"
#include "pso/unk/text_800480B0.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_800480B0_lbl_80484610 {
    s32 value;
    u8 remaining[0x148];
};

extern "C" {
s32 TBoss3VoloptP02__ct(void *);
u8 *TObjEnemyCustom__ct(u8 *arg0);
extern RecoveredGlobal_800480B0_lbl_80484610 volopt_boss_dispatch_table;
typedef char RecoveredGlobal_800480B0_lbl_80484610_size[sizeof(RecoveredGlobal_800480B0_lbl_80484610) == 0x14C ? 1 : -1];
u8 *fn_800480B0(u8 *arg0, s32 arg1, s32 arg2) {
    TObjEnemyCustom__ct((arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &volopt_boss_dispatch_table.value;
    ((TObjPlayer *)(arg0 + 0x490))->init_and_activate();
    ((TUnk_80484610 *)(arg0))->apply_set_data((void *)arg2);
    TBoss3VoloptP02__ct(arg0);
    return arg0;
}

}
