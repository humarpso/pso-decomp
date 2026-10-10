#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_801457A4 { char pad[0x18]; };

struct VObj_801457A4 : Base_801457A4 {
    virtual void m0(int);
};

extern "C" {
M2C_UNK TLobby__sub_803DA16C(M2C_UNK *);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
extern M2C_UNK menu_font_texture_list[];
extern s32 menu_font_glyph_data;
extern s32 lbl_805D56B4;
extern s32 menu_font_glyph_table;
extern struct VObj_801457A4 *menu_font_object;
void free_resources__23TAdSinglePlyChrSelectGCFv(void);
}

extern "C" {

void render_status_disp__23TAdSinglePlyChrSelectGCFPvff(void *arg0, f32 arg1, f32 arg2);
M2C_UNK draw_menu_font_string(void *, s32, s32, f32, f32, f32);

extern const f32 lbl_805DB1A8;

void render_status_disp__23TAdSinglePlyChrSelectGCFPvff(void *arg0, f32 arg1, f32 arg2) {
    draw_menu_font_string(arg0, -1, 0, arg1, arg2, lbl_805DB1A8);
}
#pragma push
#pragma fp_contract on
void free_resources__23TAdSinglePlyChrSelectGCFv(void) {
    if (menu_font_object != NULL) {
        menu_font_object->m0(1);
    }
    TLobby__sub_803DA16C(menu_font_texture_list);
    free__11TOBoss4RockFUi(menu_font_glyph_table);
    free__11TOBoss4RockFUi(lbl_805D56B4);
    safe_free__23TAdSinglePlyChrSelectGCFUi(menu_font_glyph_data);
}
#pragma pop

}
