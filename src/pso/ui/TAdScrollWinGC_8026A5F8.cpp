#include "types.h"

extern "C" {

void TAdScrollWinGC__sub_8026A5F8(void* a0);
int TWindowSubLog__sub_8026A664(void);
void advance_scroll__14TAdScrollWinGCFPvf(void* p, f32 v);
void fn_8026A61C(void* p, f32 v);
int fn_8026A62C(void);

    extern const float lbl_805DD240;
void TAdScrollWinGC__sub_8026A5F8(void* a0) { *(float*)((char*)a0 + 0x84) = lbl_805DD240; *(float*)((char*)a0 + 0x6c) = lbl_805DD240; *(float*)((char*)a0 + 0x94) = lbl_805DD240; }

void advance_scroll__14TAdScrollWinGCFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x94) += v; }

void fn_8026A61C(void* p, f32 v) { *(f32*)((char*)p + 0x94) += v; }
int fn_8026A62C(void) { return 0; }
int TWindowSubLog__sub_8026A664(void) { return 0; }

}
