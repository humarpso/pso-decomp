#include "types.h"
#include "pso/boss/TBoss3VoloptP02.h"
#include "pso/unk/text_800480B0.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_800480B0_lbl_80484610 {
    s32 value;
    u8 remaining[0x148];
};

extern "C" {
u8 *TObjEnemyCustom__ct(u8 *arg0);
extern RecoveredGlobal_800480B0_lbl_80484610 __vt__15TBoss3VoloptP02;
typedef char RecoveredGlobal_800480B0_lbl_80484610_size[sizeof(RecoveredGlobal_800480B0_lbl_80484610) == 0x14C ? 1 : -1];
TBoss3VoloptP02 *fn_800480B0(TBoss3VoloptP02 *self, TObject *parent, void *set_data) {
    TObjEnemyCustom__ct((u8 *)self);
    *(s32 **)((s8 *)self + 0x18) = &__vt__15TBoss3VoloptP02.value;
    ((TObjPlayer *)&self->fade)->init_and_activate();
    self->apply_set_data(set_data);
    self->init_params();
    return self;
}

}
