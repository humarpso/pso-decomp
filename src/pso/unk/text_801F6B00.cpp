#include "types.h"
extern "C" {
s32 TWindowShortListCtrl__check_controller_button(void*, s32);
s32 poll_field_20c__22TQuestVmDownLoadServerFPv(void*);
extern u8 lbl_8050E208[];
void fn_801F6B00(u8* arg0);
}

extern "C" {

void fn_801F6B00(u8* arg0) {
    if (*(u32*)(arg0 + 0x294) == 0 || poll_field_20c__22TQuestVmDownLoadServerFPv(arg0 + 0x1C) != 0) {
        void* p = lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(p, 4) != 0 || TWindowShortListCtrl__check_controller_button(p, 2) != 0) {
            *(s32*)(arg0 + 0x2A0) = 0x11;
        }
    }
}

}
