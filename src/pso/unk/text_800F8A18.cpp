#include "types.h"
#include "pso/unk/text_800F8A18.h"
#include "pso/unk/text_800F8A78.h"
#include "pso/unk/text_803DEE48.h"

extern "C" {

s32 strncmp(s32, s32 *, s32);
s32 strncpy(s32 *, s32, s32);
extern s32 player_name_copy_buffer[];
extern s32 lbl_805DA914;

void copy_name(s32 arg0) {
    strncpy(player_name_copy_buffer, arg0, 0x10);
    if (strncmp(arg0, &lbl_805DA914, 0x10) == 0) {
        fn_800F8A78();
    }
    fn_803DEE48((const char *)arg0);
}

}
