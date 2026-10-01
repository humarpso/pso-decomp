#include "types.h"
typedef struct Ent_803F4D84 {
    s16 v;
    u8 pad[0x26];
} Ent_803F4D84;

typedef struct Rec_803F4D84 {
    char name[0x80];
    char name2[0x20];
    s32 f1B8;
    s32 f1BC;
    u8 padA8[0xEE - 0xA8];
    s16 kind;
    u8 f208;
    u8 padF1[3];
    char str20C[0x20];
    char strs[3][0x20];
    u8 pad174[4];
    char str290[0x20];
    u8 f2B0;
    u8 pad199[3];
    s32 f2B4;
    u8 pad1A0[0x210 - 0x1A0];
} Rec_803F4D84;

typedef struct Big_803F4D84 {
    s16 f0;
    s16 cur;
    u8 pad4[0x24];
    Ent_803F4D84 ent[6];
    Rec_803F4D84 rec[6];
} Big_803F4D84;

extern "C" {
s32 TLobby__sub_803F4AB4();
s32 TLobby__sub_803F4AEC();
void *memset(void *, int, u32);
char *strncpy(char *, const char *, u32);
u32 strlen(const char *);
extern Big_803F4D84 *lbl_805D79C0;
s32 TLobby__sub_803F4D84(char *dst, s32 len);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma peephole off
s32 TLobby__sub_803F4D84(char *dst, s32 len) {
    s16 i;
    if (TLobby__sub_803F4AB4() == 0) {
        return -1;
    }
    if (TLobby__sub_803F4AEC() == 0 && TLobby__sub_803F4AB4() == 1) {
        return -5;
    }
    i = lbl_805D79C0->cur;
    if (i < 0 || i >= 6) {
        return -3;
    }
    i = lbl_805D79C0->ent[i].v;
    if (i < 0 || i >= 6) {
        return -3;
    }
    if (len <= 0) {
        return -2;
    }
    memset(dst, 0, len);
    strncpy(dst, lbl_805D79C0->rec[lbl_805D79C0->ent[lbl_805D79C0->cur].v].name, len - 1);
    if ((u32)len <= strlen(lbl_805D79C0->rec[lbl_805D79C0->ent[lbl_805D79C0->cur].v].name)) {
        return -2;
    }
    return 0;
}
#pragma pop

}
