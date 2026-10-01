#include "types.h"
struct Desc_80349844 {
    f32 *pos;
    s32 *col;
    s32 a;
    s32 b;
};

extern "C" {
void fn_801E3330(Desc_80349844 *, s32, s32, f32);
extern const f32 lbl_805DFD04;
extern const f32 lbl_805DFD08;
extern const f32 lbl_805DFD0C;
extern const f32 lbl_805DFD10;
extern const f32 lbl_805DFD14;
void fn_80349844(void);
}

extern "C" {

void fn_80349844(void) {
    f32 pos[8];
    Desc_80349844 d;
    s32 col[4];
    u32 i;
    f32 y;
    f32 y2;
    d.pos = pos;
    d.col = col;
    d.a = 0;
    d.b = 4;
    for (i = 0; i < 0x78; i++) {
        d.pos[0] = lbl_805DFD04;
        y = lbl_805DFD08 * (f32) i;
        d.pos[1] = y;
        d.col[0] = 0xFF001A36;
        d.pos[2] = lbl_805DFD0C;
        y2 = lbl_805DFD10 + y;
        d.pos[3] = y;
        d.col[1] = 0xFF001A36;
        d.pos[4] = lbl_805DFD0C;
        d.pos[5] = y2;
        d.col[2] = 0xFF001A36;
        d.pos[6] = lbl_805DFD0C;
        d.pos[7] = y2;
        d.col[3] = 0xFF001A36;
        fn_801E3330(&d, 4, 3, lbl_805DFD14);
    }
}

}
