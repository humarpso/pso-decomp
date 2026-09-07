#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802E0B60_lbl_804E2F68 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802E0B60_lbl_804E3008 {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
s32 __dt__10TObjMotionFv(void *, int);
s32 free__11TOBoss4RockFUi(int);
s32 __dl__7TObjectFPv(void *);
s32 free_chcr_resources(int, int);
s32 set_status_param__14TAdPlyStatusGCFii(int, int);
u32 get_index__14TAdPlyStatusGCFv();
extern RecoveredGlobal_802E0B60_lbl_804E2F68 lbl_804E2F68;
extern RecoveredGlobal_802E0B60_lbl_804E3008 lbl_804E3008;
u8 *fn_802E0B60(u8 *arg0, s16 arg1);
}

extern "C" {

typedef char RecoveredGlobal_802E0B60_lbl_804E2F68_size[sizeof(RecoveredGlobal_802E0B60_lbl_804E2F68) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_802E0B60_lbl_804E3008_size[sizeof(RecoveredGlobal_802E0B60_lbl_804E3008) == 0x38 ? 1 : -1];
u8 *fn_802E0B60(u8 *arg0, s16 arg1) {
    s32 temp_r4;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804E3008.value;
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x10C) * 4;
        if ((u32) M2C_FIELD(&lbl_804E2F68.value, M2C_UNK *, temp_r4) != 0U) {
            M2C_FIELD(&lbl_804E2F68.value, M2C_UNK *, temp_r4) = 0;
        }
        temp_r3 = M2C_FIELD(arg0, u32 *, 0xE0);
        if (temp_r3 != 0U) {
            free__11TOBoss4RockFUi((int) (temp_r3));
            M2C_FIELD(arg0, u32 *, 0xE0) = 0U;
        }
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x170);
        if (temp_r3_2 != 0U) {
            free_chcr_resources((int) (temp_r3_2), (int) (1));
            M2C_FIELD(arg0, u32 *, 0x170) = 0U;
            temp_r3_3 = get_index__14TAdPlyStatusGCFv();
            if (temp_r3_3 != 0U) {
                set_status_param__14TAdPlyStatusGCFii((int) (temp_r3_3), (int) (M2C_FIELD(arg0, u32 *, 0x170)));
            }
        }
        __dt__10TObjMotionFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
