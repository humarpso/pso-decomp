#include "pso/TObjBoss8DemoRoom.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__17TObjBoss8DemoRoomFv(void);
void run_task__17TObjBoss8DemoRoomFv(s32 arg0);
u32 TBoss8Dragon__sub_802F3348(M2C_UNK);
s32 TBoss8Dragon__sub_802FCCBC();
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_8023DEE0(s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK queue_destruction__7TObjectFv(s32);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *TObjBoss8DemoRoom__data_805D7010;

void render__17TObjBoss8DemoRoomFv(void) {
    set_global_param__8TObjFishFi(M2C_FIELD(M2C_FIELD(TObjBoss8DemoRoom__data_805D7010, void **, 0x42C), s32 *, 0xC));
    TObjPlayer__sub_803D9B2C();
    TObjFish__sub_803E46BC(M2C_FIELD(M2C_FIELD(TObjBoss8DemoRoom__data_805D7010, void **, 0x42C), s32 *, 8));
    reset_transform_state__10TObjPlayerFv();
    TObjPlayer__sub_803D9B78();
}

extern void *TObjBoss8DemoRoom__data_805D7010;

void run_task__17TObjBoss8DemoRoomFv(s32 arg0) {
    TObjPlayer__sub_8023DEE0(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(TObjBoss8DemoRoom__data_805D7010, void **, 0x42C), void **, 8), void **, 0x2C), void **, 4), s32 *, 4), 0, 1, 3);
    TObjPlayer__sub_8023DEE0(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(TObjBoss8DemoRoom__data_805D7010, void **, 0x42C), void **, 8), void **, 0x2C), void **, 0x30), void **, 4), s32 *, 4), 0, 0x14, 1);
    if ((TBoss8Dragon__sub_802F3348(0) != 0U) && (TBoss8Dragon__sub_802FCCBC() != 0)) {
        queue_destruction__7TObjectFv(arg0);
    }
}
TObjBoss8DemoRoom::~TObjBoss8DemoRoom() {}

}
