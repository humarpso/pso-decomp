#include "types.h"
struct Txt_802497A8 { u16 flags; u8 pad2[6]; f32 x; u8 padC[4]; f32 w; };

struct Set_802497A8 { void *t0; Txt_802497A8 *t4; void *t8; void *tC; void *t10; void *t14; };

struct Win_802497A8 { u8 pad[4]; Set_802497A8 *set; };

extern "C" {
s32 get_shared_text_buffer();
s32 get_card_id__17TWindowSubComCardFPv(void *);
s8 TWindowSubComCard__sub_8007B6EC(void *);
s32 TWindowSubComCard__sub_8007B6F4(void *);
s32 get_stat_table_entry__9TObjLukerFi(int);
s32 get_com_card_list__6TLobbyFPv(void *);
void TWindowSubStatusDisp__sub_80228F5C(int);
void text_builder_reset();
void refresh_status_display__9TWindowDDFv(void *);
s32 get_kbd_ptr__14TWindowComCardFPv(void *);
s8 TWindowComCard__sub_80249C18(void *);
s8 TWindowComCard__sub_80249C20(void *);
s32 get_class_name_text(int);
void set_text_entry_string(void *, void *, int);
void set_default_status__17TWindowDuelResultFPvi(void *, int);
extern s32 lbl_804CE8E4[];
extern const f32 lbl_805DCBCC;
void fn_802497A8(Win_802497A8 *arg0, void *arg1);
}

extern "C" {

void fn_802497A8(Win_802497A8 *arg0, void *arg1) {
    Txt_802497A8 *t4;
    void *t14;
    void *t0;
    void *tC;
    void *t8;
    void *t10;
    Set_802497A8 *s;
    s32 n;
    s32 id;
    s = arg0->set;
    t0 = s->t0;
    tC = s->tC;
    t8 = s->t8;
    t10 = s->t10;
    t4 = s->t4;
    t14 = s->t14;
    set_text_entry_string(t0, (void *)get_com_card_list__6TLobbyFPv(arg1), 0x220);
    n = TWindowComCard__sub_80249C20(arg1);
    if (n > 5) {
        n = 5;
    }
    set_default_status__17TWindowDuelResultFPvi(tC, lbl_804CE8E4[n]);
    n = TWindowSubComCard__sub_8007B6EC(arg1);
    if (n > 0xC) {
        n = 0xC;
    }
    set_default_status__17TWindowDuelResultFPvi(t8, get_class_name_text(n));
    n = TWindowComCard__sub_80249C18(arg1);
    if (n > 0xA) {
        n = 0xA;
    }
    set_default_status__17TWindowDuelResultFPvi(t10, get_stat_table_entry__9TObjLukerFi(n));
    if (TWindowSubComCard__sub_8007B6F4(arg1) != 0) {
        id = get_card_id__17TWindowSubComCardFPv(arg1);
        if (id == 0) {
            t4->flags |= 2;
        } else {
            text_builder_reset();
            TWindowSubStatusDisp__sub_80228F5C(id);
            set_text_entry_string(t4, (void *)get_shared_text_buffer(), 0x20);
            refresh_status_display__9TWindowDDFv(t4);
            t4->x = lbl_805DCBCC - t4->w;
            t4->flags &= ~2;
        }
    } else {
        t4->flags |= 2;
    }
    set_text_entry_string(t14, (void *)get_kbd_ptr__14TWindowComCardFPv(arg1), 0x220);
}

}
