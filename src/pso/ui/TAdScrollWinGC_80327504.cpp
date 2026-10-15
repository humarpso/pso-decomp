#include "types.h"
#include "pso/ui/TAdScrollWinGC.h"

struct RecoveredGlobal_80327698___vt__14TAdScrollWinGC { s32 value; u8 remaining[0x14]; };

extern "C" {
u8 * __dt__7TObjectFv(void *, s16);
void queue_destruction__7TObjectFv(void *);
void __dl__7TObjectFPv(s32);
void fn_8026A14C(void);
extern RecoveredGlobal_80327698___vt__14TAdScrollWinGC __vt__14TAdScrollWinGC;
u8 *__dt__14TAdScrollWinGCFv(u8 *arg0, s16 arg1);
void queue_destruction__7TObjectFv(void *);
void advance_scroll__14TAdScrollWinGCFf(void *, f32);
void fn_8026A61C(void *, f32);
extern u8 controller_physical_port_bank[];
extern const f32 lbl_805DF69C;
extern const f32 lbl_805DF6A0;
extern const f32 lbl_805DF6A4;
extern const f32 lbl_805DF6A8;
extern const f32 lbl_805DF6AC;
extern const f32 lbl_805DF6B0;
s32 get_localized_text_entry(s32, s32);
void __ct__7TObjectFP7TObject(void *, void *);
void complete_reveal__14TWindowMessageFPv(s32);
void send_and_handle__6TLobbyFii(s32, s32, s32);
void update_scroll_position__17TWindowMessageLogFPv(s32);
void TAdScrollWinGC__sub_8026A5F8(s32);
s32 create_message_log_window(void *, void *, s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6FA8(void);
s32 get_scroll_delay_for_mode__14TAdScrollWinGCFv(void *);
extern u8 lbl_80476770[];
extern u8 lbl_80476778[];
extern RecoveredGlobal_80327698___vt__14TAdScrollWinGC __vt__14TAdScrollWinGC;
extern s32 TAdScrollWinGC__class_name;
extern s32 scroll_win_texture_handle;
extern const f32 lbl_805DF6B4;
extern const f32 lbl_805DF6B8;
extern const f32 lbl_805DF6BC;
extern const f32 lbl_805DF6C0;
void *TAdScrollWinGC__ct(void *arg0, void *arg1, s32 arg2, s32 arg3);
}

extern "C" {

int TWindow__close(void*);

void TAdScrollWinGC::close_window() { if (*(unsigned int*)((char*)this + 0x40) != 0) { TWindow__close(*(void**)((char*)this + 0x40)); *(int*)((char*)this + 0x40) = 0; } }

void TAdScrollWinGC::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 d;
    u32 a;
    switch (*(s32 *)((s8 *)arg0 + 0x4C)) {
    case 0:
        break;
    case 1:
        if (++*(s32 *)((s8 *)arg0 + 0x50) > lbl_805DF69C) {
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        break;
    }
    *(u32 *)((s8 *)arg0 + 0x3C) += 0xC;
    *(u32 *)((s8 *)arg0 + 0x3C) = *(u32 *)((s8 *)arg0 + 0x3C) > 0xFF ? 0xFF : *(u32 *)((s8 *)arg0 + 0x3C);
    *(f32 *)((s8 *)arg0 + 0x1C) = lbl_805DF6A0;
    *(f32 *)((s8 *)arg0 + 0x20) = lbl_805DF6A4;
    *(f32 *)((s8 *)arg0 + 0x24) = lbl_805DF6A8;
    *(f32 *)((s8 *)arg0 + 0x28) = lbl_805DF6AC;
    d = *(s16 *)((s8 *)controller_physical_port_bank + 0x3A);
    if (d < 0) {
        d += 0x19;
        if (*(void **)((s8 *)arg0 + 0x40) != 0) {
            fn_8026A61C(*(void **)((s8 *)arg0 + 0x40), lbl_805DF6B0 * d);
        }
    }
    if (d > 0 && *(void **)((s8 *)arg0 + 0x40) != 0) {
        advance_scroll__14TAdScrollWinGCFf(*(void **)((s8 *)arg0 + 0x40), lbl_805DF6B0 * (d - 0x19));
    }
}

u8 *__dt__14TAdScrollWinGCFv(u8 *arg0, s16 arg1) {
    u8 *temp_r3;
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &__vt__14TAdScrollWinGC.value;
        temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x40));
        if (temp_r3 != NULL) {
            queue_destruction__7TObjectFv(temp_r3);
            *(u8 **)((s8 *)arg0 + 0x40) = NULL;
        }
        fn_8026A14C();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}
void *TAdScrollWinGC__ct(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 base;
    s32 i;
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__14TAdScrollWinGC.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TAdScrollWinGC__class_name;
    scroll_win_texture_handle = TAdMultiPlyChrSelectGC__sub_802C6FA8();
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    *(s32 *)((s8 *)arg0 + 0x40) = 0;
    *(s32 *)((s8 *)arg0 + 0x44) = arg2;
    *(s32 *)((s8 *)arg0 + 0x48) = 0;
    *(s32 *)((s8 *)arg0 + 0x4C) = 0;
    *(s32 *)((s8 *)arg0 + 0x50) = 0;
    base = get_scroll_delay_for_mode__14TAdScrollWinGCFv(arg0);
    *(s32 *)((s8 *)arg0 + 0x40) = create_message_log_window(lbl_80476770, lbl_80476778, 0);
    switch (*(s32 *)((s8 *)arg0 + 0x44)) {
    case 0:
    case 1:
        for (i = 0; i < 10; i++) {
            send_and_handle__6TLobbyFii(*(s32 *)((s8 *)arg0 + 0x40), get_localized_text_entry(0x1A, base + i), 1);
        }
        break;
    case 2:
    case 3:
        send_and_handle__6TLobbyFii(*(s32 *)((s8 *)arg0 + 0x40), arg3, 1);
        break;
    }
    complete_reveal__14TWindowMessageFPv(*(s32 *)((s8 *)arg0 + 0x40));
    update_scroll_position__17TWindowMessageLogFPv(*(s32 *)((s8 *)arg0 + 0x40));
    TAdScrollWinGC__sub_8026A5F8(*(s32 *)((s8 *)arg0 + 0x40));
    *(f32 *)((s8 *)arg0 + 0x2C) = lbl_805DF6B4;
    *(f32 *)((s8 *)arg0 + 0x30) = lbl_805DF6B8;
    *(f32 *)((s8 *)arg0 + 0x34) = lbl_805DF6BC;
    *(f32 *)((s8 *)arg0 + 0x38) = lbl_805DF6C0;
    return arg0;
}

}
