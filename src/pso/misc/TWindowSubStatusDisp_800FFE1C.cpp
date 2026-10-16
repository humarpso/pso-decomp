#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/item/TItemObject.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TObjTailsTailsMove__sub_800FFE04(void);
void TObjTailsTailsMove__sub_800FFE0C(void);
void TObjTailsTailsMove__sub_800FFE10(void);
int TObjTailsTailsMove__sub_800FFE14(void);

u8 TWindowSubStatusDisp::check_flag_400() {
    s32 uninit;
    return (u8) (((TObjPlayer *)uninit)->test_item_flags(0x400) == 0x400);
}

}
