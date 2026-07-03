#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80099EF8();
s32 init__9TItemDataFv(s8 *);
s32 fn_801B7F4C(void *, s32);
u32 fn_801D4E10(s32, s8 *);
u32 fn_801D5764();
s32 all_parents_unqueued_for_destruction__7TObjectFv();
int TObjWarpBossMulti__sub_801B3514(void* p);
int fn_801B3540(void* p);
int fn_801B3564(void* p);
int fn_801B3588(void* p);
int TObjPlayer__sub_800495E0(void*, int);
int fn_8011E204(void*, int);
int fn_8011E238(void*, int);

int fn_801B3540(void* p) { return fn_8011E204(p, 4096); }
int fn_801B3564(void* p) { return fn_8011E238(p, 4096); }
int fn_801B3588(void* p) { return TObjPlayer__sub_800495E0(p, 1024); }
int fn_801B35AC(void) { return 0; }
int fn_801B35E4(void) { return 0; }
int fn_801B3620(void) { return 0; }
int fn_801B3674(void) { return 0; }
s32 fn_801B3748(void *arg0, s8 arg1, s8 arg2) {
    s8 sp8[24];

    init__9TItemDataFv(sp8);
    sp8[0] = arg1;
    sp8[1] = arg2;
    if (fn_801D4E10(M2C_FIELD(arg0, s32 *, 0xD00), sp8) == 0U) {
        return 0;
    }
    if (fn_801D5764() == 0U) {
        return 0;
    }
    if (fn_801B7F4C(arg0, fn_80099EF8()) == 0) {
        return 0;
    }
    if (fn_801D4E10(M2C_FIELD(arg0, s32 *, 0xD00), sp8) == 0U) {
        return 0;
    }
    if (fn_801D5764() == 0U) {
        return 0;
    }
    return all_parents_unqueued_for_destruction__7TObjectFv() != 0 ? 1 : 0;
}

}
