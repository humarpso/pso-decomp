#include "types.h"
typedef s32 M2C_UNK;
extern "C" {
s32 obj_getField1c(s32);
M2C_UNK TObjPlayer__sub_801BF414(s32, s32, s32, void (*)(int));
s32 __nw__7TObjectFUl(M2C_UNK);
void init_subobject__10TObjPlayerFi(int);
void queue_player_injured_pose(s32 arg0);
}

extern "C" {

void queue_player_injured_pose(s32 arg0) {
    s32 temp_r3;
    temp_r3 = __nw__7TObjectFUl(0x24);
    if (temp_r3 != 0) {
        TObjPlayer__sub_801BF414(temp_r3, arg0, obj_getField1c(arg0), init_subobject__10TObjPlayerFi);
    }
}

}
