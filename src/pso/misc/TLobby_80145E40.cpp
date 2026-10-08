#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init_struct(u8 *arg0);
s32 init_work(M2C_UNK arg0, u8 *arg1);
M2C_UNK copy_current_entry_name__6TLobbyFPvi(void *, int);
M2C_UNK TLobby__sub_803F4EBC(void *, int);
M2C_UNK TLobby__sub_803F4FF4(void *);
M2C_UNK TLobby__sub_803F50B8(void *);
M2C_UNK TLobby__sub_803F524C(M2C_UNK *, M2C_UNK);
M2C_UNK TLobby__sub_803F53A0(M2C_UNK, void *, M2C_UNK);
s32 TLobby__sub_803F5678(void *);
M2C_UNK TLobby__sub_803F5748(void *);
M2C_UNK TLobby__sub_803F5824(void *);
M2C_UNK TLobby__sub_803F5900(void *);
M2C_UNK TLobby__sub_803F59DC(void *, int);
M2C_UNK TLobby__sub_803F5B20(void *, int);
M2C_UNK TLobby__sub_803F5C58(void *, int);
M2C_UNK TLobby__sub_803F5D90(void *, M2C_UNK);
M2C_UNK TLobby__sub_803F5EC8(void *, int);
M2C_UNK TLobby__sub_803F6000(void *, int);
M2C_UNK TLobby__sub_803F6138(void *, int);
M2C_UNK TLobby__sub_803F6270(void *);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);

extern u16 lbl_805D56CC;

s32 init_struct(u8 *arg0) {
    u8 sp8;

    if (!(lbl_805D56CC & 1)) {
        return 0;
    }
    memset((void *)((int)arg0), (M2C_UNK)(0), (M2C_UNK)(0x26C));
    if (TLobby__sub_803F5678(&sp8) != 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) sp8;
    TLobby__sub_803F5748(arg0 + 0xA8);
    TLobby__sub_803F5824(arg0 + 0xAC);
    TLobby__sub_803F5900(arg0 + 0xBC);
    TLobby__sub_803F59DC(arg0 + 0xC4, 0x40);
    TLobby__sub_803F5B20(arg0 + 0x144, 0x20);
    TLobby__sub_803F5C58((void *)(arg0 + 0x164), (int)(0x40));
    TLobby__sub_803F5EC8((void *)(arg0 + 0x1A4), (int)(0x40));
    TLobby__sub_803F6000((void *)(arg0 + 0x1E4), (int)(0x20));
    TLobby__sub_803F6138((void *)(arg0 + 0x204), (int)(0x20));
    TLobby__sub_803F6138((void *)(arg0 + 0x204), (int)(0x20));
    TLobby__sub_803F6270(arg0 + 0x244);
    copy_current_entry_name__6TLobbyFPvi((void *)(arg0 + 8), (int)(0x80));
    TLobby__sub_803F4EBC((void *)(arg0 + 0x88), (int)(0x20));
    TLobby__sub_803F4FF4(arg0 + 0xB4);
    TLobby__sub_803F50B8(arg0 + 0xB8);
    return 0;
}

extern u16 lbl_805D56CC;

s32 init_work(M2C_UNK arg0, u8 *arg1) {
    u8 sp28[0x40];
    u8 sp8[0x20];

    memset((void *)(arg1), (M2C_UNK)(0), (M2C_UNK)(0x270));
    if (!(lbl_805D56CC & 1)) {
        return 0;
    }
    copy_current_entry_name__6TLobbyFPvi((void *)(arg1 + 0x4), (int)(0x80));
    TLobby__sub_803F4EBC((void *)(arg1 + 0x84), (int)(0x20));
    TLobby__sub_803F4FF4(arg1 + 0x164);
    TLobby__sub_803F50B8(arg1 + 0x168);
    TLobby__sub_803F5C58((void *)(arg1 + 0x16C), (int)(0x20));
    TLobby__sub_803F5D90(arg1 + 0x18C, 0x40);
    TLobby__sub_803F5EC8((void *)(arg1 + 0x1CC), (int)(0x40));
    TLobby__sub_803F6000((void *)(arg1 + 0x20C), (int)(0x20));
    TLobby__sub_803F6138((void *)(arg1 + 0x22C), (int)(0x20));
    memset((void *)(sp8), (M2C_UNK)(0), (M2C_UNK)(0x20));
    memset((void *)(sp28), (M2C_UNK)(0), (M2C_UNK)(0x40));
    TLobby__sub_803F524C((M2C_UNK *)sp8, 0x20);
    TLobby__sub_803F53A0(0, arg1 + 0xA4, 0x40);
    TLobby__sub_803F53A0(1, arg1 + 0xE4, 0x40);
    TLobby__sub_803F53A0(2, arg1 + 0x124, 0x40);
    return 0;
}

}
