#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_20 { u8 bytes[0x20]; };

struct M2CCopy_100 { u8 bytes[0x100]; };

struct Node_801F57B4 {
    u8 pad0[0xC];
    Node_801F57B4* next;
    u8 pad1[4];
    Node_801F57B4* child;
};

extern "C" {
void copy_quest_script_context(u8 *arg0, u8 *arg1);
void queue_destruction__7TObjectFv(void*);
s32 check_value_equals__13TQuestColCtrlFPvi(void*, s32);
extern s32 lbl_805D35D0;
void fn_801F57B4(Node_801F57B4* arg0);
}

extern "C" {

void copy_quest_script_context(u8 *arg0, u8 *arg1) {
    s32 var_r5;
    s32 var_r7;
    u8 *var_r6;
    var_r5 = M2C_FIELD(arg1, s32 *, 0);
    var_r6 = (u8 *)(arg1) + 0x30;
    var_r7 = (long) ((u8 *)(arg0) + 0x30);
    M2C_FIELD(arg0, s32 *, 0) = var_r5;
    var_r5 = M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = var_r5;
    var_r5 = M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8) = var_r5;
    var_r5 = M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0xC) = var_r5;
    var_r5 = M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x10) = var_r5;
    var_r5 = (s32) M2C_FIELD(arg1, u8 *, 0x14);
    M2C_FIELD(arg0, s8 *, 0x14) = (s8) var_r5;
    var_r5 = M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x18) = var_r5;
    var_r5 = M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r5;
    var_r5 = M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x20) = var_r5;
    var_r5 = M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x24) = var_r5;
    var_r5 = M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x28) = var_r5;
    var_r5 = M2C_FIELD(arg1, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x2C) = var_r5;
    var_r5 = M2C_FIELD(arg1, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x30) = var_r5;
    *(M2CCopy_20 *)(var_r7 + 4) = *(const M2CCopy_20 *)((s32) var_r6 + 4);
    var_r7 += 0x20;
    var_r6 += 0x20;
    var_r7 = (s32) ((u8 *)(arg0) + 0x50);
    var_r6 = (u8 *)(arg1) + 0x50;
    *(M2CCopy_100 *)(var_r7 + 4) = *(const M2CCopy_100 *)((s32) var_r6 + 4);
    var_r7 += 0x100;
    var_r6 += 0x100;
    M2C_FIELD(arg0, u8 *, 0x154) = (u8) M2C_FIELD(arg1, u8 *, 0x154);
    M2C_FIELD(arg0, u8 *, 0x155) = (u8) M2C_FIELD(arg1, u8 *, 0x155);
    M2C_FIELD(arg0, u16 *, 0x156) = (u16) M2C_FIELD(arg1, u16 *, 0x156);
    M2C_FIELD(arg0, u16 *, 0x158) = (u16) M2C_FIELD(arg1, u16 *, 0x158);
    M2C_FIELD(arg0, s32 *, 0x15C) = (s32) M2C_FIELD(arg1, s32 *, 0x15C);
    M2C_FIELD(arg0, s32 *, 0x160) = (s32) M2C_FIELD(arg1, s32 *, 0x160);
    M2C_FIELD(arg0, s32 *, 0x164) = (s32) M2C_FIELD(arg1, s32 *, 0x164);
    M2C_FIELD(arg0, s32 *, 0x168) = (s32) M2C_FIELD(arg1, s32 *, 0x168);
    M2C_FIELD(arg0, s32 *, 0x16C) = (s32) M2C_FIELD(arg1, s32 *, 0x16C);
    M2C_FIELD(arg0, u16 *, 0x170) = (u16) M2C_FIELD(arg1, u16 *, 0x170);
    M2C_FIELD(arg0, u16 *, 0x172) = (u16) M2C_FIELD(arg1, u16 *, 0x172);
}
void fn_801F57B4(Node_801F57B4* arg0) {
    Node_801F57B4* n = arg0->child;
    while (arg0->child != 0 && n != 0) {
        Node_801F57B4* cur = n;
        n = n->next;
        if (check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D35D0) != 0) {
            queue_destruction__7TObjectFv(cur);
        } else {
            fn_801F57B4(cur);
        }
    }
}

}
