#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int xfree__FPv(void*);
void TLobby__sub_8001EF5C(void* p, void* a1);

void TLobby__sub_8001EF5C(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x424) == 0) { xfree__FPv(a1); } }

M2C_UNK TLobby__sub_801E38A0(s32, s32, s32, s32, u32 *);
s32 TLobby__sub_803DE328(s32, s32, s32);

s32 alloc_load_data__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 sp8;
    s32 temp_r31;
    u32 temp_r4;
    u32 temp_r7;

    temp_r7 = M2C_FIELD(arg0, u32 *, 0x424);
    if (temp_r7 != 0U) {
        temp_r31 = temp_r7 + M2C_FIELD(arg0, s32 *, 0x428);
        TLobby__sub_801E38A0(arg1, arg2, arg3, temp_r31, &sp8);
        temp_r4 = ((sp8 >> 5U) + 1) << 5;
        sp8 = temp_r4;
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) + temp_r4);
        return temp_r31;
    }
    return TLobby__sub_803DE328(arg1, arg2, arg3);
}

}
