#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjFish__sub_8019F72C(void);
void *__dt__12TObjWarpBossFv(void *arg0, s16 arg1);
int fn_8019F9AC(void);
int fn_8019F9B4(void);
int fn_8019F9BC(void);
int fn_8019F9C4(void);
int fn_8019F9CC(void);
int fn_8019F9D4(void);
int fn_8019F9DC(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__12TObjAreaWarpFv(void *, M2C_UNK);
M2C_UNK close_windows__17TObjWarpBossMultiFPv(void *);

extern M2C_UNK __vt__12TObjWarpBoss[];

void *__dt__12TObjWarpBossFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjWarpBoss;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        close_windows__17TObjWarpBossMultiFPv(arg0);
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 lbl_805D5C88;

void TObjFish__sub_8019F72C(void) {
    if ((u32) lbl_805D5C88 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5C88, 1);
        lbl_805D5C88 = 0U;
    }
}

    extern int lbl_805D5CA4;
int fn_8019F9AC(void) {  return lbl_805D5CA4; }

    extern int lbl_805D5CA0;
int fn_8019F9B4(void) {  return lbl_805D5CA0; }

    extern int lbl_805D5C9C;
int fn_8019F9BC(void) {  return lbl_805D5C9C; }

    extern int lbl_805D5C98;
int fn_8019F9C4(void) {  return lbl_805D5C98; }

    extern int lbl_805D5C94;
int fn_8019F9CC(void) {  return lbl_805D5C94; }

    extern int lbl_805D5C90;
int fn_8019F9D4(void) {  return lbl_805D5C90; }

    extern int lbl_805D5C8C;
int fn_8019F9DC(void) {  return lbl_805D5C8C; }

}
