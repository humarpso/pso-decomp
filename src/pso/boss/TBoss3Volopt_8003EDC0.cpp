#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_parts__12TBoss3VoloptFv(void);
M2C_UNK destroy__20TBoss3VoloptHiraisinFv();
M2C_UNK release__19TBoss3VoloptMonitorFv();
M2C_UNK destroy__15TBoss3VoloptP01Fv();
M2C_UNK destroy__14TObjVoloptCageFv();
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TBoss3VoloptCore__sub_80040788();
M2C_UNK TBoss3Volopt__sub_800479D0();

extern u32 lbl_805D4C10;

void free_parts__12TBoss3VoloptFv(void) {
    destroy__14TObjVoloptCageFv();
    if ((u32) lbl_805D4C10 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4C10, 1);
        lbl_805D4C10 = 0U;
    }
    destroy__15TBoss3VoloptP01Fv();
    TBoss3VoloptCore__sub_80040788();
    TBoss3Volopt__sub_800479D0();
    destroy__20TBoss3VoloptHiraisinFv();
    release__19TBoss3VoloptMonitorFv();
}

}
