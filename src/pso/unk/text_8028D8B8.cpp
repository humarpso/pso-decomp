#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8028D940_lbl_8051C070 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8028D8F4_lbl_8051C070 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
s32 TChCrEffCtrlPl__sub_80298F6C(void);
s32 create_TChCrEffTag(s32);
s32 fn_8029AE88(s32);
s32 create__14TChCrEffCtrlPlFPv(s32);
extern RecoveredGlobal_8028D940_lbl_8051C070 lbl_8051C070;
extern s32 tl_03;
void fn_8028D940(void);
s32 queue_destruction__7TObjectFv(int);
extern RecoveredGlobal_8028D940_lbl_8051C070 lbl_8051C070;
void fn_8028D8F4(void);
void *alloc__22TQuestVmDownLoadServerFPv(u32 size);
extern void *lbl_805D6518;
void alloc_quest_download_buffer(void);
}

extern "C" {

typedef char RecoveredGlobal_8028D940_lbl_8051C070_size[sizeof(RecoveredGlobal_8028D940_lbl_8051C070) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_8028D8F4_lbl_8051C070_size[sizeof(RecoveredGlobal_8028D8F4_lbl_8051C070) == 0xC ? 1 : -1];

void alloc_quest_download_buffer(void) {
    if (lbl_805D6518 == 0) {
        if ((lbl_805D6518 = alloc__22TQuestVmDownLoadServerFPv(0x28000)) == 0) return;
    }
}

void fn_8028D8F4(void) {
    if ((u32) M2C_FIELD(&(*(RecoveredGlobal_8028D8F4_lbl_8051C070 *)&lbl_8051C070).value, u32 *, 0) != 0U) {
        queue_destruction__7TObjectFv((int) (M2C_FIELD(&(*(RecoveredGlobal_8028D8F4_lbl_8051C070 *)&lbl_8051C070).value, u32 *, 0)));
    }
    if ((u32) M2C_FIELD(&(*(RecoveredGlobal_8028D8F4_lbl_8051C070 *)&lbl_8051C070).value, u32 *, 4) != 0U) {
        queue_destruction__7TObjectFv((int) (M2C_FIELD(&(*(RecoveredGlobal_8028D8F4_lbl_8051C070 *)&lbl_8051C070).value, u32 *, 4)));
    }
}

void fn_8028D940(void) {
    M2C_FIELD(&lbl_8051C070.value, s32 *, 0) = fn_8029AE88(tl_03);
    M2C_FIELD(&lbl_8051C070.value, s32 *, 4) = create_TChCrEffTag(tl_03);
    M2C_FIELD(&lbl_8051C070.value, s32 *, 8) = 0;
    if (TChCrEffCtrlPl__sub_80298F6C() != 0) {
        M2C_FIELD(&lbl_8051C070.value, s32 *, 8) = create__14TChCrEffCtrlPlFPv(tl_03);
    }
}

}
