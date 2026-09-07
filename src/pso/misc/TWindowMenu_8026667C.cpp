#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80266B30_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 TWindowMenu__sub_80266B18(u8 *arg0, s32 arg1);
u8 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *);
extern s8 lbl_8050E208[];
u8 TWindowMenu__sub_80266B30(u8 *arg0);
}

extern "C" {

int TWindowMenu__sub_80266BB8(void* p);
void *__dt__11TWindowMenuFv(void *arg0, s16 arg1);
void copy_position__11TWindowMenuFPvPv(void* p, void* q);
s32 is_locked__11TWindowMenuFPvi(void *arg0, s32 arg1);
void render__11TWindowMenuFv(u8 *arg0);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
M2C_UNK TWindowSubComCard__sub_802665C0(void *, s32);
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(s32, s32, void *);
void __dl__7TObjectFPv(void *);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, M2C_UNK, M2C_UNK, M2C_UNK);
void destroy_allocation__20TWindowSubStatusDispFis(void *, int);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
void destroy_window__15TWindowAdditionFPvs(void *, int);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);
void free__11TOBoss4RockFUi(void *);
M2C_UNK render_selected_entry__17TWindowSubComCardFPvi(void *, s32);
void reset_selection__17TWindowSubComCardFPv(void* p);

void render__11TWindowMenuFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x80)) {
        render_selected_entry__17TWindowSubComCardFPvi(arg0, temp_r3);
        TWindowSubComCard__sub_802665C0(arg0, temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x88), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        TWindowSubStatusDisp__sub_8026D790(M2C_FIELD(arg0, u32 *, 0x84), temp_r3, arg0 + 0x68);
    }
}

extern M2C_UNK __vt__11TWindowMenu[];

void *__dt__11TWindowMenuFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TWindowMenu;
        destroy_allocation__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x84), 1);
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x88), 1);
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x80));
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void copy_position__11TWindowMenuFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

extern s8 lbl_8050E208[];

s32 TWindowMenu__sub_80266B18(u8 *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x28) + (arg1 * 4)), u16 **, 0), u16 *, 0) & 1;
}

typedef char RecoveredGlobal_80266B30_lbl_8050E208_size[sizeof(RecoveredGlobal_80266B30_lbl_8050E208) == 0x1B0 ? 1 : -1];
u8 TWindowMenu__sub_80266B30(u8 *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x70) & 0x200) {
        return 0U;
    }
    return test_flag_4c__23TAdSinglePlyChrSelectGCFPv((u8 *)&(*(RecoveredGlobal_80266B30_lbl_8050E208 *)&lbl_8050E208).value + 0x160);
}

s32 is_locked__11TWindowMenuFPvi(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u16 *, 0x70) & 0x200) {
        return 0;
    }
    return apply_choice__20TWindowChoiceSettingFiiii(lbl_8050E208 + 0x160, arg1, 6, 1);
}

int TWindowMenu__sub_80266BB8(void* p) { return (*(u16*)((char*)p + 0x70) >> 6) & 0x1; }

}
