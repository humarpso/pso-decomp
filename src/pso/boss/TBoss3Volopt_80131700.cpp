#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80131744(s32 arg0, ...);
s32 collect_and_count__12TBoss3VoloptFUii(u32 arg0, s32 arg1);
M2C_UNK collect_recursive__23TObjSeabedSuisoBrakableFPv();

extern s32 lbl_805D5520;
extern s32 lbl_805D5524;
extern s32 lbl_805D5528;

s32 collect_and_count__12TBoss3VoloptFUii(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        return 0;
    }
    lbl_805D5524 = arg1;
    lbl_805D5520 = 0;
    lbl_805D5528 = 0;
    collect_recursive__23TObjSeabedSuisoBrakableFPv();
    return lbl_805D5528;
}

void TLobby__sub_80131744(s32 arg0, ...) {}

}
