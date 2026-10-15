#include "types.h"

extern "C" {

s32 update_selected_id__9TWindowDDFPv(void *);
s32 build_player_word_lists__9TWindowDDFv();
s32 open__9TWindowDDFii(void *, int);
s32 handle_word_select__9TWindowDDFPv();
extern s32 local_client_id;
extern u32 TWindowDD__word_select_lists;

void handle_6x74_word_select(u8 *arg0) {
    handle_word_select__9TWindowDDFPv();
    if ((u32) TWindowDD__word_select_lists != 0U) {
        if ((s32) *(u16 *)((s8 *)arg0 + 2) != (s32) local_client_id) {
            update_selected_id__9TWindowDDFPv((void *) (arg0 + 4));
        }
        build_player_word_lists__9TWindowDDFv();
        open__9TWindowDDFii((void *) (arg0 + 4), (int) (*(u16 *)((s8 *)arg0 + 2)));
    }
}

}
