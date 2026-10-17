#include "types.h"
#include "pso/player/TUnk_804928CC.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_800BC4C8_lbl_804928A0 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_800BC4C8_lbl_804928CC {
    s32 value;
    u8 remaining[0x58];
};

extern "C" {
s32 init_collision_body_parts(void *, void *, int);
extern RecoveredGlobal_800BC4C8_lbl_804928A0 construct_collision_body_parts;
extern RecoveredGlobal_800BC4C8_lbl_804928CC collision_body_vtable;
u8 *construct_collision_body(u8 *arg0, s32 arg1, u32 arg2);
typedef char RecoveredGlobal_800BC4C8_lbl_804928A0_size[sizeof(RecoveredGlobal_800BC4C8_lbl_804928A0) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_800BC4C8_lbl_804928CC_size[sizeof(RecoveredGlobal_800BC4C8_lbl_804928CC) == 0x5C ? 1 : -1];
u8 *construct_collision_body(u8 *arg0, s32 arg1, u32 arg2) {
    ((TUnk_804AF8A0 *)arg0)->construct_collider_proxy();
    *(s32 **)((s8 *)arg0 + 0x18) = &collision_body_vtable.value;
    init_collision_body_parts((void *) (arg0), (void *) (&construct_collision_body_parts.value), (int) (1));
    if (arg2 != 0U) {
        ((TUnk_804928CC *)arg0)->sub_800BC3E8((u8 *)arg2);
    } else {
        *(s32 *)((s8 *)arg0 + 0xAC) = 0;
    }
    return arg0;
}

}
