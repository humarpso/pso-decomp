#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 *construct_player_instance__10TObjPlayerFPvisiPv(u8 *arg0, s32 arg1, s16 arg2, s32 arg3, u8 *arg4);
s32 TFontSmallLobby__sub_801C0164(void *);
s32 construct_pb_controller__15TFontSmallLobbyFi(void *);
s32 construct_actor_base__10TObjPlayerFPvPv();
s32 init_player_substructs__10TObjPlayerFPv(void *, void *);
s32 TObjPlayer__sub_801BC8F0(void *);
s32 TObjPlayer__sub_801BCA14(void *, void *);
s32 init_player_data__10TObjPlayerFv(void *, void *);
s32 TObjPlayer__sub_801BEB68(void *, void *);
s32 get_quest_status__10TObjPlayerFv(void *, void *);
s32 TObjPlayer__sub_801BEC78(void *);
s32 sub_801BEE24__10TObjPlayerFs(void *, int);
s32 sub_801BEE2C__10TObjPlayerFs(void *, int);
s32 TObjPlayer__sub_801BF660(void *);
s32 TObjPlayer__sub_801BFB4C(void *);
s32 init_state__10TObjPlayerFi(void *);
s32 TObjPlayer__sub_801C1A00(void *);
s32 init_player_telepipe_record(void *);
s32 TObjPlayer__sub_801C221C(void *);
s32 TObjPlayer__sub_801C2224(void *);
s32 TObjPlayer__sub_801C222C(void *);
s32 TObjPlayer__sub_801C2234(void *);
s32 TObjPlayer__sub_801C223C(void *);
s32 TObjPlayer__sub_80309E9C(void *);
s32 TObjPlayer__sub_803374C4(void *);
s32 TObjPlayer__sub_80351974(void *);
s32 __ct__14TPlyDispConfigFv(void *);
s32 get_field_0x374__10TObjPlayerFv(void *, void *);
u16 obj_getField1c(void *);
s32 query_field374__10TObjPlayerFv(void *, void *);
s32 query_flags_374__10TObjPlayerFv(void *, void *);
s32 update_body_parts__10TObjPlayerFv(void *, void *);

extern s32 __vt__10TObjPlayer[];
extern s32 lbl_805D3530;

u8 *construct_player_instance__10TObjPlayerFPvisiPv(u8 *arg0, s32 arg1, s16 arg2, s32 arg3, u8 *arg4) {
    construct_actor_base__10TObjPlayerFPvPv();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TObjPlayer;
    ((TObjPlayer *)(arg0 + 0x340))->init_subobject();
    ((TObjPlayer *)(arg0 + 0x34C))->setup_ctrl();
    init_state__10TObjPlayerFi((void *) (arg0 + 0x360));
    TObjPlayer__sub_803374C4((void *) (arg0 + 0x374));
    TObjPlayer__sub_80309E9C((void *) (arg0 + 0x384));
    ((TObjPlayer *)(arg0 + 0x41C))->init_forward();
    TFontSmallLobby__sub_801C0164((void *) (arg0 + 0x428));
    construct_pb_controller__15TFontSmallLobbyFi((void *) (arg0 + 0x4AC));
    __ct__14TPlyDispConfigFv((void *) (arg0 + 0x500));
    TObjPlayer__sub_80351974((void *) (arg0 + 0x550));
    ((TObjPlayer *)(arg0 + 0x5B0))->init_subobjects();
    ((TObjPlayer *)(arg0 + 0x5E0))->init_sub();
    ((TObjPlayer *)(arg0 + 0x5F0))->init_wrapper();
    ((TObjPlayer *)(arg0 + 0x5FC))->init_members();
    ((TObjPlayer *)(arg0 + 0x608))->set_vec4_const_wrapper();
    ((TObjPlayer *)(arg0 + 0x634))->wrap_update();
    ((TObjPlayer *)(arg0 + 0x63C))->reset_and_clear();
    ((TObjPlayer *)(arg0 + 0x644))->construct_hurt_timer();
    ((TObjPlayer *)(arg0 + 0x64C))->reset_fields();
    ((TObjPlayer *)(arg0 + 0x658))->reset_scale_vector();
    ((TObjPlayer *)(arg0 + 0x66C))->set_vec3_const_wrapper();
    TObjPlayer__sub_801BEC78((void *) (arg0 + 0x678));
    ((TObjPlayer *)(arg0 + 0x6AC))->forward_release();
    TObjPlayer__sub_801BF660((void *) (arg0 + 0x730));
    ((TObjPlayer *)(arg0 + 0x744))->init_vec_record();
    ((TObjPlayer *)(arg0 + 0x754))->init_sub_objects();
    TObjPlayer::init_partial((s32)((void *) (arg0 + 0x7C4)));
    ((TObjPlayer *)(arg0 + 0x7C8))->clear_base();
    ((TObjPlayer *)(arg0 + 0x7CC))->init();
    TObjPlayer__sub_801C1A00((void *) (arg0 + 0x828));
    init_player_telepipe_record((void *) (arg0 + 0x830));
    TObjPlayer__sub_801BFB4C((void *) (arg0 + 0x84C));
    ((TObjPlayer *)(arg0 + 0x858))->init_forward();
    TObjPlayer::reset_and_return((s32)((void *) (arg0 + 0xD04)));
    ((TObjPlayer *)(arg0 + 0xDAC))->clear_header_struct();
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3530;
    ((TObjPlayer *)arg0)->init_action_provider();
    *(s16 *)((s8 *)arg0 + 0x1C) = arg2;
    ((TObjPlayer *)arg0)->setup_control_role((s32)((void *) (arg3)));
    update_body_parts__10TObjPlayerFv((void *) (arg0), (void *) (arg4 + 0x370));
    sub_801BEE2C__10TObjPlayerFs((void *) (arg0), (int) (*(u8 *)((s8 *)arg4 + 1)));
    sub_801BEE24__10TObjPlayerFs((void *) (arg0), (int) (*(u8 *)((s8 *)arg4 + 2)));
    get_field_0x374__10TObjPlayerFv((void *) (arg0), (void *) (TObjPlayer__sub_801C223C((void *) (arg4))));
    get_quest_status__10TObjPlayerFv((void *) (arg0), (void *) (TObjPlayer__sub_801C2234((void *) (arg4))));
    query_flags_374__10TObjPlayerFv((void *) (arg0), (void *) (TObjPlayer__sub_801C222C((void *) (arg4))));
    query_field374__10TObjPlayerFv((void *) (arg0), (void *) (TObjPlayer__sub_801C2224((void *) (arg4))));
    TObjPlayer__sub_801BEB68((void *) (arg0), (void *) (TObjPlayer__sub_801C221C((void *) (arg4))));
    init_player_data__10TObjPlayerFv((void *) (arg0), (void *) (arg4 + 0x34C));
    ((TObjPlayer *)arg0)->create_lockon_cursor();
    ((TObjPlayer *)arg0)->sub_801BD318();
    ((TObjPlayer *)arg0)->init_control_mode((s32)((void *) (arg3)));
    TObjPlayer__sub_801BCA14((void *) (arg0), (void *) (arg4));
    init_player_substructs__10TObjPlayerFPv((void *) (arg0), (void *) (arg4 + 0x3C0));
    ((TObjPlayer *)arg0)->load_character_state((u8 *)arg4);
    ((TObjPlayer *)arg0)->update_if_active();
    TObjPlayer__sub_801BC8F0((void *) (arg0));
    ((TObjPlayer *)arg0)->setup_fresh_player_state((u8 *)arg4);
    ((TObjPlayer *)arg0)->sub_801BB8B0((u8 *)arg4);
    TObjPlayer::set_com_card_window((s32)((void *) (obj_getField1c((void *) (arg0)))));
    return arg0;
}

}
