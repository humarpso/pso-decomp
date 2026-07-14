#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_breakup_effect__15TBoss3VoloptP01Fv(void);
s32 TBreakUpMdl__sub_8009705C(s32, s32);
s32 dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
s32 register_object__6TLobbyFPv(M2C_UNK);
s32 dispatch_shared_handler_b__6TLobbyFPv(M2C_UNK);
s32 register_boss__6TLobbyFPv(M2C_UNK);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
void *collect_and_count__12TBoss3VoloptFUii(s32, M2C_UNK);

extern void *lbl_805D4C10;
extern s32 lbl_805D4CB0;
extern s32 lbl_805D4CB4;
extern s32 lbl_805D4CB8;
extern s32 lbl_805D4CBC;
extern void *lbl_805D4CC0;
extern s32 lbl_805D4CC4;
extern void *lbl_805D4CC8;
extern s32 lbl_805D4CCC;

void init_breakup_effect__15TBoss3VoloptP01Fv(void) {
    s32 temp_r3;

    lbl_805D4CC0 = lbl_805D4C10;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (temp_r3 != 0) {
        temp_r3 = TBreakUpMdl__sub_8009705C(temp_r3, M2C_FIELD(M2C_FIELD(lbl_805D4CC0, void **, 0x42C), s32 *, 0x118));
    }
    lbl_805D4CC4 = temp_r3;
    lbl_805D4CC8 = collect_and_count__12TBoss3VoloptFUii(M2C_FIELD(M2C_FIELD(lbl_805D4CC0, void **, 0x42C), s32 *, 0x118), 0xD);
    lbl_805D4CB0 = register_boss__6TLobbyFPv(0x22);
    lbl_805D4CB4 = dispatch_shared_handler_b__6TLobbyFPv(0x22);
    lbl_805D4CB8 = register_object__6TLobbyFPv(0x22);
    lbl_805D4CBC = dispatch_shared_handler_a__6TLobbyFPv(0x22);
    lbl_805D4CCC = M2C_FIELD(M2C_FIELD(lbl_805D4CC8, void **, 4), s32 *, 4);
}

}
