#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void __dt__9TItemDropFv(void);
void run_task__9TItemDropFv(void);
M2C_UNK TItemDrop__sub_801063D8();
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 TOBoss4Rock__sub_80147AA8(M2C_UNK);

extern s32 TItemDrop__data_805D5468;
extern s32 TItemDrop__data_805D546C;

void run_task__9TItemDropFv(void) {
    free__11TOBoss4RockFUi(TItemDrop__data_805D546C);
    TItemDrop__data_805D546C = 0;
    free__11TOBoss4RockFUi(TItemDrop__data_805D5468);
    TItemDrop__data_805D5468 = 0;
}

extern s32 TItemDrop__data_805D5468;
extern s32 TItemDrop__data_805D546C;

void __dt__9TItemDropFv(void) {
    TItemDrop__data_805D5468 = TOBoss4Rock__sub_80147AA8(0x88);
    TItemDrop__data_805D546C = TOBoss4Rock__sub_80147AA8(0xD);
    TItemDrop__sub_801063D8();
}

}
