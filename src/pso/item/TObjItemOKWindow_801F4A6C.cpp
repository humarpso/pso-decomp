#include "pso/TObjItemOKWindow.h"
#include "pso/unk/text_801F4C70.h"
#include "pso/misc/TLobby_801F2D2C.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" void TWindow__close(u8 *arg0);

TObjItemOKWindow::~TObjItemOKWindow() {
    if (m_64 != nullptr) { TWindow__close((u8 *)m_64); m_64 = nullptr; }
    if (m_5c != nullptr) { TWindow__close((u8 *)m_5c); m_5c = nullptr; }
    if (m_60 != nullptr) { TWindow__close((u8 *)m_60); m_60 = nullptr; }
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
void set_status_flag_80__12TQuestThreadFPv(void *);
void align_menu_entry_positions(void *);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void *p, int a1, int a2, int a3);
u8 *init_shop_judgment_window(void *p);
void *check_room_seq_4__16TAdChrSelASlotGCFl(void *, s32);
void send_and_handle__6TLobbyFii(void *, void *, s32);
void *update_window_mode_from_progress__6TLobbyFPv(void *, Pos_801F4B10 *);
void *get_window_layout_position(s32);
int sprintf(char *, const char *, ...);
extern char lbl_8044A638[];
extern s32 TObjItemOKWindow__class_name;
extern const f32 lbl_805DC4E0;
extern const f32 lbl_805DC4E4;
extern char lbl_805DC4E8[4];
extern const f32 lbl_805DC4EC;
extern const f32 lbl_805DC4F0;
extern const f32 lbl_805DC4F4;
extern const f32 lbl_805DC4F8;

}
TObjItemOKWindow::TObjItemOKWindow(TObject *parent) : TObject(parent) {
    Pos_801F4B10 pos;
    s32 n;
    ((Self_801F4B10 *)this)->name = TObjItemOKWindow__class_name;
    ((Self_801F4B10 *)this)->win60 = init_shop_judgment_window(get_window_layout_position(0x57));
    if (((Self_801F4B10 *)this)->win60 != NULL) {
        ((TWindowSubComCardList *)(((Self_801F4B10 *)this)->win60))->set_scroll_target(lbl_805DC4E0, lbl_805DC4E4);
        align_menu_entry_positions(((Self_801F4B10 *)this)->win60);
    }
    ((Self_801F4B10 *)this)->win5C = check_room_seq_4__16TAdChrSelASlotGCFl(get_window_layout_position(0x56), 1);
    if (((Self_801F4B10 *)this)->win5C != NULL) {
        n = (s32)fn_801F4C98();
        if (n != 0) {
            sprintf(((Self_801F4B10 *)this)->buf, lbl_8044A638, TObjItemOKWindow__sub_801F3268(), n);
        } else {
            sprintf(((Self_801F4B10 *)this)->buf, lbl_805DC4E8, TObjItemOKWindow__sub_801F3268());
        }
        ((Self_801F4B10 *)this)->term = 0;
        forward_trade_action_default__16TObjCityMainWarpFPviii((void *)(((Self_801F4B10 *)this)->win5C), (int)(((Self_801F4B10 *)this)->buf), 0x81, 0);
    }
    ((TWindowSubComCardList *)(((Self_801F4B10 *)this)->win5C))->set_scroll_target(lbl_805DC4EC, lbl_805DC4F0);
    align_menu_entry_positions(((Self_801F4B10 *)this)->win5C);
    set_status_flag_80__12TQuestThreadFPv(((Self_801F4B10 *)this)->win5C);
    pos.x = lbl_805DC4F4;
    pos.y = lbl_805DC4F8;
    ((Self_801F4B10 *)this)->win64 = update_window_mode_from_progress__6TLobbyFPv(get_window_layout_position(0x55), &pos);
    if (((Self_801F4B10 *)this)->win64 != NULL) {
        send_and_handle__6TLobbyFii(((Self_801F4B10 *)this)->win64, TQuestVmDownLoadServer__sub_8006EF6C(0x48), 0x81);
    }
}
