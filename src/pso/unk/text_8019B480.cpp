#include "types.h"
extern "C" {
s32 TCameraCtrl__sub_800688D0(void *);
s32 get_camera_id__11TCameraCtrlFv();
s32 is_not_split_screen__13TRaderMapCoreFv();
extern s64 lbl_804B913C[];
s64 fn_8019B480(void *arg0, void *arg1);
}

extern "C" {

s64 fn_8019B480(void *arg0, void *arg1) {
    s64 *p = lbl_804B913C;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        switch (get_camera_id__11TCameraCtrlFv()) {
        case 2:
            p = lbl_804B913C + 1;
            break;
        case 3:
            p = lbl_804B913C + 3;
            break;
        case 4:
            p = lbl_804B913C + 6;
            break;
        }
        p += TCameraCtrl__sub_800688D0(arg1);
    }
    return *p;
}

}
