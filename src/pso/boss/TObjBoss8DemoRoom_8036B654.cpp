#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__ct__17TObjBoss8DemoRoomFv(void *arg0);
void free_static_instance__17TObjBoss8DemoRoomFv(void);
s32 has_valid_target(void);
void TLobby__sub_8001FE7C(void*, int);
void __ct__7TObjectFP7TObject(void *);
s32 is_target_valid__17TObjEneHoldEffectFPv();

extern M2C_UNK __vt__17TObjBoss8DemoRoom[];
extern void *lbl_805D44E4;

void *__ct__17TObjBoss8DemoRoomFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjBoss8DemoRoom;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D44E4;
    return arg0;
}

extern u32 TObjBoss8DemoRoom__data_805D7010;

void free_static_instance__17TObjBoss8DemoRoomFv(void) {
    if ((u32) TObjBoss8DemoRoom__data_805D7010 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjBoss8DemoRoom__data_805D7010, 1);
        TObjBoss8DemoRoom__data_805D7010 = 0U;
    }
}

s32 has_valid_target(void) {
    return is_target_valid__17TObjEneHoldEffectFPv() ? 1 : 0;
}

}
