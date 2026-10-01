#include "pso/TObjCMHexTile.h"

TObjCMHexTile::~TObjCMHexTile() {}

extern "C" {

struct V2_802947A8 {
    f32 x;
    f32 y;
};

void create_TObjCMHexTile(V2_802947A8 *);
extern const f32 lbl_805DDA38;
extern const f32 lbl_805DDA3C;
extern const f32 lbl_805DDA40;
extern const f32 lbl_805DDA44;
extern const f32 lbl_805DDA48;
extern const f32 lbl_805DDA4C;
extern const f32 lbl_805DDA50;

void fn_802947A8(void) {
    f32 limY;
    f32 stepY;
    f32 limX;
    f32 stepX;
    f32 evenX;
    f32 oddX;
    V2_802947A8 p;
    s32 odd = 0;

    p.y = lbl_805DDA38;
    stepX = lbl_805DDA44;
    limX = lbl_805DDA48;
    stepY = lbl_805DDA4C;
    limY = lbl_805DDA50;
    oddX = lbl_805DDA3C;
    evenX = lbl_805DDA40;
    for (; p.y < limY; p.y += stepY) {
        if (odd != 0) {
            p.x = oddX;
        } else {
            p.x = evenX;
        }
        for (; p.x < limX; p.x += stepX) {
            create_TObjCMHexTile(&p);
        }
        odd ^= 1;
    }
}

}
