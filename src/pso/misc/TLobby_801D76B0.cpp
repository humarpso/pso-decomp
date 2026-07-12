#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801D76B0(u8 *arg0);
s32 TItemDrop__sub_80107B04();
M2C_UNK TLobby__sub_801D6DC4(void *, M2C_UNK);
M2C_UNK TLobby__sub_801D6E28(void *, M2C_UNK);
M2C_UNK TLobby__sub_801D6EBC(void *, M2C_UNK);
M2C_UNK TLobby__sub_801D6F08(void *, M2C_UNK);
M2C_UNK TLobby__sub_801D72F0(void *, s32);
M2C_UNK TLobby__sub_801D7330(void *, s32);
M2C_UNK TLobby__sub_801D7370(void *, s32);
M2C_UNK TLobby__sub_801D73B0(void *, s32);
M2C_UNK TLobby__sub_801D73F0(void *, s32);
M2C_UNK TLobby__sub_801D7430(void *, s32);
M2C_UNK TLobby__sub_801D7470(void *, s32);
M2C_UNK TLobby__sub_801D74B0(void *, s32);
M2C_UNK TLobby__sub_801D74F0(void *, s32);
M2C_UNK TLobby__sub_801D7530(void *, s32);
M2C_UNK TLobby__sub_801D7570(void *, s32);
M2C_UNK TLobby__sub_801D75B0(void *, s32);
M2C_UNK TLobby__sub_801D75F0(void *, s32);
M2C_UNK TLobby__sub_801D7630(void *, s32);
M2C_UNK TLobby__sub_801D7670(void *, s32);
s32 ret_801D78F4(void *);
s32 ret_801D78FC(void *);
s32 ret_801D7904(void *);
s32 ret_801D790C(void *);
s32 ret_801D7914(void *);
s32 ret_801D791C(void *);
s32 ret_801D7924(void *);
s32 ret_801D792C(void *);
s32 ret_801D7934(void *);
s32 ret_801D793C(void *);
s32 ret_801D7944(void *);
s32 ret_801D794C(void *);
s32 ret_801D7954(void *);
s32 ret_801D795C(void *);

void TLobby__sub_801D76B0(u8 *arg0) {
    s32 temp_r0;
    s32 var_ctr;
    s32 var_r4;

    TLobby__sub_801D7670(arg0, TItemDrop__sub_80107B04());
    TLobby__sub_801D7630(arg0, ret_801D795C(arg0));
    TLobby__sub_801D75F0(arg0, ret_801D7954(arg0));
    TLobby__sub_801D75B0(arg0, ret_801D794C(arg0));
    TLobby__sub_801D7570(arg0, ret_801D7944(arg0));
    TLobby__sub_801D7530(arg0, ret_801D793C(arg0));
    TLobby__sub_801D74F0(arg0, ret_801D7934(arg0));
    TLobby__sub_801D74B0(arg0, ret_801D792C(arg0));
    TLobby__sub_801D7470(arg0, ret_801D7924(arg0));
    TLobby__sub_801D7430(arg0, ret_801D791C(arg0));
    TLobby__sub_801D73F0(arg0, ret_801D7914(arg0));
    TLobby__sub_801D73B0(arg0, ret_801D790C(arg0));
    TLobby__sub_801D7370(arg0, ret_801D7904(arg0));
    TLobby__sub_801D7330(arg0, ret_801D78FC(arg0));
    TLobby__sub_801D72F0(arg0, ret_801D78F4(arg0));
    TLobby__sub_801D6DC4(arg0, 0);
    TLobby__sub_801D6E28(arg0, 0xFF);
    TLobby__sub_801D6EBC(arg0, 0);
    TLobby__sub_801D6F08(arg0, 0xA);
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    for (var_r4 = 0; var_r4 < 4; var_r4++) {
        *(arg0 + var_r4 + 0x20) = 0x14;
    }
    M2C_FIELD(arg0, s8 *, 0xF) = 0;
}

}
