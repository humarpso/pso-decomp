#include "types.h"

extern "C" {

void TItemEffEquip__sub_801088F8(u32 arg0);
s32 release_effect__13TItemEffEquipFPv();

void TItemEffEquip__sub_801088F8(u32 arg0) {
    if (arg0 != 0U) {
        release_effect__13TItemEffEquipFPv();
    }
}

}
