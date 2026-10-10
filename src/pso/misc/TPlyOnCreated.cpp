#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801C6178___vt__13TPlyOnCreated {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_801C6178___vt__13TPlyOnCreated __vt__13TPlyOnCreated;
extern s32 TPlyOnCreated__name;
extern u8 *tl_06;
u8 *__ct__13TPlyOnCreatedFv(u8 *arg0, s16 arg1, s32 arg2);
}

extern "C" {

void run_task__13TPlyOnCreatedFv(void *arg0);
u32 get_player_by_client_id(u16);
M2C_UNK queue_destruction__7TObjectFv(void *);

void run_task__13TPlyOnCreatedFv(void *arg0) {
    M2C_UNK (*temp_r12)();

    if (get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x1C)) != 0U) {
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x20);
        if (temp_r12 != NULL) {
            temp_r12();
        }
        queue_destruction__7TObjectFv(arg0);
    }
}
typedef char RecoveredGlobal_801C6178___vt__13TPlyOnCreated_size[sizeof(RecoveredGlobal_801C6178___vt__13TPlyOnCreated) == 0x18 ? 1 : -1];
u8 *__ct__13TPlyOnCreatedFv(u8 *arg0, s16 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, tl_06);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__13TPlyOnCreated.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TPlyOnCreated__name;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    return arg0;
}

}

extern "C" {
extern char lbl_804470F0[];
s32 TPlyOnCreated__name = (s32)lbl_804470F0;
}
