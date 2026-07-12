#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_803F4D84(void *, int);
M2C_UNK TLobby__sub_803F4EBC(void *, int);
M2C_UNK TLobby__sub_803F4FF4(void *);
M2C_UNK TLobby__sub_803F50B8(void *);
s32 TLobby__sub_803F5678(void *);
M2C_UNK TLobby__sub_803F5748(void *);
M2C_UNK TLobby__sub_803F5824(void *);
M2C_UNK TLobby__sub_803F5900(void *);
M2C_UNK TLobby__sub_803F59DC(void *, int);
M2C_UNK TLobby__sub_803F5B20(void *, int);
M2C_UNK TLobby__sub_803F5C58(void *, int);
M2C_UNK TLobby__sub_803F5EC8(void *, int);
M2C_UNK TLobby__sub_803F6000(void *, int);
M2C_UNK TLobby__sub_803F6138(void *, int);
M2C_UNK TLobby__sub_803F6270(void *);
M2C_UNK memset(int, int, int);
extern u16 lbl_805D56CC;

s32 init_struct(u8 *arg0) {
    u8 sp8;

    if (!(lbl_805D56CC & 1)) {
        return 0;
    }
    memset((int)arg0, 0, 0x26C);
    if (TLobby__sub_803F5678(&sp8) != 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) sp8;
    TLobby__sub_803F5748(arg0 + 0xA8);
    TLobby__sub_803F5824(arg0 + 0xAC);
    TLobby__sub_803F5900(arg0 + 0xBC);
    TLobby__sub_803F59DC(arg0 + 0xC4, 0x40);
    TLobby__sub_803F5B20(arg0 + 0x144, 0x20);
    TLobby__sub_803F5C58(arg0 + 0x164, 0x40);
    TLobby__sub_803F5EC8(arg0 + 0x1A4, 0x40);
    TLobby__sub_803F6000(arg0 + 0x1E4, 0x20);
    TLobby__sub_803F6138(arg0 + 0x204, 0x20);
    TLobby__sub_803F6138(arg0 + 0x204, 0x20);
    TLobby__sub_803F6270(arg0 + 0x244);
    TLobby__sub_803F4D84(arg0 + 8, 0x80);
    TLobby__sub_803F4EBC(arg0 + 0x88, 0x20);
    TLobby__sub_803F4FF4(arg0 + 0xB4);
    TLobby__sub_803F50B8(arg0 + 0xB8);
    return 0;
}

}
