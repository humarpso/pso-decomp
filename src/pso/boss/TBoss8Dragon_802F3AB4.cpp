#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 setup_attack_slot__12TBoss8DragonFiUiiiPv(s32 arg0, u32 arg1, s32 arg2, s32 arg3, u8 *arg4);
M2C_UNK TBoss4DarkFalz__sub_8004B4F0(void *, void *);
void TBoss8Dragon__sub_802F3B50(void);
void TBoss8Dragon__sub_802F3B54(void);
s16 get_part_count_plus__12TBoss8DragonFPvi(void *, void *);
s16 TBoss8Dragon__sub_802F3C94(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

s32 setup_attack_slot__12TBoss8DragonFiUiiiPv(s32 arg0, u32 arg1, s32 arg2, s32 arg3, u8 *arg4) {
    if ((arg3 < 0) || (arg3 > 5)) {
        return 0;
    }
    TBoss4DarkFalz__sub_8004B4F0((void *) (arg4), (void *) (arg0 + 0x1C));
    M2C_FIELD(arg4, s16 *, 0) = TBoss8Dragon__sub_802F3C94((void *) (arg0), (void *) (arg3));
    M2C_FIELD(arg4, s16 *, 2) = 0;
    M2C_FIELD(arg4, s16 *, 6) = get_part_count_plus__12TBoss8DragonFPvi((void *) (arg0), (void *) (arg3));
    if (arg1 != 0U) {
        VecCopy__FP3VecPC3Vec((void *) (arg4 + 0x10), (void *) (arg1));
    }
    M2C_FIELD(arg4, s32 *, 0x20) = arg2;
    return 1;
}

}

}
