#include "types.h"
#include "pso/misc/TKeyBoardControl_8025CB70.h"
#include "pso/unk/text_8025FF8C.h"

extern "C" {
extern s32 current_language;
void fn_8025FF8C(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
        *(s32 *)((s8 *)arg0 + 0x60) = (s32) (*(s32 *)((s8 *)arg0 + 0x60) | 0x40);
        TKeyBoardControl__sub_8025CC3C((void *)(*(u32 *)((s8 *)arg0 + 0x70)));
        switch ((s32) current_language) {
        case 0:
        case 1:
            break;
        case 2:
        case 3:
        case 4:
            *(s32 *)((s8 *)arg0 + 0x6C) = 7;
            break;
        }
    }
}

}
