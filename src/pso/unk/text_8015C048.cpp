#include "types.h"
#include "pso/unk/text_8015C048.h"
#include "pso/unk/text_8015C534.h"
#include "pso/misc/TOContainerAncientItemRare.h"

struct RecoveredGlobal_8015C048___vt__26TOContainerAncientItemRare {
    s32 value;
    u8 remaining[0x148];
};

extern "C" {
extern RecoveredGlobal_8015C048___vt__26TOContainerAncientItemRare __vt__26TOContainerAncientItemRare;
extern s32 lbl_805D2F00;
extern s32 *ancient_container_fragment_texture_lists;
typedef char RecoveredGlobal_8015C048___vt__26TOContainerAncientItemRare_size[sizeof(RecoveredGlobal_8015C048___vt__26TOContainerAncientItemRare) == 0x14C ? 1 : -1];
u8 *TOContainerAncientItemRare__ct(u8 *arg0, s32 arg1) {
    init_ancient_container(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__26TOContainerAncientItemRare.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2F00;
    ((TOContainerAncientItemRare *)arg0)->texture_id = (s32) *ancient_container_fragment_texture_lists;
    return arg0;
}

}
