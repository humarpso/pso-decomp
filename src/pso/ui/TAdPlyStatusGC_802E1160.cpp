#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdPlyStatusGC__sub_802E1160(int a0, int a1);
int get_index__14TAdPlyStatusGCFv(void);
void TAdPlyStatusGC__sub_802E1170(int a0, int a1);
void close_window__14TAdPlyStatusGCFPvi(void *arg0, s32 arg1);
M2C_UNK TWindow__close(void *);

    extern int lbl_805D6DAC;
void TAdPlyStatusGC__sub_802E1160(int a0, int a1) { lbl_805D6DAC = a1; }

    extern int lbl_805D6DA8;
int get_index__14TAdPlyStatusGCFv(void) {  return lbl_805D6DA8; }

    extern int lbl_805D6DB4;
void TAdPlyStatusGC__sub_802E1170(int a0, int a1) { lbl_805D6DB4 = a1; }

extern s32 TAdPlyStatusGC__data_805D6DB0;

void close_window__14TAdPlyStatusGCFPvi(void *arg0, s32 arg1) {
    TAdPlyStatusGC__data_805D6DB0 = arg1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
}

}
