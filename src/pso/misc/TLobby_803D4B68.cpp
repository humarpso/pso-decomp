#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
    temp_r3 = M2C_FIELD(arg0, void ***, 0x28);
    temp_r5 = (unsigned char *) (*temp_r3);
    var_r3 = M2C_FIELD(temp_r5, s32 (**)(void **, M2C_UNK, void *), 0x24)(temp_r3, 0, temp_r5);
    if (arg0 == NULL) {
        var_r0 = -1;
    } else {
        var_r0 = M2C_FIELD(arg0, u32 *, 8) & 1;
    }
    if (var_r0 == 1) {
        if (arg0 == NULL) {
            var_r0_2 = -1;
        } else {
            var_r0_2 = ((u32) M2C_FIELD(arg0, u32 *, 8) >> 1U) & 1;
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
    temp_r3 = M2C_FIELD(arg0, void ***, 0x28);
    temp_r5 = (unsigned char *) (*temp_r3);
    var_r3 = M2C_FIELD(temp_r5, s32 (**)(void **, M2C_UNK, void *), 0x24)(temp_r3, 1, temp_r5);
    if (arg0 == NULL) {
        var_r0 = -1;
    } else {
        var_r0 = M2C_FIELD(arg0, u32 *, 8) & 1;
    }
    if (var_r0 == 1) {
        if (arg0 == NULL) {
            var_r0_2 = -1;
        } else {
            var_r0_2 = ((u32) M2C_FIELD(arg0, u32 *, 8) >> 1U) & 1;
        }
        if ((var_r0_2 == 0) && (var_r3 < 0x2000)) {
            var_r3 = 0;
        }
    }
    return (u32) var_r3 >> 1U;
}

}
