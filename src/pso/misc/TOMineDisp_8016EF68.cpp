#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8016EF68___vt__14TOMineTrapDisp {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
s32 TOMineDisp__ct(void *, void *, void *);
extern RecoveredGlobal_8016EF68___vt__14TOMineTrapDisp __vt__14TOMineTrapDisp;
extern s32 lbl_805D3088;
u8 *TOMineTrapDisp__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjPlayer__sub_80019248(void);
f32 TObjPlayer__sub_80141CF8(void *, void *);
void *get_mine_data_ptr__10TOMineTrapFPv(void *);
void get_player_state__6TOMineFPv(void *, u16);
s32 fn_80171314(void *);
s16 get_stat_by_key_state__10TObjPlayerFPv(void *);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(u16);
extern const f32 lbl_805DB850;
void run_task__10TOMineDispFv(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_8016EF68___vt__14TOMineTrapDisp_size[sizeof(RecoveredGlobal_8016EF68___vt__14TOMineTrapDisp) == 0x34 ? 1 : -1];
u8 *TOMineTrapDisp__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3) {
    TOMineDisp__ct((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__14TOMineTrapDisp.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3088;
    M2C_FIELD(arg0, s16 *, 0xAC) = arg3;
    return arg0;
}
void run_task__10TOMineDispFv(u8 *arg0) {
    void *mine = *(void **)(arg0 + 0x10);
    u8 *p;
    switch (*(s32 *)(arg0 + 0xA4)) {
    case 0:
        p = TPlayerBattleCtrl4P__sub_801BA74C(*(u16 *)(arg0 + 0xA8));
        if (p != NULL && TObjPlayer__sub_80019248() != 0 && fn_80171314(p) != 0) {
            if (TObjPlayer__sub_80141CF8(arg0 + 0x38, p + 0x38) <= lbl_805DB850 ||
                get_stat_by_key_state__10TObjPlayerFPv(p) == get_stat_by_key_state__10TObjPlayerFPv(arg0)) {
                *(s32 *)(arg0 + 0xA4) = 2;
            }
        }
        break;
    case 3:
        break;
    case 2:
        get_player_state__6TOMineFPv(mine, *(u16 *)(arg0 + 0xA8));
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, get_mine_data_ptr__10TOMineTrapFPv(mine));
        break;
    }
}

}
