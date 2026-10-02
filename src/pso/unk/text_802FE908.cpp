#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 is_split_screen();
s32 get_current_floor();
s32 TLobby__sub_8020C1F0(s32, s32);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK spawn_for_each_fish__20TObjLiveMonitorSmallFi(s32);
M2C_UNK create__15TObjLiveMonitorFPv(s32);
M2C_UNK TObjLiveCameraCtrl__ct(void *, s32);
M2C_UNK __ct__17TObjBoss8DemoRoomFv(void *, s32);
extern void *tl_05;
void create_boss8_demo_objects(void);
}

extern "C" {

void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TObjBoss8PillerCtrl__ct(void *, f32, void *, s32, s32);
extern void *tl_05;

void create_boss8_piller_ctrl(s32 arg0, s32 arg1, f32 farg0) {
    void *obj = __nw__7TObjectFUl(0x38);
    if (obj != 0) {
        TObjBoss8PillerCtrl__ct(obj, farg0, tl_05, arg0, arg1);
    }
}
void create_boss8_demo_objects(void) {
    void *obj;
    if ((is_split_screen() == 0) && ((obj = __nw__7TObjectFUl(0x13C)) != 0)) {
        TObjLiveCameraCtrl__ct(obj, (*(s32 *)&tl_05));
    }
    create__15TObjLiveMonitorFPv((*(s32 *)&tl_05));
    spawn_for_each_fish__20TObjLiveMonitorSmallFi((*(s32 *)&tl_05));
    if ((TLobby__sub_8020C1F0(get_current_floor(), 1) == 0) && ((obj = __nw__7TObjectFUl(0x1C)) != 0)) {
        __ct__17TObjBoss8DemoRoomFv(obj, (*(s32 *)&tl_05));
    }
}

}
