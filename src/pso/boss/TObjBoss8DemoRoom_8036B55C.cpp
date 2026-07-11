#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__17TObjBoss8DemoRoomFv(s32 arg0);
s32 TBoss8Dragon__sub_802FCCBC();
M2C_UNK fn_8023DEE0(s32, M2C_UNK, M2C_UNK, M2C_UNK);
u32 fn_802F3348(M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(s32);

extern void *TObjBoss8DemoRoom__data_805D7010;

void run_task__17TObjBoss8DemoRoomFv(s32 arg0) {
    fn_8023DEE0(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(TObjBoss8DemoRoom__data_805D7010, void **, 0x42C), void **, 8), void **, 0x2C), void **, 4), s32 *, 4), 0, 1, 3);
    fn_8023DEE0(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(TObjBoss8DemoRoom__data_805D7010, void **, 0x42C), void **, 8), void **, 0x2C), void **, 0x30), void **, 4), s32 *, 4), 0, 0x14, 1);
    if ((fn_802F3348(0) != 0U) && (TBoss8Dragon__sub_802FCCBC() != 0)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
