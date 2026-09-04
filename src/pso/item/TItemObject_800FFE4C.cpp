#include "types.h"

extern "C" {

int TItem__sub_800FFE70(void);
int set_flag_1024__11TItemObjectFPv(void* p);
int TObjTailsTailsMove__sub_800FFE04(void);
void TObjTailsTailsMove__sub_800FFE0C(void);
void TObjTailsTailsMove__sub_800FFE10(void);
int TObjTailsTailsMove__sub_800FFE14(void);
int clear_item_flags__10TObjPlayerFPvUi(void*, int);
s32 test_item_flags__10TObjPlayerFPvUi(s32, s32);

int set_flag_1024__11TItemObjectFPv(void* p) { return clear_item_flags__10TObjPlayerFPvUi(p, 1024); }

int TItem__sub_800FFE70(void) { return 0; }

}
