#include "types.h"
extern "C" {
s32 test_card_flag_2__12TBoss8DragonFv(void *p);
s32 fn_8006E82C(void *p);
}

extern "C" {

s32 fn_8006E82C(void *p) {
    return test_card_flag_2__12TBoss8DragonFv(p) ? 0x10000 : 0x20000;
}

}
