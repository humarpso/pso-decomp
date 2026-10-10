#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8035B6B0 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

extern "C" {
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
M2C_UNK spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, int, void *, f32, f32);
extern M2C_UNK lbl_80479860[];
extern M2C_UNK lbl_804F1D14[];
extern u8 *lbl_805D6F48;
extern const f32 lbl_805E0138;
extern const f32 lbl_805E013C;
void load_and_spawn_chao_npc(void);
}

extern "C" {

void load_and_spawn_chao_npc(void) {
    typedef char sp8_offset[(offsetof(Stack_8035B6B0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8035B6B0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8035B6B0, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8035B6B0, sp14) == 0xC) ? 1 : -1];
    Stack_8035B6B0 stack;
    u8 *temp_r5;
    u8 *var_r9;
    var_r9 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
    if (var_r9 != NULL) {
        var_r9 = (u8 *)(load_resource_from_descriptor(var_r9, 1, lbl_804F1D14, 0, 0, 0));
    }
    lbl_805D6F48 = var_r9;
    stack.sp8 = M2C_FIELD(lbl_80479860, s32 *, 0);
    stack.spC = M2C_FIELD(lbl_80479860, s32 *, 4);
    stack.sp10 = M2C_FIELD(lbl_80479860, s32 *, 8);
    stack.sp14 = M2C_FIELD(lbl_80479860, s32 *, 0xC);
    stack.sp8 = M2C_FIELD(var_r9, s32 *, 0x430);
    temp_r5 = (u8 *)(M2C_FIELD(var_r9, u8 **, 0x42C));
    spawn_npc_enemy__6TLobbyFsiiiff((int) (0xB), (int) (M2C_FIELD(temp_r5, s32 *, 8)), (int) (M2C_FIELD(temp_r5, s32 *, 0xC)), (void *) (&stack.sp8), (int) (M2C_FIELD(lbl_80479860, s32 *, 0)), (void *) (lbl_80479860), (f32) (lbl_805E0138), (f32) (lbl_805E013C));
}

}
