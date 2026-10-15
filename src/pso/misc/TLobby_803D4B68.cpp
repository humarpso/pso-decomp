#include "types.h"

extern "C" {

u32 get_packet_size__6TLobbyFPv(u8 *arg0);
u32 get_available_size__6TLobbyFPv(u8 *arg0);

u32 get_packet_size__6TLobbyFPv(u8 *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r3;
    void **temp_r3;
    u8 *temp_r5;

    if (arg0 == NULL) {
        return -1U;
    }
    temp_r3 = *(void ***)((s8 *)arg0 + 0x28);
    temp_r5 = (unsigned char *) (*temp_r3);
    var_r3 = (*(s32 (**)(void **, s32, void *))((s8 *)temp_r5 + 0x24))(temp_r3, 0, temp_r5);
    if (arg0 == NULL) {
        var_r0 = -1;
    } else {
        var_r0 = *(u32 *)((s8 *)arg0 + 8) & 1;
    }
    if (var_r0 == 1) {
        if (arg0 == NULL) {
            var_r0_2 = -1;
        } else {
            var_r0_2 = ((u32) *(u32 *)((s8 *)arg0 + 8) >> 1U) & 1;
        }
        if ((var_r0_2 == 0) && (var_r3 > 0)) {
            var_r3 = 0x2000;
        }
    }
    return (u32) var_r3 >> 1U;
}

u32 get_available_size__6TLobbyFPv(u8 *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r3;
    void **temp_r3;
    u8 *temp_r5;

    if (arg0 == NULL) {
        return -1U;
    }
    temp_r3 = *(void ***)((s8 *)arg0 + 0x28);
    temp_r5 = (unsigned char *) (*temp_r3);
    var_r3 = (*(s32 (**)(void **, s32, void *))((s8 *)temp_r5 + 0x24))(temp_r3, 1, temp_r5);
    if (arg0 == NULL) {
        var_r0 = -1;
    } else {
        var_r0 = *(u32 *)((s8 *)arg0 + 8) & 1;
    }
    if (var_r0 == 1) {
        if (arg0 == NULL) {
            var_r0_2 = -1;
        } else {
            var_r0_2 = ((u32) *(u32 *)((s8 *)arg0 + 8) >> 1U) & 1;
        }
        if ((var_r0_2 == 0) && (var_r3 < 0x2000)) {
            var_r3 = 0;
        }
    }
    return (u32) var_r3 >> 1U;
}

}
