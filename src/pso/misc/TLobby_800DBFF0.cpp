#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_global_window__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);

struct Stack_800DC028 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
u8 *TLobby__sub_80020004(void *, s32, M2C_UNK *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
struct RecoveredGlobal_800DC028_lbl_8043C8D4 {
    M2C_UNK value;
    u8 remaining[0xC];
};
typedef char RecoveredGlobal_800DC028_lbl_8043C8D4_size[sizeof(RecoveredGlobal_800DC028_lbl_8043C8D4) == 0x10 ? 1 : -1];
extern RecoveredGlobal_800DC028_lbl_8043C8D4 lbl_8043C8D4;
struct RecoveredGlobal_800DC028_lbl_80494B4C {
    M2C_UNK value;
    u8 remaining[0xC];
};
typedef char RecoveredGlobal_800DC028_lbl_80494B4C_size[sizeof(RecoveredGlobal_800DC028_lbl_80494B4C) == 0x10 ? 1 : -1];
extern RecoveredGlobal_800DC028_lbl_80494B4C lbl_80494B4C;
extern s32 lbl_805D5248;
extern s32 lbl_805D524C;
extern s32 lbl_805D5250;
extern s32 lbl_805D5254;
extern const f32 lbl_805DA3F8;
extern const f32 lbl_805DA448;
void TLobby__sub_800DC028(void);

extern u32 lbl_805D5258;

void free_global_window__6TLobbyFv(void) {
    if ((u32) lbl_805D5258 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5258, 1);
        lbl_805D5258 = 0U;
    }
}

void TLobby__sub_800DC028(void) {
    Stack_800DC028 stack;

    u8 *temp_r3;
    u8 *temp_r5;
    u8 *var_r0;

    temp_r3 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TLobby__sub_80020004(temp_r3, 1, &lbl_80494B4C.value, 0, 0, 0));
    }
    lbl_805D5258 = (u32) var_r0;
    lbl_805D5248 = register_boss__6TLobbyFPv((int) (0x1A));
    lbl_805D524C = dispatch_shared_handler_b__6TLobbyFPv((int) (0x1A));
    lbl_805D5250 = register_object__6TLobbyFPv((int) (0x1A));
    lbl_805D5254 = dispatch_shared_handler_a__6TLobbyFPv((int) (0x1A));
    stack.sp8 = M2C_FIELD(&lbl_8043C8D4.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043C8D4.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8043C8D4.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_8043C8D4.value, s32 *, 0xC);
    stack.sp8 = M2C_FIELD(lbl_805D5258, s32 *, 0x430);
    temp_r5 = (u8 *)(M2C_FIELD(lbl_805D5258, u8 **, 0x42C));
    spawn_npc_enemy__6TLobbyFsiiiff((int) (0x22), (int) (M2C_FIELD(temp_r5, s32 *, 8)), (int) (M2C_FIELD(temp_r5, s32 *, 0xC)), (void *) (&stack.sp8), (f32) (lbl_805DA448), (f32) (lbl_805DA3F8));
}

}
