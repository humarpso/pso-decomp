#include "types.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/boss/TBoss4DarkFalz.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/boss/TBoss4Uro.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_8004C0D4_lbl_80484D74 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8004C0D4_lbl_80484D74_size[sizeof(RecoveredGlobal_8004C0D4_lbl_80484D74) == 0x10 ? 1 : -1];

typedef struct Msg_8004BFA4 {
    u8 code;
    u8 size;
    u16 id;
    s16 action;
    u8 pad6[2];
    s32 arg;
} Msg_8004BFA4;

struct VBase_18_c10bfc { char pad[0x18]; };

struct VObj_18_c10bfc : VBase_18_c10bfc {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual s32 m79(void *);
    virtual s32 m80();
};

struct Desc_8004BD58 { s16 f0; s16 f2; u8 pad4[0x3C]; };

extern "C" {
s32 query_teammate_state__9TObjEneDDFv();
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
s32 fn_802E52AC();
extern RecoveredGlobal_8004C0D4_lbl_80484D74 darkfalz_dat_resource_descriptor;
extern int darkfalz_dat_resource;
void TBoss4Type2__sub_80056EA8(void *, s32);
void TBoss4Type3__sub_80059DCC(void *, s32);
void *get_enemy_entity(u16);
extern void *TBoss4DarkFalz__type1_instance;
extern void *TBoss4DarkFalz__type2_instance;
extern void *TBoss4DarkFalz__type3_instance;
void handle_6x19_dark_falz_actions(Msg_8004BFA4 *arg0);
void queue_destruction__7TObjectFv(void *);
s32 is_ending_or_split_screen__14TBoss4DarkFalzFv(void);
u8 * __dt__9TObjEnemyFv(void *, s16);
void __dl__7TObjectFPv(s32);
s32 restore_player_cameras();
extern s32 __vt__14TBoss4DarkFalz[];
extern s32 dark_falz_controller_instance;
u8 *__dt__14TBoss4DarkFalzFv(u8 *arg0, s16 arg1);
u8 *VecCopy__FP3VecPC3Vec(void *, void *);
s32 register_object__6TLobbyFl(int);
s32 dispatch_shared_handler_b__6TLobbyFl(int);
s32 register_boss__6TLobbyFl(int);
s32 TBoss4DarkFalz__sub_8004B4F0(void *, void *);
s32 bind_enemy_combat_stats(void *, int, int, int);
s32 initialize__9TObjEnemyFPv();
s32 register_entity_by_id(void *);
s32 init_music_sequencer(int);
s32 fn_8030A83C(void *);
s32 create_boss4_fade();
extern Desc_8004BD58 TBoss4DarkFalz__data_804FF1E8;
extern s32 TBoss4DarkFalz__name;
extern s32 dark_falz_form_index;
extern s32 lbl_805D4D6C;
extern s32 lbl_805D4D70;
extern s32 game_difficulty_selection;
extern const f32 lbl_805D8908;
s32 TBoss4DarkFalz__ct(s32 a0, s32 arg1, s32 a2);
int TBoss4DarkFalz__sub_8030AD38(void);
int TLobby__sub_8001FE7C(void*, void*);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(s32);

void TBoss4DarkFalz::render() {  }

void TBoss4DarkFalz::run_task() {
    u8 *arg0 = (u8 *)this;
    if (((s32) *(s32 *)&this->m_37c != 0) && (TObjPlayer::check_demo_mode() != 0)) {
        ((TBoss4DarkFalz *)arg0)->change_state((int) (0));
    }
    if (query_teammate_state__9TObjEneDDFv() == 0) {
        ((TBoss4DarkFalz *)arg0)->update_visible_flag();
        if ((s32) *(s32 *)&this->m_378 == 0) {
            ((TBoss4DarkFalz *)arg0)->sub_8004B0F8();
        }
        ((TBoss4DarkFalz *)arg0)->sub_8004B084();
        ((TBoss4DarkFalz *)arg0)->update_roar_sound_timer();
    }
}

void TBoss4DarkFalz::vfunc_63() {  }

u8 *__dt__14TBoss4DarkFalzFv(u8 *arg0, s16 arg1) {
    s32 temp_r0;
    u8 *temp_r3;
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TBoss4DarkFalz;
        switch (*(s32 *)((s8 *)arg0 + 0x37C)) {
        case 10:
        case 14:
        case 15:
            ((TObjEnemy *)arg0)->send_entity_set_flags();
            break;
        }
        TBoss4DarkFalz::end_player_camera_pans((void *) (arg0));
        restore_player_cameras();
        if (is_ending_or_split_screen__14TBoss4DarkFalzFv() == 0) {
            TLobby::stop_audio_streams();
        }
        temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x398));
        if (temp_r3 != NULL) {
            queue_destruction__7TObjectFv(temp_r3);
            *(u8 **)((s8 *)arg0 + 0x398) = NULL;
        }
        if ((void *) TBoss4DarkFalz__type1_instance != NULL) {
            queue_destruction__7TObjectFv(TBoss4DarkFalz__type1_instance);
            TBoss4DarkFalz__type1_instance = NULL;
        }
        if ((void *) TBoss4DarkFalz__type2_instance != NULL) {
            queue_destruction__7TObjectFv(TBoss4DarkFalz__type2_instance);
            TBoss4DarkFalz__type2_instance = NULL;
        }
        if ((void *) TBoss4DarkFalz__type3_instance != NULL) {
            queue_destruction__7TObjectFv(TBoss4DarkFalz__type3_instance);
            TBoss4DarkFalz__type3_instance = NULL;
        }
        dark_falz_controller_instance = 0;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

s32 TBoss4DarkFalz__ct(s32 a0, s32 arg1, s32 a2) {
    u8 *arg0 = (u8 *)a0;
    u8 *arg2 = (u8 *)a2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r29;
    s32 temp_r29_2;
    s32 temp_r30;
    s32 temp_r30_2;
    initialize__9TObjEnemyFPv();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TBoss4DarkFalz;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TBoss4DarkFalz__name;
    ((TBoss4DarkFalz *)arg0)->sub_8004AFB8();
    if ((s16) *(s16 *)((s8 *)arg2 + 2) != 0x200) {
        return (s32)arg0;
    }
    dark_falz_controller_instance = (s32)arg0;
    ((VObj_18_c10bfc *)(arg0))->m79(arg2);
    TBoss4DarkFalz__sub_8004B4F0(&TBoss4DarkFalz__data_804FF1E8, arg2);
    TBoss4DarkFalz__data_804FF1E8.f2 = 0;
    ((VObj_18_c10bfc *)(arg0))->m80();
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, VecCopy__FP3VecPC3Vec(arg0 + 0x50, VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38)));
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x310) = (f32) lbl_805D8908;
    *(f32 *)((s8 *)arg0 + 0x30C) = (f32) lbl_805D8908;
    *(f32 *)((s8 *)arg0 + 0x308) = (f32) lbl_805D8908;
    *(s32 *)((s8 *)arg0 + 0x2A8) = 0;
    if ((s32) game_difficulty_selection == 0) {
        bind_enemy_combat_stats(arg0, register_boss__6TLobbyFl(0x37), dispatch_shared_handler_b__6TLobbyFl(0x37), register_object__6TLobbyFl(0x37));
    } else {
        bind_enemy_combat_stats(arg0, register_boss__6TLobbyFl(0x38), dispatch_shared_handler_b__6TLobbyFl(0x38), register_object__6TLobbyFl(0x38));
    }
    register_entity_by_id((void *) (arg0));
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x02000000);
    ((TBoss4DarkFalz *)arg0)->update_visible_flag();
    *(s32 *)((s8 *)arg0 + 0x390) = TBoss4DarkFalz::count_active_players();
    TBoss4DarkFalz__type1_instance = 0;
    TBoss4DarkFalz__type2_instance = 0;
    TBoss4DarkFalz__type3_instance = 0;
    *(s32 *)((s8 *)arg0 + 0x394) = 0;
    *(s32 *)((s8 *)arg0 + 0x398) = create_boss4_fade();
    *(s32 *)((s8 *)arg0 + 0x388) = 0;
    *(s32 *)((s8 *)arg0 + 0x38C) = 0;
    fn_8030A83C((void *) (arg0));
    init_music_sequencer((int) (4));
    dark_falz_form_index = 0;
    *(s32 *)((s8 *)arg0 + 0x374) = 0;
    temp_r0 = *(s32 *)((s8 *)(TLobby::dispatch_shared_handler_a(0x36)) + 0x18);
    lbl_805D4D6C = temp_r0;
    if ((temp_r0 < 0) || (temp_r0 > 0xE)) {
        lbl_805D4D6C = 0;
    }
    temp_r0_2 = *(s32 *)((s8 *)(TLobby::dispatch_shared_handler_a(0x36)) + 0x1C);
    lbl_805D4D70 = temp_r0_2;
    if ((temp_r0_2 < 0) || (temp_r0_2 > 0xE)) {
        lbl_805D4D70 = 0;
    }
    TBoss4DarkFalz::push_players_out_of_zone((s32)((void *) (arg0)), (s32)((int) (0)));
    *(s32 *)((s8 *)arg0 + 0x37C) = -1;
    ((TBoss4DarkFalz *)arg0)->change_state((int) (1));
    return (s32)arg0;
}

void handle_6x19_dark_falz_actions(Msg_8004BFA4 *arg0) {
    void *ent;
    s32 arg;
    ((TBoss4DarkFalz *)arg0)->swap_bytes();
    ent = get_enemy_entity(arg0->id);
    if (ent == NULL) {
        return;
    }
    if (arg0->action != -1 && arg0->action >= 0 && arg0->action < 16 &&
        arg0->action != ((TBoss4Uro *)ent)->get_phase()) {
        ((TBoss4DarkFalz *)ent)->change_state(arg0->action);
    }
    arg = arg0->arg;
    if (arg == -1) {
        return;
    }
    switch (((TBoss4Uro *)ent)->get_phase()) {
    case 5:
    case 6:
        if (TBoss4DarkFalz__type1_instance != NULL) {
            ((TBoss4Type2 *)TBoss4DarkFalz__type1_instance)->apply_packed_state(arg);
        }
        break;
    case 7:
    case 8:
    case 9:
        if (TBoss4DarkFalz__type2_instance != NULL) {
            TBoss4Type2__sub_80056EA8(TBoss4DarkFalz__type2_instance, arg);
        }
        break;
    case 12:
    case 13:
    case 14:
        if (TBoss4DarkFalz__type3_instance != NULL) {
            TBoss4Type3__sub_80059DCC(TBoss4DarkFalz__type3_instance, arg);
        }
        break;
    }
}

void TBoss4DarkFalz::cleanup_global() { TBoss4DarkFalz::free_global_instance(); TBoss4DarkFalz__sub_8030AD38(); TLobby__sub_8001FE7C((void*)(darkfalz_dat_resource), (void*)1); darkfalz_dat_resource = 0; }

extern s32 tl_04;

void TBoss4DarkFalz::load_resources() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = ((TAdSinglePlyChrSelectGC *)((void *)0x440))->alloc();
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &darkfalz_dat_resource_descriptor.value, 0, 0, 0));
    }
    (*(u8 * *)&darkfalz_dat_resource) = (unsigned char *) ((void *) var_r0);
    if ((u32) var_r0 != 0U) {
        TBoss4DarkFalz::init_uro_link();
        fn_802E52AC();
    }
}

s32 TBoss4DarkFalz::create(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3AC);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4DarkFalz__ct((s32)(var_r31), (s32)(var_r4), (s32)(arg0));
    }
    return var_r31;
}

}
