#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_803F4D84(void *, M2C_UNK);
M2C_UNK TLobby__sub_803F4EBC(void *, M2C_UNK);
M2C_UNK TLobby__sub_803F4FF4(void *);
M2C_UNK TLobby__sub_803F50B8(void *);
M2C_UNK TLobby__sub_803F524C(M2C_UNK *, M2C_UNK);
M2C_UNK TLobby__sub_803F53A0(M2C_UNK, void *, M2C_UNK);
M2C_UNK TLobby__sub_803F5C58(void *, M2C_UNK);
M2C_UNK TLobby__sub_803F5D90(void *, M2C_UNK);
M2C_UNK TLobby__sub_803F5EC8(void *, M2C_UNK);
M2C_UNK TLobby__sub_803F6000(void *, M2C_UNK);
M2C_UNK TLobby__sub_803F6138(void *, M2C_UNK);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
extern u16 lbl_805D56CC;

s32 init_work(M2C_UNK arg0, u8 *arg1) {
    u8 sp28[0x40];
    u8 sp8[0x20];

    memset(arg1, 0, 0x270);
    if (!(lbl_805D56CC & 1)) {
        return 0;
    }
    TLobby__sub_803F4D84(arg1 + 0x4, 0x80);
    TLobby__sub_803F4EBC(arg1 + 0x84, 0x20);
    TLobby__sub_803F4FF4(arg1 + 0x164);
    TLobby__sub_803F50B8(arg1 + 0x168);
    TLobby__sub_803F5C58(arg1 + 0x16C, 0x20);
    TLobby__sub_803F5D90(arg1 + 0x18C, 0x40);
    TLobby__sub_803F5EC8(arg1 + 0x1CC, 0x40);
    TLobby__sub_803F6000(arg1 + 0x20C, 0x20);
    TLobby__sub_803F6138(arg1 + 0x22C, 0x20);
    memset(sp8, 0, 0x20);
    memset(sp28, 0, 0x40);
    TLobby__sub_803F524C((M2C_UNK *)sp8, 0x20);
    TLobby__sub_803F53A0(0, arg1 + 0xA4, 0x40);
    TLobby__sub_803F53A0(1, arg1 + 0xE4, 0x40);
    TLobby__sub_803F53A0(2, arg1 + 0x124, 0x40);
    return 0;
}

}
