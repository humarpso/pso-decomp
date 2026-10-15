#include "pso/map/FloorResourceCallbacks.h"

#include "types.h"
#include "pso/misc/TLobby.h"

struct RecoveredGlobal_800F7A6C_lbl_804DB1F0 {
    s32 value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_800F7A7C_lbl_8048C9D8 {
    s32 value;
    u8 remaining[0x744];
};

extern "C" {
void init_6x9C_enemy_low_game_flags_packet(u8 *arg0);
extern RecoveredGlobal_800F7A6C_lbl_804DB1F0 lbl_804DB1F0;
f32 TLobby__sub_800F7A6C(void);
extern RecoveredGlobal_800F7A7C_lbl_8048C9D8 challenge_mode_state;
f32 TLobby__sub_800F7A7C(void);
}

extern "C" {

void send_6x0A_enemy_state_packet(void* p);
void init_6x0A_enemy_state_packet(void* p);
int get_attack_credit_slot_count(void);
void unload_current_floor_resources(void);
int TLobby__send_and_handle_60(void*);
void unload_floor_resources(s32 arg0);
s32 load_floor_resources(s32 arg0);
s32 is_area_transfer_pending();
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int get_global_state__14TOKeyMachine01Fv(void);
s32 load_current_floor_resources(void);
int read_be16_field2__10TObjPlayerFv(void*);

void TLobby::bswap_field() { read_be16_field2__10TObjPlayerFv(this); bswap_32__FPUl((char*)this + 0x4); }
void TLobby::broadcast_state() { bswap_field(); TLobby__send_and_handle_60(this); }

void init_6x9C_enemy_low_game_flags_packet(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 4) = 0;
    *(u8 *)((s8 *)arg0 + 0) = 0x9C;
    *(s8 *)((s8 *)arg0 + 1) = 2;
}

void TLobby::bswap_enemy_state() { read_be16_field2__10TObjPlayerFv(this); bswap_16__FPUs((char*)this + 0x4); bswap_16__FPUs((char*)this + 0x6); }
void send_6x0A_enemy_state_packet(void* p) { ((TLobby *)p)->bswap_enemy_state(); TLobby__send_and_handle_60(p); }
void init_6x0A_enemy_state_packet(void* p) { *(u8*)((char*)p + 0x0) = 10; *(u8*)((char*)p + 0x1) = 3; }
int get_attack_credit_slot_count(void) { return 4; }

typedef char RecoveredGlobal_800F7A6C_lbl_804DB1F0_size[sizeof(RecoveredGlobal_800F7A6C_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
f32 TLobby__sub_800F7A6C(void) {
    return *(f32 *)((s8 *)(&lbl_804DB1F0.value) + 4);
}

typedef char RecoveredGlobal_800F7A7C_lbl_8048C9D8_size[sizeof(RecoveredGlobal_800F7A7C_lbl_8048C9D8) == 0x748 ? 1 : -1];
f32 TLobby__sub_800F7A7C(void) {
    return *(f32 *)((s8 *)(&challenge_mode_state.value) + 4);
}

void unload_floor_resources(s32 arg0) {
    FloorResourceCallbacks *p = floor_resource_callback_tables[arg0];
    s32 n;
    s32 i;
    if (p != 0) {
        n = 0;
        while (p->unload != 0) { p++; n++; }
        for (i = 0; i < n; i++) {
            void (*fn)() = p[-1].unload;
            p--;
            fn();
        }
    }
}
s32 load_floor_resources(s32 arg0) {
    FloorResourceCallbacks *p = floor_resource_callback_tables[arg0];
    void (*fn)();
    if (p == 0) {
        return 1;
    }
    while ((fn = p->load) != 0) {
        if (is_area_transfer_pending() != 0) {
            return 0;
        }
        fn();
        p++;
    }
    return 1;
}
void unload_current_floor_resources(void) {
    unload_floor_resources(get_global_state__14TOKeyMachine01Fv());
}

s32 load_current_floor_resources(void) {
    return load_floor_resources(get_global_state__14TOKeyMachine01Fv());
}

}

extern "C" {
void free_resources__12TBoss1DragonFv();
void load_resources__12TBoss1DragonFv();
void TBoss1DragonDemo__sub_8002B68C();
void TBoss1DragonDemo__sub_8002B690();
void reset_parts__13TBoss2DeRolLeFv();
void load_resources__13TBoss2DeRolLeFv();
void free_parts__12TBoss3VoloptFv();
void load_resources__12TBoss3VoloptFv();
void cleanup_global__14TBoss4DarkFalzFv();
void load_resources__14TBoss4DarkFalzFv();
void cleanup__13TBoss5GryphonFv();
void TBoss8Dragon__sub_80065C90();
void release_global_805D4F20__14TObjEneBalClawFv();
void TObjEneBalClaw__sub_8008D924();
void TObjEneBalClawClaw__sub_8008DC14();
void spawn_child_enemy__18TObjEneBalClawClawFv();
void fn_80090488();
void spawn_lobby_npc_enemy();
void free_boss4_rock_pool();
void load_resources__12TObjEneBeastFv();
void destroy_children__16TObjEneRe7BeruraFv();
void load_static_resources__16TObjEneRe7BeruraFv();
void free_resources__17TObjEneDf2BringerFv();
void load_resources__17TObjEneDf2BringerFv();
void fn_8009F410();
void fn_8009F554();
void TObjEneDarkGunCenter__sub_800A0E7C();
void TObjEneDarkGunCenter__sub_800A0E80();
void cleanup_effects__10TObjPlayerFv();
void TObjPlayer__sub_800A2DCC();
void free_resources__10TObjPlayerFv();
void initialize_saver_resources();
void free_boss_objects__15TObjEneDimedianFv();
void load_dimedian_resources__6TLobbyFv();
void free_effect_resources__10TObjPlayerFv();
void TObjPlayer__sub_800AA82C();
void free_resources__12TObjEneSharkFv();
void load_shark_resources__6TLobbyFv();
void free_resources__11TObjEneMojaFv();
void load_resources__11TObjEneMojaFv();
void free_fly__17TObjEneBm3FlyNestFv();
void load_resources__17TObjEneBm3FlyNestFv();
void release_global_805D5120__14TObjEneBm5WolfFv();
void load_resources__14TObjEneBm5WolfFv();
void release_global_805D5130__10TObjCGrassFv();
void load_resources__10TObjCGrassFv();
void release_resource__9TObjEneDDFv();
void create_instance__9TObjEneDDFv();
void destroy_all__9TObjGrassFv();
void load_resources__9TObjGrassFv();
void cleanup_handles__6TLobbyFv();
void load_resources__12TObjEneLappyFv();
void destroy_instance__16TObjEneRe2FlowerFv();
void TObjPlayer__sub_800C44C4();
void update_camera_if_active__15TObjEnemyCustomFv();
void reset_instance__15TObjEnemyCustomFv();
void free_globals__13TObjEneMe1GeeFv();
void load_resources__13TObjEneMe1GeeFv();
void release_static_resource__16TObjEneBm5GibonUFv();
void load_resources__16TObjEneBm5GibonUFv();
void free_static_instances__15TObjEneGyaranzoFv();
void load_gyaranzo_resources__6TLobbyFv();
void destroy_rocks__16TObjEneMerillLiaFv();
void TObjEneMerillLia__sub_800D6D64();
void destroy_static_lobby__10TObjPlayerFv();
void load_corpse_mark_resource();
void free_global_window__6TLobbyFv();
void TLobby__sub_800DC028();
void free_data__14TObjEnePanarmsFv();
void load_and_spawn_npc__14TObjEnePanarmsFv();
void free_shared_resources__23TObjEneMe3ShinowaMirageFv();
void TObjEneMe3ShinowaMirage__sub_800E7B94();
void free_instance__12TObjEneSlimeFv();
void spawn_pair__12TObjEneSlimeFv();
void free_bits__18TObjEneRe4SorcererFv();
void load_resources__18TObjEneRe4SorcererFv();
void free_shared_resources__16TObjEneMe3StelthFv();
void load_shared_resources__16TObjEneMe3StelthFv();
void free_resources__12TObjNpcAHM01Fv();
void load_resources__12TObjNpcAHM01Fv();
void free_resources__12TObjNpcARM00Fv();
void load_resources__12TObjNpcARM00Fv();
void free_resources__12TObjNpcARW00Fv();
void load_resources__12TObjNpcARW00Fv();
void free_static__11TObjNpcBaseFv();
void load_ply_motion_npc_town();
void destroy_static_instance__20TObjNpcCloakroomBaseFv();
void load_shared_resource__20TObjNpcCloakroomBaseFv();
void destroy_instance__18TObjNpcConnoisseurFv();
void load_section_motion__18TObjNpcConnoisseurFv();
void free_shared_data__17TObjNpcExpertBaseFv();
void load_shared_resource__17TObjNpcExpertBaseFv();
void TObjNpcFemaleBase__sub_80149C64();
void TObjNpcFemaleBase__sub_80149C7C();
void free_static_data__17TObjNpcFemaleBaseFv();
void load_shared_resource__17TObjNpcFemaleBaseFv();
void release_static_instance__18TObjNpcFemaleChildFv();
void load_shared_resource__18TObjNpcFemaleChildFv();
void unload_static_data__18TObjNpcFemaleDwarfFv();
void load_static_resource__18TObjNpcFemaleDwarfFv();
void free_static_model__16TObjNpcFemaleFatFv();
void load_static_resource__16TObjNpcFemaleFatFv();
void close_dialog_window__18TObjNpcFemaleMachoFv();
void load_resources__18TObjNpcFemaleMachoFv();
void destroy_static_instance__16TObjNpcFemaleOldFv();
void load_resource_instance__16TObjNpcFemaleOldFv();
void destroy_instance__17TObjNpcFemaleTallFv();
void load_resource_instance__17TObjNpcFemaleTallFv();
void TObjNpcFemaleTall__sub_8014AA48();
void TObjNpcFemaleTall__sub_8014AA60();
void free_shared_data__19TObjNpcGovernorBaseFv();
void load_shared_resource__19TObjNpcGovernorBaseFv();
void free_resources__12TObjNpcHFW00Fv();
void load_resources__12TObjNpcHFW00Fv();
void free_static_resources__12TObjNpcHFW01Fv();
void load_resources__12TObjNpcHFW01Fv();
void free_resources__12TObjNpcHHM00Fv();
void load_resources__12TObjNpcHHM00Fv();
void destroy_resources__12TObjNpcHRM00Fv();
void load_resources__12TObjNpcHRM00Fv();
void free_shared_objects__12TObjNpcHRM01Fv();
void load_resources__12TObjNpcHRM01Fv();
void TObjNpcLappy__sub_8014B828();
void TObjNpcLappy__sub_8014B840();
void free_static_data__15TObjNpcMaleBaseFv();
void load_shared_resource__15TObjNpcMaleBaseFv();
void release_static_instance__16TObjNpcMaleChildFv();
void load_shared_resource__16TObjNpcMaleChildFv();
void unload_static_data__16TObjNpcMaleDwarfFv();
void load_shared_resource__16TObjNpcMaleDwarfFv();
void free_static_model__14TObjNpcMaleFatFv();
void load_static_resource__14TObjNpcMaleFatFv();
void close_dialog_window__16TObjNpcMaleMachoFv();
void load_static_resource__16TObjNpcMaleMachoFv();
void destroy_static_instance__14TObjNpcMaleOldFv();
void load_resource_instance__14TObjNpcMaleOldFv();
void destroy_instance__15TObjNpcMaleTallFv();
void load_resource_instance__15TObjNpcMaleTallFv();
void free_resources__12TObjNpcNFM00Fv();
void load_assets__12TObjNpcNFM00Fv();
void free_resources__12TObjNpcNFM01Fv();
void load_resources__12TObjNpcNFM01Fv();
void free_resources__12TObjNpcNFW00Fv();
void load_assets__12TObjNpcNFW00Fv();
void free_resources__12TObjNpcNFW01Fv();
void load_resources__12TObjNpcNFW01Fv();
void free_static_resources__12TObjNpcNHW00Fv();
void load_resources__12TObjNpcNHW00Fv();
void free_resources__12TObjNpcNHW01Fv();
void load_resources__12TObjNpcNHW01Fv();
void free_shared_data__16TObjNpcNurseBaseFv();
void load_shared_data__16TObjNpcNurseBaseFv();
void free_static_data__20TObjNpcSecretaryBaseFv();
void load_static_data__20TObjNpcSecretaryBaseFv();
void release_static_instance__18TObjNpcSoldierBaseFv();
void load_shared_resource__18TObjNpcSoldierBaseFv();
void unload_static_data__19TObjNpcSoldierMachoFv();
void load_shared_resource__19TObjNpcSoldierMachoFv();
void destroy_instance__13TOCtrlDubchikFv();
void load_shared_resource__13TOCtrlDubchikFv();
void free_static_model__13TObjNpcKenkyuFv();
void load_shared_resource__13TObjNpcKenkyuFv();
void close_dialog_window__16TObjNpcSoutokufuFv();
void load_shared_resource__16TObjNpcSoutokufuFv();
void destroy_static_instance__11TObjNpcHosaFv();
void load_static_resource__11TObjNpcHosaFv();
void destroy_instance__14TObjNpcKenkyuWFv();
void load_resource_instance__14TObjNpcKenkyuWFv();
void free_all__14TBoss6PlotFalzFv();
void load_resources__14TBoss6PlotFalzFv();
void delete_barrier__15TObjEneMe1GiGueFv();
void load_resources__15TObjEneMe1GiGueFv();
void free_shared_instances__19TObjEneBm9MericarolFv();
void TBoss4Type3__sub_802D1130();
void free_static__14TObjEneGibblesFv();
void load_resources__14TObjEneGibblesFv();
void run_exit_callbacks__14TBoss7DeRolLeCFv();
void TObjPlayer__sub_802EE574();
void TBoss8Dragon__sub_802F3C74();
void clear_boss8_dragon_leader_part();
void free_static__12TBoss8DragonFv();
void TBoss8Dragon__sub_802FDA78();
void free_static_model__14TObjNpcKenkyu2Fv();
void load_shared_resource__14TObjNpcKenkyu2Fv();
void close_dialog_window__12TObjNpcHosa2Fv();
void load_shared_resource__12TObjNpcHosa2Fv();
void free_shared_resources__14TObjEneDolmOlmFv();
void load_shared_resources__14TObjEneDolmOlmFv();
void destroy_static_instance__16TObjEneDellBiterFv();
void load_resources__16TObjEneDellBiterFv();
void free_shared_data__15TObjEneDelDepthFv();
void load_assets__15TObjEneDelDepthFv();
void free_resources__18TObjEneMe3SinowZoaFv();
void TObjEneMe3SinowZoa__sub_8031B240();
void release_static_instance__14TObjEneRecoboxFv();
void load_resources__14TObjEneRecoboxFv();
void unload_static_data__13TObjEneMorfosFv();
void TObjEneMorfos__sub_803350AC();
void free_shared_resources__14TObjNpcNgcBaseFv();
void load_resources__14TObjNpcNgcBaseFv();
void free_instance__15TPlyPhotonChairFv();
void load_and_spawn_chao_npc();
void fn_8035B750();
void fn_8035B788();
void free_shared_resources__19TObjEneEpsilonGuardFv();
void load_assets__19TObjEneEpsilonGuardFv();
void free_effect__14TObjEneIllGillFv();
void load_shared_resources__14TObjEneIllGillFv();

FloorResourceCallbacks floor_resource_callbacks_selector_00[43] = {
    { load_ply_motion_npc_town, free_static__11TObjNpcBaseFv },
    { TObjNpcFemaleBase__sub_80149C7C, TObjNpcFemaleBase__sub_80149C64 },
    { TObjNpcFemaleTall__sub_8014AA60, TObjNpcFemaleTall__sub_8014AA48 },
    { TObjNpcLappy__sub_8014B840, TObjNpcLappy__sub_8014B828 },
    { load_shared_resource__17TObjNpcFemaleBaseFv, free_static_data__17TObjNpcFemaleBaseFv },
    { load_shared_resource__18TObjNpcFemaleChildFv, release_static_instance__18TObjNpcFemaleChildFv },
    { load_static_resource__18TObjNpcFemaleDwarfFv, unload_static_data__18TObjNpcFemaleDwarfFv },
    { load_static_resource__16TObjNpcFemaleFatFv, free_static_model__16TObjNpcFemaleFatFv },
    { load_resources__18TObjNpcFemaleMachoFv, close_dialog_window__18TObjNpcFemaleMachoFv },
    { load_resource_instance__16TObjNpcFemaleOldFv, destroy_static_instance__16TObjNpcFemaleOldFv },
    { load_resource_instance__17TObjNpcFemaleTallFv, destroy_instance__17TObjNpcFemaleTallFv },
    { load_shared_resource__15TObjNpcMaleBaseFv, free_static_data__15TObjNpcMaleBaseFv },
    { load_shared_resource__16TObjNpcMaleChildFv, release_static_instance__16TObjNpcMaleChildFv },
    { load_shared_resource__16TObjNpcMaleDwarfFv, unload_static_data__16TObjNpcMaleDwarfFv },
    { load_static_resource__14TObjNpcMaleFatFv, free_static_model__14TObjNpcMaleFatFv },
    { load_static_resource__16TObjNpcMaleMachoFv, close_dialog_window__16TObjNpcMaleMachoFv },
    { load_resource_instance__14TObjNpcMaleOldFv, destroy_static_instance__14TObjNpcMaleOldFv },
    { load_resource_instance__15TObjNpcMaleTallFv, destroy_instance__15TObjNpcMaleTallFv },
    { load_section_motion__18TObjNpcConnoisseurFv, destroy_instance__18TObjNpcConnoisseurFv },
    { load_shared_resource__18TObjNpcSoldierBaseFv, release_static_instance__18TObjNpcSoldierBaseFv },
    { load_shared_resource__19TObjNpcSoldierMachoFv, unload_static_data__19TObjNpcSoldierMachoFv },
    { load_shared_resource__19TObjNpcGovernorBaseFv, free_shared_data__19TObjNpcGovernorBaseFv },
    { load_shared_resource__20TObjNpcCloakroomBaseFv, destroy_static_instance__20TObjNpcCloakroomBaseFv },
    { load_shared_resource__17TObjNpcExpertBaseFv, free_shared_data__17TObjNpcExpertBaseFv },
    { load_shared_data__16TObjNpcNurseBaseFv, free_shared_data__16TObjNpcNurseBaseFv },
    { load_static_data__20TObjNpcSecretaryBaseFv, free_static_data__20TObjNpcSecretaryBaseFv },
    { load_resources__12TObjNpcHHM00Fv, free_resources__12TObjNpcHHM00Fv },
    { load_resources__12TObjNpcNHW00Fv, free_static_resources__12TObjNpcNHW00Fv },
    { load_resources__12TObjNpcHRM00Fv, destroy_resources__12TObjNpcHRM00Fv },
    { load_resources__12TObjNpcARM00Fv, free_resources__12TObjNpcARM00Fv },
    { load_resources__12TObjNpcARW00Fv, free_resources__12TObjNpcARW00Fv },
    { load_resources__12TObjNpcHFW00Fv, free_resources__12TObjNpcHFW00Fv },
    { load_assets__12TObjNpcNFM00Fv, free_resources__12TObjNpcNFM00Fv },
    { load_assets__12TObjNpcNFW00Fv, free_resources__12TObjNpcNFW00Fv },
    { load_resources__12TObjNpcNHW01Fv, free_resources__12TObjNpcNHW01Fv },
    { load_resources__12TObjNpcAHM01Fv, free_resources__12TObjNpcAHM01Fv },
    { load_resources__12TObjNpcHRM01Fv, free_shared_objects__12TObjNpcHRM01Fv },
    { load_resources__12TObjNpcHFW01Fv, free_static_resources__12TObjNpcHFW01Fv },
    { load_resources__12TObjNpcNFM01Fv, free_resources__12TObjNpcNFM01Fv },
    { load_resources__12TObjNpcNFW01Fv, free_resources__12TObjNpcNFW01Fv },
    { load_shared_resource__13TObjNpcKenkyuFv, free_static_model__13TObjNpcKenkyuFv },
    { load_shared_resource__16TObjNpcSoutokufuFv, close_dialog_window__16TObjNpcSoutokufuFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_01[8] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { load_resources__12TObjEneBeastFv, free_boss4_rock_pool },
    { load_resources__12TObjEneLappyFv, cleanup_handles__6TLobbyFv },
    { load_resources__17TObjEneBm3FlyNestFv, free_fly__17TObjEneBm3FlyNestFv },
    { load_resources__14TObjEneBm5WolfFv, release_global_805D5120__14TObjEneBm5WolfFv },
    { load_and_spawn_chao_npc, free_instance__15TPlyPhotonChairFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_02[10] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { load_resources__11TObjEneMojaFv, free_resources__11TObjEneMojaFv },
    { load_resources__12TObjEneLappyFv, cleanup_handles__6TLobbyFv },
    { load_resources__17TObjEneBm3FlyNestFv, free_fly__17TObjEneBm3FlyNestFv },
    { load_resources__14TObjEneBm5WolfFv, release_global_805D5120__14TObjEneBm5WolfFv },
    { load_resources__12TObjEneBeastFv, free_boss4_rock_pool },
    { load_and_spawn_chao_npc, free_instance__15TPlyPhotonChairFv },
    { reset_instance__15TObjEnemyCustomFv, update_camera_if_active__15TObjEnemyCustomFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_03[10] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { load_resources__9TObjGrassFv, destroy_all__9TObjGrassFv },
    { load_resources__10TObjCGrassFv, release_global_805D5130__10TObjCGrassFv },
    { TObjPlayer__sub_800C44C4, destroy_instance__16TObjEneRe2FlowerFv },
    { TLobby__sub_800DC028, free_global_window__6TLobbyFv },
    { load_shark_resources__6TLobbyFv, free_resources__12TObjEneSharkFv },
    { load_and_spawn_npc__14TObjEnePanarmsFv, free_data__14TObjEnePanarmsFv },
    { reset_instance__15TObjEnemyCustomFv, update_camera_if_active__15TObjEnemyCustomFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_04[10] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { load_resources__9TObjGrassFv, destroy_all__9TObjGrassFv },
    { load_resources__10TObjCGrassFv, release_global_805D5130__10TObjCGrassFv },
    { TObjPlayer__sub_800C44C4, destroy_instance__16TObjEneRe2FlowerFv },
    { TLobby__sub_800DC028, free_global_window__6TLobbyFv },
    { load_shark_resources__6TLobbyFv, free_resources__12TObjEneSharkFv },
    { spawn_pair__12TObjEneSlimeFv, free_instance__12TObjEneSlimeFv },
    { reset_instance__15TObjEnemyCustomFv, update_camera_if_active__15TObjEnemyCustomFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_05[12] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { TObjPlayer__sub_800C44C4, destroy_instance__16TObjEneRe2FlowerFv },
    { TLobby__sub_800DC028, free_global_window__6TLobbyFv },
    { load_shark_resources__6TLobbyFv, free_resources__12TObjEneSharkFv },
    { spawn_pair__12TObjEneSlimeFv, free_instance__12TObjEneSlimeFv },
    { load_and_spawn_npc__14TObjEnePanarmsFv, free_data__14TObjEnePanarmsFv },
    { load_ply_motion_npc_town, free_static__11TObjNpcBaseFv },
    { TObjNpcFemaleBase__sub_80149C7C, TObjNpcFemaleBase__sub_80149C64 },
    { load_shared_resource__20TObjNpcCloakroomBaseFv, destroy_static_instance__20TObjNpcCloakroomBaseFv },
    { reset_instance__15TObjEnemyCustomFv, update_camera_if_active__15TObjEnemyCustomFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selectors_06_07[9] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { TObjPlayer__sub_800AA82C, free_effect_resources__10TObjPlayerFv },
    { load_gyaranzo_resources__6TLobbyFv, free_static_instances__15TObjEneGyaranzoFv },
    { TObjEneMe3ShinowaMirage__sub_800E7B94, free_shared_resources__23TObjEneMe3ShinowaMirageFv },
    { fn_8009F554, fn_8009F410 },
    { load_shared_resource__13TOCtrlDubchikFv, destroy_instance__13TOCtrlDubchikFv },
    { reset_instance__15TObjEnemyCustomFv, update_camera_if_active__15TObjEnemyCustomFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_08[11] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { initialize_saver_resources, free_resources__10TObjPlayerFv },
    { load_resources__18TObjEneRe4SorcererFv, free_bits__18TObjEneRe4SorcererFv },
    { load_static_resources__16TObjEneRe7BeruraFv, destroy_children__16TObjEneRe7BeruraFv },
    { load_dimedian_resources__6TLobbyFv, free_boss_objects__15TObjEneDimedianFv },
    { TObjEneBalClaw__sub_8008D924, release_global_805D4F20__14TObjEneBalClawFv },
    { spawn_child_enemy__18TObjEneBalClawClawFv, TObjEneBalClawClaw__sub_8008DC14 },
    { spawn_lobby_npc_enemy, fn_80090488 },
    { reset_instance__15TObjEnemyCustomFv, update_camera_if_active__15TObjEnemyCustomFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_09[10] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { initialize_saver_resources, free_resources__10TObjPlayerFv },
    { TObjPlayer__sub_800A2DCC, cleanup_effects__10TObjPlayerFv },
    { TObjEneDarkGunCenter__sub_800A0E80, TObjEneDarkGunCenter__sub_800A0E7C },
    { load_resources__17TObjEneDf2BringerFv, free_resources__17TObjEneDf2BringerFv },
    { load_dimedian_resources__6TLobbyFv, free_boss_objects__15TObjEneDimedianFv },
    { TObjEneBalClaw__sub_8008D924, release_global_805D4F20__14TObjEneBalClawFv },
    { reset_instance__15TObjEnemyCustomFv, update_camera_if_active__15TObjEnemyCustomFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_10[11] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { load_resources__18TObjEneRe4SorcererFv, free_bits__18TObjEneRe4SorcererFv },
    { TObjPlayer__sub_800A2DCC, cleanup_effects__10TObjPlayerFv },
    { TObjEneDarkGunCenter__sub_800A0E80, TObjEneDarkGunCenter__sub_800A0E7C },
    { load_resources__17TObjEneDf2BringerFv, free_resources__17TObjEneDf2BringerFv },
    { load_static_resources__16TObjEneRe7BeruraFv, destroy_children__16TObjEneRe7BeruraFv },
    { load_dimedian_resources__6TLobbyFv, free_boss_objects__15TObjEneDimedianFv },
    { TObjEneBalClaw__sub_8008D924, release_global_805D4F20__14TObjEneBalClawFv },
    { reset_instance__15TObjEnemyCustomFv, update_camera_if_active__15TObjEnemyCustomFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_11[6] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { TBoss1DragonDemo__sub_8002B690, TBoss1DragonDemo__sub_8002B68C },
    { load_resources__12TBoss1DragonFv, free_resources__12TBoss1DragonFv },
    { reset_instance__15TObjEnemyCustomFv, update_camera_if_active__15TObjEnemyCustomFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_12[5] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { load_resources__13TBoss2DeRolLeFv, reset_parts__13TBoss2DeRolLeFv },
    { reset_instance__15TObjEnemyCustomFv, update_camera_if_active__15TObjEnemyCustomFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_13[4] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { load_resources__12TBoss3VoloptFv, free_parts__12TBoss3VoloptFv },
    { reset_instance__15TObjEnemyCustomFv, update_camera_if_active__15TObjEnemyCustomFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_14[2] = {
    { load_resources__14TBoss4DarkFalzFv, cleanup_global__14TBoss4DarkFalzFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_31[2] = {
    { load_resources__14TBoss6PlotFalzFv, free_all__14TBoss6PlotFalzFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_32[5] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { TObjPlayer__sub_802EE574, run_exit_callbacks__14TBoss7DeRolLeCFv },
    { reset_instance__15TObjEnemyCustomFv, update_camera_if_active__15TObjEnemyCustomFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_33[6] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { clear_boss8_dragon_leader_part, TBoss8Dragon__sub_802F3C74 },
    { TBoss8Dragon__sub_802FDA78, free_static__12TBoss8DragonFv },
    { reset_instance__15TObjEnemyCustomFv, update_camera_if_active__15TObjEnemyCustomFv },
    { 0, 0 },
};

__declspec(section ".data") FloorResourceCallbacks floor_resource_callbacks_selector_15[1] = {
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_16[10] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { load_resources__11TObjEneMojaFv, free_resources__11TObjEneMojaFv },
    { load_resources__9TObjGrassFv, destroy_all__9TObjGrassFv },
    { load_resources__10TObjCGrassFv, release_global_805D5130__10TObjCGrassFv },
    { load_shark_resources__6TLobbyFv, free_resources__12TObjEneSharkFv },
    { TObjEneMe3ShinowaMirage__sub_800E7B94, free_shared_resources__23TObjEneMe3ShinowaMirageFv },
    { initialize_saver_resources, free_resources__10TObjPlayerFv },
    { load_resources__17TObjEneDf2BringerFv, free_resources__17TObjEneDf2BringerFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_17[10] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { load_resources__11TObjEneMojaFv, free_resources__11TObjEneMojaFv },
    { load_resources__9TObjGrassFv, destroy_all__9TObjGrassFv },
    { load_resources__10TObjCGrassFv, release_global_805D5130__10TObjCGrassFv },
    { load_shark_resources__6TLobbyFv, free_resources__12TObjEneSharkFv },
    { TObjEneMe3ShinowaMirage__sub_800E7B94, free_shared_resources__23TObjEneMe3ShinowaMirageFv },
    { initialize_saver_resources, free_resources__10TObjPlayerFv },
    { load_resources__17TObjEneDf2BringerFv, free_resources__17TObjEneDf2BringerFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_18[29] = {
    { load_ply_motion_npc_town, free_static__11TObjNpcBaseFv },
    { TObjNpcFemaleBase__sub_80149C7C, TObjNpcFemaleBase__sub_80149C64 },
    { TObjNpcFemaleTall__sub_8014AA60, TObjNpcFemaleTall__sub_8014AA48 },
    { TObjNpcLappy__sub_8014B840, TObjNpcLappy__sub_8014B828 },
    { load_static_resource__18TObjNpcFemaleDwarfFv, unload_static_data__18TObjNpcFemaleDwarfFv },
    { load_resource_instance__16TObjNpcFemaleOldFv, destroy_static_instance__16TObjNpcFemaleOldFv },
    { load_shared_resource__16TObjNpcMaleChildFv, release_static_instance__16TObjNpcMaleChildFv },
    { load_static_resource__14TObjNpcMaleFatFv, free_static_model__14TObjNpcMaleFatFv },
    { load_resource_instance__14TObjNpcMaleOldFv, destroy_static_instance__14TObjNpcMaleOldFv },
    { load_resource_instance__15TObjNpcMaleTallFv, destroy_instance__15TObjNpcMaleTallFv },
    { load_section_motion__18TObjNpcConnoisseurFv, destroy_instance__18TObjNpcConnoisseurFv },
    { load_shared_resource__18TObjNpcSoldierBaseFv, release_static_instance__18TObjNpcSoldierBaseFv },
    { load_shared_resource__19TObjNpcGovernorBaseFv, free_shared_data__19TObjNpcGovernorBaseFv },
    { load_shared_resource__20TObjNpcCloakroomBaseFv, destroy_static_instance__20TObjNpcCloakroomBaseFv },
    { load_shared_data__16TObjNpcNurseBaseFv, free_shared_data__16TObjNpcNurseBaseFv },
    { load_static_data__20TObjNpcSecretaryBaseFv, free_static_data__20TObjNpcSecretaryBaseFv },
    { load_resources__12TObjNpcARM00Fv, free_resources__12TObjNpcARM00Fv },
    { load_resources__12TObjNpcARW00Fv, free_resources__12TObjNpcARW00Fv },
    { load_resources__12TObjNpcHFW00Fv, free_resources__12TObjNpcHFW00Fv },
    { load_assets__12TObjNpcNFM00Fv, free_resources__12TObjNpcNFM00Fv },
    { load_resources__12TObjNpcNFM01Fv, free_resources__12TObjNpcNFM01Fv },
    { load_shared_resource__13TObjNpcKenkyuFv, free_static_model__13TObjNpcKenkyuFv },
    { load_shared_resource__16TObjNpcSoutokufuFv, close_dialog_window__16TObjNpcSoutokufuFv },
    { load_static_resource__11TObjNpcHosaFv, destroy_static_instance__11TObjNpcHosaFv },
    { load_resource_instance__14TObjNpcKenkyuWFv, destroy_instance__14TObjNpcKenkyuWFv },
    { load_shared_resource__12TObjNpcHosa2Fv, close_dialog_window__12TObjNpcHosa2Fv },
    { load_shared_resource__14TObjNpcKenkyu2Fv, free_static_model__14TObjNpcKenkyu2Fv },
    { load_resources__14TObjNpcNgcBaseFv, free_shared_resources__14TObjNpcNgcBaseFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_21[9] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { TObjPlayer__sub_800AA82C, free_effect_resources__10TObjPlayerFv },
    { load_shared_resource__13TOCtrlDubchikFv, destroy_instance__13TOCtrlDubchikFv },
    { load_gyaranzo_resources__6TLobbyFv, free_static_instances__15TObjEneGyaranzoFv },
    { load_resources__14TObjEneBm5WolfFv, release_global_805D5120__14TObjEneBm5WolfFv },
    { load_and_spawn_npc__14TObjEnePanarmsFv, free_data__14TObjEnePanarmsFv },
    { initialize_saver_resources, free_resources__10TObjPlayerFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_22[9] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { TObjPlayer__sub_800AA82C, free_effect_resources__10TObjPlayerFv },
    { load_shared_resource__13TOCtrlDubchikFv, destroy_instance__13TOCtrlDubchikFv },
    { load_resources__14TObjEneBm5WolfFv, release_global_805D5120__14TObjEneBm5WolfFv },
    { load_and_spawn_npc__14TObjEnePanarmsFv, free_data__14TObjEnePanarmsFv },
    { initialize_saver_resources, free_resources__10TObjPlayerFv },
    { load_resources__18TObjEneRe4SorcererFv, free_bits__18TObjEneRe4SorcererFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selectors_19_20[11] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { load_resources__12TObjEneLappyFv, cleanup_handles__6TLobbyFv },
    { load_resources__11TObjEneMojaFv, free_resources__11TObjEneMojaFv },
    { load_resources__9TObjGrassFv, destroy_all__9TObjGrassFv },
    { load_resources__10TObjCGrassFv, release_global_805D5130__10TObjCGrassFv },
    { TObjPlayer__sub_800C44C4, destroy_instance__16TObjEneRe2FlowerFv },
    { load_resources__17TObjEneBm3FlyNestFv, free_fly__17TObjEneBm3FlyNestFv },
    { load_dimedian_resources__6TLobbyFv, free_boss_objects__15TObjEneDimedianFv },
    { load_static_resources__16TObjEneRe7BeruraFv, destroy_children__16TObjEneRe7BeruraFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selectors_23_24_25_26_27[16] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { load_shared_resources__16TObjEneMe3StelthFv, free_shared_resources__16TObjEneMe3StelthFv },
    { TObjEneMerillLia__sub_800D6D64, destroy_rocks__16TObjEneMerillLiaFv },
    { TBoss4Type3__sub_802D1130, free_shared_instances__19TObjEneBm9MericarolFv },
    { load_resources__16TObjEneBm5GibonUFv, release_static_resource__16TObjEneBm5GibonUFv },
    { load_resources__14TObjEneGibblesFv, free_static__14TObjEneGibblesFv },
    { load_resources__13TObjEneMe1GeeFv, free_globals__13TObjEneMe1GeeFv },
    { load_resources__15TObjEneMe1GiGueFv, delete_barrier__15TObjEneMe1GiGueFv },
    { load_resources__12TObjEneLappyFv, cleanup_handles__6TLobbyFv },
    { load_ply_motion_npc_town, free_static__11TObjNpcBaseFv },
    { TObjNpcFemaleBase__sub_80149C7C, TObjNpcFemaleBase__sub_80149C64 },
    { TObjNpcFemaleTall__sub_8014AA60, TObjNpcFemaleTall__sub_8014AA48 },
    { TObjNpcLappy__sub_8014B840, TObjNpcLappy__sub_8014B828 },
    { load_resources__14TObjNpcNgcBaseFv, free_shared_resources__14TObjNpcNgcBaseFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_34[15] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { load_shared_resources__14TObjEneDolmOlmFv, free_shared_resources__14TObjEneDolmOlmFv },
    { load_resources__14TObjEneRecoboxFv, release_static_instance__14TObjEneRecoboxFv },
    { TObjEneMerillLia__sub_800D6D64, destroy_rocks__16TObjEneMerillLiaFv },
    { load_resources__16TObjEneBm5GibonUFv, release_static_resource__16TObjEneBm5GibonUFv },
    { load_resources__13TObjEneMe1GeeFv, free_globals__13TObjEneMe1GeeFv },
    { fn_8035B788, fn_8035B750 },
    { load_resources__12TObjEneLappyFv, cleanup_handles__6TLobbyFv },
    { load_ply_motion_npc_town, free_static__11TObjNpcBaseFv },
    { TObjNpcFemaleBase__sub_80149C7C, TObjNpcFemaleBase__sub_80149C64 },
    { TObjNpcFemaleTall__sub_8014AA60, TObjNpcFemaleTall__sub_8014AA48 },
    { TObjNpcLappy__sub_8014B840, TObjNpcLappy__sub_8014B828 },
    { load_resources__14TObjNpcNgcBaseFv, free_shared_resources__14TObjNpcNgcBaseFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_35[16] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { TBoss4Type3__sub_802D1130, free_shared_instances__19TObjEneBm9MericarolFv },
    { load_resources__14TObjEneGibblesFv, free_static__14TObjEneGibblesFv },
    { load_resources__15TObjEneMe1GiGueFv, delete_barrier__15TObjEneMe1GiGueFv },
    { load_resources__14TObjEneRecoboxFv, release_static_instance__14TObjEneRecoboxFv },
    { load_resources__16TObjEneDellBiterFv, destroy_static_instance__16TObjEneDellBiterFv },
    { load_assets__19TObjEneEpsilonGuardFv, free_shared_resources__19TObjEneEpsilonGuardFv },
    { TObjPlayer__sub_800C44C4, destroy_instance__16TObjEneRe2FlowerFv },
    { load_shared_resources__14TObjEneIllGillFv, free_effect__14TObjEneIllGillFv },
    { load_ply_motion_npc_town, free_static__11TObjNpcBaseFv },
    { TObjNpcFemaleBase__sub_80149C7C, TObjNpcFemaleBase__sub_80149C64 },
    { TObjNpcFemaleTall__sub_8014AA60, TObjNpcFemaleTall__sub_8014AA48 },
    { TObjNpcLappy__sub_8014B840, TObjNpcLappy__sub_8014B828 },
    { load_resources__14TObjNpcNgcBaseFv, free_shared_resources__14TObjNpcNgcBaseFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selectors_28_29[14] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { load_shared_resources__14TObjEneDolmOlmFv, free_shared_resources__14TObjEneDolmOlmFv },
    { TObjEneMorfos__sub_803350AC, unload_static_data__13TObjEneMorfosFv },
    { load_resources__14TObjEneRecoboxFv, release_static_instance__14TObjEneRecoboxFv },
    { TObjEneMe3SinowZoa__sub_8031B240, free_resources__18TObjEneMe3SinowZoaFv },
    { load_assets__15TObjEneDelDepthFv, free_shared_data__15TObjEneDelDepthFv },
    { load_resources__16TObjEneDellBiterFv, destroy_static_instance__16TObjEneDellBiterFv },
    { load_ply_motion_npc_town, free_static__11TObjNpcBaseFv },
    { TObjNpcFemaleBase__sub_80149C7C, TObjNpcFemaleBase__sub_80149C64 },
    { TObjNpcFemaleTall__sub_8014AA60, TObjNpcFemaleTall__sub_8014AA48 },
    { TObjNpcLappy__sub_8014B840, TObjNpcLappy__sub_8014B828 },
    { load_resources__14TObjNpcNgcBaseFv, free_shared_resources__14TObjNpcNgcBaseFv },
    { 0, 0 },
};

FloorResourceCallbacks floor_resource_callbacks_selector_30[4] = {
    { load_corpse_mark_resource, destroy_static_lobby__10TObjPlayerFv },
    { create_instance__9TObjEneDDFv, release_resource__9TObjEneDDFv },
    { TBoss8Dragon__sub_80065C90, cleanup__13TBoss5GryphonFv },
    { 0, 0 },
};

FloorResourceCallbacks* floor_resource_callback_tables[36] = {
    floor_resource_callbacks_selector_00,
    floor_resource_callbacks_selector_01,
    floor_resource_callbacks_selector_02,
    floor_resource_callbacks_selector_03,
    floor_resource_callbacks_selector_04,
    floor_resource_callbacks_selector_05,
    floor_resource_callbacks_selectors_06_07,
    floor_resource_callbacks_selectors_06_07,
    floor_resource_callbacks_selector_08,
    floor_resource_callbacks_selector_09,
    floor_resource_callbacks_selector_10,
    floor_resource_callbacks_selector_11,
    floor_resource_callbacks_selector_12,
    floor_resource_callbacks_selector_13,
    floor_resource_callbacks_selector_14,
    floor_resource_callbacks_selector_15,
    floor_resource_callbacks_selector_16,
    floor_resource_callbacks_selector_17,
    floor_resource_callbacks_selector_18,
    floor_resource_callbacks_selectors_19_20,
    floor_resource_callbacks_selectors_19_20,
    floor_resource_callbacks_selector_21,
    floor_resource_callbacks_selector_22,
    floor_resource_callbacks_selectors_23_24_25_26_27,
    floor_resource_callbacks_selectors_23_24_25_26_27,
    floor_resource_callbacks_selectors_23_24_25_26_27,
    floor_resource_callbacks_selectors_23_24_25_26_27,
    floor_resource_callbacks_selectors_23_24_25_26_27,
    floor_resource_callbacks_selectors_28_29,
    floor_resource_callbacks_selectors_28_29,
    floor_resource_callbacks_selector_30,
    floor_resource_callbacks_selector_31,
    floor_resource_callbacks_selector_32,
    floor_resource_callbacks_selector_33,
    floor_resource_callbacks_selector_34,
    floor_resource_callbacks_selector_35,
};
}
