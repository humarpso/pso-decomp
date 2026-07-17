#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__12TAdMcCheckGCFv(u8 *arg0);
s32 TAdPlayerLoadGC__sub_801E0D8C(int);
s32 get_load_result__15TAdPlayerLoadGCFv(int);
s32 TAdPlayerLoadGC__sub_801E1E38(int);
s32 check_memcard_status__15TAdPlayerLoadGCFi(int);
u32 create__12TAdMcCheckGCFPvi(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);

void run_task__12TAdMcCheckGCFv(u8 *arg0) {
    s32 temp_r0;

    if (TAdPlayerLoadGC__sub_801E1E38((int) (M2C_FIELD(arg0, s32 *, 0x28))) == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x38));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        if (TAdPlayerLoadGC__sub_801E1E38((int) (M2C_FIELD(arg0, s32 *, 0x28))) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        }
        break;
    case 1:
        if ((TAdPlayerLoadGC__sub_801E0D8C((int) (M2C_FIELD(arg0, s32 *, 0x28))) == 0) && ((u32) (get_load_result__15TAdPlayerLoadGCFv((int) (M2C_FIELD(arg0, s32 *, 0x28))) + 0x10000) == 0xFF83U)) {
            if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U)) {
                M2C_FIELD(arg0, u32 *, 0x2C) = create__12TAdMcCheckGCFPvi((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x28) + 2));
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
            if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C));
                M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
            }
        }
        break;
    case 2:
        if ((TAdPlayerLoadGC__sub_801E0D8C((int) (M2C_FIELD(arg0, s32 *, 0x28))) == 0) && ((u32) (get_load_result__15TAdPlayerLoadGCFv((int) (M2C_FIELD(arg0, s32 *, 0x28))) + 0x10000) == 0xFF21U)) {
            if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x30) == 0U)) {
                M2C_FIELD(arg0, u32 *, 0x30) = create__12TAdMcCheckGCFPvi((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x28) + 4));
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = 3;
            if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
                M2C_FIELD(arg0, u32 *, 0x30) = 0U;
            }
        }
        break;
    case 3:
        if (TAdPlayerLoadGC__sub_801E0D8C((int) (M2C_FIELD(arg0, s32 *, 0x28))) != 0) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x28) == 1) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 5;
            } else {
                M2C_FIELD(arg0, s32 *, 0x1C) = 4;
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
                M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            }
        } else if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x34) == 0U)) {
            M2C_FIELD(arg0, u32 *, 0x34) = create__12TAdMcCheckGCFPvi((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x28) + 6));
        }
        break;
    case 4:
        if (check_memcard_status__15TAdPlayerLoadGCFi((int) (M2C_FIELD(arg0, s32 *, 0x28))) == 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 5;
            if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x38));
                M2C_FIELD(arg0, u32 *, 0x38) = 0U;
            }
        } else if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x38) == 0U)) {
            M2C_FIELD(arg0, u32 *, 0x38) = create__12TAdMcCheckGCFPvi((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x28) + 8));
        }
        break;
    case 5:
        break;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != (s32) M2C_FIELD(arg0, s32 *, 0x1C)) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
}

}
