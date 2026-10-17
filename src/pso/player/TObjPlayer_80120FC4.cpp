#include "types.h"
#include "pso/player/TObjPlayer_80120FC4.h"

extern "C" {

s32 TItemWeapon__ct(s32, s32, s32);
s32 alloc_from_obj_heap__10TObjPlayerFPv(s32);

extern s32 tl_05;

s32 create_common_weapon(s32 arg0) {
    s32 temp_r0;

    temp_r0 = alloc_from_obj_heap__10TObjPlayerFPv(0x1F8);
    if (temp_r0 != 0) {
        temp_r0 = TItemWeapon__ct(temp_r0, tl_05, arg0);
    }
    return temp_r0;
}

}
