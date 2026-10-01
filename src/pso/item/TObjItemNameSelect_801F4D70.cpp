#include "pso/TObjItemNameSelect.h"

extern "C" void TWindow__close(void*);

TObjItemNameSelect::~TObjItemNameSelect() {
    if (m_20 != nullptr) { TWindow__close(m_20); m_20 = nullptr; }
    if (m_1c != nullptr) { TWindow__close(m_1c); m_1c = nullptr; }
}

extern "C" {

struct Self_801F4DFC {
    const char *name;
    u8 pad4[0x18 - 0x4];
    void *vtable;
    void *m_1c;
    void *m_20;
};

struct Entry_801F4DFC {
    s32 id;
    s32 f4;
};

struct Pos_801F4DFC {
    f32 x;
    f32 y;
};

s32 get_instance__6TLobbyFv(void);
void *TQuestVmDownLoadServer__sub_8006EF6C(s32);
void *TItemData__sub_8010EEDC(s32);
void __ct__7TObjectFP7TObject(Self_801F4DFC *, void *);
void set_field_1c__6TLobbyFPvf(void *, f32);
void TWindowSubComCard__sub_80265500(void *);
void set_scroll_target__17TWindowSubComCardFPvff(void *, f32, f32);
void forward_trade_action_default__16TObjCityMainWarpFPviii(void *, void *, s32, s32);
void *check_room_seq_4__16TAdChrSelASlotGCFii(void *, s32);
void send_and_handle__6TLobbyFPvii(void *, void *, s32);
void *update_window_mode_from_progress__6TLobbyFiPv(void *, Pos_801F4DFC *);
void *TWindowSubComCard__sub_8026CBB8(s32);
extern Entry_801F4DFC lbl_804C8410[];
extern Entry_801F4DFC lbl_804C8488[];
extern u8 __vt__18TObjItemNameSelect[];
extern const char *lbl_805D35DC;
extern Entry_801F4DFC *lbl_805D5EF8;
extern const f32 lbl_805DC4F4;
extern const f32 lbl_805DC4F8;
extern const f32 lbl_805DC500;
extern const f32 lbl_805DC504;
extern const f32 lbl_805DC508;

Self_801F4DFC *TObjItemNameSelect__ct(Self_801F4DFC *self, void *parent) {
    Pos_801F4DFC pos;
    s32 i;

    __ct__7TObjectFP7TObject(self, parent);
    self->vtable = __vt__18TObjItemNameSelect;
    self->name = lbl_805D35DC;
    lbl_805D5EF8 = get_instance__6TLobbyFv() == 0 ? lbl_804C8410 : lbl_804C8488;
    self->m_1c = check_room_seq_4__16TAdChrSelASlotGCFii(TWindowSubComCard__sub_8026CBB8(0x58), 0x19);
    for (i = 0; lbl_805D5EF8[i].id != -1; i++) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(self->m_1c, TItemData__sub_8010EEDC(lbl_805D5EF8[i].id), 6, i);
    }
    set_scroll_target__17TWindowSubComCardFPvff(self->m_1c, lbl_805DC500, lbl_805DC504);
    TWindowSubComCard__sub_80265500(self->m_1c);
    set_field_1c__6TLobbyFPvf(self->m_1c, lbl_805DC508);
    pos.x = lbl_805DC4F4;
    pos.y = lbl_805DC4F8;
    self->m_20 = update_window_mode_from_progress__6TLobbyFiPv(TWindowSubComCard__sub_8026CBB8(0x55), &pos);
    if (self->m_20 != NULL) {
        send_and_handle__6TLobbyFPvii(self->m_20, TQuestVmDownLoadServer__sub_8006EF6C(0x46), 0x81);
    }
    return self;
}

}
