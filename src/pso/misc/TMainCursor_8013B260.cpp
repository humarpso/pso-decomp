#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void* TMainCursor__sub_8013B260(void* a0);
void TMainCursor__sub_8013B2A4(u16 *arg0);
M2C_UNK TPlayerBattleCtrl4P__sub_801BA74C(u16);
int fn_8013E0D8(void);

    extern unsigned char lbl_804A7290[];
    extern int lbl_805D2CBC;
void* TMainCursor__sub_8013B260(void* a0) { fn_8013E0D8(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A7290; *(int*)((char*)a0 + 0x0) = lbl_805D2CBC; return a0; }

void TMainCursor__sub_8013B2A4(u16 *arg0) {
    TPlayerBattleCtrl4P__sub_801BA74C(*arg0);
}

}
