#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__10TObjCGrassFv(void *arg0, s16 arg1);
void* fn_800B8B00(void* p);
void release_global_805D5130__10TObjCGrassFv(void);
int render__10TObjCGrassFv(void);
void TLobby__sub_8001FE7C(void*, int);
s32 TObjEneBm5Wolf__sub_800B8AF8(void* p);
void __dl__7TObjectFPv(void *);
void __dt__10TObjMotionFv(void *, int);
void free__11TOBoss4RockFUi(void *);

struct Stack_800B8DC4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};
u8 *TLobby__sub_80020004(void *, s32, M2C_UNK *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 check_v2_mode__9TObjEneDDFv();
u8 *TObjEneDD__sub_800BB940(M2C_UNK *, M2C_UNK *);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
struct RecoveredGlobal_800B8DC4_lbl_8043B628 {
    M2C_UNK value;
    u8 remaining[0xC];
};
typedef char RecoveredGlobal_800B8DC4_lbl_8043B628_size[sizeof(RecoveredGlobal_800B8DC4_lbl_8043B628) == 0x10 ? 1 : -1];
extern RecoveredGlobal_800B8DC4_lbl_8043B628 lbl_8043B628;
struct RecoveredGlobal_800B8DC4_lbl_8043B638 {
    M2C_UNK value;
    u8 remaining[0x10];
};
typedef char RecoveredGlobal_800B8DC4_lbl_8043B638_size[sizeof(RecoveredGlobal_800B8DC4_lbl_8043B638) == 0x14 ? 1 : -1];
extern RecoveredGlobal_800B8DC4_lbl_8043B638 lbl_8043B638;
struct RecoveredGlobal_800B8DC4_lbl_80492500 {
    M2C_UNK value;
    u8 remaining[0xC];
};
typedef char RecoveredGlobal_800B8DC4_lbl_80492500_size[sizeof(RecoveredGlobal_800B8DC4_lbl_80492500) == 0x10 ? 1 : -1];
extern RecoveredGlobal_800B8DC4_lbl_80492500 lbl_80492500;
extern const f32 TObjCGrass__data_805D9E64;
extern const f32 lbl_805D9E68;
void TObjCGrass__sub_800B8DC4(void);

void* fn_800B8B00(void* p) { return (char*)p + 0x3e8; }
int render__10TObjCGrassFv(void) { return 0; }

extern u32 lbl_805D5130;

void release_global_805D5130__10TObjCGrassFv(void) {
    if ((u32) lbl_805D5130 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5130, 1);
        lbl_805D5130 = 0U;
    }
}

void TObjCGrass__sub_800B8DC4(void) {
    Stack_800B8DC4 stack;

    u8 *temp_r3;
    u8 *temp_r5;
    u8 *var_r0;

    if (check_v2_mode__9TObjEneDDFv() != 0) {
        lbl_805D5130 = (u32) TObjEneDD__sub_800BB940(&lbl_80492500.value, &lbl_8043B638.value);
    } else {
        temp_r3 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TLobby__sub_80020004(temp_r3, 1, &lbl_80492500.value, 0, 0, 0));
        }
        lbl_805D5130 = (u32) var_r0;
    }
    stack.sp8 = M2C_FIELD(&lbl_8043B628.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043B628.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8043B628.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_8043B628.value, s32 *, 0xC);
    stack.sp8 = M2C_FIELD(lbl_805D5130, s32 *, 0x430);
    temp_r5 = (u8 *)(M2C_FIELD(lbl_805D5130, u8 **, 0x42C));
    spawn_npc_enemy__6TLobbyFsiiiff((int) (0x36), (int) (M2C_FIELD(temp_r5, s32 *, 8)), (int) (M2C_FIELD(temp_r5, s32 *, 0xC)), (void *) (&stack.sp8), (f32) (lbl_805D9E68), (f32) (TObjCGrass__data_805D9E64));
}

extern M2C_UNK __vt__10TObjCGrass[];

void *__dt__10TObjCGrassFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjCGrass;
        if (M2C_FIELD(arg0, void **, 0xFC) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xFC)); }
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
