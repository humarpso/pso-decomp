#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void *alloc__22TQuestVmDownLoadServerFPv(s32);
s32 TQuestVmDownLoadServer__sub_801F8538(void *, s32);
M2C_UNK move_data__6TLobbyFv(void *, s32, s32);
s32 TQuestVmDownLoadServer__sub_801F84B8(s32 arg0, s32 arg1);
}

extern "C" {

u8 *TQuestVmDownLoadServer__vt0(u8 *arg0, s16 arg1);
void abort_download__22TQuestVmDownLoadServerFPv(void *arg0);
void close_window__22TQuestVmDownLoadServerFPv(void *arg0);
void finish_download__22TQuestVmDownLoadServerFPv(void *arg0);
void handle_confirm_window__22TQuestVmDownLoadServerFPv(void *arg0);
void load_quest_data__22TQuestVmDownLoadServerFPv(u8 *arg0);
void open__22TQuestVmDownLoadServerFPv(void *arg0);
void write_quest_data__22TQuestVmDownLoadServerFPv(void *arg0);
void write_quest_data_named__22TQuestVmDownLoadServerFPv(u8 *arg0);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
s32 TWindowSubComCard__sub_80265BF8(u32);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
M2C_UNK close_message__22TQuestVmDownLoadServerFPv(void *);
u32 create__13TAdMcSelectGCFPv(s32);
M2C_UNK destroy__17TMedicalCenterMesFPvs(void *, M2C_UNK);
M2C_UNK disallow_rendering__7TObjectFv(u32);
s32 draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(s32, void *, s32, s32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
s32 is_visible__17TWindowSubComCardFPv(u32);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK reset_counter__6TSceneFv();
M2C_UNK reset_quest_id__23TAdSinglePlyChrSelectGCFv();
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
M2C_UNK set_quest_download_server__23TAdSinglePlyChrSelectGCFi(s32);
M2C_UNK update_state__13TAdMcSelectGCFv();

extern M2C_UNK lbl_8044BEF4[];
extern s32 lbl_805D49B4;

void write_quest_data__22TQuestVmDownLoadServerFPv(void *arg0) {
    set_quest_download_server__23TAdSinglePlyChrSelectGCFi(M2C_FIELD(arg0, s32 *, 0x25C));
    lbl_805D49B4 = 1;
    if (draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((s32)(M2C_FIELD(arg0, s32 *, 0x25C)), (void *)(lbl_8044BEF4), (s32)(M2C_FIELD(arg0, s32 *, 0x260)), (s32)(M2C_FIELD(arg0, s32 *, 0x26C))) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0x10;
        TQuestVmDownLoadServer__sub_801F6E08(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xC), 1);
        return;
    }
    TQuestVmDownLoadServer__sub_801F6E08(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x29, 2), 1);
    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x17;
    lbl_805D49B4 = 0;
}

extern s32 lbl_805D49B4;

void finish_download__22TQuestVmDownLoadServerFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x25C)) == 0) {
        reset_quest_id__23TAdSinglePlyChrSelectGCFv();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
            M2C_FIELD(arg0, u32 *, 0x260) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x28C));
        }
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xE;
        lbl_805D49B4 = 0;
    }
}

extern s32 lbl_805D49B4;

void write_quest_data_named__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    set_quest_download_server__23TAdSinglePlyChrSelectGCFi(M2C_FIELD(arg0, s32 *, 0x25C));
    lbl_805D49B4 = 1;
    if (draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((s32)(M2C_FIELD(arg0, s32 *, 0x25C)), (void *)(arg0 + 0x27D), (s32)(M2C_FIELD(arg0, s32 *, 0x260)), (s32)(M2C_FIELD(arg0, s32 *, 0x268))) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xD;
        TQuestVmDownLoadServer__sub_801F6E08(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xC), 1);
        return;
    }
    TQuestVmDownLoadServer__sub_801F6E08(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x29, 2), 1);
    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x17;
    lbl_805D49B4 = 0;
}

extern s32 lbl_805D49B4;

void abort_download__22TQuestVmDownLoadServerFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x25C)) == 0) {
        reset_quest_id__23TAdSinglePlyChrSelectGCFv();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
            M2C_FIELD(arg0, u32 *, 0x260) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xB;
        lbl_805D49B4 = 0;
    }
}

extern s32 lbl_805D49B4;
extern s32 TQuestVmDownLoadServer__data_805D5F18;

void load_quest_data__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    set_quest_download_server__23TAdSinglePlyChrSelectGCFi(M2C_FIELD(arg0, s32 *, 0x25C));
    lbl_805D49B4 = 1;
    if (draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((s32)(M2C_FIELD(arg0, s32 *, 0x25C)), (void *)(arg0 + 0x270), (s32)(M2C_FIELD(arg0, s32 *, 0x260)), (s32)(M2C_FIELD(arg0, s32 *, 0x264))) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xA;
        TQuestVmDownLoadServer__sub_801F6E08(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xC), 1);
        TQuestVmDownLoadServer__data_805D5F18 = 1;
        return;
    }
    TQuestVmDownLoadServer__sub_801F6E08(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x29, 2), 1);
    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x17;
    lbl_805D49B4 = 0;
}

void handle_confirm_window__22TQuestVmDownLoadServerFPv(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
        if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x290)) != 0) {
            temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x290));
            if (temp_r3 == 0) {
                if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
                    TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x290)));
                    M2C_FIELD(arg0, u32 *, 0x290) = 0U;
                }
                M2C_FIELD(arg0, s32 *, 0x2A0) = 7;
                return;
            }
            if (temp_r3 == 1) {
                if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
                    TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x290)));
                    M2C_FIELD(arg0, u32 *, 0x290) = 0U;
                }
                if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
                    clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x28C));
                }
                update_state__13TAdMcSelectGCFv();
                TQuestVmDownLoadServer__sub_801F6E08(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x29, 1), 1);
                M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
                return;
            }
            goto block_12;
        }
block_12:
        if (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x290)) != 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
                TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x290)));
                M2C_FIELD(arg0, u32 *, 0x290) = 0U;
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
                clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x28C));
            }
            update_state__13TAdMcSelectGCFv();
            TQuestVmDownLoadServer__sub_801F6E08(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x29, 1), 1);
            M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
        }
    }
}

extern u32 lbl_805D55D4;
extern s32 tl_03;

void open__22TQuestVmDownLoadServerFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) == 0U) {
        reset_counter__6TSceneFv();
        u32 temp_r3 = lbl_805D55D4;
        if (temp_r3 != 0U) {
            disallow_rendering__7TObjectFv(temp_r3);
        }
        M2C_FIELD(arg0, u32 *, 0x29C) = create__13TAdMcSelectGCFPv(tl_03);
    }
    M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
    TQuestVmDownLoadServer__sub_801F6E08(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x29, 1), 1);
}

void close_window__22TQuestVmDownLoadServerFPv(void *arg0) {
    u32 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x2A0) = 2;
    temp_r3 = (u32) M2C_FIELD(arg0, u32 *, 0x290);
    if (temp_r3 != 0U) {
        TWindow__close((void *)(temp_r3));
        M2C_FIELD(arg0, u32 *, 0x290) = 0U;
    }
    close_message__22TQuestVmDownLoadServerFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x22C) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) != 0U) {
        update_state__13TAdMcSelectGCFv();
    }
}

extern M2C_UNK __vt__22TQuestVmDownLoadServer[];
extern s32 TQuestVmDownLoadServer__data_805D5F18;
extern s32 TQuestVmDownLoadServer__data_805D5F24;

u8 *TQuestVmDownLoadServer__vt0(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__22TQuestVmDownLoadServer;
        M2C_FIELD(arg0, void **, 0x1C) = (void *) ((u8 *)__vt__22TQuestVmDownLoadServer + 0x18);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
            M2C_FIELD(arg0, u32 *, 0x260) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x29C));
            M2C_FIELD(arg0, u32 *, 0x29C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x290)));
            M2C_FIELD(arg0, u32 *, 0x290) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x28C)));
            M2C_FIELD(arg0, u32 *, 0x28C) = 0U;
        }
        close_message__22TQuestVmDownLoadServerFPv(arg0);
        TQuestVmDownLoadServer__data_805D5F24 = 0;
        TQuestVmDownLoadServer__data_805D5F18 = 0;
        destroy__17TMedicalCenterMesFPvs(arg0 + 0x1C, 0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
s32 TQuestVmDownLoadServer__sub_801F84B8(s32 arg0, s32 arg1) {
  s32 temp_r31;
  void *temp_r3;
  s32 temp_r29;
  temp_r3 = alloc__22TQuestVmDownLoadServerFPv(arg1);
  if (temp_r3 == 0)
  {
    return 0;
  }
  move_data__6TLobbyFv(temp_r3, arg0, arg1);
  temp_r29 = *((s32 *) (((s8 *) temp_r3) + 4));
  *((s32 *) (((s8 *) temp_r3) + 4)) = 0;
  temp_r31 = TQuestVmDownLoadServer__sub_801F8538(temp_r3, arg1);
  safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
  return ((u32) __cntlzw((u32) (temp_r31 - temp_r29))) >> 5;
}

}
