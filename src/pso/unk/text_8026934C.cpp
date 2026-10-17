#include "types.h"
#include "pso/unk/text_8026934C.h"

extern "C" {
s32 get_message_10__20TWindowSubStatusDispFl(int);
s32 __nw__7TObjectFUl(int);
void *TWindowMeseta__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 get_window_layout_position(int);
#pragma push
#pragma scheduling off
s32 create_meseta_window(s32 arg0) {
    s32 temp_r31;
    s32 var_r30;
    var_r30 = __nw__7TObjectFUl((int) (0x74));
    if (var_r30 != 0) {
        temp_r31 = get_message_10__20TWindowSubStatusDispFl((int) (0x82));
        var_r30 = (s32)TWindowMeseta__ct((void *)(var_r30), (get_window_layout_position((int) (0x28))), (arg0), (temp_r31));
    }
    return var_r30;
}
#pragma pop

}
