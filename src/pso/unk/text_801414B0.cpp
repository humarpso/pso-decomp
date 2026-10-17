#include "types.h"
#include "pso/unk/text_801414B0.h"
struct Tbl_801414B0 { s32 v[4]; };

extern "C" {
void GXSetTevSwapMode(int, int, int);
void GXSetTevSwapModeTable(int, int, int, int, int);
extern Tbl_801414B0 lbl_8043F278;
void fn_801414B0(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    if (arg0 >= 4) {
        return;
    }
    if (arg1 >= 4 || arg1 >= 4) {
        return;
    }
    {
        Tbl_801414B0 t = lbl_8043F278;
        GXSetTevSwapModeTable(1, t.v[arg0], t.v[arg1], t.v[arg2], t.v[arg3]);
        GXSetTevSwapMode(0, 1, 1);
    }
}

}
