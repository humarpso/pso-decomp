#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
s32 TObjPlayer__sub_800196EC();
s32 TLobby__sub_8020C1F0(s32, s32);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_8030B17C(s32);
M2C_UNK fn_8030B5E8(s32);
M2C_UNK TObjLiveCameraCtrl__ct(void *, s32);
M2C_UNK __ct__17TObjBoss8DemoRoomFv(void *, s32);
extern s32 tl_05;

void fn_802FE964(void) {
    void *obj;
    if ((is_split_screen() == 0) && ((obj = __nw__7TObjectFUl(0x13C)) != 0)) {
        TObjLiveCameraCtrl__ct(obj, tl_05);
    }
    fn_8030B5E8(tl_05);
    fn_8030B17C(tl_05);
    if ((TLobby__sub_8020C1F0(TObjPlayer__sub_800196EC(), 1) == 0) && ((obj = __nw__7TObjectFUl(0x1C)) != 0)) {
        __ct__17TObjBoss8DemoRoomFv(obj, tl_05);
    }
}

}
