#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8004C0D4_lbl_80484D74 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8004C0D4_lbl_80484D74_size[sizeof(RecoveredGlobal_8004C0D4_lbl_80484D74) == 0x10 ? 1 : -1];

typedef s32 M2C_UNK;
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
    virtual M2C_UNK m79(void *);
    virtual M2C_UNK m80();
};

struct Desc_8004BD58 { s16 f0; s16 f2; u8 pad4[0x3C]; };

extern "C" {
M2C_UNK TBoss4DarkFalz__sub_8004B084(void *);
M2C_UNK TBoss4DarkFalz__sub_8004B0F8(void *);
M2C_UNK change_state__14TBoss4DarkFalzFPvi(void *, int);
M2C_UNK update_visible_flag__14TBoss4DarkFalzFPv(void *);
M2C_UNK update_roar_sound_timer__14TBoss4DarkFalzFPv(void *);
s32 check_demo_mode__10TObjPlayerFv();
s32 query_teammate_state__9TObjEneDDFPv();
void run_task__14TBoss4DarkFalzFv(u8 *arg0);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
M2C_UNK fn_802E52AC();
M2C_UNK init_uro_link__14TBoss4DarkFalzFv();
extern RecoveredGlobal_8004C0D4_lbl_80484D74 lbl_80484D74;
extern int lbl_805D4D58;
void load_resources__14TBoss4DarkFalzFv(void);
M2C_UNK change_state__14TBoss4DarkFalzFPvi(void *, int);
s32 get_phase__9TBoss4UroFPv(void *);
void swap_bytes__14TBoss4DarkFalzFPv(void *);
void apply_packed_state__11TBoss4Type2FPvUi(void *, s32);
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
s32 send_entity_set_flags__6TLobbyFPv(void *);
void __dl__7TObjectFPv(s32);
M2C_UNK end_player_camera_pans__14TBoss4DarkFalzFPv(void *);
M2C_UNK restore_player_cameras();
M2C_UNK stop_audio_streams__6TLobbyFv();
extern M2C_UNK __vt__14TBoss4DarkFalz[];
extern void *TBoss4DarkFalz__type1_instance;
extern void *TBoss4DarkFalz__type2_instance;
extern void *TBoss4DarkFalz__type3_instance;
extern s32 dark_falz_controller_instance;
u8 *__dt__14TBoss4DarkFalzFv(u8 *arg0, s16 arg1);
u8 *VecCopy__FP3VecPC3Vec(void *, void *);
u8 *dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
M2C_UNK push_players_out_of_zone__14TBoss4DarkFalzFii(void *, int);
M2C_UNK TBoss4DarkFalz__sub_8004AFB8(void *);
s32 count_active_players__14TBoss4DarkFalzFv();
M2C_UNK change_state__14TBoss4DarkFalzFPvi(void *, int);
M2C_UNK update_visible_flag__14TBoss4DarkFalzFPv(void *);
M2C_UNK TBoss4DarkFalz__sub_8004B4F0(void *, void *);
M2C_UNK bind_enemy_combat_stats(void *, int, int, int);
M2C_UNK initialize__9TObjEnemyFPv();
M2C_UNK register_entity_by_id(void *);
M2C_UNK init_music_sequencer(int);
M2C_UNK fn_8030A83C(void *);
s32 create_boss4_fade();
extern M2C_UNK __vt__14TBoss4DarkFalz[];
extern Desc_8004BD58 TBoss4DarkFalz__data_804FF1E8;
extern s32 lbl_805D2770;
extern void *TBoss4DarkFalz__type1_instance;
extern void *TBoss4DarkFalz__type2_instance;
extern void *TBoss4DarkFalz__type3_instance;
extern s32 dark_falz_form_index;
extern s32 lbl_805D4D6C;
extern s32 lbl_805D4D70;
extern s32 dark_falz_controller_instance;
extern s32 game_difficulty_selection;
extern const f32 lbl_805D8908;
s32 TBoss4DarkFalz__ct(s32 a0, s32 arg1, s32 a2);
}

extern "C" {

void TBoss4DarkFalz__vt61(void);
void cleanup_global__14TBoss4DarkFalzFv(void);
s32 create__14TBoss4DarkFalzFi(s32 arg0);
void render__14TBoss4DarkFalzFv(void);
int TBoss4DarkFalz__sub_8030AD38(void);
int TLobby__sub_8001FE7C(void*, void*);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
int free_global_instance__14TBoss4DarkFalzFv(void);

void render__14TBoss4DarkFalzFv(void) {  }

void run_task__14TBoss4DarkFalzFv(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x37C) != 0) && (check_demo_mode__10TObjPlayerFv() != 0)) {
        change_state__14TBoss4DarkFalzFPvi((void *) (arg0), (int) (0));
    }
    if (query_teammate_state__9TObjEneDDFPv() == 0) {
        update_visible_flag__14TBoss4DarkFalzFPv((void *) (arg0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x378) == 0) {
            TBoss4DarkFalz__sub_8004B0F8((void *) (arg0));
        }
        TBoss4DarkFalz__sub_8004B084((void *) (arg0));
        update_roar_sound_timer__14TBoss4DarkFalzFPv((void *) (arg0));
    }
}

void TBoss4DarkFalz__vt61(void) {  }

    extern int lbl_805D4D58;

u8 *__dt__14TBoss4DarkFalzFv(u8 *arg0, s16 arg1) {
    s32 temp_r0;
    u8 *temp_r3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TBoss4DarkFalz;
        switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
        case 10:
        case 14:
        case 15:
            send_entity_set_flags__6TLobbyFPv(arg0);
            break;
        }
        end_player_camera_pans__14TBoss4DarkFalzFPv((void *) (arg0));
        restore_player_cameras();
        if (is_ending_or_split_screen__14TBoss4DarkFalzFv() == 0) {
            stop_audio_streams__6TLobbyFv();
        }
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x398));
        if (temp_r3 != NULL) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD(arg0, u8 **, 0x398) = NULL;
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
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TBoss4DarkFalz;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2770;
    TBoss4DarkFalz__sub_8004AFB8((void *) (arg0));
    if ((s16) M2C_FIELD(arg2, s16 *, 2) != 0x200) {
        return (s32)arg0;
    }
    dark_falz_controller_instance = (s32)arg0;
    ((VObj_18_c10bfc *)(arg0))->m79(arg2);
    TBoss4DarkFalz__sub_8004B4F0(&TBoss4DarkFalz__data_804FF1E8, arg2);
    TBoss4DarkFalz__data_804FF1E8.f2 = 0;
    ((VObj_18_c10bfc *)(arg0))->m80();
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, VecCopy__FP3VecPC3Vec(arg0 + 0x50, VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38)));
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) lbl_805D8908;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) lbl_805D8908;
    M2C_FIELD(arg0, f32 *, 0x308) = (f32) lbl_805D8908;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    if ((s32) game_difficulty_selection == 0) {
        bind_enemy_combat_stats(arg0, register_boss__6TLobbyFPv(0x37), dispatch_shared_handler_b__6TLobbyFPv(0x37), register_object__6TLobbyFPv(0x37));
    } else {
        bind_enemy_combat_stats(arg0, register_boss__6TLobbyFPv(0x38), dispatch_shared_handler_b__6TLobbyFPv(0x38), register_object__6TLobbyFPv(0x38));
    }
    register_entity_by_id((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    update_visible_flag__14TBoss4DarkFalzFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x390) = count_active_players__14TBoss4DarkFalzFv();
    TBoss4DarkFalz__type1_instance = 0;
    TBoss4DarkFalz__type2_instance = 0;
    TBoss4DarkFalz__type3_instance = 0;
    M2C_FIELD(arg0, s32 *, 0x394) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = create_boss4_fade();
    M2C_FIELD(arg0, s32 *, 0x388) = 0;
    M2C_FIELD(arg0, s32 *, 0x38C) = 0;
    fn_8030A83C((void *) (arg0));
    init_music_sequencer((int) (4));
    dark_falz_form_index = 0;
    M2C_FIELD(arg0, s32 *, 0x374) = 0;
    temp_r0 = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x36), s32 *, 0x18);
    lbl_805D4D6C = temp_r0;
    if ((temp_r0 < 0) || (temp_r0 > 0xE)) {
        lbl_805D4D6C = 0;
    }
    temp_r0_2 = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x36), s32 *, 0x1C);
    lbl_805D4D70 = temp_r0_2;
    if ((temp_r0_2 < 0) || (temp_r0_2 > 0xE)) {
        lbl_805D4D70 = 0;
    }
    push_players_out_of_zone__14TBoss4DarkFalzFii((void *) (arg0), (int) (0));
    M2C_FIELD(arg0, s32 *, 0x37C) = -1;
    change_state__14TBoss4DarkFalzFPvi((void *) (arg0), (int) (1));
    return (s32)arg0;
}

void handle_6x19_dark_falz_actions(Msg_8004BFA4 *arg0) {
    void *ent;
    s32 arg;
    swap_bytes__14TBoss4DarkFalzFPv(arg0);
    ent = get_enemy_entity(arg0->id);
    if (ent == NULL) {
        return;
    }
    if (arg0->action != -1 && arg0->action >= 0 && arg0->action < 16 &&
        arg0->action != get_phase__9TBoss4UroFPv(ent)) {
        change_state__14TBoss4DarkFalzFPvi(ent, arg0->action);
    }
    arg = arg0->arg;
    if (arg == -1) {
        return;
    }
    switch (get_phase__9TBoss4UroFPv(ent)) {
    case 5:
    case 6:
        if (TBoss4DarkFalz__type1_instance != NULL) {
            apply_packed_state__11TBoss4Type2FPvUi(TBoss4DarkFalz__type1_instance, arg);
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

void cleanup_global__14TBoss4DarkFalzFv(void) { free_global_instance__14TBoss4DarkFalzFv(); TBoss4DarkFalz__sub_8030AD38(); TLobby__sub_8001FE7C((void*)(lbl_805D4D58), (void*)1); lbl_805D4D58 = 0; }

extern s32 tl_04;

void load_resources__14TBoss4DarkFalzFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_80484D74.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D4D58) = (unsigned char *) ((void *) var_r0);
    if ((u32) var_r0 != 0U) {
        init_uro_link__14TBoss4DarkFalzFv();
        fn_802E52AC();
    }
}

s32 create__14TBoss4DarkFalzFi(s32 arg0) {
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
