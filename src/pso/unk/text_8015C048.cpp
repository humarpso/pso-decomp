#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8015C048___vt__26TOContainerAncientItemRare {
    M2C_UNK value;
    u8 remaining[0x148];
};

extern "C" {
u8 * init_ancient_container(void *, s32);
extern RecoveredGlobal_8015C048___vt__26TOContainerAncientItemRare __vt__26TOContainerAncientItemRare;
extern s32 lbl_805D2F00;
extern s32 *ancient_container_fragment_texture_lists;
u8 *TOContainerAncientItemRare__ct(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_8015C048___vt__26TOContainerAncientItemRare_size[sizeof(RecoveredGlobal_8015C048___vt__26TOContainerAncientItemRare) == 0x14C ? 1 : -1];
u8 *TOContainerAncientItemRare__ct(u8 *arg0, s32 arg1) {
    init_ancient_container(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__26TOContainerAncientItemRare.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2F00;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *ancient_container_fragment_texture_lists;
    return arg0;
}

}
