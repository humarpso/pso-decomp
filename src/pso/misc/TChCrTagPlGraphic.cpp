#include "pso/TChCrTagPlGraphic.h"

TChCrTagPlGraphic::~TChCrTagPlGraphic() {}

#include "types.h"
#include "pso/TChCrCharSelect.h"
#include "pso/misc/TWindowSubSymbolChatPartsSet.h"

struct TChCrTagPlGraphic__data_804664A4 {
    s32 value;
    u8 remaining[0x11C];
};

struct RecoveredGlobal_802A3454___vt__17TChCrTagPlGraphic {
    s32 value;
    u8 remaining[0x1C];
};

extern "C" {
u8 * __ct__8TChCrTagFP7TObjectPv(void *, s32);
extern const TChCrTagPlGraphic__data_804664A4 TChCrTagPlGraphic__data_804664A4;
extern RecoveredGlobal_802A3454___vt__17TChCrTagPlGraphic __vt__17TChCrTagPlGraphic;
extern s32 ch_cr_tag_pl_graphic_class_name;
extern const f32 lbl_805DDF18;
extern const f32 lbl_805DDF2C;
extern const f32 lbl_805DDF30;
u8 *__ct__17TChCrTagPlGraphicFv(u8 *arg0, s32 arg1, s32 _w2);
s32 TChCrTagPlGraphic__vt4(u8 *arg0);
void render__17TChCrTagPlGraphicFv(void* p);
void run_task__17TChCrTagPlGraphicFv(void* p);
int TChCrTagPlGraphic__sub_802A3230(void*);
void update_fade__8TChCrTagFPv(u8 *arg0);
void *__nw__7TObjectFUl(int);
void restore_saved_depth_alpha_state(void);
int set_depth_buffer_settings_1__Fv(void*);

void render__17TChCrTagPlGraphicFv(void* p) { set_depth_buffer_settings_1__Fv(p); ((TChCrTagPlGraphic *)p)->draw_class_illustration(); restore_saved_depth_alpha_state(); }

void run_task__17TChCrTagPlGraphicFv(void* p) { update_fade__8TChCrTagFPv((u8 *)p); TChCrTagPlGraphic__sub_802A3230(p); }

extern void *tl_03;

typedef char RecoveredGlobal_802A3454_TChCrTagPlGraphic__data_804664A4_size[sizeof(TChCrTagPlGraphic__data_804664A4) == 0x120 ? 1 : -1];
typedef char RecoveredGlobal_802A3454___vt__17TChCrTagPlGraphic_size[sizeof(RecoveredGlobal_802A3454___vt__17TChCrTagPlGraphic) == 0x20 ? 1 : -1];

s32 TChCrTagPlGraphic__vt4(u8 *arg0) {
    switch (TChCrCharSelect::get_selected_index()) {
    case 0:
        if (*(s32 *)(arg0 + 0x20) / 4 == TChCrCharSelect::get_selected_char()) {
            return 1;
        }
        break;
    default:
        if (*(s32 *)(arg0 + 0x20) == TChCrCharSelect::get_instance()) {
            return 1;
        }
        break;
    }
    return 0;
}

u8 *__ct__17TChCrTagPlGraphicFv(u8 *ch_cr_tag, s32 arg1, s32 _w2) {
    u8 *temp_r5;
    __ct__8TChCrTagFP7TObjectPv(ch_cr_tag, arg1);
    *(s32 **)((s8 *)ch_cr_tag + 0x18) = &__vt__17TChCrTagPlGraphic.value;
    *(s32 *)((s8 *)ch_cr_tag + 0) = (s32) ch_cr_tag_pl_graphic_class_name;
    *(f32 *)((s8 *)ch_cr_tag + 0x28) = (f32) lbl_805DDF2C;
    *(f32 *)((s8 *)ch_cr_tag + 0x2C) = (f32) lbl_805DDF30;
    *(f32 *)((s8 *)ch_cr_tag + 0x34) = (f32) lbl_805DDF2C;
    *(f32 *)((s8 *)ch_cr_tag + 0x38) = (f32) lbl_805DDF30;
    *(f32 *)((s8 *)ch_cr_tag + 0x3C) = (f32) lbl_805DDF18;
    temp_r5 = (u8 *)&TChCrTagPlGraphic__data_804664A4.value + (*(s32 *)((s8 *)ch_cr_tag + 0x20) * 0x18);
    *(f32 *)((s8 *)ch_cr_tag + 0x40) = (f32) *(f32 *)((s8 *)temp_r5 + 4);
    *(f32 *)((s8 *)ch_cr_tag + 0x44) = (f32) *(f32 *)((s8 *)temp_r5 + 0);
    ((TWindowSubSymbolChatPartsSet *)(ch_cr_tag + 0x48))->copy_vec2(temp_r5 + 8);
    return ch_cr_tag;
}

void *TChCrTagPlGraphic::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = __ct__17TChCrTagPlGraphicFv((u8 *)o, (s32)tl_03, (s32)arg0);
    }
    return o;
}

struct Ent_802A3534 { f32 a; f32 b; u8 pad[0x10]; };
extern f32 tag_player_graphic_match_value_table[];

void TChCrTagPlGraphic::create_matching_tags() {
    s32 i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 12; j++) {
            if (((Ent_802A3534 *)&TChCrTagPlGraphic__data_804664A4)[j].b == tag_player_graphic_match_value_table[i]) {
                TChCrTagPlGraphic::create((void *)j);
            }
        }
    }
}

}
