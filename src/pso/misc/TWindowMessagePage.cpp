#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8026B014___vt__18TWindowMessagePage { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8026B014___vt__18TWindowMessagePage_size[sizeof(RecoveredGlobal_8026B014___vt__18TWindowMessagePage) == 0x18 ? 1 : -1];

struct RecoveredGlobal_8026AF24_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct Page_8026AE20 { u8 pad[0x90]; s32 flags; void *msg; };

extern "C" {
u8 *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TLobby__sub_80269DA4(void *, void *);
u8 *create__18TWindowMessagePageFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TWindowMessage__ct(void *, void *, void *, void *);
extern M2C_UNK __vt__18TWindowMessagePage[];
extern s32 lbl_805D3998;
u8 *TWindowMessagePage__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int, int);
s32 is_player_input_active(int);
s32 is_message_window_ready(void *);
M2C_UNK complete_reveal__14TWindowMessageFPv(void *);
M2C_UNK draw__14TWindowMessageFPv();
void update_message__18TWindowMessagePageFPv(void *arg0);
extern RecoveredGlobal_8026AF24_lbl_8050E208 controller_input_state;
void run_task__18TWindowMessagePageFv(u8 *arg0);
void update_message__18TWindowMessagePageFPv(void *arg0);
void set_message__18TWindowMessagePageFPvPvi(Page_8026AE20 *self, void *msg, s32 flags);
}

extern "C" {

void *__dt__18TWindowMessagePageFv(void *arg0, s16 arg1);
s32 is_ready__18TWindowMessagePageFPv(void *arg0);
int render__18TWindowMessagePageFv(void* p);
void set_text__18TWindowMessagePageFiii(s32 a, s32 b, s32 c);
void update_message__18TWindowMessagePageFPv(void *arg0);
s32 get_shared_text_buffer();
u32 copy_message_page_text__20TWindowSubStatusDispFPv(u32);
M2C_UNK text_builder_reset();
void __dl__7TObjectFPv(void *);
void __dt__14TWindowMessageFv(void *, int);
int render__14TWindowMessageFv(void*);
M2C_UNK send_and_handle__6TLobbyFPvii(void *, s32, s32);

s32 is_ready__18TWindowMessagePageFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
        return 0;
    }
    return is_message_window_ready((void *)(arg0)) != 0 ? 1 : 0;
}

void update_message__18TWindowMessagePageFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
        text_builder_reset();
        M2C_FIELD(arg0, u32 *, 0x94) = copy_message_page_text__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x94));
        send_and_handle__6TLobbyFPvii(arg0, get_shared_text_buffer(), M2C_FIELD(arg0, s32 *, 0x90));
    }
}

extern s32 local_client_id;

void set_message__18TWindowMessagePageFPvPvi(Page_8026AE20 *self, void *msg, s32 flags) {
    while (self->msg != NULL) {
        update_message__18TWindowMessagePageFPv(self);
    }
    self->flags = flags | 2;
    self->msg = msg;
    update_message__18TWindowMessagePageFPv(self);
}

u8 *create__18TWindowMessagePageFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_r3;
    u8 *var_r0;
    TLobby__sub_80269DA4((void *) (arg1), (void *) (arg2));
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x98));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TWindowMessagePage__ct((u8 *)(temp_r3), (s32)(arg0), (s32)(arg2), (s32)(arg3)));
    }
    return var_r0;
}

void set_text__18TWindowMessagePageFiii(s32 a, s32 b, s32 c) {
    create__18TWindowMessagePageFiiii((s32)(a), (s32)(b), (s32)(c), local_client_id);
}

int render__18TWindowMessagePageFv(void* p) { return render__14TWindowMessageFv(p); }

extern M2C_UNK __vt__18TWindowMessagePage[];

typedef char RecoveredGlobal_8026AF24_lbl_8050E208_size[sizeof(RecoveredGlobal_8026AF24_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__18TWindowMessagePageFv(u8 *arg0) {
    s32 temp_r5;
    draw__14TWindowMessageFPv();
    temp_r5 = is_player_input_active((int) (M2C_FIELD(arg0, s16 *, 0x20))) * 0x50;
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&controller_input_state.value + temp_r5 + 0x20), (int) (4), (int) (temp_r5)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (4)) != 0)) {
        if (is_message_window_ready((void *)((void *) (arg0))) != 0) {
            update_message__18TWindowMessagePageFPv((void *) (arg0));
            return;
        }
        complete_reveal__14TWindowMessageFPv((void *) (arg0));
    }
}

void *__dt__18TWindowMessagePageFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TWindowMessagePage;
        __dt__14TWindowMessageFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TWindowMessagePage__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    TWindowMessage__ct((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg3));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8026B014___vt__18TWindowMessagePage *)&__vt__18TWindowMessagePage).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3998;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = (s16) arg3;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    return arg0;
}

}
