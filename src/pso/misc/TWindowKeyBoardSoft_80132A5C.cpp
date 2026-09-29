#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Inner_80132A5C { char pad8[0x8]; u32 f8; };
struct Outer_80132A5C { struct Inner_80132A5C *f0; };

extern "C" {
u8 *TWindowKeyBoardSoft__sub_800F98F0(M2C_UNK *);
extern M2C_UNK lbl_8043ECD4[];
extern M2C_UNK lbl_8043ECE4[];
extern M2C_UNK lbl_8043ECF0[];
extern M2C_UNK lbl_8043ECFC[];
extern M2C_UNK lbl_8043ED08[];
extern int lbl_805D5538;
extern int lbl_805D553C;
extern int TWindowKeyBoardSoft__data_805D5548;
void TWindowKeyBoardSoft__sub_80132DA0(s32 arg0);
}

extern "C" {

void free_instance__19TWindowKeyBoardSoftFv(void);
void free_resources__19TWindowKeyBoardSoftFv(void);
int TLobby__sub_800F957C(void*);
M2C_UNK TLobby__sub_803DA16C(void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);

extern struct Outer_80132A5C *lbl_805D5540;

void free_instance__19TWindowKeyBoardSoftFv(void) {
    if (lbl_805D5540 != NULL) {
        struct Inner_80132A5C *inner = lbl_805D5540->f0;
        if (inner->f8 != 0U) {
            TLobby__sub_803DA16C(lbl_805D5540);
        }
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5540);
        lbl_805D5540 = NULL;
    }
}

    extern int lbl_805D5538;
    extern int lbl_805D553C;
    extern int TWindowKeyBoardSoft__data_805D5548;
void free_resources__19TWindowKeyBoardSoftFv(void) { TLobby__sub_800F957C((void*)(lbl_805D5538)); TWindowKeyBoardSoft__data_805D5548 = 0; lbl_805D553C = 0; lbl_805D5538 = 0; }
void TWindowKeyBoardSoft__sub_80132DA0(s32 arg0) {
    switch (arg0) {
    case 0:
        (*(u8 * *)&lbl_805D5538) = TWindowKeyBoardSoft__sub_800F98F0(lbl_8043ECD4);
        break;
    case 2:
        (*(u8 * *)&lbl_805D5538) = TWindowKeyBoardSoft__sub_800F98F0(lbl_8043ECE4);
        break;
    case 3:
        (*(u8 * *)&lbl_805D5538) = TWindowKeyBoardSoft__sub_800F98F0(lbl_8043ECF0);
        break;
    case 4:
        (*(u8 * *)&lbl_805D5538) = TWindowKeyBoardSoft__sub_800F98F0(lbl_8043ECFC);
        break;
    default:
        (*(u8 * *)&lbl_805D5538) = TWindowKeyBoardSoft__sub_800F98F0(lbl_8043ED08);
        break;
    }
    (*(s32 *)&TWindowKeyBoardSoft__data_805D5548) = M2C_FIELD((*(u8 * *)&lbl_805D5538), s32 *, 0);
    (*(s32 *)&lbl_805D553C) = M2C_FIELD((*(u8 * *)&lbl_805D5538), s32 *, 4);
}

}
