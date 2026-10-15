#include "types.h"

extern "C" {
s32 TLobby__sub_803F5678(void *);
s32 TLobby__sub_80145EE4(void);
}

extern "C" {

int TLobby__sub_80145E40(void);
s32 is_state_active__6TLobbyFv(void);
s32 is_status_zero__6TLobbyFv(void);
s32 TLobby__sub_803F517C(u8 *);
s32 TLobby__sub_803F5678(void *);

    extern unsigned short lbl_805D56CC;
int TLobby__sub_80145E40(void) {  return (lbl_805D56CC & 0x1); }

s32 is_status_zero__6TLobbyFv(void) {
    u8 sp8;

    if ((TLobby__sub_803F517C(&sp8) == 0) && (sp8 == 0)) {
        return 1;
    }
    return 0;
}

s32 is_state_active__6TLobbyFv(void) {
    u8 sp8;

    if (TLobby__sub_803F5678((void *) (&sp8)) != 0) {
        return 0;
    }
    if (sp8 == 0) {
        return 0;
    }
    return (u32) __cntlzw(1 - sp8) >> 5;
}
s32 TLobby__sub_80145EE4(void) {
    u8 sp8;
    if (TLobby__sub_803F5678((void *) (&sp8)) != 0) {
        return 0;
    }
    if (sp8 == 0) {
        return 1;
    }
    return (sp8 == 1) ? 0 : 0;
}

}

extern "C" {

s32 init_struct(u8 *arg0);
s32 init_work(s32 arg0, u8 *arg1);
s32 copy_current_entry_name__6TLobbyFPvi(void *, int);
s32 TLobby__sub_803F4EBC(void *, int);
s32 TLobby__sub_803F4FF4(void *);
s32 TLobby__sub_803F50B8(void *);
s32 TLobby__sub_803F524C(s32 *, s32);
s32 TLobby__sub_803F53A0(s32, void *, s32);
s32 TLobby__sub_803F5678(void *);
s32 TLobby__sub_803F5748(void *);
s32 TLobby__sub_803F5824(void *);
s32 TLobby__sub_803F5900(void *);
s32 TLobby__sub_803F59DC(void *, int);
s32 TLobby__sub_803F5B20(void *, int);
s32 TLobby__sub_803F5C58(void *, int);
s32 TLobby__sub_803F5D90(void *, s32);
s32 TLobby__sub_803F5EC8(void *, int);
s32 TLobby__sub_803F6000(void *, int);
s32 TLobby__sub_803F6138(void *, int);
s32 TLobby__sub_803F6270(void *);
s32 memset(void *, s32, s32);

extern u16 lbl_805D56CC;

s32 init_struct(u8 *arg0) {
    u8 sp8;

    if (!(lbl_805D56CC & 1)) {
        return 0;
    }
    memset((void *)((int)arg0), (s32)(0), (s32)(0x26C));
    if (TLobby__sub_803F5678(&sp8) != 0) {
        return 0;
    }
    *(s32 *)((s8 *)arg0 + 4) = (s32) sp8;
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

s32 init_work(s32 arg0, u8 *arg1) {
    u8 sp28[0x40];
    u8 sp8[0x20];

    memset((void *)(arg1), (s32)(0), (s32)(0x270));
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
    memset((void *)(sp8), (s32)(0), (s32)(0x20));
    memset((void *)(sp28), (s32)(0), (s32)(0x40));
    TLobby__sub_803F524C((s32 *)sp8, 0x20);
    TLobby__sub_803F53A0(0, arg1 + 0xA4, 0x40);
    TLobby__sub_803F53A0(1, arg1 + 0xE4, 0x40);
    TLobby__sub_803F53A0(2, arg1 + 0x124, 0x40);
    return 0;
}

}
