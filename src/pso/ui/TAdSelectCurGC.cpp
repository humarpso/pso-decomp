#include "types.h"

extern "C" {

u8 check_flag_0x48__14TAdSelectCurGCFPv(void *arg0);

s32 TRaderMapCore__sub_801A6D00();

u8 check_flag_0x48__14TAdSelectCurGCFPv(void *arg0) {
    return (u8) ((*(s32 *)((s8 *)arg0 + 0x48) & TRaderMapCore__sub_801A6D00()) != 0);
}

}
