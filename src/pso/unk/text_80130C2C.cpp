#include "types.h"
typedef struct Obj_80130CD8 { u8 pad[0x200]; f32 f200; s32 f204; } Obj_80130CD8;

extern "C" {
extern const f32 lbl_805DB024;
extern const f32 lbl_805DB028;
extern const f32 lbl_805DB02C;
void TObjPlayer__sub_80130CD8(Obj_80130CD8 *arg0);
}

extern "C" {

void TObjPlayer__sub_80130CD8(Obj_80130CD8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    switch (arg0->f204) {
    case 1:
        temp_f2 = lbl_805DB024;
        temp_f1 = arg0->f200;
        if (temp_f2 < temp_f1) {
            arg0->f200 = temp_f1 - lbl_805DB028;
            if (arg0->f200 <= temp_f2) {
                arg0->f200 = temp_f2;
                arg0->f204 = 0;
            }
        }
        break;
    case 2:
        temp_f2 = arg0->f200;
        if (temp_f2 < lbl_805DB02C) {
            arg0->f200 = temp_f2 + lbl_805DB028;
            if (lbl_805DB02C <= arg0->f200) {
                arg0->f200 = lbl_805DB02C;
                arg0->f204 = 3;
            }
        }
        break;
    case 3:
        arg0->f204 = 1;
        break;
    }
}

}
