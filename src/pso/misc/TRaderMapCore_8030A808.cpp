#include "types.h"

extern "C" {

s32 is_not_split_screen__13TRaderMapCoreFv(void);

s32 is_split_screen();

s32 is_not_split_screen__13TRaderMapCoreFv(void) {
    return (u32)__cntlzw((u32)(1 - is_split_screen())) >> 5;
}

}
