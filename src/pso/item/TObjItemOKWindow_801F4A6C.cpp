#include "pso/TObjItemOKWindow.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" void TWindow__close(void*);

TObjItemOKWindow::~TObjItemOKWindow() {
    if (m_64 != nullptr) { TWindow__close(m_64); m_64 = nullptr; }
    if (m_5c != nullptr) { TWindow__close(m_5c); m_5c = nullptr; }
    if (m_60 != nullptr) { TWindow__close(m_60); m_60 = nullptr; }
}

struct Pos_801F4B10 { f32 x, y; };
struct Self_801F4B10 {
    s32 name;
    u8 pad4[0x18 - 0x4];
    void *vtable;
    char buf[0x5B - 0x1C];
    s8 term;
    void *win5C;
    void *win60;
    void *win64;
};

extern "C" {

void *TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 TObjItemOKWindow__sub_801F3268(void);
s32 fn_801F4C98(void);
void set_status_flag_80__12TQuestThreadFPv(void *);
void __ct__7TObjectFP7TObject(void *, void *);
void align_menu_entry_positions(void *);
void forward_trade_action_default__16TObjCityMainWarpFPviii(void *, void *, s32, s32);
void *init_shop_judgment_window(void *);
void *check_room_seq_4__16TAdChrSelASlotGCFl(void *, s32);
void send_and_handle__6TLobbyFii(void *, void *, s32);
void *update_window_mode_from_progress__6TLobbyFPv(void *, Pos_801F4B10 *);
void *get_window_layout_position(s32);
int sprintf(char *, const char *, ...);
extern char lbl_8044A638[];
extern u8 __vt__16TObjItemOKWindow[];
extern s32 TObjItemOKWindow__class_name;
extern const f32 lbl_805DC4E0;
extern const f32 lbl_805DC4E4;
extern char lbl_805DC4E8[4];
extern const f32 lbl_805DC4EC;
extern const f32 lbl_805DC4F0;
extern const f32 lbl_805DC4F4;
extern const f32 lbl_805DC4F8;

Self_801F4B10 *TObjItemOKWindow__ct(Self_801F4B10 *self, void *parent) {
    Pos_801F4B10 pos;
    s32 n;

    __ct__7TObjectFP7TObject(self, parent);
    self->vtable = __vt__16TObjItemOKWindow;
    self->name = TObjItemOKWindow__class_name;
    self->win60 = init_shop_judgment_window(get_window_layout_position(0x57));
    if (self->win60 != NULL) {
        ((TWindowSubComCard *)(self->win60))->set_scroll_target(lbl_805DC4E0, lbl_805DC4E4);
        align_menu_entry_positions(self->win60);
    }
    self->win5C = check_room_seq_4__16TAdChrSelASlotGCFl(get_window_layout_position(0x56), 1);
    if (self->win5C != NULL) {
        n = fn_801F4C98();
        if (n != 0) {
            sprintf(self->buf, lbl_8044A638, TObjItemOKWindow__sub_801F3268(), n);
        } else {
            sprintf(self->buf, lbl_805DC4E8, TObjItemOKWindow__sub_801F3268());
        }
        self->term = 0;
        forward_trade_action_default__16TObjCityMainWarpFPviii(self->win5C, self->buf, 0x81, 0);
    }
    ((TWindowSubComCard *)(self->win5C))->set_scroll_target(lbl_805DC4EC, lbl_805DC4F0);
    align_menu_entry_positions(self->win5C);
    set_status_flag_80__12TQuestThreadFPv(self->win5C);
    pos.x = lbl_805DC4F4;
    pos.y = lbl_805DC4F8;
    self->win64 = update_window_mode_from_progress__6TLobbyFPv(get_window_layout_position(0x55), &pos);
    if (self->win64 != NULL) {
        send_and_handle__6TLobbyFii(self->win64, TQuestVmDownLoadServer__sub_8006EF6C(0x48), 0x81);
    }
    return self;
}

}
