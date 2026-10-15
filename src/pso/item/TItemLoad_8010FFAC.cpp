#include "types.h"

extern "C" {

u32 load_data__9TItemLoadFPvi(void *arg0, s32 arg1);
s32 free_texture__9TItemLoadFPv();
s32 TLobby__sub_803CC53C(u32);
u32 adxf_open_afs__6TLobbyFii(s32, s32);

u32 load_data__9TItemLoadFPvi(void *arg0, s32 arg1) {
    u32 temp_r3;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x10) == 1) {
        free_texture__9TItemLoadFPv();
        *(u32 *)((s8 *)arg0 + 4) = adxf_open_afs__6TLobbyFii(*(s32 *)((s8 *)arg0 + 8), arg1);
        temp_r3 = *(u32 *)((s8 *)arg0 + 4);
        if (temp_r3 != 0U) {
            *(s32 *)((s8 *)arg0 + 0xC) = TLobby__sub_803CC53C(temp_r3);
        }
    }
    return *(u32 *)((s8 *)arg0 + 4);
}

}
