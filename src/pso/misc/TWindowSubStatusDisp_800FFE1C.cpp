#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

s32 test_item_flags__10TObjPlayerFUl(s32, s32);
int TObjTailsTailsMove__sub_800FFE04(void);
void TObjTailsTailsMove__sub_800FFE0C(void);
void TObjTailsTailsMove__sub_800FFE10(void);
int TObjTailsTailsMove__sub_800FFE14(void);
int set_flag_1024__11TItemObjectFv(void* p);
int clear_item_flags__10TObjPlayerFUl(void*, int);

u8 TWindowSubStatusDisp::check_flag_400() {
    s32 uninit;
    return (u8) (test_item_flags__10TObjPlayerFUl(uninit, 0x400) == 0x400);
}

}
