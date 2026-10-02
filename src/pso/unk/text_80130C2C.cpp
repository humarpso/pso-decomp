#include "types.h"
typedef struct Obj_80130CD8 { u8 pad[0x200]; f32 f200; s32 f204; } Obj_80130CD8;

typedef s32 M2C_UNK;
struct Vec_80130C2C { f32 x, y, z; };

struct Ang_80130C2C { s32 x, y, z; };

struct Obj_80130C2C { u8 pad[0x60]; s32 angle; };

struct Pl_80130C2C {
    u8 pad[0xF0];
    struct Obj_80130C2C *f0;
    u8 padF4[0x204 - 0xF4];
    s32 f204;
};

extern "C" {
extern const f32 lbl_805DB024;
extern const f32 lbl_805DB028;
extern const f32 lbl_805DB02C;
void TObjPlayer__sub_80130CD8(Obj_80130CD8 *arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, M2C_UNK);
M2C_UNK draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, void *);
M2C_UNK TObjPlayer__sub_8012E284(s32, void *, M2C_UNK, struct Vec_80130C2C *, struct Ang_80130C2C *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern s32 tl_05;
extern const f32 lbl_805DB020;
void TObjPlayer__sub_80130C2C(struct Pl_80130C2C *arg0);
}

extern "C" {

void TObjPlayer__sub_80130C2C(struct Pl_80130C2C *arg0) {
    struct Vec_80130C2C pos;
    struct Ang_80130C2C ang;
    struct Vec_80130C2C sp8;
    s32 a;
    arg0->f204 = 2;
    a = arg0->f0->angle - 0x4000;
    pos.x = TBoss8Dragon__sub_803D64C0(a);
    pos.y = lbl_805DB020;
    pos.z = TBoss8Dragon__sub_803D64DC(a);
    ang.x = 0x4000;
    ang.y = arg0->f0->angle;
    ang.z = 0;
    TObjPlayer__sub_8012E284(tl_05, arg0, 3, &pos, &ang);
    draw_icon__10TObjPlayerFPvii(arg0, 2, &sp8);
    TObjEneDellBiter__sub_80087350(&sp8, 9);
}

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
