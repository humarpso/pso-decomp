#include "types.h"
#include "pso/misc/TFontSmallLobby.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TCharaMaking.h"

extern "C" {

void TObjPlayer__sub_801BD3A4(void);
void update_body_parts__10TObjPlayerFv(void* p);
void TObjPlayer__sub_801BD384(void* p);
int copy_player_visual_record(void*);
int TObjWaitEntryHairMoveSim__sub_800FE73C(void*);
int free_loaded_buffers__12TCharaMakingFv(void*);
int apply_pending_effect__11TBoss6Type2Fv(void*);
typedef void (*Fn_vpvp_801BD570)(void *, void *);

void TObjPlayer__sub_801BD384(void* p) { update_body_parts__10TObjPlayerFv(p); }
void TObjPlayer__sub_801BD3A4(void) {  }
void TObjPlayer::free_chara_making() { apply_pending_effect__11TBoss6Type2Fv(this); free_loaded_buffers__12TCharaMakingFv(this); }
void TObjPlayer::update_body_parts() { copy_player_visual_record((char*)this + 0x85c); *(int*)((char*)this + 0xcfc) = 255; ((TCharaMaking *)this)->update_body_parts(); TObjWaitEntryHairMoveSim__sub_800FE73C(this); }

void TObjPlayer__sub_801BCD54(void *);
void TObjPlayer__sub_801BCC50(void *);
void TObjPlayer__sub_801BCB28(void *);
void TObjPlayer__sub_801BCA10(void *);
void TObjPlayer__sub_801BD314(void *);
void TObjPlayer__sub_801BC504(void *);
void TObjPlayer__sub_801BBC64(void *);
void TObjPlayer__sub_801BBB94(void *);
void TObjPlayer__sub_801BB8AC(void *);
void destroy__10TObjPlayerFis(void *, int);
void TObjPlayer__sub_801BFAD4(void *, int);
void dt__10TObjPlayerFls(void *, int);
void __dt__14TPlyDispConfigFv(void *, int);
void TObjPlayer__sub_80309E4C(void *, int);
void TObjPlayer__sub_801BEDC0(void *, int);
void TObjPlayer__sub_801BFA4C(void *, int);
void TObjPlayer__sub_801BF9F0(void *, int);
void __dl__7TObjectFPv(void *);
extern s32 __vt__10TObjPlayer[];

void *__dt__10TObjPlayerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TObjPlayer;
        ((TObjPlayer *)arg0)->release_child_object();
        ((TObjPlayer *)arg0)->free_chara_making();
        ((TObjPlayer *)arg0)->destroy_child();
        TObjPlayer__sub_801BCD54(arg0);
        TObjPlayer__sub_801BCC50(arg0);
        TObjPlayer__sub_801BCB28(arg0);
        TObjPlayer__sub_801BCA10(arg0);
        ((TObjPlayer *)arg0)->destroy_owned_object();
        TObjPlayer__sub_801BD314(arg0);
        TObjPlayer__sub_801BC504(arg0);
        TObjPlayer__sub_801BBC64(arg0);
        TObjPlayer__sub_801BBB94(arg0);
        TObjPlayer__sub_801BB8AC(arg0);
        ((TObjPlayer *)arg0)->unregister();
        TObjPlayer::free_owned_buffer_b((s32)((s8 *)arg0 + 0x7CC), (s16)(-1));
        destroy__10TObjPlayerFis((s8 *)arg0 + 0x754, -1);
        TObjPlayer__sub_801BFAD4((s8 *)arg0 + 0x644, -1);
        dt__10TObjPlayerFls((s8 *)arg0 + 0x550, -1);
        __dt__14TPlyDispConfigFv((s8 *)arg0 + 0x500, -1);
        TObjPlayer::free_owned_buffer_a((s32)((s8 *)arg0 + 0x4AC), (s16)(-1));
        TObjPlayer__sub_80309E4C((s8 *)arg0 + 0x384, -1);
        TObjPlayer__sub_801BEDC0((s8 *)arg0 + 0x374, -1);
        TObjPlayer__sub_801BFA4C((s8 *)arg0 + 0x360, -1);
        TObjPlayer::conditional_delete_ex((s32)((s8 *)arg0 + 0x34C), (s16)(-1));
        TObjPlayer__sub_801BF9F0((s8 *)arg0 + 0x340, -1);
        ((TUnk_804806E8 *)arg0)->destroy_motion_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjPlayer__ct(void *arg0, void *arg1, void *arg2);
void *__ct__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2);
void TFontSmallLobby__sub_801C0164(void *);
void TObjPlayer__sub_801BB85C(void *, void *);
void sub_801BBC2C__10TObjPlayerFv(void *, void *);
void init_battle__10TObjPlayerFv(void *, void *);
void init_session_technique_caps__10TObjPlayerFPvPv(void *, void *);
void TObjPlayer__sub_801BCAB0(void *, void *);
void init_player_data__10TObjPlayerFv(void *, void *);
void is_flag_set_550__10TObjPlayerFv(void *, void *);
void sub_801BD240__10TObjPlayerFv(void *, void *);
void TObjPlayer__sub_801BEC78(void *);
void TObjPlayer__sub_801BF660(void *);
void TObjPlayer__sub_801BFB4C(void *);
void init_state__10TObjPlayerFi(void *);
void TObjPlayer__sub_801C1A00(void *);
void init_player_telepipe_record(void *);
void __ct__14TPlyDispConfigFv(void *);
void construct_actor_base__10TObjPlayerFPvPv(void *);
void TObjPlayer__sub_801BBB70(void *, void *);
void TObjPlayer__sub_80309E9C(void *);
void TObjPlayer__sub_803374C4(void *);
void TObjPlayer__sub_80351974(void *);
extern void *lbl_805D3530;

void *TObjPlayer__ct(void *arg0, void *arg1, void *arg2) {
    construct_actor_base__10TObjPlayerFPvPv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TObjPlayer;
    ((TObjPlayer *)((char *)arg0 + 832))->init_subobject();
    ((TObjPlayer *)((char *)arg0 + 844))->setup_ctrl();
    init_state__10TObjPlayerFi((void *)((char *)arg0 + 864));
    TObjPlayer__sub_803374C4((void *)((char *)arg0 + 884));
    TObjPlayer__sub_80309E9C((void *)((char *)arg0 + 900));
    ((TObjPlayer *)((char *)arg0 + 1052))->init_forward();
    TFontSmallLobby__sub_801C0164((void *)((char *)arg0 + 1064));
    ((TFontSmallLobby *)((char *)arg0 + 1196))->construct_pb_controller();
    __ct__14TPlyDispConfigFv((void *)((char *)arg0 + 1280));
    TObjPlayer__sub_80351974((void *)((char *)arg0 + 1360));
    ((TObjPlayer *)((char *)arg0 + 1456))->init_subobjects();
    ((TObjPlayer *)((char *)arg0 + 1504))->init_sub();
    ((TObjPlayer *)((char *)arg0 + 1520))->init_wrapper();
    ((TObjPlayer *)((char *)arg0 + 1532))->init_members();
    ((TObjPlayer *)((char *)arg0 + 1544))->set_vec4_const_wrapper();
    ((TObjPlayer *)((char *)arg0 + 1588))->wrap_update();
    ((TObjPlayer *)((char *)arg0 + 1596))->reset_and_clear();
    ((TObjPlayer *)((char *)arg0 + 1604))->construct_hurt_timer();
    ((TObjPlayer *)((char *)arg0 + 1612))->reset_fields();
    ((TObjPlayer *)((char *)arg0 + 1624))->reset_scale_vector();
    ((TObjPlayer *)((char *)arg0 + 1644))->set_vec3_const_wrapper();
    TObjPlayer__sub_801BEC78((void *)((char *)arg0 + 1656));
    ((TObjPlayer *)((char *)arg0 + 1708))->forward_release();
    TObjPlayer__sub_801BF660((void *)((char *)arg0 + 1840));
    ((TObjPlayer *)((char *)arg0 + 1860))->init_vec_record();
    ((TObjPlayer *)((char *)arg0 + 1876))->init_sub_objects();
    TObjPlayer::init_partial((s32)((void *)((char *)arg0 + 1988)));
    ((TObjPlayer *)((char *)arg0 + 1992))->clear_base();
    ((TObjPlayer *)((char *)arg0 + 1996))->init();
    TObjPlayer__sub_801C1A00((void *)((char *)arg0 + 2088));
    init_player_telepipe_record((void *)((char *)arg0 + 2096));
    TObjPlayer__sub_801BFB4C((void *)((char *)arg0 + 2124));
    ((TObjPlayer *)((char *)arg0 + 2136))->init_forward();
    TObjPlayer::reset_and_return((s32)((void *)((char *)arg0 + 3332)));
    ((TObjPlayer *)((char *)arg0 + 3500))->clear_header_struct();
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D3530;
    ((TObjPlayer *)arg0)->init_action_provider();
    *(u16 *)((s8 *)arg0 + 0x1C) = 0;
    ((TObjPlayer *)arg0)->setup_control_role(7);
    ((Fn_vpvp_801BD570)update_body_parts__10TObjPlayerFv)(arg0, arg2);
    init_player_data__10TObjPlayerFv(arg0, (void *)((char *)arg2 + 136));
    ((TObjPlayer *)arg0)->init_data_table_ptr();
    return arg0;
}

void *__ct__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2) {
    construct_actor_base__10TObjPlayerFPvPv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TObjPlayer;
    ((TObjPlayer *)((char *)arg0 + 832))->init_subobject();
    ((TObjPlayer *)((char *)arg0 + 844))->setup_ctrl();
    init_state__10TObjPlayerFi((void *)((char *)arg0 + 864));
    TObjPlayer__sub_803374C4((void *)((char *)arg0 + 884));
    TObjPlayer__sub_80309E9C((void *)((char *)arg0 + 900));
    ((TObjPlayer *)((char *)arg0 + 1052))->init_forward();
    TFontSmallLobby__sub_801C0164((void *)((char *)arg0 + 1064));
    ((TFontSmallLobby *)((char *)arg0 + 1196))->construct_pb_controller();
    __ct__14TPlyDispConfigFv((void *)((char *)arg0 + 1280));
    TObjPlayer__sub_80351974((void *)((char *)arg0 + 1360));
    ((TObjPlayer *)((char *)arg0 + 1456))->init_subobjects();
    ((TObjPlayer *)((char *)arg0 + 1504))->init_sub();
    ((TObjPlayer *)((char *)arg0 + 1520))->init_wrapper();
    ((TObjPlayer *)((char *)arg0 + 1532))->init_members();
    ((TObjPlayer *)((char *)arg0 + 1544))->set_vec4_const_wrapper();
    ((TObjPlayer *)((char *)arg0 + 1588))->wrap_update();
    ((TObjPlayer *)((char *)arg0 + 1596))->reset_and_clear();
    ((TObjPlayer *)((char *)arg0 + 1604))->construct_hurt_timer();
    ((TObjPlayer *)((char *)arg0 + 1612))->reset_fields();
    ((TObjPlayer *)((char *)arg0 + 1624))->reset_scale_vector();
    ((TObjPlayer *)((char *)arg0 + 1644))->set_vec3_const_wrapper();
    TObjPlayer__sub_801BEC78((void *)((char *)arg0 + 1656));
    ((TObjPlayer *)((char *)arg0 + 1708))->forward_release();
    TObjPlayer__sub_801BF660((void *)((char *)arg0 + 1840));
    ((TObjPlayer *)((char *)arg0 + 1860))->init_vec_record();
    ((TObjPlayer *)((char *)arg0 + 1876))->init_sub_objects();
    TObjPlayer::init_partial((s32)((void *)((char *)arg0 + 1988)));
    ((TObjPlayer *)((char *)arg0 + 1992))->clear_base();
    ((TObjPlayer *)((char *)arg0 + 1996))->init();
    TObjPlayer__sub_801C1A00((void *)((char *)arg0 + 2088));
    init_player_telepipe_record((void *)((char *)arg0 + 2096));
    TObjPlayer__sub_801BFB4C((void *)((char *)arg0 + 2124));
    ((TObjPlayer *)((char *)arg0 + 2136))->init_forward();
    TObjPlayer::reset_and_return((s32)((void *)((char *)arg0 + 3332)));
    ((TObjPlayer *)((char *)arg0 + 3500))->clear_header_struct();
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D3530;
    ((TObjPlayer *)arg0)->init_from_data(arg2);
    ((TObjPlayer *)arg0)->setup_control_role(4);
    ((Fn_vpvp_801BD570)TObjPlayer__sub_801BD384)(arg0, (void *)((char *)arg2 + 200));
    ((TObjPlayer *)arg0)->load_char_data((u8 *)arg2);
    ((TObjPlayer *)arg0)->update_position((s32)arg2);
    sub_801BBC2C__10TObjPlayerFv(arg0, arg2);
    sub_801BD240__10TObjPlayerFv(arg0, arg2);
    is_flag_set_550__10TObjPlayerFv(arg0, arg2);
    init_session_technique_caps__10TObjPlayerFPvPv(arg0, arg2);
    ((TObjPlayer *)arg0)->init_from_source((u8 *)arg2);
    TObjPlayer__sub_801BCAB0(arg0, arg2);
    init_battle__10TObjPlayerFv(arg0, arg2);
    TObjPlayer__sub_801BBB70(arg0, arg2);
    ((TObjPlayer *)arg0)->init_class_flags((s32)arg2);
    TObjPlayer__sub_801BB85C(arg0, arg2);
    *(u16 *)((s8 *)arg0 + 0x32C) = *(s16 *)((s8 *)arg2 + 0x22);
    return arg0;
}

}
