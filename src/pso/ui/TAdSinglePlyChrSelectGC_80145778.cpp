#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct Base_801457A4 { char pad[0x18]; };

struct VObj_801457A4 : Base_801457A4 {
    virtual void m0(int);
};

extern "C" {
s32 TLobby__sub_803DA16C(s32 *);
s32 mem_free(s32);
extern s32 menu_font_texture_list[];
extern s32 menu_font_glyph_data;
extern s32 lbl_805D56B4;
extern s32 menu_font_glyph_table;
extern struct VObj_801457A4 *menu_font_object;
s32 draw_menu_font_string(void *, s32, s32, f32, f32, f32);

extern const f32 lbl_805DB1A8;

void TAdSinglePlyChrSelectGC::render_status_disp(f32 arg1, f32 arg2) {
    draw_menu_font_string(this, -1, 0, arg1, arg2, lbl_805DB1A8);
}
#pragma push
#pragma fp_contract on
void TAdSinglePlyChrSelectGC::free_resources() {
    if (menu_font_object != NULL) {
        menu_font_object->m0(1);
    }
    TLobby__sub_803DA16C(menu_font_texture_list);
    mem_free(menu_font_glyph_table);
    mem_free(lbl_805D56B4);
    TAdSinglePlyChrSelectGC::safe_free(menu_font_glyph_data);
}
#pragma pop

}
