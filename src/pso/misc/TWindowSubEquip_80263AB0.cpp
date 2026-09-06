#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 TWindowSubEquip__sub_80263AF8(u8 *arg0, u32 arg1);
}

extern "C" {

void TWindowSubEquip__sub_80263AF4(void);
void call_if_split_screen(u32 arg0);
void open_submenu__15TWindowSubEquipFii(s32 arg0, s32 arg1);
void set_scale_f__15TWindowSubEquipFPv(void* a0);
M2C_UNK TWindowSubEquip__sub_8026417C(s32, s16);
M2C_UNK destroy_submenu__15TWindowMainMenuFPv();
s32 fn_802449E0(u32);
s32 is_split_screen();

void call_if_split_screen(u32 arg0) {
    if ((is_split_screen() != 0) && (arg0 != 0U)) {
        fn_802449E0(arg0);
    }
}
void TWindowSubEquip__sub_80263AF4(void) {  }

    extern const float lbl_805DD138;

f32 TWindowSubEquip__sub_80263AF8(u8 *arg0, u32 arg1) {
    return M2C_FIELD(arg0, f32 *, 0x58) - (f32) arg1;
}

void set_scale_f__15TWindowSubEquipFPv(void* a0) { *(float*)((char*)a0 + 0x58) = lbl_805DD138; }

void open_submenu__15TWindowSubEquipFii(s32 arg0, s32 arg1) {
    destroy_submenu__15TWindowMainMenuFPv();
    TWindowSubEquip__sub_8026417C(arg0, (s16) arg1);
}

}
