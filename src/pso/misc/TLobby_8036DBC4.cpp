#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {
s32 get_camera_id__11TCameraCtrlFv();
s32 tmp_buf_use_req__6TLobbyFPCc(void *);
void draw_string__9TLanguageFPvPvl(void *, void *, int);
void tmp_buf_release__6TLobbyFv(void *);
s32 load_gvm_texture_file(void *);
void set_global_param__8TObjFishFl();
void set_entry_index__9TLanguageFll(int, int);
extern u8 lbl_8047AD08[];
extern u8 lbl_8047AD14[];
extern u8 lbl_8047AD20[];
extern u32 TBGMulti__textures;
extern s32 split_screen_hud_animation_frame;
void TBGMulti__ct(void);
}

extern "C" {

s32 safe_free__23TAdSinglePlyChrSelectGCFUl(u32);
s32 TLobby__sub_803DA16C(void*);

extern u32 TBGMulti__textures;

void TLobby::free_singleton_805D7018() {
    if ((u32) TBGMulti__textures != 0U) {
        TLobby__sub_803DA16C((void*)TBGMulti__textures);
        safe_free__23TAdSinglePlyChrSelectGCFUl(TBGMulti__textures);
        TBGMulti__textures = 0U;
    }
}
void TBGMulti__ct(void) {
    s32 sp8[4];
    if (get_camera_id__11TCameraCtrlFv() == 3) {
        sp8[0] = tmp_buf_use_req__6TLobbyFPCc(lbl_8047AD08);
        draw_string__9TLanguageFPvPvl(lbl_8047AD14, sp8, 0x4D);
        tmp_buf_release__6TLobbyFv(lbl_8047AD08);
        (*(s32 *)&TBGMulti__textures) = load_gvm_texture_file(lbl_8047AD20);
        set_global_param__8TObjFishFl();
        set_entry_index__9TLanguageFll(0, 0x4D);
    }
    split_screen_hud_animation_frame = 0x384;
}

}
