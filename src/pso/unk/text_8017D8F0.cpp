#include "types.h"
#include "pso/misc/TOWreckAncient06.h"
#include "pso/unk/text_8017D8F0.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8017D8F0_lbl_804B5418 {
    s32 value;
    u8 remaining[0x130];
};

struct RecoveredGlobal_8017D8F0___vt__16TOWreckAncient06 {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
u32 init_collision_body_parts(void *, s32, s32);
u8 *TOWreckAncient__ct(u8 *arg0, s32 arg1);
extern RecoveredGlobal_8017D8F0_lbl_804B5418 TOWreckAncient__collision_body_templates;
extern RecoveredGlobal_8017D8F0___vt__16TOWreckAncient06 __vt__16TOWreckAncient06;
extern s32 TOWreckAncient06__name;
typedef char RecoveredGlobal_8017D8F0_lbl_804B5418_size[sizeof(RecoveredGlobal_8017D8F0_lbl_804B5418) == 0x134 ? 1 : -1];
typedef char RecoveredGlobal_8017D8F0___vt__16TOWreckAncient06_size[sizeof(RecoveredGlobal_8017D8F0___vt__16TOWreckAncient06) == 0x38 ? 1 : -1];
u8 *TOWreckAncient06__ct(u8 *arg0, s32 arg1) {
    TOWreckAncient__ct(arg0, 6);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__16TOWreckAncient06.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOWreckAncient06__name;
    ((TOWreckAncient06 *)(arg0))->apply_object_set_data((void *)arg1);
    init_collision_body_parts(arg0, (s32) ((u8 *)&TOWreckAncient__collision_body_templates.value + 0x108), 1);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    return arg0;
}

}
