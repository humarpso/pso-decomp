#include "pso/map/FloorLifecycleTables.h"

extern "C" {
void TMainCursor__sub_80154090();
void TMainCursor__sub_80154094();
void release_static_resource__14TOAirconCave01Fv();
void load_shared_resource__14TOAirconCave01Fv();
void release_static_resource__14TOAirconCave02Fv();
void load_shared_resource__14TOAirconCave02Fv();
void free_resources__17TOBarrierEnergy01Fv();
void load_resources__17TOBarrierEnergy01Fv();
void free_static_model__6TOBindFv();
void load_static_resource__6TOBindFv();
void free_instance__7TOBoss4Fv();
void load_static_resource__7TOBoss4Fv();
void close_dialog_window__16TOCakeshopCave01Fv();
void load_resource_instance__16TOCakeshopCave01Fv();
void destroy_static_instance__18TOCapsuleAncient01Fv();
void load_resource_instance__18TOCapsuleAncient01Fv();
void reset_static_state__18TOCapsuleMachine01Fv();
void alloc_and_load_resource__18TOCapsuleMachine01Fv();
void destroy_global__12TOChatSensorFv();
void load_chat_sensor();
void reset_state__19TOComputerMachine01Fv();
void load_model_resource__19TOComputerMachine01Fv();
void fn_8015C5F8();
void load_container_fragment_textures__9TLanguageFv();
void free_statics__15TODoorAncient01Fv();
void load_assets__15TODoorAncient01Fv();
void free_resources__15TODoorAncient03Fv();
void load_resources__15TODoorAncient03Fv();
void cleanup_refs__15TODoorAncient04Fv();
void load_resources__15TODoorAncient04Fv();
void reset__15TODoorAncient05Fv();
void load_resources__15TODoorAncient05Fv();
void destroy__15TODoorAncient06Fv();
void load_resources__15TODoorAncient06Fv();
void cleanup__15TODoorAncient07Fv();
void load_resources__15TODoorAncient07Fv();
void free_objects__15TODoorAncient08Fv();
void load_resources__15TODoorAncient08Fv();
void free_rocks__15TODoorAncient09Fv();
void load_resources__15TODoorAncient09Fv();
void free_resources__12TODoorCave01Fv();
void load_resources__12TODoorCave01Fv();
void free_globals__12TODoorCave02Fv();
void load_resources__12TODoorCave02Fv();
void free_shared_data__12TODoorCave03Fv();
void load_resources__12TODoorCave03Fv();
void free_resources__15TODoorMachine01Fv();
void load_resources__15TODoorMachine01Fv();
void free_statics__15TODoorMachine02Fv();
void load_resources__15TODoorMachine02Fv();
void free_static_data__12TODoorVoShipFv();
void load_shared_resource__12TODoorVoShipFv();
void free_resources__15TODoorVS2Door01Fv();
void load_resources__15TODoorVS2Door01Fv();
void release_static_instance__17TODragonflyCave01Fv();
void load_resources__17TODragonflyCave01Fv();
void unload_static_data__20TODragonflyMachine01Fv();
void create_attack_effect__20TODragonflyMachine01Fv();
void TODummyKeyCave01__sub_80165E88();
void TODummyKeyCave01__sub_80165E8C();
void destroy_static_lobby__18TOExplosiveMachineFv();
void load_shared_resource__18TOExplosiveMachineFv();
void free_resources__16TOFenceAncient01Fv();
void load_resources__16TOFenceAncient01Fv();
void free_resources__16TOFenceAncient02Fv();
void load_assets__16TOFenceAncient02Fv();
void free_shared_resources__16TOFenceAncient03Fv();
void load_resources__16TOFenceAncient03Fv();
void destroy__16TOFenceAncient04Fv();
void load_resources__16TOFenceAncient04Fv();
void destroy_instance__19TOHangceilingCave01Fv();
void load_turiten_singo_resources();
void free_static_model__17TOHangerMachine01Fv();
void load_shared_resource__17TOHangerMachine01Fv();
void close_dialog_window__13TOHealGeneralFv();
void load_resources__13TOHealGeneralFv();
void free_shared_resources__14TOKeyAncient01Fv();
void load_resources__14TOKeyAncient01Fv();
void free_static__14TOKeyAncient02Fv();
void load_resources__14TOKeyAncient02Fv();
void cleanup_refs__14TOKeyAncient03Fv();
void load_resources__14TOKeyAncient03Fv();
void free_objects__11TOKeyCave01Fv();
void load_resources__11TOKeyCave01Fv();
void free_shared_resources__14TOKeyGenericSwFv();
void load_resources__14TOKeyGenericSwFv();
void free_statics__14TOKeyMachine01Fv();
void load_assets__14TOKeyMachine01Fv();
void destroy_static_instance__8TOKurageFv();
void load_static_resource__8TOKurageFv();
void destroy_instance__16TOLightMachine01Fv();
void load_assets__16TOLightMachine01Fv();
void free_instance__6TOMineFv();
void load_static_resource__6TOMineFv();
void reset_static_state__18TOMonitorMachine01Fv();
void load_resources__18TOMonitorMachine01Fv();
void release_static_resource__19TOMonumentAncient01Fv();
void load_resource_instance__19TOMonumentAncient01Fv();
void free_shared_data__19TOMonumentAncient02Fv();
void load_resources__19TOMonumentAncient02Fv();
void free_static_data__15TORainbowCave01Fv();
void load_resource_instance__15TORainbowCave01Fv();
void release_static_instance__16TORevlightCave01Fv();
void load_shared_resource__16TORevlightCave01Fv();
void free_instances__10TORockCaveFv();
void load_resources__10TORockCaveFv();
void destroy__17TOSensorAncient01Fv();
void load_resources__17TOSensorAncient01Fv();
void free_rocks__17TOSensorGeneral01Fv();
void load_assets__17TOSensorGeneral01Fv();
void unload_static_data__12TOSignCave01Fv();
void load_shared_resource__12TOSignCave01Fv();
void free_static_model__12TOSignCave02Fv();
void load_shared_resource__12TOSignCave02Fv();
void close_dialog_window__12TOSignCave03Fv();
void load_shared_resource__12TOSignCave03Fv();
void destroy_static_instance__16TOSparkMachine01Fv();
void load_static_resource__16TOSparkMachine01Fv();
void TOSwitchAttack__sub_80177C20();
void TOSwitchAttack__sub_80177C24();
void TOSwitchItem__sub_80178080();
void TOSwitchItem__sub_80178084();
void TOSwitchTimer__sub_80178584();
void TOSwitchTimer__sub_80178588();
void free_rock__17TOSymbolchatColliFv();
void load_symbol_chat_data__17TOSymbolchatColliFv();
void release_static_resource__15TOTrapAncient01Fv();
void load_resources__15TOTrapAncient01Fv();
void destroy_instance__15TOTrapAncient02Fv();
void load_resources__15TOTrapAncient02Fv();
void release_model__11TOVS2Wall01Fv();
void load_resources__11TOVS2Wall01Fv();
void free_globals__18TObjMapWarpAncientFv();
void load_resources__19TObjGoalWarpAncientFv();
void free_statics__14TOWreckAncientFv();
void load_resources__14TOWreckAncientFv();
void destroy_instance__10TButterflyFv();
void fn_8017F45C();
void release_static_resource__10TObjCameraFv();
void load_shared_resource__10TObjCameraFv();
void free_map_resources__6TLobbyFv();
void load_city_common_resources();
void release_static_resource__15TObjLaboMapWarpFv();
void load_static_resource__15TObjLaboMapWarpFv();
void free_shared_data__13TObjGbAdvanceFv();
void load_resource_instance__13TObjGbAdvanceFv();
void free_resources__12TObjComputerFv();
void load_computer_resources();
void free_chr_select_slot__6TLobbyFv();
void load_console_resources__6TLobbyFv();
void free_char_select_resources__6TLobbyFv();
void load_forest_box_resources();
void TContainerAncient01R__sub_8018AF74();
void init_table_entries__20TContainerAncient01RFv();
void release_static_resource__19TContainerAncient01Fv();
void load_resources__19TContainerAncient01Fv();
void free_resources__16TObjContainerIdoFv();
void load_resources__16TObjContainerIdoFv();
void release__17TObjContainerJungFv();
void load_resources__17TObjContainerJungFv();
void free_data__19TObjContainerJungExFv();
void load_resource_instance__19TObjContainerJungExFv();
void free_resource__11TObjDoaEx01Fv();
void load_resources__11TObjDoaEx01Fv();
void free_resources__8TObjDoorFv();
void load_resources__8TObjDoorFv();
void free_buffers__12TObjDoorJungFv();
void TObjDoorJung__sub_8018F4AC();
void free_key__11TObjDoorKeyFv();
void load_resources__11TObjDoorKeyFv();
void free_static_data__16TObjHashiVersus2Fv();
void load_shared_resource__16TObjHashiVersus2Fv();
void release_static_instance__16TObjHashiVersus1Fv();
void load_shared_resource__16TObjHashiVersus1Fv();
void unload_static_data__9TObjHashiFv();
void load_shared_resource__9TObjHashiFv();
void free_static__9TKomorebiFv();
void load_resources__9TKomorebiFv();
void free_resources__18TObjLazerFenceNormFv();
void load_lazer_fence_norm_resources();
void TLazerFenceSw__sub_80193C5C();
void load_resources__13TLazerFenceSwFv();
void free_statics__11TMotorcycleFv();
void load_resources__11TMotorcycleFv();
void free_globals__8TObjTankFv();
void load_globals__8TObjTankFv();
void free_instance__14TObjBigTuitateFv();
void fn_8019AD50();
void fn_8019B09C();
void fn_8019B0D4();
void free_globals__12TObjWarpBaseFv();
void load_forest_warp_resources();
void TObjFish__sub_8019F72C();
void load_models__8TObjFishFv();
void free_warp_jung_beam_resources();
void load_warp_beam_resources();
void release_static__13TObjWarpLobbyFv();
void TObjWarpLobby__sub_801A0B38();
void destroy_quest_obj__12TQuestThreadFv();
void load_area_dialogue_script();
void run_fn_table_reverse__14TShopGeneratorFv();
void run_fn_table_forward__14TShopGeneratorFv();
void free_shared_objects__6TLobbyFv();
void load_green_door_resources();
void free_static_resources__16TODoorJungleMainFv();
void load_resources__16TODoorJungleMainFv();
void free_globals__15TORockJungleS01Fv();
void load_resources__15TORockJungleS01Fv();
void release_static_instance__13TOGrassJungleFv();
void load_resources__13TOGrassJungleFv();
void release_static_resource__15TOKeyJungleMainFv();
void load_static_resource__15TOKeyJungleMainFv();
void free_resource__8TObjFishFv();
void load_area_resource__8TObjFishFv();
void free_resources__10TODoorLaboFv();
void load_resources__10TODoorLaboFv();
void free_all_resources__23TAdSinglePlyChrSelectGCFv();
void load_labo_door_resources();
void free_global_buffers__6TLobbyFv();
void TLanguage__sub_8029FF0C();
void free_chr_select_slots__6TLobbyFv();
void TLanguage__sub_802A0204();
void free_static_resources__23TObjSeabedSuisoBrakableFv();
void load_resources__23TObjSeabedSuisoBrakableFv();
void destroy_instance__16TBGLightningCtrlFv();
void load_bg_lightning();
void free_shared_data__11TOBiwaMushiFv();
void load_resource_instance__11TOBiwaMushiFv();
void free_static_data__12TOMekaFish01Fv();
void load_shared_resource__12TOMekaFish01Fv();
void release_static_instance__12TOMekaFish00Fv();
void load_shared_resource__12TOMekaFish00Fv();
void unload_static_data__13TOCapsuleLaboFv();
void load_resources__13TOCapsuleLaboFv();
void free_static_instance__10TObjPlayerFv();
void load_lobby_pigeon_resource__10TObjPlayerFv();
void destroy_instance__10TObjPlayerFv();
void load_kamome_resources__10TObjPlayerFv();
void free_statics__10TObjPlayerFv();
void load_jungle_bird_resources__10TObjPlayerFv();
void free_chr_select__10TObjPlayerFv();
void load_jungle_ebi_resources__10TObjPlayerFv();
void TObjPlayer__sub_802C2900();
void load_seabed_dolphin__10TObjPlayerFv();
void fn_802C99D8();
void load_shared_models__23TObjSeabedSuisoBrakableFv();
void free_static_resources__14TOTrapSeabed01Fv();
void load_resources__14TOTrapSeabed01Fv();
void free_window__14TAdMultiSaveGCFv();
void load_shared_resource__14TAdMultiSaveGCFv();
void fn_8030B7B4();
void fn_8030B7B8();
void free_static_data__16TObjRainbowLobbyFv();
void load_shared_resource__16TObjRainbowLobbyFv();
void destroy_instance__18TObjButterflyLobbyFv();
void fn_803516F8();
void release_static_instance__13TObjLobbyMainFv();
void load_resources__13TObjLobbyMainFv();
void unload_static_data__16TObjKabochaLobbyFv();
void load_resources__16TObjKabochaLobbyFv();
void free_static_model__19TObjStendGlassLobbyFv();
void load_resources__19TObjStendGlassLobbyFv();
void close_dialog_window__16TObjCurtainLobbyFv();
void load_resources__16TObjCurtainLobbyFv();
void release__16TObjWeddingLobbyFv();
void load_resources__16TObjWeddingLobbyFv();
void destroy_static_instance__13TObjTreeLobbyFv();
void load_resources__13TObjTreeLobbyFv();
void free_object_table();
void fn_803653A4();
void TObjParticleLobby__sub_80369A60();
void TObjParticleLobby__sub_80369A64();
void destroy_instance__15TObjSuisouLobbyFv();
void load_resources__15TObjSuisouLobbyFv();

FloorLifecycleEntry floor_lifecycle_callbacks_floor_00[12] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { run_fn_table_forward__14TShopGeneratorFv, run_fn_table_reverse__14TShopGeneratorFv },
    { TMainCursor__sub_80154094, TMainCursor__sub_80154090 },
    { load_city_common_resources, free_map_resources__6TLobbyFv },
    { TOSwitchItem__sub_80178084, TOSwitchItem__sub_80178080 },
    { load_symbol_chat_data__17TOSymbolchatColliFv, free_rock__17TOSymbolchatColliFv },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { load_resource_instance__13TObjGbAdvanceFv, free_shared_data__13TObjGbAdvanceFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_01[30] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resources__8TObjDoorFv, free_resources__8TObjDoorFv },
    { load_resources__9TKomorebiFv, free_static__9TKomorebiFv },
    { fn_8017F45C, destroy_instance__10TButterflyFv },
    { load_resources__11TObjDoorKeyFv, free_key__11TObjDoorKeyFv },
    { load_resources__11TMotorcycleFv, free_statics__11TMotorcycleFv },
    { load_forest_box_resources, free_char_select_resources__6TLobbyFv },
    { load_console_resources__6TLobbyFv, free_chr_select_slot__6TLobbyFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_globals__8TObjTankFv, free_globals__8TObjTankFv },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { load_resources__16TObjContainerIdoFv, free_resources__16TObjContainerIdoFv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_resource_instance__18TOCapsuleAncient01Fv, destroy_static_instance__18TOCapsuleAncient01Fv },
    { load_resources__17TOBarrierEnergy01Fv, free_resources__17TOBarrierEnergy01Fv },
    { load_shared_resource__9TObjHashiFv, unload_static_data__9TObjHashiFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { TMainCursor__sub_80154094, TMainCursor__sub_80154090 },
    { load_assets__17TOSensorGeneral01Fv, free_rocks__17TOSensorGeneral01Fv },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { TOSwitchItem__sub_80178084, TOSwitchItem__sub_80178080 },
    { load_symbol_chat_data__17TOSymbolchatColliFv, free_rock__17TOSymbolchatColliFv },
    { TOSwitchAttack__sub_80177C24, TOSwitchAttack__sub_80177C20 },
    { load_assets__14TOKeyMachine01Fv, free_statics__14TOKeyMachine01Fv },
    { TODummyKeyCave01__sub_80165E8C, TODummyKeyCave01__sub_80165E88 },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_02[32] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resources__8TObjDoorFv, free_resources__8TObjDoorFv },
    { load_resources__9TKomorebiFv, free_static__9TKomorebiFv },
    { fn_8017F45C, destroy_instance__10TButterflyFv },
    { load_resources__11TObjDoorKeyFv, free_key__11TObjDoorKeyFv },
    { load_resources__11TMotorcycleFv, free_statics__11TMotorcycleFv },
    { load_forest_box_resources, free_char_select_resources__6TLobbyFv },
    { load_console_resources__6TLobbyFv, free_chr_select_slot__6TLobbyFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_globals__8TObjTankFv, free_globals__8TObjTankFv },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { load_resources__16TObjContainerIdoFv, free_resources__16TObjContainerIdoFv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_resource_instance__18TOCapsuleAncient01Fv, destroy_static_instance__18TOCapsuleAncient01Fv },
    { load_resources__17TOBarrierEnergy01Fv, free_resources__17TOBarrierEnergy01Fv },
    { load_shared_resource__9TObjHashiFv, unload_static_data__9TObjHashiFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { TMainCursor__sub_80154094, TMainCursor__sub_80154090 },
    { load_assets__17TOSensorGeneral01Fv, free_rocks__17TOSensorGeneral01Fv },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { load_resources__19TOMonumentAncient02Fv, free_shared_data__19TOMonumentAncient02Fv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { TOSwitchItem__sub_80178084, TOSwitchItem__sub_80178080 },
    { load_symbol_chat_data__17TOSymbolchatColliFv, free_rock__17TOSymbolchatColliFv },
    { TOSwitchAttack__sub_80177C24, TOSwitchAttack__sub_80177C20 },
    { load_assets__14TOKeyMachine01Fv, free_statics__14TOKeyMachine01Fv },
    { TODummyKeyCave01__sub_80165E8C, TODummyKeyCave01__sub_80165E88 },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_03[27] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_resource_instance__18TOCapsuleAncient01Fv, destroy_static_instance__18TOCapsuleAncient01Fv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_resources__11TObjDoorKeyFv, free_key__11TObjDoorKeyFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_resources__12TODoorCave01Fv, free_resources__12TODoorCave01Fv },
    { load_resources__12TODoorCave02Fv, free_globals__12TODoorCave02Fv },
    { load_resources__12TODoorCave03Fv, free_shared_data__12TODoorCave03Fv },
    { load_turiten_singo_resources, destroy_instance__19TOHangceilingCave01Fv },
    { load_resources__10TORockCaveFv, free_instances__10TORockCaveFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_forest_box_resources, free_char_select_resources__6TLobbyFv },
    { load_console_resources__6TLobbyFv, free_chr_select_slot__6TLobbyFv },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { TMainCursor__sub_80154094, TMainCursor__sub_80154090 },
    { load_static_resource__6TOBindFv, free_static_model__6TOBindFv },
    { TOSwitchItem__sub_80178084, TOSwitchItem__sub_80178080 },
    { load_symbol_chat_data__17TOSymbolchatColliFv, free_rock__17TOSymbolchatColliFv },
    { load_resources__16TObjContainerIdoFv, free_resources__16TObjContainerIdoFv },
    { TODummyKeyCave01__sub_80165E8C, TODummyKeyCave01__sub_80165E88 },
    { TOSwitchAttack__sub_80177C24, TOSwitchAttack__sub_80177C20 },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_04[38] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_resource_instance__18TOCapsuleAncient01Fv, destroy_static_instance__18TOCapsuleAncient01Fv },
    { load_resources__17TOBarrierEnergy01Fv, free_resources__17TOBarrierEnergy01Fv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_assets__17TOSensorGeneral01Fv, free_rocks__17TOSensorGeneral01Fv },
    { load_resources__11TObjDoorKeyFv, free_key__11TObjDoorKeyFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_resources__12TODoorCave01Fv, free_resources__12TODoorCave01Fv },
    { load_resources__12TODoorCave02Fv, free_globals__12TODoorCave02Fv },
    { load_resources__12TODoorCave03Fv, free_shared_data__12TODoorCave03Fv },
    { load_turiten_singo_resources, destroy_instance__19TOHangceilingCave01Fv },
    { load_shared_resource__12TOSignCave01Fv, unload_static_data__12TOSignCave01Fv },
    { load_shared_resource__12TOSignCave02Fv, free_static_model__12TOSignCave02Fv },
    { load_shared_resource__12TOSignCave03Fv, close_dialog_window__12TOSignCave03Fv },
    { load_shared_resource__14TOAirconCave01Fv, release_static_resource__14TOAirconCave01Fv },
    { load_shared_resource__14TOAirconCave02Fv, release_static_resource__14TOAirconCave02Fv },
    { load_shared_resource__16TORevlightCave01Fv, release_static_instance__16TORevlightCave01Fv },
    { load_resource_instance__15TORainbowCave01Fv, free_static_data__15TORainbowCave01Fv },
    { load_static_resource__8TOKurageFv, destroy_static_instance__8TOKurageFv },
    { load_resources__17TODragonflyCave01Fv, release_static_instance__17TODragonflyCave01Fv },
    { load_resources__10TORockCaveFv, free_instances__10TORockCaveFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_forest_box_resources, free_char_select_resources__6TLobbyFv },
    { load_console_resources__6TLobbyFv, free_chr_select_slot__6TLobbyFv },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { load_resources__19TOMonumentAncient02Fv, free_shared_data__19TOMonumentAncient02Fv },
    { TMainCursor__sub_80154094, TMainCursor__sub_80154090 },
    { load_static_resource__6TOBindFv, free_static_model__6TOBindFv },
    { TODummyKeyCave01__sub_80165E8C, TODummyKeyCave01__sub_80165E88 },
    { TOSwitchItem__sub_80178084, TOSwitchItem__sub_80178080 },
    { load_symbol_chat_data__17TOSymbolchatColliFv, free_rock__17TOSymbolchatColliFv },
    { TOSwitchAttack__sub_80177C24, TOSwitchAttack__sub_80177C20 },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_05[36] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_resource_instance__18TOCapsuleAncient01Fv, destroy_static_instance__18TOCapsuleAncient01Fv },
    { load_resources__17TOBarrierEnergy01Fv, free_resources__17TOBarrierEnergy01Fv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_assets__17TOSensorGeneral01Fv, free_rocks__17TOSensorGeneral01Fv },
    { load_resources__11TObjDoorKeyFv, free_key__11TObjDoorKeyFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_resources__12TODoorCave01Fv, free_resources__12TODoorCave01Fv },
    { load_resources__12TODoorCave02Fv, free_globals__12TODoorCave02Fv },
    { load_resources__12TODoorCave03Fv, free_shared_data__12TODoorCave03Fv },
    { load_turiten_singo_resources, destroy_instance__19TOHangceilingCave01Fv },
    { load_shared_resource__12TOSignCave01Fv, unload_static_data__12TOSignCave01Fv },
    { load_shared_resource__12TOSignCave02Fv, free_static_model__12TOSignCave02Fv },
    { load_shared_resource__12TOSignCave03Fv, close_dialog_window__12TOSignCave03Fv },
    { load_shared_resource__14TOAirconCave01Fv, release_static_resource__14TOAirconCave01Fv },
    { load_shared_resource__14TOAirconCave02Fv, release_static_resource__14TOAirconCave02Fv },
    { load_shared_resource__16TORevlightCave01Fv, release_static_instance__16TORevlightCave01Fv },
    { load_resource_instance__16TOCakeshopCave01Fv, close_dialog_window__16TOCakeshopCave01Fv },
    { load_resources__10TORockCaveFv, free_instances__10TORockCaveFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_forest_box_resources, free_char_select_resources__6TLobbyFv },
    { load_console_resources__6TLobbyFv, free_chr_select_slot__6TLobbyFv },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { TMainCursor__sub_80154094, TMainCursor__sub_80154090 },
    { load_static_resource__6TOBindFv, free_static_model__6TOBindFv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { TODummyKeyCave01__sub_80165E8C, TODummyKeyCave01__sub_80165E88 },
    { TOSwitchItem__sub_80178084, TOSwitchItem__sub_80178080 },
    { load_symbol_chat_data__17TOSymbolchatColliFv, free_rock__17TOSymbolchatColliFv },
    { TOSwitchAttack__sub_80177C24, TOSwitchAttack__sub_80177C20 },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_06[34] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_resource_instance__18TOCapsuleAncient01Fv, destroy_static_instance__18TOCapsuleAncient01Fv },
    { load_resources__17TOBarrierEnergy01Fv, free_resources__17TOBarrierEnergy01Fv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { TMainCursor__sub_80154094, TMainCursor__sub_80154090 },
    { load_assets__17TOSensorGeneral01Fv, free_rocks__17TOSensorGeneral01Fv },
    { load_forest_box_resources, free_char_select_resources__6TLobbyFv },
    { load_console_resources__6TLobbyFv, free_chr_select_slot__6TLobbyFv },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { load_resources__15TODoorMachine01Fv, free_resources__15TODoorMachine01Fv },
    { load_resources__15TODoorMachine02Fv, free_statics__15TODoorMachine02Fv },
    { load_assets__14TOKeyMachine01Fv, free_statics__14TOKeyMachine01Fv },
    { load_static_resource__6TOBindFv, free_static_model__6TOBindFv },
    { alloc_and_load_resource__18TOCapsuleMachine01Fv, reset_static_state__18TOCapsuleMachine01Fv },
    { load_model_resource__19TOComputerMachine01Fv, reset_state__19TOComputerMachine01Fv },
    { load_resources__18TOMonitorMachine01Fv, reset_static_state__18TOMonitorMachine01Fv },
    { create_attack_effect__20TODragonflyMachine01Fv, unload_static_data__20TODragonflyMachine01Fv },
    { load_assets__16TOLightMachine01Fv, destroy_instance__16TOLightMachine01Fv },
    { load_shared_resource__18TOExplosiveMachineFv, destroy_static_lobby__18TOExplosiveMachineFv },
    { load_static_resource__16TOSparkMachine01Fv, destroy_static_instance__16TOSparkMachine01Fv },
    { load_shared_resource__17TOHangerMachine01Fv, free_static_model__17TOHangerMachine01Fv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { TOSwitchItem__sub_80178084, TOSwitchItem__sub_80178080 },
    { load_symbol_chat_data__17TOSymbolchatColliFv, free_rock__17TOSymbolchatColliFv },
    { TODummyKeyCave01__sub_80165E8C, TODummyKeyCave01__sub_80165E88 },
    { TOSwitchAttack__sub_80177C24, TOSwitchAttack__sub_80177C20 },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_07[36] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_resource_instance__18TOCapsuleAncient01Fv, destroy_static_instance__18TOCapsuleAncient01Fv },
    { load_resources__17TOBarrierEnergy01Fv, free_resources__17TOBarrierEnergy01Fv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { TMainCursor__sub_80154094, TMainCursor__sub_80154090 },
    { load_assets__17TOSensorGeneral01Fv, free_rocks__17TOSensorGeneral01Fv },
    { load_forest_box_resources, free_char_select_resources__6TLobbyFv },
    { load_console_resources__6TLobbyFv, free_chr_select_slot__6TLobbyFv },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { load_resources__15TODoorMachine01Fv, free_resources__15TODoorMachine01Fv },
    { load_resources__15TODoorMachine02Fv, free_statics__15TODoorMachine02Fv },
    { load_assets__14TOKeyMachine01Fv, free_statics__14TOKeyMachine01Fv },
    { load_static_resource__6TOBindFv, free_static_model__6TOBindFv },
    { alloc_and_load_resource__18TOCapsuleMachine01Fv, reset_static_state__18TOCapsuleMachine01Fv },
    { load_model_resource__19TOComputerMachine01Fv, reset_state__19TOComputerMachine01Fv },
    { load_resources__18TOMonitorMachine01Fv, reset_static_state__18TOMonitorMachine01Fv },
    { create_attack_effect__20TODragonflyMachine01Fv, unload_static_data__20TODragonflyMachine01Fv },
    { load_assets__16TOLightMachine01Fv, destroy_instance__16TOLightMachine01Fv },
    { load_shared_resource__18TOExplosiveMachineFv, destroy_static_lobby__18TOExplosiveMachineFv },
    { load_static_resource__16TOSparkMachine01Fv, destroy_static_instance__16TOSparkMachine01Fv },
    { load_shared_resource__17TOHangerMachine01Fv, free_static_model__17TOHangerMachine01Fv },
    { load_resources__19TOMonumentAncient02Fv, free_shared_data__19TOMonumentAncient02Fv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { TOSwitchItem__sub_80178084, TOSwitchItem__sub_80178080 },
    { load_symbol_chat_data__17TOSymbolchatColliFv, free_rock__17TOSymbolchatColliFv },
    { TODummyKeyCave01__sub_80165E8C, TODummyKeyCave01__sub_80165E88 },
    { TOSwitchAttack__sub_80177C24, TOSwitchAttack__sub_80177C20 },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_08[34] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resource_instance__18TOCapsuleAncient01Fv, destroy_static_instance__18TOCapsuleAncient01Fv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_resources__17TOSensorAncient01Fv, destroy__17TOSensorAncient01Fv },
    { load_resources__19TObjGoalWarpAncientFv, free_globals__18TObjMapWarpAncientFv },
    { load_resources__14TOKeyAncient01Fv, free_shared_resources__14TOKeyAncient01Fv },
    { load_resources__14TOKeyAncient03Fv, cleanup_refs__14TOKeyAncient03Fv },
    { load_assets__15TODoorAncient01Fv, free_statics__15TODoorAncient01Fv },
    { load_resources__15TODoorAncient05Fv, reset__15TODoorAncient05Fv },
    { load_resources__15TODoorAncient08Fv, free_objects__15TODoorAncient08Fv },
    { load_resources__15TODoorAncient09Fv, free_rocks__15TODoorAncient09Fv },
    { load_resources__14TOKeyAncient02Fv, free_static__14TOKeyAncient02Fv },
    { load_resources__16TOFenceAncient01Fv, free_resources__16TOFenceAncient01Fv },
    { load_assets__16TOFenceAncient02Fv, free_resources__16TOFenceAncient02Fv },
    { load_resources__16TOFenceAncient03Fv, free_shared_resources__16TOFenceAncient03Fv },
    { load_resources__16TOFenceAncient04Fv, destroy__16TOFenceAncient04Fv },
    { load_resources__19TContainerAncient01Fv, release_static_resource__19TContainerAncient01Fv },
    { init_table_entries__20TContainerAncient01RFv, TContainerAncient01R__sub_8018AF74 },
    { load_resources__15TOTrapAncient01Fv, release_static_resource__15TOTrapAncient01Fv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { load_resource_instance__19TOMonumentAncient01Fv, release_static_resource__19TOMonumentAncient01Fv },
    { load_resources__14TOWreckAncientFv, free_statics__14TOWreckAncientFv },
    { load_container_fragment_textures__9TLanguageFv, fn_8015C5F8 },
    { TMainCursor__sub_80154094, TMainCursor__sub_80154090 },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { TOSwitchItem__sub_80178084, TOSwitchItem__sub_80178080 },
    { load_symbol_chat_data__17TOSymbolchatColliFv, free_rock__17TOSymbolchatColliFv },
    { TODummyKeyCave01__sub_80165E8C, TODummyKeyCave01__sub_80165E88 },
    { TOSwitchAttack__sub_80177C24, TOSwitchAttack__sub_80177C20 },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_09[34] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resource_instance__18TOCapsuleAncient01Fv, destroy_static_instance__18TOCapsuleAncient01Fv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_resources__17TOSensorAncient01Fv, destroy__17TOSensorAncient01Fv },
    { load_resources__19TObjGoalWarpAncientFv, free_globals__18TObjMapWarpAncientFv },
    { load_resources__14TOKeyAncient01Fv, free_shared_resources__14TOKeyAncient01Fv },
    { load_resources__14TOKeyAncient03Fv, cleanup_refs__14TOKeyAncient03Fv },
    { load_resources__15TODoorAncient04Fv, cleanup_refs__15TODoorAncient04Fv },
    { load_resources__15TODoorAncient06Fv, destroy__15TODoorAncient06Fv },
    { load_resources__15TODoorAncient08Fv, free_objects__15TODoorAncient08Fv },
    { load_resources__15TODoorAncient09Fv, free_rocks__15TODoorAncient09Fv },
    { load_resources__14TOKeyAncient02Fv, free_static__14TOKeyAncient02Fv },
    { load_resources__16TOFenceAncient01Fv, free_resources__16TOFenceAncient01Fv },
    { load_assets__16TOFenceAncient02Fv, free_resources__16TOFenceAncient02Fv },
    { load_resources__16TOFenceAncient03Fv, free_shared_resources__16TOFenceAncient03Fv },
    { load_resources__16TOFenceAncient04Fv, destroy__16TOFenceAncient04Fv },
    { load_resources__19TContainerAncient01Fv, release_static_resource__19TContainerAncient01Fv },
    { init_table_entries__20TContainerAncient01RFv, TContainerAncient01R__sub_8018AF74 },
    { load_resources__15TOTrapAncient01Fv, release_static_resource__15TOTrapAncient01Fv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { load_resource_instance__19TOMonumentAncient01Fv, release_static_resource__19TOMonumentAncient01Fv },
    { load_resources__14TOWreckAncientFv, free_statics__14TOWreckAncientFv },
    { load_container_fragment_textures__9TLanguageFv, fn_8015C5F8 },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { TMainCursor__sub_80154094, TMainCursor__sub_80154090 },
    { TOSwitchItem__sub_80178084, TOSwitchItem__sub_80178080 },
    { load_symbol_chat_data__17TOSymbolchatColliFv, free_rock__17TOSymbolchatColliFv },
    { TODummyKeyCave01__sub_80165E8C, TODummyKeyCave01__sub_80165E88 },
    { TOSwitchAttack__sub_80177C24, TOSwitchAttack__sub_80177C20 },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_10[35] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resource_instance__18TOCapsuleAncient01Fv, destroy_static_instance__18TOCapsuleAncient01Fv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_resources__17TOSensorAncient01Fv, destroy__17TOSensorAncient01Fv },
    { load_resources__19TObjGoalWarpAncientFv, free_globals__18TObjMapWarpAncientFv },
    { load_resources__14TOKeyAncient01Fv, free_shared_resources__14TOKeyAncient01Fv },
    { load_resources__14TOKeyAncient03Fv, cleanup_refs__14TOKeyAncient03Fv },
    { load_resources__15TODoorAncient03Fv, free_resources__15TODoorAncient03Fv },
    { load_resources__15TODoorAncient07Fv, cleanup__15TODoorAncient07Fv },
    { load_resources__15TODoorAncient08Fv, free_objects__15TODoorAncient08Fv },
    { load_resources__15TODoorAncient09Fv, free_rocks__15TODoorAncient09Fv },
    { load_resources__14TOKeyAncient02Fv, free_static__14TOKeyAncient02Fv },
    { load_resources__16TOFenceAncient01Fv, free_resources__16TOFenceAncient01Fv },
    { load_assets__16TOFenceAncient02Fv, free_resources__16TOFenceAncient02Fv },
    { load_resources__16TOFenceAncient03Fv, free_shared_resources__16TOFenceAncient03Fv },
    { load_resources__16TOFenceAncient04Fv, destroy__16TOFenceAncient04Fv },
    { load_resources__19TContainerAncient01Fv, release_static_resource__19TContainerAncient01Fv },
    { init_table_entries__20TContainerAncient01RFv, TContainerAncient01R__sub_8018AF74 },
    { load_resources__15TOTrapAncient01Fv, release_static_resource__15TOTrapAncient01Fv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { load_resource_instance__19TOMonumentAncient01Fv, release_static_resource__19TOMonumentAncient01Fv },
    { load_resources__14TOWreckAncientFv, free_statics__14TOWreckAncientFv },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { load_container_fragment_textures__9TLanguageFv, fn_8015C5F8 },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { TMainCursor__sub_80154094, TMainCursor__sub_80154090 },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { TOSwitchItem__sub_80178084, TOSwitchItem__sub_80178080 },
    { load_symbol_chat_data__17TOSymbolchatColliFv, free_rock__17TOSymbolchatColliFv },
    { TODummyKeyCave01__sub_80165E8C, TODummyKeyCave01__sub_80165E88 },
    { TOSwitchAttack__sub_80177C24, TOSwitchAttack__sub_80177C20 },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floors_11_12[5] = {
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { TMainCursor__sub_80154094, TMainCursor__sub_80154090 },
    { load_console_resources__6TLobbyFv, free_chr_select_slot__6TLobbyFv },
    { load_forest_box_resources, free_char_select_resources__6TLobbyFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_13[8] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resource_instance__18TOCapsuleAncient01Fv, destroy_static_instance__18TOCapsuleAncient01Fv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { TMainCursor__sub_80154094, TMainCursor__sub_80154090 },
    { load_shared_resource__12TODoorVoShipFv, free_static_data__12TODoorVoShipFv },
    { load_console_resources__6TLobbyFv, free_chr_select_slot__6TLobbyFv },
    { load_forest_box_resources, free_char_select_resources__6TLobbyFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_14[6] = {
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { TMainCursor__sub_80154094, TMainCursor__sub_80154090 },
    { load_static_resource__7TOBoss4Fv, free_instance__7TOBoss4Fv },
    { load_console_resources__6TLobbyFv, free_chr_select_slot__6TLobbyFv },
    { load_forest_box_resources, free_char_select_resources__6TLobbyFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_15[14] = {
    { TObjWarpLobby__sub_801A0B38, release_static__13TObjWarpLobbyFv },
    { load_resources__13TObjLobbyMainFv, release_static_instance__13TObjLobbyMainFv },
    { load_area_resource__8TObjFishFv, free_resource__8TObjFishFv },
    { load_lobby_pigeon_resource__10TObjPlayerFv, free_static_instance__10TObjPlayerFv },
    { fn_803516F8, destroy_instance__18TObjButterflyLobbyFv },
    { load_shared_resource__16TObjRainbowLobbyFv, free_static_data__16TObjRainbowLobbyFv },
    { load_resources__16TObjKabochaLobbyFv, unload_static_data__16TObjKabochaLobbyFv },
    { load_resources__19TObjStendGlassLobbyFv, free_static_model__19TObjStendGlassLobbyFv },
    { load_resources__16TObjCurtainLobbyFv, close_dialog_window__16TObjCurtainLobbyFv },
    { load_resources__16TObjWeddingLobbyFv, release__16TObjWeddingLobbyFv },
    { load_resources__13TObjTreeLobbyFv, destroy_static_instance__13TObjTreeLobbyFv },
    { load_resources__15TObjSuisouLobbyFv, destroy_instance__15TObjSuisouLobbyFv },
    { TObjParticleLobby__sub_80369A64, TObjParticleLobby__sub_80369A60 },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_16[24] = {
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_static_resource__7TOBoss4Fv, free_instance__7TOBoss4Fv },
    { load_shared_resource__10TObjCameraFv, release_static_resource__10TObjCameraFv },
    { fn_8019B0D4, fn_8019B09C },
    { fn_8019AD50, free_instance__14TObjBigTuitateFv },
    { load_resources__11TObjDoaEx01Fv, free_resource__11TObjDoaEx01Fv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_container_fragment_textures__9TLanguageFv, fn_8015C5F8 },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_assets__14TOKeyMachine01Fv, free_statics__14TOKeyMachine01Fv },
    { load_resources__17TODragonflyCave01Fv, release_static_instance__17TODragonflyCave01Fv },
    { TOSwitchItem__sub_80178084, TOSwitchItem__sub_80178080 },
    { load_symbol_chat_data__17TOSymbolchatColliFv, free_rock__17TOSymbolchatColliFv },
    { TODummyKeyCave01__sub_80165E8C, TODummyKeyCave01__sub_80165E88 },
    { TOSwitchAttack__sub_80177C24, TOSwitchAttack__sub_80177C20 },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { load_resources__15TODoorVS2Door01Fv, free_resources__15TODoorVS2Door01Fv },
    { load_resources__11TOVS2Wall01Fv, release_model__11TOVS2Wall01Fv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_17[20] = {
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_resources__15TODoorVS2Door01Fv, free_resources__15TODoorVS2Door01Fv },
    { load_resources__11TOVS2Wall01Fv, release_model__11TOVS2Wall01Fv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_container_fragment_textures__9TLanguageFv, fn_8015C5F8 },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_assets__14TOKeyMachine01Fv, free_statics__14TOKeyMachine01Fv },
    { load_shared_resource__16TObjHashiVersus1Fv, release_static_instance__16TObjHashiVersus1Fv },
    { load_shared_resource__16TObjHashiVersus2Fv, free_static_data__16TObjHashiVersus2Fv },
    { TOSwitchItem__sub_80178084, TOSwitchItem__sub_80178080 },
    { load_symbol_chat_data__17TOSymbolchatColliFv, free_rock__17TOSymbolchatColliFv },
    { TODummyKeyCave01__sub_80165E8C, TODummyKeyCave01__sub_80165E88 },
    { TOSwitchAttack__sub_80177C24, TOSwitchAttack__sub_80177C20 },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_18[16] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { run_fn_table_forward__14TShopGeneratorFv, run_fn_table_reverse__14TShopGeneratorFv },
    { TMainCursor__sub_80154094, TMainCursor__sub_80154090 },
    { load_city_common_resources, free_map_resources__6TLobbyFv },
    { TOSwitchItem__sub_80178084, TOSwitchItem__sub_80178080 },
    { load_symbol_chat_data__17TOSymbolchatColliFv, free_rock__17TOSymbolchatColliFv },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { load_labo_door_resources, free_all_resources__23TAdSinglePlyChrSelectGCFv },
    { fn_803653A4, free_object_table },
    { load_resource_instance__13TObjGbAdvanceFv, free_shared_data__13TObjGbAdvanceFv },
    { load_resources__10TODoorLaboFv, free_resources__10TODoorLaboFv },
    { load_static_resource__15TObjLaboMapWarpFv, release_static_resource__15TObjLaboMapWarpFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floors_21_22[29] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_resources__11TObjDoorKeyFv, free_key__11TObjDoorKeyFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_assets__14TOKeyMachine01Fv, free_statics__14TOKeyMachine01Fv },
    { TOSwitchAttack__sub_80177C24, TOSwitchAttack__sub_80177C20 },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { TODummyKeyCave01__sub_80165E8C, TODummyKeyCave01__sub_80165E88 },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { load_resources__11TObjDoaEx01Fv, free_resource__11TObjDoaEx01Fv },
    { load_container_fragment_textures__9TLanguageFv, fn_8015C5F8 },
    { load_static_resource__7TOBoss4Fv, free_instance__7TOBoss4Fv },
    { load_shared_resource__10TObjCameraFv, release_static_resource__10TObjCameraFv },
    { fn_8019B0D4, fn_8019B09C },
    { fn_8019AD50, free_instance__14TObjBigTuitateFv },
    { load_resources__17TODragonflyCave01Fv, release_static_instance__17TODragonflyCave01Fv },
    { load_turiten_singo_resources, destroy_instance__19TOHangceilingCave01Fv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { load_resources__15TOTrapAncient01Fv, release_static_resource__15TOTrapAncient01Fv },
    { load_green_door_resources, free_shared_objects__6TLobbyFv },
    { load_resources__13TOCapsuleLaboFv, unload_static_data__13TOCapsuleLaboFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floors_19_20[27] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_resources__11TObjDoorKeyFv, free_key__11TObjDoorKeyFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_assets__14TOKeyMachine01Fv, free_statics__14TOKeyMachine01Fv },
    { TOSwitchAttack__sub_80177C24, TOSwitchAttack__sub_80177C20 },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { TODummyKeyCave01__sub_80165E8C, TODummyKeyCave01__sub_80165E88 },
    { TOSwitchTimer__sub_80178588, TOSwitchTimer__sub_80178584 },
    { load_chat_sensor, destroy_global__12TOChatSensorFv },
    { load_resources__15TODoorVS2Door01Fv, free_resources__15TODoorVS2Door01Fv },
    { load_container_fragment_textures__9TLanguageFv, fn_8015C5F8 },
    { load_resources__11TOVS2Wall01Fv, release_model__11TOVS2Wall01Fv },
    { load_shared_resource__16TObjHashiVersus1Fv, release_static_instance__16TObjHashiVersus1Fv },
    { load_shared_resource__16TObjHashiVersus2Fv, free_static_data__16TObjHashiVersus2Fv },
    { load_turiten_singo_resources, destroy_instance__19TOHangceilingCave01Fv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { load_resources__15TOTrapAncient01Fv, release_static_resource__15TOTrapAncient01Fv },
    { load_green_door_resources, free_shared_objects__6TLobbyFv },
    { load_resources__13TOCapsuleLaboFv, unload_static_data__13TOCapsuleLaboFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_23[29] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resources__17TObjContainerJungFv, release__17TObjContainerJungFv },
    { load_warp_beam_resources, free_warp_jung_beam_resources },
    { TObjDoorJung__sub_8018F4AC, free_buffers__12TObjDoorJungFv },
    { load_resources__9TKomorebiFv, free_static__9TKomorebiFv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_resource_instance__19TObjContainerJungExFv, free_data__19TObjContainerJungExFv },
    { load_resources__16TODoorJungleMainFv, free_static_resources__16TODoorJungleMainFv },
    { load_static_resource__15TOKeyJungleMainFv, release_static_resource__15TOKeyJungleMainFv },
    { load_resources__15TORockJungleS01Fv, free_globals__15TORockJungleS01Fv },
    { load_resources__13TOGrassJungleFv, release_static_instance__13TOGrassJungleFv },
    { load_bg_lightning, destroy_instance__16TBGLightningCtrlFv },
    { load_resources__19TContainerAncient01Fv, release_static_resource__19TContainerAncient01Fv },
    { init_table_entries__20TContainerAncient01RFv, TContainerAncient01R__sub_8018AF74 },
    { load_resources__13TOCapsuleLaboFv, unload_static_data__13TOCapsuleLaboFv },
    { load_resources__14TOTrapSeabed01Fv, free_static_resources__14TOTrapSeabed01Fv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { load_shared_models__23TObjSeabedSuisoBrakableFv, fn_802C99D8 },
    { load_resource_instance__11TOBiwaMushiFv, free_shared_data__11TOBiwaMushiFv },
    { load_kamome_resources__10TObjPlayerFv, destroy_instance__10TObjPlayerFv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_24[31] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resources__17TObjContainerJungFv, release__17TObjContainerJungFv },
    { load_warp_beam_resources, free_warp_jung_beam_resources },
    { TObjDoorJung__sub_8018F4AC, free_buffers__12TObjDoorJungFv },
    { load_resources__9TKomorebiFv, free_static__9TKomorebiFv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_resource_instance__19TObjContainerJungExFv, free_data__19TObjContainerJungExFv },
    { load_static_resource__15TOKeyJungleMainFv, release_static_resource__15TOKeyJungleMainFv },
    { load_resources__15TORockJungleS01Fv, free_globals__15TORockJungleS01Fv },
    { load_resources__13TOGrassJungleFv, release_static_instance__13TOGrassJungleFv },
    { load_resources__19TContainerAncient01Fv, release_static_resource__19TContainerAncient01Fv },
    { init_table_entries__20TContainerAncient01RFv, TContainerAncient01R__sub_8018AF74 },
    { load_area_resource__8TObjFishFv, free_resource__8TObjFishFv },
    { load_jungle_ebi_resources__10TObjPlayerFv, free_chr_select__10TObjPlayerFv },
    { load_jungle_bird_resources__10TObjPlayerFv, free_statics__10TObjPlayerFv },
    { load_resources__13TOCapsuleLaboFv, unload_static_data__13TOCapsuleLaboFv },
    { load_resources__14TOTrapSeabed01Fv, free_static_resources__14TOTrapSeabed01Fv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { load_shared_models__23TObjSeabedSuisoBrakableFv, fn_802C99D8 },
    { load_resource_instance__11TOBiwaMushiFv, free_shared_data__11TOBiwaMushiFv },
    { load_kamome_resources__10TObjPlayerFv, destroy_instance__10TObjPlayerFv },
    { load_shared_resource__14TAdMultiSaveGCFv, free_window__14TAdMultiSaveGCFv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_25[30] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resources__17TObjContainerJungFv, release__17TObjContainerJungFv },
    { load_warp_beam_resources, free_warp_jung_beam_resources },
    { TObjDoorJung__sub_8018F4AC, free_buffers__12TObjDoorJungFv },
    { load_resources__9TKomorebiFv, free_static__9TKomorebiFv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_resource_instance__19TObjContainerJungExFv, free_data__19TObjContainerJungExFv },
    { load_static_resource__15TOKeyJungleMainFv, release_static_resource__15TOKeyJungleMainFv },
    { load_resources__15TORockJungleS01Fv, free_globals__15TORockJungleS01Fv },
    { load_resources__13TOGrassJungleFv, release_static_instance__13TOGrassJungleFv },
    { load_resources__19TContainerAncient01Fv, release_static_resource__19TContainerAncient01Fv },
    { init_table_entries__20TContainerAncient01RFv, TContainerAncient01R__sub_8018AF74 },
    { load_jungle_ebi_resources__10TObjPlayerFv, free_chr_select__10TObjPlayerFv },
    { load_jungle_bird_resources__10TObjPlayerFv, free_statics__10TObjPlayerFv },
    { load_resources__13TOCapsuleLaboFv, unload_static_data__13TOCapsuleLaboFv },
    { load_resources__14TOTrapSeabed01Fv, free_static_resources__14TOTrapSeabed01Fv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { load_shared_models__23TObjSeabedSuisoBrakableFv, fn_802C99D8 },
    { load_resource_instance__11TOBiwaMushiFv, free_shared_data__11TOBiwaMushiFv },
    { load_kamome_resources__10TObjPlayerFv, destroy_instance__10TObjPlayerFv },
    { load_shared_resource__14TAdMultiSaveGCFv, free_window__14TAdMultiSaveGCFv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_26[27] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resources__17TObjContainerJungFv, release__17TObjContainerJungFv },
    { load_warp_beam_resources, free_warp_jung_beam_resources },
    { TObjDoorJung__sub_8018F4AC, free_buffers__12TObjDoorJungFv },
    { load_resources__9TKomorebiFv, free_static__9TKomorebiFv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_resource_instance__19TObjContainerJungExFv, free_data__19TObjContainerJungExFv },
    { load_static_resource__15TOKeyJungleMainFv, release_static_resource__15TOKeyJungleMainFv },
    { load_resources__15TORockJungleS01Fv, free_globals__15TORockJungleS01Fv },
    { load_resources__13TOGrassJungleFv, release_static_instance__13TOGrassJungleFv },
    { load_resources__19TContainerAncient01Fv, release_static_resource__19TContainerAncient01Fv },
    { init_table_entries__20TContainerAncient01RFv, TContainerAncient01R__sub_8018AF74 },
    { load_resources__13TOCapsuleLaboFv, unload_static_data__13TOCapsuleLaboFv },
    { load_resources__14TOTrapSeabed01Fv, free_static_resources__14TOTrapSeabed01Fv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { load_shared_models__23TObjSeabedSuisoBrakableFv, fn_802C99D8 },
    { load_kamome_resources__10TObjPlayerFv, destroy_instance__10TObjPlayerFv },
    { load_shared_resource__14TAdMultiSaveGCFv, free_window__14TAdMultiSaveGCFv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_27[30] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resources__17TObjContainerJungFv, release__17TObjContainerJungFv },
    { load_warp_beam_resources, free_warp_jung_beam_resources },
    { TObjDoorJung__sub_8018F4AC, free_buffers__12TObjDoorJungFv },
    { load_resources__9TKomorebiFv, free_static__9TKomorebiFv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_resource_instance__19TObjContainerJungExFv, free_data__19TObjContainerJungExFv },
    { load_static_resource__15TOKeyJungleMainFv, release_static_resource__15TOKeyJungleMainFv },
    { load_resources__15TORockJungleS01Fv, free_globals__15TORockJungleS01Fv },
    { load_resources__13TOGrassJungleFv, release_static_instance__13TOGrassJungleFv },
    { load_resources__19TContainerAncient01Fv, release_static_resource__19TContainerAncient01Fv },
    { init_table_entries__20TContainerAncient01RFv, TContainerAncient01R__sub_8018AF74 },
    { load_jungle_ebi_resources__10TObjPlayerFv, free_chr_select__10TObjPlayerFv },
    { load_jungle_bird_resources__10TObjPlayerFv, free_statics__10TObjPlayerFv },
    { load_area_resource__8TObjFishFv, free_resource__8TObjFishFv },
    { load_resources__13TOCapsuleLaboFv, unload_static_data__13TOCapsuleLaboFv },
    { load_resources__14TOTrapSeabed01Fv, free_static_resources__14TOTrapSeabed01Fv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { load_shared_models__23TObjSeabedSuisoBrakableFv, fn_802C99D8 },
    { load_kamome_resources__10TObjPlayerFv, destroy_instance__10TObjPlayerFv },
    { load_shared_resource__14TAdMultiSaveGCFv, free_window__14TAdMultiSaveGCFv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_34[27] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resources__17TObjContainerJungFv, release__17TObjContainerJungFv },
    { load_warp_beam_resources, free_warp_jung_beam_resources },
    { TObjDoorJung__sub_8018F4AC, free_buffers__12TObjDoorJungFv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_resource_instance__19TObjContainerJungExFv, free_data__19TObjContainerJungExFv },
    { load_static_resource__15TOKeyJungleMainFv, release_static_resource__15TOKeyJungleMainFv },
    { load_resources__15TORockJungleS01Fv, free_globals__15TORockJungleS01Fv },
    { load_resources__13TOGrassJungleFv, release_static_instance__13TOGrassJungleFv },
    { load_resources__19TContainerAncient01Fv, release_static_resource__19TContainerAncient01Fv },
    { init_table_entries__20TContainerAncient01RFv, TContainerAncient01R__sub_8018AF74 },
    { load_jungle_ebi_resources__10TObjPlayerFv, free_chr_select__10TObjPlayerFv },
    { load_area_resource__8TObjFishFv, free_resource__8TObjFishFv },
    { load_resources__13TOCapsuleLaboFv, unload_static_data__13TOCapsuleLaboFv },
    { load_resources__14TOTrapSeabed01Fv, free_static_resources__14TOTrapSeabed01Fv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { load_shared_models__23TObjSeabedSuisoBrakableFv, fn_802C99D8 },
    { load_shared_resource__14TAdMultiSaveGCFv, free_window__14TAdMultiSaveGCFv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_35[33] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_resources__17TObjContainerJungFv, release__17TObjContainerJungFv },
    { load_warp_beam_resources, free_warp_jung_beam_resources },
    { TObjDoorJung__sub_8018F4AC, free_buffers__12TObjDoorJungFv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_resource_instance__19TObjContainerJungExFv, free_data__19TObjContainerJungExFv },
    { load_static_resource__15TOKeyJungleMainFv, release_static_resource__15TOKeyJungleMainFv },
    { load_resources__19TContainerAncient01Fv, release_static_resource__19TContainerAncient01Fv },
    { init_table_entries__20TContainerAncient01RFv, TContainerAncient01R__sub_8018AF74 },
    { load_jungle_ebi_resources__10TObjPlayerFv, free_chr_select__10TObjPlayerFv },
    { load_jungle_bird_resources__10TObjPlayerFv, free_statics__10TObjPlayerFv },
    { load_resources__13TOCapsuleLaboFv, unload_static_data__13TOCapsuleLaboFv },
    { load_resources__14TOTrapSeabed01Fv, free_static_resources__14TOTrapSeabed01Fv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { load_shared_models__23TObjSeabedSuisoBrakableFv, fn_802C99D8 },
    { load_kamome_resources__10TObjPlayerFv, destroy_instance__10TObjPlayerFv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { load_resources__18TOMonitorMachine01Fv, reset_static_state__18TOMonitorMachine01Fv },
    { alloc_and_load_resource__18TOCapsuleMachine01Fv, reset_static_state__18TOCapsuleMachine01Fv },
    { load_static_resource__6TOBindFv, free_static_model__6TOBindFv },
    { load_turiten_singo_resources, destroy_instance__19TOHangceilingCave01Fv },
    { fn_8019B0D4, fn_8019B09C },
    { fn_8019AD50, free_instance__14TObjBigTuitateFv },
    { load_resources__23TObjSeabedSuisoBrakableFv, free_static_resources__23TObjSeabedSuisoBrakableFv },
    { load_model_resource__19TOComputerMachine01Fv, reset_state__19TOComputerMachine01Fv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_28[26] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { load_area_resource__8TObjFishFv, free_resource__8TObjFishFv },
    { TLanguage__sub_802A0204, free_chr_select_slots__6TLobbyFv },
    { TLanguage__sub_8029FF0C, free_global_buffers__6TLobbyFv },
    { load_warp_beam_resources, free_warp_jung_beam_resources },
    { load_resources__23TObjSeabedSuisoBrakableFv, free_static_resources__23TObjSeabedSuisoBrakableFv },
    { load_shared_resource__12TOMekaFish00Fv, release_static_instance__12TOMekaFish00Fv },
    { load_shared_resource__12TOMekaFish01Fv, free_static_data__12TOMekaFish01Fv },
    { load_forest_box_resources, free_char_select_resources__6TLobbyFv },
    { load_console_resources__6TLobbyFv, free_chr_select_slot__6TLobbyFv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { load_seabed_dolphin__10TObjPlayerFv, TObjPlayer__sub_802C2900 },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { load_resources__14TOTrapSeabed01Fv, free_static_resources__14TOTrapSeabed01Fv },
    { load_resources__13TOCapsuleLaboFv, unload_static_data__13TOCapsuleLaboFv },
    { load_shared_models__23TObjSeabedSuisoBrakableFv, fn_802C99D8 },
    { load_static_resource__8TOKurageFv, destroy_static_instance__8TOKurageFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_29[26] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_static_resource__6TOMineFv, free_instance__6TOMineFv },
    { load_computer_resources, free_resources__12TObjComputerFv },
    { load_area_resource__8TObjFishFv, free_resource__8TObjFishFv },
    { TLanguage__sub_802A0204, free_chr_select_slots__6TLobbyFv },
    { TLanguage__sub_8029FF0C, free_global_buffers__6TLobbyFv },
    { load_warp_beam_resources, free_warp_jung_beam_resources },
    { load_resources__23TObjSeabedSuisoBrakableFv, free_static_resources__23TObjSeabedSuisoBrakableFv },
    { load_shared_resource__12TOMekaFish00Fv, release_static_instance__12TOMekaFish00Fv },
    { load_shared_resource__12TOMekaFish01Fv, free_static_data__12TOMekaFish01Fv },
    { load_forest_box_resources, free_char_select_resources__6TLobbyFv },
    { load_console_resources__6TLobbyFv, free_chr_select_slot__6TLobbyFv },
    { load_resources__15TOTrapAncient02Fv, destroy_instance__15TOTrapAncient02Fv },
    { load_seabed_dolphin__10TObjPlayerFv, TObjPlayer__sub_802C2900 },
    { load_lazer_fence_norm_resources, free_resources__18TObjLazerFenceNormFv },
    { load_resources__13TLazerFenceSwFv, TLazerFenceSw__sub_80193C5C },
    { load_resources__13TOHealGeneralFv, close_dialog_window__13TOHealGeneralFv },
    { load_resources__14TOKeyGenericSwFv, free_shared_resources__14TOKeyGenericSwFv },
    { load_resources__11TOKeyCave01Fv, free_objects__11TOKeyCave01Fv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_models__8TObjFishFv, TObjFish__sub_8019F72C },
    { load_resources__14TOTrapSeabed01Fv, free_static_resources__14TOTrapSeabed01Fv },
    { load_resources__13TOCapsuleLaboFv, unload_static_data__13TOCapsuleLaboFv },
    { load_shared_models__23TObjSeabedSuisoBrakableFv, fn_802C99D8 },
    { load_static_resource__8TOKurageFv, destroy_static_instance__8TOKurageFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_30[8] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_resources__17TObjContainerJungFv, release__17TObjContainerJungFv },
    { load_resource_instance__19TObjContainerJungExFv, free_data__19TObjContainerJungExFv },
    { load_bg_lightning, destroy_instance__16TBGLightningCtrlFv },
    { load_resources__13TOCapsuleLaboFv, unload_static_data__13TOCapsuleLaboFv },
    { load_warp_beam_resources, free_warp_jung_beam_resources },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_31[7] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_forest_box_resources, free_char_select_resources__6TLobbyFv },
    { load_console_resources__6TLobbyFv, free_chr_select_slot__6TLobbyFv },
    { load_resources__13TOCapsuleLaboFv, unload_static_data__13TOCapsuleLaboFv },
    { load_warp_beam_resources, free_warp_jung_beam_resources },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_32[5] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_container_fragment_textures__9TLanguageFv, fn_8015C5F8 },
    { load_resources__13TOCapsuleLaboFv, unload_static_data__13TOCapsuleLaboFv },
    { 0, 0 },
};

FloorLifecycleEntry floor_lifecycle_callbacks_floor_33[6] = {
    { load_area_dialogue_script, destroy_quest_obj__12TQuestThreadFv },
    { load_forest_warp_resources, free_globals__12TObjWarpBaseFv },
    { load_container_fragment_textures__9TLanguageFv, fn_8015C5F8 },
    { fn_8030B7B8, fn_8030B7B4 },
    { load_resources__13TOCapsuleLaboFv, unload_static_data__13TOCapsuleLaboFv },
    { 0, 0 },
};

FloorLifecycleEntry* floor_lifecycle_callback_tables[36] = {
    floor_lifecycle_callbacks_floor_00,
    floor_lifecycle_callbacks_floor_01,
    floor_lifecycle_callbacks_floor_02,
    floor_lifecycle_callbacks_floor_03,
    floor_lifecycle_callbacks_floor_04,
    floor_lifecycle_callbacks_floor_05,
    floor_lifecycle_callbacks_floor_06,
    floor_lifecycle_callbacks_floor_07,
    floor_lifecycle_callbacks_floor_08,
    floor_lifecycle_callbacks_floor_09,
    floor_lifecycle_callbacks_floor_10,
    floor_lifecycle_callbacks_floors_11_12,
    floor_lifecycle_callbacks_floors_11_12,
    floor_lifecycle_callbacks_floor_13,
    floor_lifecycle_callbacks_floor_14,
    floor_lifecycle_callbacks_floor_15,
    floor_lifecycle_callbacks_floor_16,
    floor_lifecycle_callbacks_floor_17,
    floor_lifecycle_callbacks_floor_18,
    floor_lifecycle_callbacks_floors_19_20,
    floor_lifecycle_callbacks_floors_19_20,
    floor_lifecycle_callbacks_floors_21_22,
    floor_lifecycle_callbacks_floors_21_22,
    floor_lifecycle_callbacks_floor_23,
    floor_lifecycle_callbacks_floor_24,
    floor_lifecycle_callbacks_floor_25,
    floor_lifecycle_callbacks_floor_26,
    floor_lifecycle_callbacks_floor_27,
    floor_lifecycle_callbacks_floor_28,
    floor_lifecycle_callbacks_floor_29,
    floor_lifecycle_callbacks_floor_30,
    floor_lifecycle_callbacks_floor_31,
    floor_lifecycle_callbacks_floor_32,
    floor_lifecycle_callbacks_floor_33,
    floor_lifecycle_callbacks_floor_34,
    floor_lifecycle_callbacks_floor_35,
};
}
