#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 __destroy_arr(s32, s32 *, s32, s32);
s32 TObjPlayer__sub_801AA584(s32 arg0, s16 arg1);
int __dl__FPv(void* a0 = 0);
int TObjPlayer__sub_801AA6E4(void* a0 = 0, void* a1 = 0);
void* TObjPlayer__sub_801AA66C(void* p, void* a1);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
void* TObjPlayer__sub_801AA61C(void* p);
u16 get_entity_type__10TObjPlayerFv(void* p);

s16 TObjPlayer::get_hp() { return *(s16*)((char*)this + 0x2cc); }
u16 TObjPlayer::get_section_id() { return *(u16*)((char*)this + 0x0); }
void TObjPlayer::set_field_2(s16 v) { *(s16*)((char*)this + 0x2) = v; }
void TObjPlayer::set_type(s16 v) { *(s16*)((char*)this + 0x0) = v; }
s32 TObjPlayer__sub_801AA528(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __destroy_arr(arg0 + 8, (s32 *)TObjPlayer__sub_801AA584, 4, 4);
        if (arg1 > 0) {
            __dl__FPv((void*)(arg0));
        }
    }
    return arg0;
}

}
