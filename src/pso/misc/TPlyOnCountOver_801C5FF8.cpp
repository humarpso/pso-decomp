#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801C606C___vt__15TPlyOnCountOver {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_801C606C___vt__15TPlyOnCountOver __vt__15TPlyOnCountOver;
extern s32 TPlyOnCountOver__name;
extern u8 *tl_06;
u8 *__ct__15TPlyOnCountOverFv(u8 *arg0, s16 arg1, s16 arg2, s32 arg3);
void queue_destruction__7TObjectFv(void *);
u32 get_player_by_client_id(int);
void run_task__15TPlyOnCountOverFv(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_801C606C___vt__15TPlyOnCountOver_size[sizeof(RecoveredGlobal_801C606C___vt__15TPlyOnCountOver) == 0x18 ? 1 : -1];

void run_task__15TPlyOnCountOverFv(u8 *arg0) {
    void (*cb)(u32);
    u32 p;
    p = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x1C));
    if (p == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if (--M2C_FIELD(arg0, s16 *, 0x1E) < 0) {
        cb = M2C_FIELD(arg0, void (**)(u32), 0x20);
        if (cb != NULL) {
            cb(p);
        }
        queue_destruction__7TObjectFv(arg0);
    }
}

u8 *__ct__15TPlyOnCountOverFv(u8 *arg0, s16 arg1, s16 arg2, s32 arg3) {
    __ct__7TObjectFP7TObject(arg0, tl_06);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__15TPlyOnCountOver.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TPlyOnCountOver__name;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s16 *, 0x1E) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = arg3;
    return arg0;
}

}
