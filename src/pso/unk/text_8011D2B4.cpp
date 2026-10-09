#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8011D2B4___vt__12TItemTexLoad {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
int alloc_buffer__11TOBoss4RockFPv(void *);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK TObjPlayer__sub_803DD5E8(void *, void *, void *, int);
extern RecoveredGlobal_8011D2B4___vt__12TItemTexLoad __vt__12TItemTexLoad;
extern s32 lbl_805D2C80;
extern s32 TItemTexLoad__name_buffer;
u8 *TItemTexLoad__ct(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_8011D2B4___vt__12TItemTexLoad_size[sizeof(RecoveredGlobal_8011D2B4___vt__12TItemTexLoad) == 0x18 ? 1 : -1];
u8 *TItemTexLoad__ct(u8 *arg0) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__12TItemTexLoad.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2C80;
    TObjPlayer__sub_803DD5E8((void *) (arg0 + 0x2C), (void *) (arg0 + 0x34), (void *) (TItemTexLoad__name_buffer), (int) (1));
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 1;
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = alloc_buffer__11TOBoss4RockFPv((void *)0x4800);
    return arg0;
}

}
