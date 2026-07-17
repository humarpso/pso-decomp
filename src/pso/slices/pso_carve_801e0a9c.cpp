#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_8013AA64(int, int);

u8 *__ct__13TPlyJoinLobbyFRC13TPlyJoinLobby(u8 *arg0, u8 *arg1) {
    u32 var_r30;
    s32 var_r29;

    var_r30 = (unsigned long) (arg0 + 0x10);
    var_r29 = (long) (arg1 + 0x10);
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u8 *, 4);
    M2C_FIELD(arg0, u8 *, 5) = (u8) M2C_FIELD(arg1, u8 *, 5);
    M2C_FIELD(arg0, u8 *, 6) = (u8) M2C_FIELD(arg1, u8 *, 6);
    M2C_FIELD(arg0, u8 *, 7) = (u8) M2C_FIELD(arg1, u8 *, 7);
    M2C_FIELD(arg0, u8 *, 8) = (u8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, u8 *, 9) = (u8) M2C_FIELD(arg1, u8 *, 9);
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) M2C_FIELD(arg1, u8 *, 0xA);
    M2C_FIELD(arg0, u8 *, 0xB) = (u8) M2C_FIELD(arg1, u8 *, 0xB);
    M2C_FIELD(arg0, u8 *, 0xC) = (u8) M2C_FIELD(arg1, u8 *, 0xC);
    M2C_FIELD(arg0, u8 *, 0xD) = (u8) M2C_FIELD(arg1, u8 *, 0xD);
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) M2C_FIELD(arg1, u8 *, 0xE);
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) M2C_FIELD(arg1, u8 *, 0xF);
    do {
        TLobby__sub_8013AA64((int) (var_r30), (int) (var_r29));
        var_r30 += 0x43C;
        var_r29 += 0x43C;
    } while (var_r30 < (u32) (arg0 + 0x32E0));
    return arg0;
}

}
