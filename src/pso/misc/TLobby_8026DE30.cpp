#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 init_list_entry__20TWindowSubStatusDispFPvUcii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 get_array_entry__20TWindowSubStatusDispFi(void * a0 = 0);
void TWindowSetLevelUp__sub_8026DE28(void* p, s32 v);

void TLobby::add_list_entry(s32 arg1, s32 arg2, s32 arg3) {
    if ((s16) *(s16 *)((s8 *)this + 0x72) < (s16) *(s16 *)((s8 *)this + 0x76)) {
        init_list_entry__20TWindowSubStatusDispFPvUcii(get_array_entry__20TWindowSubStatusDispFi(this), arg1, arg2, arg3);
        *(s16 *)((s8 *)this + 0x72) = (s16) (*(s16 *)((s8 *)this + 0x72) + 1);
    }
}

}
