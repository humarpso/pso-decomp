#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8036E8DC_lbl_804C88C0 { M2C_UNK value; u8 remaining[0x50]; };
typedef char RecoveredGlobal_8036E8DC_lbl_804C88C0_size[sizeof(RecoveredGlobal_8036E8DC_lbl_804C88C0) == 0x54 ? 1 : -1];

struct RecoveredGlobal_8036E8DC_lbl_804C8914 { char value[0xB]; };
typedef char RecoveredGlobal_8036E8DC_lbl_804C8914_size[sizeof(RecoveredGlobal_8036E8DC_lbl_804C8914) == 0xB ? 1 : -1];

struct RecoveredGlobal_8036E8DC_lbl_804C89BC { M2C_UNK value; u8 remaining[0x74]; };
typedef char RecoveredGlobal_8036E8DC_lbl_804C89BC_size[sizeof(RecoveredGlobal_8036E8DC_lbl_804C89BC) == 0x78 ? 1 : -1];

struct RecoveredGlobal_8036DE10_lbl_804F37A8 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8036DE10_lbl_804F37D4 {
    M2C_UNK value;
    u8 remaining[0x130];
};

#include <stddef.h>
#include "pso/TAdMultiChgGameModeGC.h"
struct Stack_8036EA24 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_8036EA24 { s32 words[3]; void (TAdMultiChgGameModeGC::*action)(); };

struct RecoveredGlobal_8036EA24_lbl_804F3908 {
    M2C_UNK value;
    u8 remaining[0x104];
};

struct Stack_8036E858 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_8036E858 { s32 words[3]; void (TAdMultiChgGameModeGC::*action)(); };

struct RecoveredGlobal_8036E858_lbl_804F3908 {
    M2C_UNK value;
    u8 remaining[0x104];
};

typedef s32 M2C_UNK;
struct Self_8036E2AC {
    u8 pad0[0x24];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    void *win;
};

extern "C" {
M2C_UNK TWindow__close(void *);
void close_window_30__21TAdMultiChgGameModeGCFPv(void *arg0);
M2C_UNK TWindow__close(void *);
void close_window__21TAdMultiChgGameModeGCFPv(void* p);
s32 is_visible__17TWindowSubComCardFPv(void *);
void close_window_30__21TAdMultiChgGameModeGCFPv(void *arg0);
void close_window__21TAdMultiChgGameModeGCFPv(void* p);
s32 get_selected_menu_value(void *);
void TAdMultiChgGameModeGC__sub_8036E3D4(u8 *arg0);
void *__nw__7TObjectFUl(int);
void *__ct__9TAdBackGCFv(void *, void *);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void TAdMultiChgGameModeGC__sub_8036E49C(void *arg0);
void TAdMultiChgGameModeGC__sub_8036E49C(void *arg0);
M2C_UNK TWindow__close(void *);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);
void TAdMultiChgGameModeGC__sub_8036E51C(u8 *arg0);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 get_instance__15TAdPlayerLoadGCFv();
void TAdMultiChgGameModeGC__sub_8036E5A8(s32 arg0);
int load_system_file(void* a0 = 0);
void load_system_on_mode_default__21TAdMultiChgGameModeGCFPv(void* p);
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
void TAdMultiChgGameModeGC__sub_8036E6A0(s32 arg0);
void TAdMultiChgGameModeGC__sub_8036E6EC(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FD6B4();
s32 TAdSinglePlyChrSelectGC__sub_801FF200();
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
void TAdMultiChgGameModeGC__sub_8036E6F0(s32 arg0);
void TAdMultiChgGameModeGC__sub_8036E750(void);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);
int request_scene_change_vt__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E830(void);
int init_change_mode__21TAdMultiChgGameModeGCFv(void*);
int init_change_mode__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E854(void);
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
void confirm_mode_selection__21TAdMultiChgGameModeGCFPv(void* p);
void close_window_30__21TAdMultiChgGameModeGCFPv(void *arg0);
void TAdMultiChgGameModeGC__sub_8036E9EC(void* p);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);
extern M2C_UNK lbl_804F3A20[];
void *__dt__21TAdMultiChgGameModeGCFPvs(void *arg0, s16 arg1);
s32 TAdPlayerLoadGC__sub_801E0D8C(s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);
s32 check_memcard_status__15TAdPlayerLoadGCFi(s32);
s32 TAdPlayerLoadGC__sub_801E2048(s32, s32);
extern RecoveredGlobal_8036E8DC_lbl_804C88C0 lbl_804C88C0;
extern RecoveredGlobal_8036E8DC_lbl_804C8914 lbl_804C8914;
extern RecoveredGlobal_8036E8DC_lbl_804C89BC lbl_804C89BC;
s32 TAdSinglePlyChrSelectGC__sub_8036E8DC(void);
s32 TQuestVmDownLoadServer__sub_8006EF6C(void *);
extern RecoveredGlobal_8036DE10_lbl_804F37A8 lbl_804F37A8;
extern RecoveredGlobal_8036DE10_lbl_804F37D4 lbl_804F37D4;
s32 TAdMultiChgGameModeGC__sub_8036DE10(M2C_UNK arg0, s32 arg1, s32 arg2);
s32 TAdSinglePlyChrSelectGC__sub_8036E8DC(void);
extern RecoveredGlobal_8036EA24_lbl_804F3908 lbl_804F3908;
void TAdMultiChgGameModeGC__sub_8036EA24(u8 *arg0);
extern RecoveredGlobal_8036EA24_lbl_804F3908 lbl_804F3908;
void TAdMultiChgGameModeGC__sub_8036E858(u8 *arg0, s32 arg1);
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
u32 TAdSinglePlyChrSelectGC__sub_801FF2D4(void);
void TAdMultiChgGameModeGC__sub_8036E7DC(void *self);
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
void TAdMultiChgGameModeGC__sub_8036DEDC(void *self);
M2C_UNK TWindow__close(void *);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);
u32 update_window_mode_from_progress__6TLobbyFiPv(void *, void *);
s32 TAdMultiChgGameModeGC__sub_8036DE10(M2C_UNK arg0, s32 arg1, s32 arg2);
extern M2C_UNK lbl_8047B8A0[];
extern M2C_UNK lbl_804F3A10[];
void TAdMultiChgGameModeGC__sub_8036E19C(u8 *arg0, s32 arg1);
void *check_room_seq_4__16TAdChrSelASlotGCFii(void *, s32);
s32 TAdMultiChgGameModeGC__sub_8036DE10(M2C_UNK arg0, s32 arg1, s32 arg2);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void *p, int a1, int a2, int a3);
int set_selected_index__17TWindowSubComCardFPvs(void *, s16);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(void *, f32);
M2C_UNK align_menu_entry_positions(void *);
extern u8 lbl_804F3A18[];
extern const f32 lbl_805D7020;
M2C_UNK TAdMultiChgGameModeGC__sub_8036E2AC(void *arg0, M2C_UNK arg1);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 TAdSinglePlyChrSelectGC__sub_801FD668();
s32 TAdPlayerLoadGC__sub_801FD770();
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
void TAdMultiChgGameModeGC__sub_8036E858(u8 *arg0, s32 arg1);
void TAdMultiChgGameModeGC__sub_8036E754(void *arg0);
void *__ct__7TObjectFP7TObject(void *, void *);
M2C_UNK TLobby__sub_8022743C();
M2C_UNK TKeyBoardControl__sub_8000F90C(M2C_UNK);
void TAdMultiChgGameModeGC__sub_8036E858(u8 *arg0, s32 arg1);
s32 TAdSinglePlyChrSelectGC__sub_8036E8DC(void);
extern M2C_UNK lbl_804F3A20[];
extern s32 lbl_805D5544;
void *TAdMultiChgGameModeGC__sub_8036EB44(void *arg0, void *arg1);
}

extern "C" {

void close_windows_and_cleanup(void *arg0);
void close_windows_and_reopen__21TAdMultiChgGameModeGCFPv(void *arg0);
void close_windows_on_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
void update_card_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
void update_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
s32 get_selected_menu_value(void *);
M2C_UNK TWindow__close(void *);
s32 is_visible__17TWindowSubComCardFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);

typedef char RecoveredGlobal_8036DE10_lbl_804F37A8_size[sizeof(RecoveredGlobal_8036DE10_lbl_804F37A8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8036DE10_lbl_804F37D4_size[sizeof(RecoveredGlobal_8036DE10_lbl_804F37D4) == 0x134 ? 1 : -1];
s32 TAdMultiChgGameModeGC__sub_8036DE10(M2C_UNK arg0, s32 arg1, s32 arg2) {
    if (arg2 == -1) {
        return TQuestVmDownLoadServer__sub_8006EF6C((void *) (arg1));
    }
    if (arg2 == 0) {
        return M2C_FIELD(((u8 *)(&lbl_804F37D4.value) + (arg1 * 4)), s32 *, 0);
    }
    return M2C_FIELD(((u8 *)(&lbl_804F37A8.value) + (arg1 * 4)), s32 *, 0);
}

void close_windows_on_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    void *temp_r3;
    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void *)((void *)((void *)(arg0))))) == 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x30);
        if ((u32) temp_r3 != 0U) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0x34);
        if ((u32) temp_r3 != 0U) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        TAdMultiChgGameModeGC__sub_8036E858((u8 *)(arg0), (s32)(3));
    }
}

void TAdMultiChgGameModeGC__sub_8036DEDC(void *self) {
    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv(self) != 0) {
        return;
    }
}

void update_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    s32 temp_r3;
    u32 temp_r3_2;

    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void *)((void *)((void *)(arg0))))) == 0) {
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x34);
        if (temp_r3_2 != 0U) {
            if (is_visible__17TWindowSubComCardFPv((void *)(temp_r3_2)) != 0) {
                temp_r3 = get_selected_menu_value((void *)(M2C_FIELD(arg0, u32 *, 0x34)));
                switch (temp_r3) {
                case 0:
                    TAdMultiChgGameModeGC__sub_8036E858((u8 *)(arg0), (s32)(6));
                    close_window_30__21TAdMultiChgGameModeGCFPv((void *)(arg0));
                    TAdMultiChgGameModeGC__sub_8036E19C((u8 *)(arg0), (s32)(8));
                    return;
                case 1:
                    close_window__21TAdMultiChgGameModeGCFPv((void*)(arg0));
                    TAdMultiChgGameModeGC__sub_8036E858((u8 *)(arg0), (s32)(3));
                    return;
                }
            }
        } else {
            TAdMultiChgGameModeGC__sub_8036E858((u8 *)(arg0), (s32)(8));
        }
    }
}

void close_windows_and_cleanup(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x34));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    TAdMultiChgGameModeGC__sub_8036E2AC((void *)(arg0), (M2C_UNK)(0));
    TAdMultiChgGameModeGC__sub_8036E19C((u8 *)(arg0), (s32)(4));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x30), TAdMultiChgGameModeGC__sub_8036DE10((M2C_UNK)(arg0), (s32)(3), (s32)(M2C_FIELD(arg0, s32 *, 0x24))), 3);
    }
}

void update_card_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    s32 temp_r3;

    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void *)((void *)((void *)(arg0))))) == 0) {
        if (M2C_FIELD(arg0, void **, 0x34) != 0) {
            if (is_visible__17TWindowSubComCardFPv((void *)(M2C_FIELD(arg0, void **, 0x34))) != 0) {
                temp_r3 = get_selected_menu_value((void *)(M2C_FIELD(arg0, void **, 0x34)));
                switch (temp_r3) {
                case 0:
                    close_window_30__21TAdMultiChgGameModeGCFPv((void *)(arg0));
                    close_window__21TAdMultiChgGameModeGCFPv((void*)(arg0));
                    TAdMultiChgGameModeGC__sub_8036E858((u8 *)(arg0), (s32)(5));
                    return;
                case 1:
                    close_window__21TAdMultiChgGameModeGCFPv((void*)(arg0));
                    TAdMultiChgGameModeGC__sub_8036E858((u8 *)(arg0), (s32)(3));
                    return;
                }
            }
        } else {
            TAdMultiChgGameModeGC__sub_8036E858((u8 *)(arg0), (s32)(8));
        }
    }
}

void close_windows_and_reopen__21TAdMultiChgGameModeGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x34));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    TAdMultiChgGameModeGC__sub_8036E2AC((void *)(arg0), (M2C_UNK)(0));
    TAdMultiChgGameModeGC__sub_8036E19C((u8 *)(arg0), (s32)(4));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x30), TAdMultiChgGameModeGC__sub_8036DE10((M2C_UNK)(arg0), (s32)(1), (s32)(M2C_FIELD(arg0, s32 *, 0x24))), 3);
    }
}

void TAdMultiChgGameModeGC__sub_8036E19C(u8 *arg0, s32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x30) = update_window_mode_from_progress__6TLobbyFiPv((void *) (lbl_804F3A10), (void *) (lbl_8047B8A0));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        send_and_handle__6TLobbyFPvii((u32)((int) (M2C_FIELD(arg0, u32 *, 0x30))), (s32)((int) (TAdMultiChgGameModeGC__sub_8036DE10((M2C_UNK)((void *) (arg0)), (s32)((void *) (arg1)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x24)))))), (M2C_UNK)((int) (3)));
    }
}

void close_window_30__21TAdMultiChgGameModeGCFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    if ((u32) temp_r3 != 0U) {
        TWindow__close((void *)((void*)(temp_r3)));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    close_window__21TAdMultiChgGameModeGCFPv((void*)((void *)((void*)((void*)(arg0)))));
}
void close_window__21TAdMultiChgGameModeGCFPv(void* p) { if (*(unsigned int*)((char*)p + 0x34) != 0) { TWindow__close((void *)((void*)(*(void**)((char*)p + 0x34)))); *(int*)((char*)p + 0x34) = 0; } }

#define self ((Self_8036E2AC *)arg0)
M2C_UNK TAdMultiChgGameModeGC__sub_8036E2AC(void *arg0, M2C_UNK arg1) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    self->win = check_room_seq_4__16TAdChrSelASlotGCFii(lbl_804F3A18, 2);
    a = TAdMultiChgGameModeGC__sub_8036DE10((M2C_UNK)self, 6, self->f24);
    b = TAdMultiChgGameModeGC__sub_8036DE10((M2C_UNK)self, 7, self->f24);
    c = TAdMultiChgGameModeGC__sub_8036DE10((M2C_UNK)self, 2, self->f24);
    d = TAdMultiChgGameModeGC__sub_8036DE10((M2C_UNK)self, 5, self->f24);
    if (self->win != 0) {
        if (arg1 == 0) {
            forward_trade_action_default__16TObjCityMainWarpFPviii(self->win, a, 5, 0);
            forward_trade_action_default__16TObjCityMainWarpFPviii(self->win, b, 5, 1);
            set_selected_index__17TWindowSubComCardFPvs(self->win, 1);
        } else {
            forward_trade_action_default__16TObjCityMainWarpFPviii(self->win, c, 5, 0);
            forward_trade_action_default__16TObjCityMainWarpFPviii(self->win, d, 5, 1);
            set_selected_index__17TWindowSubComCardFPvs(self->win, 0);
        }
        update_layout_height__17TWindowSubComCardFPvf(self->win, lbl_805D7020);
        align_menu_entry_positions(self->win);
    }
}
#undef self

void TAdMultiChgGameModeGC__sub_8036E3D4(u8 *arg0) {
    s32 temp_r3_2;
    u8 *temp_r3;
    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void *)(arg0))) == 0) {
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
        if (temp_r3 != NULL) {
            if (((int)is_visible__17TWindowSubComCardFPv(temp_r3)) != 0) {
                temp_r3_2 = get_selected_menu_value((void *) (M2C_FIELD(arg0, u8 **, 0x34)));
                switch (temp_r3_2) {
                case 0:
                    close_window_30__21TAdMultiChgGameModeGCFPv(arg0);
                    close_window__21TAdMultiChgGameModeGCFPv((void*)(arg0));
                    TAdMultiChgGameModeGC__sub_8036E858((u8 *)((void *)((void *)((void *) (arg0)))), (s32)((M2C_UNK)((s32)((int) (4)))));
                    return;
                case 1:
                    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
                        M2C_FIELD(arg0, s32 *, 0x24) = 1;
                    } else {
                        M2C_FIELD(arg0, s32 *, 0x24) = 0;
                    }
                    TAdMultiChgGameModeGC__sub_8036E858((u8 *)((void *)((void *)((void *) (arg0)))), (s32)((M2C_UNK)((s32)((int) (0xA)))));
                    return;
                }
            }
        } else {
            TAdMultiChgGameModeGC__sub_8036E858((u8 *)((void *)((void *)((void *) (arg0)))), (s32)((M2C_UNK)((s32)((int) (8)))));
        }
    }
}
void TAdMultiChgGameModeGC__sub_8036E49C(void *arg0) {
    void *o;
    void *o2;
    if (M2C_FIELD(arg0, void **, 0x28) == NULL) {
        o = __nw__7TObjectFUl(0x24);
        if (o != NULL) {
            o = __ct__9TAdBackGCFv(o, arg0);
        }
        M2C_FIELD(arg0, void **, 0x28) = o;
    }
    if (M2C_FIELD(arg0, void **, 0x2C) == NULL) {
        o2 = __nw__7TObjectFUl(0x28);
        if (o2 != NULL) {
            o2 = __ct__12TAdBackTxtGCFv(o2, arg0);
        }
        M2C_FIELD(arg0, void **, 0x2C) = o2;
    }
}
void TAdMultiChgGameModeGC__sub_8036E51C(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindow__close((void *)((void*)(M2C_FIELD(arg0, void **, 0x34))));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    TAdMultiChgGameModeGC__sub_8036E2AC((void *)((void *)((void *) (arg0))), (M2C_UNK)((M2C_UNK)((int) (1))));
    TAdMultiChgGameModeGC__sub_8036E19C((u8 *)((void *)((void *) (arg0))), (s32)((M2C_UNK)((int) (4))));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        send_and_handle__6TLobbyFPvii((u32)((int) (M2C_FIELD(arg0, u32 *, 0x30))), (s32)((int) (TAdMultiChgGameModeGC__sub_8036DE10((M2C_UNK)((void *)((void *) (arg0))), (s32)((M2C_UNK)((int) (0))), (s32)((s32)((int) (M2C_FIELD(arg0, s32 *, 0x24))))))), (M2C_UNK)((int) (3)));
    }
    TAdMultiChgGameModeGC__sub_8036E49C((void *) (arg0));
}
void TAdMultiChgGameModeGC__sub_8036E5A8(s32 arg0) {
    if ((handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void *)(arg0))) == 0) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        TAdMultiChgGameModeGC__sub_8036E858((u8 *)((void *)((void *)((void *) (arg0)))), (s32)((M2C_UNK)((s32)((int) (2)))));
    }
}
void load_system_on_mode_default__21TAdMultiChgGameModeGCFPv(void* p) { if (handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void *)(p))) == 0) { load_system_file((void*)0); } }
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r4 & 1) {
        TAdMultiChgGameModeGC__sub_8036E858((u8 *)((void *)(arg0)), (s32)((M2C_UNK)(9)));
        return 1;
    }
    if (temp_r4 & 2) {
        return 0;
    }
    if (temp_r4 & 4) {
        TAdMultiChgGameModeGC__sub_8036E858((u8 *)((void *)(arg0)), (s32)((M2C_UNK)(9)));
        return 1;
    }
    if (temp_r4 & 8) {
        TAdMultiChgGameModeGC__sub_8036E858((u8 *)((void *)(arg0)), (s32)((M2C_UNK)(9)));
        return 1;
    }
    return 0;
}
void TAdMultiChgGameModeGC__sub_8036E6A0(s32 arg0) {
    if ((handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)(arg0)) == 0) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        TAdMultiChgGameModeGC__sub_8036E858((u8 *)((void *)((void *)((void *) (arg0)))), (s32)((M2C_UNK)((s32)((int) (8)))));
    }
}
void TAdMultiChgGameModeGC__sub_8036E6EC(void) {  }
void TAdMultiChgGameModeGC__sub_8036E6F0(s32 arg0) {
    if (((int)handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void*)arg0))) == 0) {
        TAdSinglePlyChrSelectGC__sub_801FD6B4();
        if (TAdSinglePlyChrSelectGC__sub_801FF200() != 0) {
            TAdMultiChgGameModeGC__sub_8036E858((u8 *)((void *)((void*)((void *) (arg0)))), (s32)((M2C_UNK)((void*)((int) (7)))));
            return;
        }
        TAdMultiChgGameModeGC__sub_8036E858((u8 *)((void *)((void*)((void *) (arg0)))), (s32)((M2C_UNK)((void*)((int) (8)))));
    }
}
void TAdMultiChgGameModeGC__sub_8036E750(void) {  }

void TAdMultiChgGameModeGC__sub_8036E754(void *arg0) {
    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv(arg0) != 0) {
        return;
    }
    if (get_instance__15TAdPlayerLoadGCFv() != 0) {
        return;
    }
    switch (TAdPlayerLoadGC__sub_801FD770()) {
    case 5:
        if (TAdSinglePlyChrSelectGC__sub_801FD668() != 0) {
            TAdMultiChgGameModeGC__sub_8036E858((u8 *)arg0, 3);
        } else {
            TAdMultiChgGameModeGC__sub_8036E858((u8 *)arg0, 8);
        }
        break;
    default:
        TAdMultiChgGameModeGC__sub_8036E858((u8 *)arg0, 8);
        break;
    }
}

void TAdMultiChgGameModeGC__sub_8036E7DC(void *self) {
    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv(self) != 0) {
        return;
    }
    if (TAdSinglePlyChrSelectGC__sub_801FF2D4() == 0xFFFFFF05) {
        return;
    }
}

int request_scene_change_vt__21TAdMultiChgGameModeGCFPv(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }
void TAdMultiChgGameModeGC__sub_8036E830(void) {  }
int init_change_mode__21TAdMultiChgGameModeGCFPv(void* p) { return init_change_mode__21TAdMultiChgGameModeGCFv(p); }
void TAdMultiChgGameModeGC__sub_8036E854(void) {  }

typedef char MemberActionStorage_8036E858_size[sizeof(MemberActionStorage_8036E858) == 12 ? 1 : -1];
typedef char RecoveredGlobal_8036E858_lbl_804F3908_size[sizeof(RecoveredGlobal_8036E858_lbl_804F3908) == 0x108 ? 1 : -1];
void TAdMultiChgGameModeGC__sub_8036E858(u8 *arg0, s32 arg1) {
    MemberActionStorage_8036E858 member_action;
    typedef char sp8_offset[(offsetof(Stack_8036E858, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8036E858, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8036E858, sp10) == 0x8) ? 1 : -1];
    Stack_8036E858 stack;
    u8 *temp_r6;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
        temp_r6 = (u8 *)&(*(RecoveredGlobal_8036E858_lbl_804F3908 *)&lbl_804F3908).value + (M2C_FIELD(arg0, s32 *, 0x1C) * 0x18);
        member_action.words[0] = M2C_FIELD(temp_r6, s32 *, 0);
        member_action.words[1] = M2C_FIELD(temp_r6, s32 *, 4);
        member_action.words[2] = M2C_FIELD(temp_r6, s32 *, 8);
        if (member_action.action != 0) {
            (((TAdMultiChgGameModeGC *)((void *) (arg0)))->*member_action.action)();
        }
    }
}

s32 TAdSinglePlyChrSelectGC__sub_8036E8DC(void) {
    if (TAdPlayerLoadGC__sub_801E1E38(0) == 0) {
        return 1;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(0) != 0) {
        return 2;
    }
    if (TAdPlayerLoadGC__sub_801E0D8C(0) == 0) {
        return 4;
    }
    if (check_memcard_status__15TAdPlayerLoadGCFi(0) != 0) {
        return 4;
    }
    if ((TAdPlayerLoadGC__sub_801E2048(0, (s32) &lbl_804C88C0.value) != 0) || (TAdPlayerLoadGC__sub_801E2048(0, (s32) &lbl_804C89BC.value) != 0) || (TAdPlayerLoadGC__sub_801E2048(0, (s32) &lbl_804C8914.value) != 0)) {
        return 8;
    }
    return 0;
}

void confirm_mode_selection__21TAdMultiChgGameModeGCFPv(void* p) { if (((int)handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void*)(p)))) == 0) { TAdMultiChgGameModeGC__sub_8036E858((u8 *)((void *)((void*)(p))), (s32)((M2C_UNK)((void*)((void*)1)))); } }
void TAdMultiChgGameModeGC__sub_8036E9EC(void* p) { close_window_30__21TAdMultiChgGameModeGCFPv((void *)(p)); TAdMultiChgGameModeGC__sub_8036E19C((u8 *)((void *)(p)), (s32)((M2C_UNK)((void*)4))); }

typedef char MemberActionStorage_8036EA24_size[sizeof(MemberActionStorage_8036EA24) == 12 ? 1 : -1];
typedef char RecoveredGlobal_8036EA24_lbl_804F3908_size[sizeof(RecoveredGlobal_8036EA24_lbl_804F3908) == 0x108 ? 1 : -1];
void TAdMultiChgGameModeGC__sub_8036EA24(u8 *arg0) {
    MemberActionStorage_8036EA24 member_action;
    typedef char sp8_offset[(offsetof(Stack_8036EA24, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8036EA24, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8036EA24, sp10) == 0x8) ? 1 : -1];
    Stack_8036EA24 stack;
    u8 *temp_r6;
    M2C_FIELD(arg0, s32 *, 0x20) = TAdSinglePlyChrSelectGC__sub_8036E8DC();
    if (M2C_FIELD(arg0, s32 *, 0x20) & 1) {
        TAdMultiChgGameModeGC__sub_8036E858((u8 *)((void *)((void *) (arg0))), (s32)((M2C_UNK)((int) (9))));
    }
    temp_r6 = (u8 *)&lbl_804F3908.value + (M2C_FIELD(arg0, s32 *, 0x1C) * 0x18);
    member_action.words[0] = M2C_FIELD(temp_r6, s32 *, 0xC);
    member_action.words[1] = M2C_FIELD(temp_r6, s32 *, 0x10);
    member_action.words[2] = M2C_FIELD(temp_r6, s32 *, 0x14);
    if (member_action.action != 0) {
        (((TAdMultiChgGameModeGC *)((void *) (arg0)))->*member_action.action)();
    }
}

void *__dt__21TAdMultiChgGameModeGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F3A20;
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TAdMultiChgGameModeGC__sub_8036EB44(void *arg0, void *arg1) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F3A20;
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    M2C_FIELD(arg0, s32 *, 0x24) = lbl_805D5544;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = ((s32 (*)(void *))TAdSinglePlyChrSelectGC__sub_8036E8DC)(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x20) & 1) {
        TAdMultiChgGameModeGC__sub_8036E858((u8 *)arg0, 0);
    } else {
        TAdMultiChgGameModeGC__sub_8036E858((u8 *)arg0, 1);
    }
    TLobby__sub_8022743C();
    TKeyBoardControl__sub_8000F90C(9);
    return arg0;
}

}
