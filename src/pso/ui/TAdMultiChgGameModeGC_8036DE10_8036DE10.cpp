#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_windows_and_cleanup(void *arg0);
void close_windows_and_reopen__21TAdMultiChgGameModeGCFPv(void *arg0);
void close_windows_on_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
void update_card_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
void update_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
s32 TAdMultiChgGameModeGC__sub_8036DE10(void *, M2C_UNK, s32);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E19C(void *, M2C_UNK);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E2AC(void *, M2C_UNK);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E858(void *, M2C_UNK);
s32 TWindowSubComCard__sub_80265BF8(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK close_window_30__21TAdMultiChgGameModeGCFPv(void *);
M2C_UNK close_window__21TAdMultiChgGameModeGCFPv(void *);
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv();
s32 is_visible__17TWindowSubComCardFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);

void close_windows_on_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    void *temp_r3;
    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv() == 0) {
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
        TAdMultiChgGameModeGC__sub_8036E858(arg0, 3);
    }
}

void update_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    s32 temp_r3;
    u32 temp_r3_2;

    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv() == 0) {
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x34);
        if (temp_r3_2 != 0U) {
            if (is_visible__17TWindowSubComCardFPv((void *)(temp_r3_2)) != 0) {
                temp_r3 = TWindowSubComCard__sub_80265BF8((void *)(M2C_FIELD(arg0, u32 *, 0x34)));
                switch (temp_r3) {
                case 0:
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 6);
                    close_window_30__21TAdMultiChgGameModeGCFPv(arg0);
                    TAdMultiChgGameModeGC__sub_8036E19C(arg0, 8);
                    return;
                case 1:
                    close_window__21TAdMultiChgGameModeGCFPv(arg0);
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 3);
                    return;
                }
            }
        } else {
            TAdMultiChgGameModeGC__sub_8036E858(arg0, 8);
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
    TAdMultiChgGameModeGC__sub_8036E2AC(arg0, 0);
    TAdMultiChgGameModeGC__sub_8036E19C(arg0, 4);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x30), TAdMultiChgGameModeGC__sub_8036DE10(arg0, 3, M2C_FIELD(arg0, s32 *, 0x24)), 3);
    }
}

void update_card_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    s32 temp_r3;

    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv() == 0) {
        if (M2C_FIELD(arg0, void **, 0x34) != 0) {
            if (is_visible__17TWindowSubComCardFPv((void *)(M2C_FIELD(arg0, void **, 0x34))) != 0) {
                temp_r3 = TWindowSubComCard__sub_80265BF8((void *)(M2C_FIELD(arg0, void **, 0x34)));
                switch (temp_r3) {
                case 0:
                    close_window_30__21TAdMultiChgGameModeGCFPv(arg0);
                    close_window__21TAdMultiChgGameModeGCFPv(arg0);
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 5);
                    return;
                case 1:
                    close_window__21TAdMultiChgGameModeGCFPv(arg0);
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 3);
                    return;
                }
            }
        } else {
            TAdMultiChgGameModeGC__sub_8036E858(arg0, 8);
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
    TAdMultiChgGameModeGC__sub_8036E2AC(arg0, 0);
    TAdMultiChgGameModeGC__sub_8036E19C(arg0, 4);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x30), TAdMultiChgGameModeGC__sub_8036DE10(arg0, 1, M2C_FIELD(arg0, s32 *, 0x24)), 3);
    }
}

}
