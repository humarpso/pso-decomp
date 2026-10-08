#include "types.h"
extern "C" {
void create__22TChCrTagInformationStrFPvPv(void);
extern s32 lbl_805D40BC;
void fn_80309890(void *o, s32 v);
}

extern "C" {

void fn_80309890(void *o, s32 v) {
    if (v == lbl_805D40BC || v < -1 || v >= 0xF) {
        return;
    }
    lbl_805D40BC = v;
    if (v != -1) {
        create__22TChCrTagInformationStrFPvPv();
    }
}

}
