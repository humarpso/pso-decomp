#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 create_named_entry__6TLobbyFiiUiiPv(s32 arg0, s32 arg1, u32 arg2, s32 arg3, void **arg4);
s32 TLobby__sub_803CC53C(int);
s32 adxf_open__6TLobbyFUii(void *, int);
u8 *alloc_from_heap__6TLobbyFPv(s32);
u8 *link_into_list__6TLobbyFv();
s32 strncpy(void *, void *, int);

s32 create_named_entry__6TLobbyFiiUiiPv(s32 name, s32 arg1, u32 arg2, s32 src, void **arg4) {
    u8 *var_r31;
    s32 temp_r3;

    if (arg4 != NULL) {
        *arg4 = NULL;
    }
    temp_r3 = adxf_open__6TLobbyFUii((void *) (name), (int) (0));
    if (temp_r3 == 0) {
        return -2;
    }
    var_r31 = alloc_from_heap__6TLobbyFPv(0x68);
    if (var_r31 != NULL) {
        var_r31 = link_into_list__6TLobbyFv();
    }
    strncpy((void *) (var_r31 + 8), (void *) (name), (int) (0x20));
    *(s32 *)((s8 *)var_r31 + 0) = 1;
    *(s32 *)((s8 *)var_r31 + 0x28) = arg1;
    *(s32 *)((s8 *)var_r31 + 0x2C) = ((TLobby *)temp_r3)->adxf_get_fsize_byte();
    *(s32 *)((s8 *)var_r31 + 0x30) = TLobby__sub_803CC53C((int) (temp_r3));
    ((TLobby *)temp_r3)->close_adxf_handle();
    *(s32 *)((s8 *)var_r31 + 0x34) = 0;
    *(u32 *)((s8 *)var_r31 + 0x40) = arg2;
    if (arg2 != 0U) {
        ((TLobby *)(var_r31 + 0x44))->move_words((u32 *)src, (s32)((int) (8)));
    }
    if (arg4 != NULL) {
        *arg4 = var_r31;
    }
    return *(s32 *)((s8 *)var_r31 + 0x2C);
}

}
