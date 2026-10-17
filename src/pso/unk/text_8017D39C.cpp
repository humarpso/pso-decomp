#include "types.h"
#include "pso/unk/text_8017D39C.h"
#include "pso/misc/TOWreckAncientBrakable05.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8017D39C_lbl_804B5418 {
    s32 value;
    u8 remaining[0x130];
};

struct RecoveredGlobal_8017D39C___vt__24TOWreckAncientBrakable05 {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
s32 init_collision_body_parts(void *, void *, int);
s32 TOWreckAncientBrakable__ct(void *, int);
extern RecoveredGlobal_8017D39C_lbl_804B5418 TOWreckAncient__collision_body_templates;
extern RecoveredGlobal_8017D39C___vt__24TOWreckAncientBrakable05 __vt__24TOWreckAncientBrakable05;
extern s32 TOWreckAncientBrakable05__name;
typedef char RecoveredGlobal_8017D39C_lbl_804B5418_size[sizeof(RecoveredGlobal_8017D39C_lbl_804B5418) == 0x134 ? 1 : -1];
typedef char RecoveredGlobal_8017D39C___vt__24TOWreckAncientBrakable05_size[sizeof(RecoveredGlobal_8017D39C___vt__24TOWreckAncientBrakable05) == 0x38 ? 1 : -1];
u8 *TOWreckAncientBrakable05__ct(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    TOWreckAncientBrakable__ct(arg0, 3);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__24TOWreckAncientBrakable05.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOWreckAncientBrakable05__name;
    ((TOWreckAncientBrakable05 *)(arg0))->apply_object_set_data((void *)arg1);
    init_collision_body_parts(arg0, (void *) ((u8 *)&TOWreckAncient__collision_body_templates.value + 0x84), 1);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    *(s32 *)&((TOWreckAncientBrakable05 *)arg0)->m_b8 = (s32) ((TOWreckAncientBrakable05 *)arg0)->m_84;
    temp_r0 = *(s32 *)&((TOWreckAncientBrakable05 *)arg0)->m_b8;
    if ((temp_r0 < 0) || (temp_r0 >= 0x100)) {
        *(s32 *)&((TOWreckAncientBrakable05 *)arg0)->m_b8 = -1;
    }
    return arg0;
}

}
