#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TLobby__sub_80020004(s32, int, void *, int, int, int);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TLanguage__sub_801E4874(void *);
extern u8 lbl_80466040[];
extern u8 lbl_8046605C[];
extern u8 lbl_804DC854[];
extern u32 lbl_805D6624;
extern u32 lbl_805D6628;
extern u32 lbl_805D662C;
void TODoorLabo__sub_8029F97C(void);
s32 TObjFish__sub_8001EDC4(s32, s32);
extern s32 lbl_80465FF8[];
extern s32 lbl_805D6618;
void TODoorLabo__sub_8029F9EC(void *arg0);
}

extern "C" {

s32 TODoorLabo__vt19(void);
s32 TODoorLabo__vt20(void);
void *__dt__10TODoorLaboFv(void *arg0, s16 arg1);
void free_resources__10TODoorLaboFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__19TODoorFourLightBaseFv(void *, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D6624;
extern u32 lbl_805D6628;
extern u32 lbl_805D662C;

void free_resources__10TODoorLaboFv(void) {
    if ((u32) lbl_805D662C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D662C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D662C);
        lbl_805D662C = 0U;
    }
    if ((u32) lbl_805D6628 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6628);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6628);
        lbl_805D6628 = 0U;
    }
    if ((u32) lbl_805D6624 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6624, 1);
        lbl_805D6624 = 0U;
    }
}

extern s32 lbl_805D661C;

void TODoorLabo__sub_8029F97C(void) {
    s32 r = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (r != 0) {
        r = TLobby__sub_80020004(r, 5, lbl_804DC854, 0, 0, 0);
    }
    (*(s32 *)&lbl_805D6624) = r;
    (*(s32 *)&lbl_805D6628) = TLanguage__sub_801E4874(lbl_80466040);
    (*(s32 *)&lbl_805D662C) = TLanguage__sub_801E4874(lbl_8046605C);
}

void TODoorLabo__sub_8029F9EC(void *arg0) {
    s32 tbl[2];
    tbl[0] = lbl_80465FF8[0];
    tbl[1] = lbl_80465FF8[1];
    if (M2C_FIELD(arg0, s32 *, 0x88) < 0) {
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x88) > 1) {
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0xD4) = TObjFish__sub_8001EDC4(lbl_805D6618, tbl[M2C_FIELD(arg0, s32 *, 0x88)]);
}

s32 TODoorLabo__vt20(void) {
    return lbl_805D661C;
}

extern s32 lbl_805D6620;

s32 TODoorLabo__vt19(void) {
    return lbl_805D6620;
}

extern M2C_UNK __vt__10TODoorLabo[];

void *__dt__10TODoorLaboFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TODoorLabo;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__19TODoorFourLightBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
