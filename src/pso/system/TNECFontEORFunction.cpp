#include "pso/TNECFontEORFunction.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK DCFlushRange(void *, int);
M2C_UNK init_and_load_tlut(int, int, int, void *);
extern s32 lbl_805D56B4;
extern s32 menu_font_upload_flags;
extern u8 lbl_805D56C0;
M2C_UNK DCFlushRange(void *, int);
M2C_UNK init_and_load_tlut(int, int, int, void *);
extern s32 lbl_805D56B4;
extern s32 menu_font_upload_flags;
extern u8 lbl_805D56C0;
}

extern "C" {

extern "C" u8 lbl_8050C090[];
__declspec(section ".data") void *menu_font_texture_list[2] = {
    (void *)&lbl_8050C090, (void *)0x2,
};
s32 lbl_804A74F0[191] = {
    7, 9, 13, 11, 15, 14, 7, 8, 8, 11, 11, 7, 11, 7, 11, 12,
    12, 12, 12, 12, 12, 12, 12, 12, 12, 7, 7, 9, 11, 9, 10, 15,
    13, 12, 13, 12, 11, 11, 13, 12, 8, 11, 12, 11, 15, 12, 13, 11,
    13, 12, 11, 13, 12, 13, 15, 12, 13, 11, 8, 11, 8, 8, 9, 8,
    12, 11, 12, 11, 12, 10, 12, 11, 6, 9, 11, 6, 14, 11, 12, 11,
    11, 9, 11, 10, 11, 12, 15, 11, 11, 11, 9, 8, 9, 9, 9, 12,
    7, 10, 13, 10, 10, 7, 10, 8, 17, 9, 12, 11, 9, 17, 9, 7,
    11, 8, 8, 8, 11, 11, 8, 7, 6, 9, 12, 13, 13, 13, 10, 13,
    13, 13, 13, 13, 13, 17, 13, 11, 11, 11, 11, 8, 8, 8, 8, 12,
    12, 13, 13, 13, 13, 13, 11, 13, 12, 12, 12, 12, 15, 11, 10, 12,
    12, 12, 12, 12, 12, 17, 12, 12, 12, 12, 12, 6, 6, 6, 6, 11,
    11, 12, 12, 12, 12, 12, 11, 12, 11, 11, 11, 11, 11, 11, 11,
};
void run_task__19TNECFontEORFunctionFv(void) {
    if (menu_font_upload_flags & 2) {
        DCFlushRange((void *) (lbl_805D56B4), (int) (0x80));
        init_and_load_tlut((int) (0), (int) (2), (int) (0x80), (void *) (lbl_805D56B4));
        menu_font_upload_flags &= 0xFFFFFFFD;
    }
    if (menu_font_upload_flags & 1) {
        menu_font_upload_flags &= 0xFFFFFFFE;
        lbl_805D56C0 += 1;
    }
}
TNECFontEORFunction::~TNECFontEORFunction() {}

}
