#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {
u8 * TWindowMessageLog__ct(void *, s32, s32);
u8 *__nw__7TObjectFUl(s32);
s32 TLobby__sub_80269DA4(void *, int);
u8 *create_message_log_window(s32 arg0, s32 arg1, s32 arg2);
s32 get_shared_text_buffer();
s32 append_text_space();
s32 text_builder_append(s32 *);
s32 text_builder_reset();
s32 *get_active_photon_object__17TWindowMessageLogFv(u16);
s32 append_line__17TWindowMessageLogFPvi(u32, s32);
s32 cache_last_chat_line(s32 *);
s32 chat_log_add_line();
extern s32 local_client_id;
extern s32 lbl_805DD250;
void post_chat_log_message(u16 arg0, s32 *arg1);
}

extern "C" {

void post_chat_log_message(u16 arg0, s32 *arg1) {
    s32 temp_r30;
    s32 *temp_r31;
    if ((s32) arg0 == (s32) local_client_id) {
        cache_last_chat_line(arg1);
    }
    temp_r31 = get_active_photon_object__17TWindowMessageLogFv(arg0);
    text_builder_reset();
    if (temp_r31 != NULL) {
        text_builder_append(temp_r31);
        append_text_space();
        text_builder_append(&lbl_805DD250);
        append_text_space();
    }
    text_builder_append(arg1);
    arg1 = (s32 *) get_shared_text_buffer();
    chat_log_add_line();
    {
        u32 tmp_ad = TWindowCtrl::get_field44();
        if (tmp_ad != 0U) {
            append_line__17TWindowMessageLogFPvi(tmp_ad, (s32) arg1);
        }
    }
}

u8 *create_message_log_window(s32 arg0, s32 arg1, s32 arg2) {
    u8 *temp_r3;
    u8 *var_r0;
    TLobby__sub_80269DA4((void *) (arg1), (int) (0x1E));
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x98));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TWindowMessageLog__ct(temp_r3, arg0, arg2));
    }
    return var_r0;
}

}
