#include "types.h"

extern "C" {

void *__dt__19TWindowSubTradeMainFv(void *arg0, s16 arg1);
s32 check_flags_and_proceed__6TLobbyFv();
u32 get_player_by_client_id(s32);
s32 TWindowCtrl__sub_8024ADF0(s32);
s32 TWindowSubComCard__sub_8024AB98(s32);
s32 close__17TWindowSubComCardFv(void *);
s32 cleanup__13TWindowSubLogFv(void *);
s32 TWindow__close(void *);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);
s32 end_camera_pan__10TObjPlayerFPv();
s32 TLobby__sub_802D29E8(void *);
s32 queue_destruction__7TObjectFv(void *);

extern void* __vt__19TWindowSubTradeMain[];

void *__dt__19TWindowSubTradeMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)((s8 *)arg0 + 0x18) = (void *) __vt__19TWindowSubTradeMain;
        TLobby__sub_802D29E8(arg0);
        check_flags_and_proceed__6TLobbyFv();
        if (get_player_by_client_id(*(s32 *)((s8 *)arg0 + 0x28)) != 0U) {
            end_camera_pan__10TObjPlayerFPv();
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x50) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x50));
            *(u32 *)((s8 *)arg0 + 0x50) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x4C) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x4C));
            *(u32 *)((s8 *)arg0 + 0x4C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x48) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x48));
            *(u32 *)((s8 *)arg0 + 0x48) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x44) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x44));
            *(u32 *)((s8 *)arg0 + 0x44) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x40) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x40));
            *(u32 *)((s8 *)arg0 + 0x40) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x3C) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x3C));
            *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x38) != 0U) {
            close__17TWindowSubComCardFv(*(void **)((s8 *)arg0 + 0x38));
            *(u32 *)((s8 *)arg0 + 0x38) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x34));
            *(u32 *)((s8 *)arg0 + 0x34) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x30));
            *(u32 *)((s8 *)arg0 + 0x30) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) != 0U) {
            cleanup__13TWindowSubLogFv(*(void **)((s8 *)arg0 + 0x2C));
        }
        TWindowCtrl__sub_8024ADF0(*(s32 *)((s8 *)arg0 + 0x28));
        TWindowSubComCard__sub_8024AB98(*(s32 *)((s8 *)arg0 + 0x28));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
