#include "types.h"

extern "C" {
extern u32 soft_keyboard_instance;
void TWindowCtrlMain__sub_8024EF30(void);
}

extern "C" {

void free_keyboard_soft__15TWindowCtrlMainFv(void);
void free_singleton__19TWindowKeyBoardSoftFUis(void*, int);

extern u32 soft_keyboard_instance;

void free_keyboard_soft__15TWindowCtrlMainFv(void) {
    if ((u32) soft_keyboard_instance != 0U) {
        free_singleton__19TWindowKeyBoardSoftFUis((void*)soft_keyboard_instance, 1);
        soft_keyboard_instance = 0U;
    }
}
void TWindowCtrlMain__sub_8024EF30(void) { (*(int *)&soft_keyboard_instance) = 0; }

}
