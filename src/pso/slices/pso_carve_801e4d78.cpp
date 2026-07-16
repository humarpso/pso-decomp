#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 alloc__22TQuestVmDownLoadServerFPv(int);
M2C_UNK TLobby__sub_801E47C4(void *);
M2C_UNK TObjPlayer__sub_803DA204(void *, int, int, int, int);
M2C_UNK TObjPlayer__sub_803DA218(void *, void *, int, int);

void fn_801E4D78(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *temp_r3;

    M2C_FIELD(arg0, void **, 0x40) = arg1;
    M2C_FIELD(arg0, s32 *, 0x48) = arg2;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), u16 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), u16 *, 0x1E);
    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x40));
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(temp_r3, u16 *, 8);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | (M2C_FIELD(temp_r3, u16 *, 0xA) << 0x10));
    M2C_FIELD(arg0, s32 *, 0x44) = alloc__22TQuestVmDownLoadServerFPv((int) ((M2C_FIELD(arg0, s32 *, 0) * (M2C_FIELD(arg0, s32 *, 4) * 2)) + 0x20));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), void **, 0) = (void *) (arg0 + 0xC);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 4) = 1;
    TObjPlayer__sub_803DA204((void *) (arg0 + 0x18), (int) (M2C_FIELD(arg0, s32 *, 0x44) + 0x20), (int) (5), (int) (M2C_FIELD(arg0, s32 *, 4)), (int) (M2C_FIELD(arg0, s32 *, 0)));
    TObjPlayer__sub_803DA218((void *) (arg0 + 0xC), (void *) (arg0 + 0x18), (int) (M2C_FIELD(arg0, s32 *, 8)), (int) (0x40800000));
    TLobby__sub_801E47C4((void *) (M2C_FIELD(arg0, void **, 0x3C)));
}

}
