#include "types.h"
struct P2_8032AC9C { f32 x, y; };

extern "C" {
void TWindowSubComCard__sub_80245F98();
void *TAdSinglePlyChrSelectGC__sub_80132F2C(int, int);
void render_status_line__15TAdSubPlyItemGCFPvi(void *, int, f32, f32, f32);
void fn_8032AACC(void *);
void fn_8032AC24();
void fn_8032AC94();
extern P2_8032AC9C lbl_804ED9F0[];
extern s32 lbl_805D6CA8;
extern const f32 lbl_805DF778;
void fn_8032AC9C(void *arg0, void *arg1);
}

extern "C" {

void fn_8032AC9C(void *arg0, void *arg1) {
    TWindowSubComCard__sub_80245F98();
    render_status_line__15TAdSubPlyItemGCFPvi(TAdSinglePlyChrSelectGC__sub_80132F2C(0x17, 4), -1, lbl_804ED9F0[0].x, lbl_804ED9F0[0].y, lbl_805DF778);
    switch (lbl_805D6CA8) {
    case 0:
    case 1:
        fn_8032AC94();
        return;
    case 2:
        fn_8032AC24();
        return;
    case 3:
        fn_8032AACC(arg1);
        return;
    }
}

}
