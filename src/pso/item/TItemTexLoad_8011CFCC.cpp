#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK unload_texture__12TItemTexLoadFPv(void *);
s32 TLobby__sub_803CC53C(int);
M2C_UNK TLobby__sub_803CCB5C(int, int, int);
u32 TLobby__sub_803CD16C(int, int);
s32 TItemTexLoad__sub_8011CFCC(u8 *arg0, s32 arg1);
}

extern "C" {

s32 TItemTexLoad__sub_8011CFCC(u8 *arg0, s32 arg1) {
    if ((arg1 >= 0) && (arg1 < 0x17B) && ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U)) {
        if (arg1 == (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
            return 1;
        }
        unload_texture__12TItemTexLoadFPv((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x24) = arg1;
        M2C_FIELD(arg0, u32 *, 0x28) = TLobby__sub_803CD16C((int) (0xB8), (int) (M2C_FIELD(arg0, s32 *, 0x24)));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) == 0U) {
            unload_texture__12TItemTexLoadFPv((void *) (arg0));
            return 0;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        {
            s32 r = TLobby__sub_803CC53C((int) (M2C_FIELD(arg0, u32 *, 0x28)));
            if (r < 0) {
                unload_texture__12TItemTexLoadFPv((void *) (arg0));
                return 0;
            }
            TLobby__sub_803CCB5C((int) (M2C_FIELD(arg0, u32 *, 0x28)), r, (int) (M2C_FIELD(arg0, u32 *, 0x1C)));
        }
        return 1;
    }
    return 0;
}

}
