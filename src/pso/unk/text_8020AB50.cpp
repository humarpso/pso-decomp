#include "types.h"
typedef s32 M2C_UNK;
struct E3_8020AB50 { s32 a; s32 name; s32 c; };

struct E2_8020AB50 { E3_8020AB50 *recs; s32 count; };

struct E1_8020AB50 { E2_8020AB50 *recs; s32 count; };

extern "C" {
s32 TLobby__sub_800F9DF4(void *, void *);
void debug_print__6TLobbyFii(const char *, ...);
M2C_UNK TLobby__sub_801317E4(void *, s32, void *);
M2C_UNK TLobby__sub_802080C0(void *);
M2C_UNK TLobby__sub_8020A9C4(void *, u32, s32);
M2C_UNK TLobby__sub_8020B374(s32, void *, s32);
s32 TLobby__sub_8030A7B0();
extern char lbl_8044BBA8[];
extern char lbl_8044BBB8[];
extern char lbl_8044BBC8[];
extern char lbl_8044BBD4[];
extern E1_8020AB50 *TLobby__data_805D6068;
extern u8 *TLobby__data_805D60F0;
extern s32 TLobby__data_805D60F4;
s32 TLobby__sub_8020AB50(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

s32 TLobby__sub_8020AB50(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    char buf[0x28];
    s32 name;
    s32 size;
    u8 *p;
    u32 count;
    s32 i;
    E2_8020AB50 *t2;
    E3_8020AB50 *t3;
    t2 = TLobby__data_805D6068[arg1].recs;
    if (t2 == NULL || TLobby__data_805D6068[arg1].count - 1 < arg2) {
        debug_print__6TLobbyFii(lbl_8044BBB8);
        return 0;
    }
    t3 = t2[arg2].recs;
    if (t3 == NULL || t2[arg2].count - 1 < arg3) {
        debug_print__6TLobbyFii(lbl_8044BBB8);
        return 0;
    }
    name = t3[arg3].name;
    if (arg1 == 0 || arg1 == 0x12) {
        switch (TLobby__sub_8030A7B0()) {
        case 0:
            TLobby__sub_801317E4(buf, name, lbl_8044BBA8);
            break;
        case 1:
            TLobby__sub_801317E4(buf, name, lbl_8044BBC8);
            break;
        case 2:
            TLobby__sub_801317E4(buf, name, lbl_8044BBD4);
            break;
        }
    } else {
        TLobby__sub_801317E4(buf, name, lbl_8044BBA8);
    }
    size = TLobby__sub_800F9DF4(buf, TLobby__data_805D60F0);
    if (size < 0) {
        return 0;
    }
    if (size > TLobby__data_805D60F4) {
        return 0;
    }
    p = TLobby__data_805D60F0;
    count = (u32)size / 0x48;
    for (i = 0; i < (s32)count; i++, p += 0x48) {
        TLobby__sub_802080C0(p);
        *(s16 *)(p + 2) = 0;
    }
    TLobby__sub_8020A9C4(TLobby__data_805D60F0, count, arg1);
    TLobby__sub_8020B374(arg0, TLobby__data_805D60F0, size);
    return 1;
}

}
