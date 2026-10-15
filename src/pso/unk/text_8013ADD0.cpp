#include "types.h"

extern "C" {
extern u8 *text_language_group_table;
s32 fn_8013ADD0(s32 arg0);
}

extern "C" {

s32 fn_8013ADD0(s32 arg0) {
    return *(s32 *)((s8 *)(*(s32 *)((s8 *)text_language_group_table + 0x38)) + (arg0 * 4));
}

}
