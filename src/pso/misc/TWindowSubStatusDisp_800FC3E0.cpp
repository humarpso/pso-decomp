#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int set_global_param__8TObjFishFi(void*);
    extern int lbl_805D5540;
void begin_render__20TWindowSubStatusDispFv(s32 _w0);
void TFontSmallHelp__sub_800FC424(void *arg0, s32 arg1);
u32 fn_800FC0F8(void *);
M2C_UNK strncpy(void *, void *, M2C_UNK);
extern const f32 lbl_805DA9C0;
void set_help_text__14TFontSmallHelpFPvUi(u8 *arg0, u32 arg1);
}

extern "C" {

void render_forward__20TWindowSubStatusDispFPv(void* p);

void render_forward__20TWindowSubStatusDispFPv(void* p) { begin_render__20TWindowSubStatusDispFv((s32)(p)); }
void begin_render__20TWindowSubStatusDispFv(s32 _w0) { set_global_param__8TObjFishFi((void*)(lbl_805D5540)); }
void TFontSmallHelp__sub_800FC424(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (arg1 & 0xFFFFFF);
}
void set_help_text__14TFontSmallHelpFPvUi(u8 *arg0, u32 arg1) {
    if (arg1 == 0U) {
        M2C_FIELD(arg0, s8 *, 0x30) = 0;
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DA9C0;
        return;
    }
    strncpy(arg0 + 0x30, (void*)arg1, 0x1F);
    M2C_FIELD(arg0, s8 *, 0x4F) = 0;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) fn_800FC0F8(arg0 + 0x30);
}

}
