#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801A4820_main_task { M2C_UNK value; u8 remaining[0x30]; };
typedef char RecoveredGlobal_801A4820_main_task_size[sizeof(RecoveredGlobal_801A4820_main_task) == 0x34 ? 1 : -1];

struct RecoveredGlobal_801A46D8_main_task { M2C_UNK value; u8 remaining[0x30]; };
typedef char RecoveredGlobal_801A46D8_main_task_size[sizeof(RecoveredGlobal_801A46D8_main_task) == 0x34 ? 1 : -1];

struct RecoveredGlobal_801A4610_lbl_804C20E8 {
    M2C_UNK value;
    u8 remaining[0x154];
};

struct RecoveredGlobal_801A4610_lbl_804C2240 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_801A4610_lbl_80515BA0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_801A4610_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_801A400C_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct Pair_801A3CFC { s32 f0; s32 f4; };

struct Entry_801A3CFC {
    u8 pad0[2];
    s16 f2;
    s32 f4;
    s32 f8;
    s32 fC;
    char name[0x10];
};

struct Msg_801A3CFC {
    u8 pad0[0x84];
    Entry_801A3CFC entries[4];
    s8 f104;
    s8 f105;
    s8 f106;
    u8 pad107[0x114 - 0x107];
};

typedef s32 M2C_UNK;
struct VBase_18_801A4268 { char pad[0x18]; };

struct VObj_18_801A4268 : VBase_18_801A4268 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct VBase_18_801A441C { char pad[0x18]; };

struct VObj_18_801A441C : VBase_18_801A441C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

extern "C" {
M2C_UNK THunterGuildSeqOffline__sub_80213430();
M2C_UNK TLobby__sub_80103F68();
M2C_UNK TObjCityMainWarp__sub_80186634();
M2C_UNK TRaderMapCore__sub_801F9540();
M2C_UNK TSwitch__sub_8022942C();
M2C_UNK apply_all_players__9TTecLukerFv();
int clear_counter__6TLobbyFv(void);
M2C_UNK clear_quest_state__6TLobbyFv();
void enable_all_battle_ctrl__10TNpcPlayerFv();
M2C_UNK queue_destruction__7TObjectFv(u32);
M2C_UNK reset_door_state__6TLobbyFv();
M2C_UNK reset_instance__8TObjDoorFv();
M2C_UNK reset_quest_counter__6TLobbyFv();
M2C_UNK set_cleanup_flag__6TLobbyFv();
extern u32 lbl_805D5EE8;
void free_objects__6TLobbyFv(void);
s32 TCameraCtrl__sub_8006B368();
void update_camera_state__6TLobbyFv(void);
M2C_UNK fn_801D9E50(void*);
extern s32 lbl_805D53A4;
extern u32 TLobby__data_805D5580;
extern s32 TLobby__data_805D5E24;
void update_periodic_tick__6TLobbyFv(void);
void TLobby__sub_801A4C6C(void* p);
void set_value__6TLobbyFPvi(void* p, s32 v);
    extern int lbl_805D4E2C;
void reset_counter__6TLobbyFv(void);
s32 get_input__16TKeyBoardControlFv();
int TKeyBoardControl__sub_8000F95C(void);
s32 TKeyBoardControl__sub_8000F968();
M2C_UNK TKeyBoardControl__sub_8000F984();
s32 get_key_state__16TKeyBoardControlFv();
M2C_UNK TKeyBoardControl__sub_8000F9A4();
int TKeyBoardControl__sub_8000F9CC(int);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK TLobby__sub_8006EF90();
M2C_UNK TObjBoss2Tunnel__sub_8007D1D0();
s32 is_ready__22TQuestVmDownLoadServerFv();
M2C_UNK TLobby__sub_800FA464();
M2C_UNK disconnect_protocol__6TLobbyFv();
int TLobby__sub_8013998C(void);
void init_chr_select__6TLobbyFv(void);
M2C_UNK TLobby__sub_801A3E98();
M2C_UNK TLobby__sub_801A40D8();
void update_periodic_tick__6TLobbyFv(void);
s8 func_801A5E54__Fv();
M2C_UNK TKeyBoardControl__sub_801A5EC4();
M2C_UNK controller_stuff__Fv();
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 TAdPlayerLoadGC__sub_801E1E38(int);
M2C_UNK render_tick__Fv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80201650();
M2C_UNK TLobby__sub_802269B4();
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK render_shadows__9TMainTaskFv(void *);
M2C_UNK noop__23TAdSinglePlyChrSelectGCFv();
M2C_UNK func_803DCDFC__Fv();
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 TLobby__data_805D55A8;
extern s32 lbl_805D55C0;
extern s16 TLobby__data_805D5CE8;
extern s32 TLobby__data_805D5CF4;
void TLobby__sub_801A4820(void);
s32 get_input__16TKeyBoardControlFv();
int TKeyBoardControl__sub_8000F95C(void);
s32 TKeyBoardControl__sub_8000F968();
M2C_UNK TKeyBoardControl__sub_8000F984();
s32 get_key_state__16TKeyBoardControlFv();
M2C_UNK TKeyBoardControl__sub_8000F9A4();
int TKeyBoardControl__sub_8000F9CC(int);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK TObjBoss2Tunnel__sub_8007D1D0();
s32 is_ready__22TQuestVmDownLoadServerFv();
M2C_UNK TLobby__sub_800FA464();
M2C_UNK disconnect_protocol__6TLobbyFv();
int TLobby__sub_8013998C(void);
void reset_to_chr_select__6TLobbyFv(void);
M2C_UNK TLobby__sub_801A3E98();
M2C_UNK TLobby__sub_801A40D8();
void update_periodic_tick__6TLobbyFv(void);
s8 func_801A5E54__Fv();
M2C_UNK TKeyBoardControl__sub_801A5EC4();
M2C_UNK controller_stuff__Fv();
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 TAdPlayerLoadGC__sub_801E1E38(int);
M2C_UNK render_tick__Fv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80201650();
M2C_UNK TLobby__sub_802269B4();
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK render_shadows__9TMainTaskFv(void *);
M2C_UNK noop__23TAdSinglePlyChrSelectGCFv();
M2C_UNK func_803DCDFC__Fv();
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 TLobby__data_805D55A8;
extern s32 lbl_805D55C0;
extern s32 TLobby__data_805D5CF4;
void TLobby__sub_801A46D8(void);
M2C_UNK update__16TKeyBoardControlFv();
M2C_UNK TLobby__sub_800F9B84();
M2C_UNK TLobby__sub_800FD6A0(void *, int);
int TLobby__sub_8013998C(void);
M2C_UNK cleanup__6TLobbyFv();
void free_objects__6TLobbyFv(void);
M2C_UNK render_tick__Fv();
M2C_UNK update_lobby_subsystems__6TLobbyFv();
M2C_UNK TLobby__sub_8022743C();
M2C_UNK TLobby__sub_80228634(void *);
M2C_UNK clear_flag3_all_tasks__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK delete_children__7TObjectFv(int);
M2C_UNK free_single_player_chr_select__6TLobbyFv();
M2C_UNK update_photon_chairs__6TLobbyFv();
M2C_UNK PPCSync();
extern RecoveredGlobal_801A4610_lbl_804C20E8 lbl_804C20E8;
extern RecoveredGlobal_801A4610_lbl_804C2240 lbl_804C2240;
extern unsigned char lbl_80515BA0[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 lbl_805D53A0;
extern s32 lbl_805D5CF0;
extern s32 TLobby__data_805D5E24;
extern M2C_UNK *tl_su;
void TLobby__sub_801A4610(void);
M2C_UNK set_field1C__9TLoadCtrlFi(int);
M2C_UNK debug_print__FPCc(void *);
M2C_UNK TLobby__sub_800FA464();
M2C_UNK TKeyBoardControl__sub_801A5EC4();
M2C_UNK controller_stuff__Fv();
M2C_UNK render_tick__Fv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80201650();
M2C_UNK TLobby__sub_802269B4();
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK run_tl_camera_tasks__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK noop__23TAdSinglePlyChrSelectGCFv();
M2C_UNK func_803DCDFC__Fv();
extern M2C_UNK lbl_80446930[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 lbl_805D5718;
void TLobby__sub_801A400C(void* _w0);
void __construct_array(void *, void *, int, int, int);
void TLobby__sub_8013A23C(void);
s32 TLobby__sub_801A3DF0(s32 arg0);
void bswap_32__FPUl(void *);
void TLobby__sub_801A3E38(u8 *arg0);
s32 TLobby__sub_80135208(s32);
s32 TLobby__sub_80136C94(void *);
s32 TLobby__sub_801A3DF0(s32 arg0);
void TLobby__sub_801A3E38(u8 *arg0);
M2C_UNK delete_children__7TObjectFv(int);
char *strcpy(char *, const char *);
void *memset(void *, int, u32);
extern char lbl_80446918[];
extern char lbl_80446924[];
extern Pair_801A3CFC lbl_804C2288[];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
extern s32 lbl_805D5E48;
void TLobby__sub_801A3CFC(void);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK update__16TKeyBoardControlFv();
M2C_UNK get_current_floor();
M2C_UNK cleanup_scene__9TLoadCtrlFv();
M2C_UNK TLoadCtrl__sub_8001C978(M2C_UNK);
M2C_UNK set_enemy_mode_flag__6TLobbyFv();
M2C_UNK TLobby__sub_800FA260();
M2C_UNK TLobby__sub_800FD614(void *, s32);
M2C_UNK TLobby__sub_80137928();
M2C_UNK reset_state_flags__6TLobbyFv();
M2C_UNK create_map_csn_ctrl__6TLobbyFv();
M2C_UNK TObjCityMainWarp__sub_801865B4();
void free_objects__6TLobbyFv(void);
int TKeyBoardControl__sub_801A66B8(void);
M2C_UNK TObjPlayer__sub_801B1BA4();
M2C_UNK TObjPlayer__sub_801B1C8C();
void *get_player_by_client_id(s32);
M2C_UNK render_tick__Fv();
M2C_UNK create_quad_sprites__13TParticleCtrlFv();
M2C_UNK TLobby__sub_801F3DEC();
M2C_UNK setup_quest_list__6TLobbyFv();
M2C_UNK TQuestThread__sub_801F5B5C();
void *__ct__12TQuestThreadFv(void *, u32, M2C_UNK);
M2C_UNK TQuestThread__sub_801F5DA8();
M2C_UNK TQuestThread__sub_801F60DC();
M2C_UNK sync_story_select__6TLobbyFv();
M2C_UNK set_state__16TAdStorySelectGCFi(M2C_UNK);
M2C_UNK get_team_state__6TLobbyFPv();
M2C_UNK TLobby__sub_8020DC78();
M2C_UNK TQuestListOnline__sub_8021786C();
M2C_UNK update_lobby_subsystems__6TLobbyFv();
M2C_UNK TLobby__sub_8022743C();
M2C_UNK TLobby__sub_802286C4(void *);
M2C_UNK TLobby__sub_80228754(void *);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_parent__7TObjectFP7TObject(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject(void *, M2C_UNK);
extern u8 TLobby__data_805011D8[];
extern unsigned char lbl_80515BA0[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 TLobby__data_805D53AC;
extern u32 lbl_805D5EE8;
extern void *tl_03;
M2C_UNK TLobby__sub_801A4268(void);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK update__16TKeyBoardControlFv();
M2C_UNK get_current_floor();
M2C_UNK cleanup_scene__9TLoadCtrlFv();
M2C_UNK TLoadCtrl__sub_8001C978(M2C_UNK);
M2C_UNK reset_keyboard_state__6TLobbyFv();
s32 TLobby__sub_800F8AE8();
M2C_UNK clear_callback_and_reset_keyboard__6TLobbyFv();
M2C_UNK TLobby__sub_800F8B20();
M2C_UNK TLobby__sub_800FA260();
M2C_UNK TLobby__sub_800FD614(void *, s32);
M2C_UNK TLobby__sub_800FD6F8(void *, M2C_UNK);
M2C_UNK TLobby__sub_80103F68();
M2C_UNK TLobby__sub_8011AFB8();
M2C_UNK TLobby__sub_80137928();
M2C_UNK reset_state_flags__6TLobbyFv();
M2C_UNK create_map_csn_ctrl__6TLobbyFv();
M2C_UNK TObjCityMainWarp__sub_801865B4();
M2C_UNK init_limits__6TLobbyFv();
void TLobby__sub_801A3E94(void);
M2C_UNK TAdDialingGC__sub_801A4C90();
int TKeyBoardControl__sub_801A66B8(void);
M2C_UNK TObjPlayer__sub_801B1BA4();
M2C_UNK TObjPlayer__sub_801B1C8C();
void *get_player_by_client_id(s32);
M2C_UNK render_tick__Fv();
M2C_UNK create_quad_sprites__13TParticleCtrlFv();
M2C_UNK TQuestThread__sub_801F5B5C();
void *__ct__12TQuestThreadFv(void *, u32, M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FF5E4(M2C_UNK);
M2C_UNK TLobby__sub_80207E24(void *, M2C_UNK);
M2C_UNK TLobby__sub_8022743C();
M2C_UNK clear_ready_flag_unless_locked__6TLobbyFPv(void *);
M2C_UNK TLobby__sub_802286C4(void *);
M2C_UNK TLobby__sub_80228754(void *);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_parent__7TObjectFP7TObject(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject(void *, M2C_UNK);
extern RecoveredGlobal_801A4610_lbl_804C2240 lbl_804C2240;
extern u8 TLobby__data_805011D8[];
extern u8 game_variations[];
extern unsigned char lbl_80515BA0[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 TLobby__data_805D53AC;
extern int TLobby__data_805D5CEC;
extern u32 lbl_805D5EEC;
extern void *tl_03;
M2C_UNK TLobby__sub_801A441C(void);
M2C_UNK update__16TKeyBoardControlFv();
M2C_UNK TKeyBoardControl__sub_8000F90C(int);
int TKeyBoardControl__sub_8000F91C(int);
M2C_UNK TKeyBoardControl__sub_8000F9A4();
int TKeyBoardControl__sub_8000F9CC(int);
M2C_UNK set_field1C__9TLoadCtrlFi(int);
M2C_UNK cleanup_scene__9TLoadCtrlFv();
M2C_UNK poll_default__9TLoadCtrlFv();
M2C_UNK reset_keyboard_state__6TLobbyFv();
s32 TLobby__sub_800F8AE8();
M2C_UNK clear_callback_and_reset_keyboard__6TLobbyFv();
M2C_UNK TLobby__sub_800F8B20();
M2C_UNK invoke_callback__6TLobbyFv();
M2C_UNK TLobby__sub_800F9B84();
M2C_UNK TLobby__sub_800FA464();
M2C_UNK TLobby__sub_800FD6F8(void *, M2C_UNK);
M2C_UNK init_range__6TLobbyFPvi(void *, int);
M2C_UNK TLobby__sub_80137928();
M2C_UNK reset_state_flags__6TLobbyFv();
M2C_UNK TLobby__sub_801399B8(void *);
void *TLobby__ct(void *, void *);
M2C_UNK create_map_csn_ctrl__6TLobbyFv();
s32 TLobby__sub_80146908();
M2C_UNK set_scene__6TSceneFi(int);
void TLobby__sub_801A3CF8(void);
void TLobby__sub_801A3CFC(void);
int TLobby__sub_801A3E8C(void);
void set_value__6TLobbyFPvi(void* p, s32 v);
u32 TAdDialingGC__sub_801A4C9C();
s8 func_801A5E54__Fv();
M2C_UNK TKeyBoardControl__sub_801A5EC4();
M2C_UNK controller_stuff__Fv();
int TKeyBoardControl__sub_801A66B8(void);
M2C_UNK TLobby__sub_801E2F44(int, int, int);
M2C_UNK render_tick__Fv();
M2C_UNK TGameProtocol__ct(void *, void *);
M2C_UNK create_quad_sprites__13TParticleCtrlFv();
M2C_UNK TLobby__sub_801F3774();
int init__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80201650();
M2C_UNK TLobby__sub_80203470(int);
M2C_UNK TLobby__sub_80207F10();
M2C_UNK TLobby__sub_8020A6B0(int);
M2C_UNK TLobby__sub_8020B118();
M2C_UNK TLobby__sub_802269B4();
M2C_UNK TLobby__sub_802286C4(void *);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TAdDialingGC__sub_80328730();
M2C_UNK create__12TAdDialingGCFv(void *);
M2C_UNK close__12TAdDialingGCFv();
M2C_UNK open__12TAdDialingGCFv();
M2C_UNK func_803DCDFC__Fv();
extern RecoveredGlobal_801A4610_lbl_804C20E8 lbl_804C20E8;
extern unsigned char lbl_80515BA0[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 lbl_805D53A4;
extern s16 TLobby__data_805D5CE8;
extern int TLobby__data_805D5CEC;
extern s32 lbl_805D5CF0;
extern s32 TLobby__data_805D5CF4;
extern s32 TLobby__data_805D5E24;
extern M2C_UNK *tl_su;
extern void *tl_window;
void TLobby__sub_801A49B0(void);
}

extern "C" {

void TLobby__sub_801A3CF8(void);
int TLobby__sub_801A3E8C(void);
void TLobby__sub_801A3E94(void);
void init_chr_select__6TLobbyFv(void);
void reset_to_chr_select__6TLobbyFv(void);
void send_and_handle__6TLobbyFPv(void* p);
void set_flag_and_update__6TLobbyFv(void);
int TKeyBoardControl__sub_8000F91C(int);
int TKeyBoardControl__sub_8000F95C(void);
int TKeyBoardControl__sub_8000F9CC(int);
int TKeyBoardControl__sub_801A66B8(void);
int TLobby__sub_8013998C(void);
int clear_counter__6TLobbyFv(void);
int init__23TAdSinglePlyChrSelectGCFv(void);
int reset__16TKeyBoardControlFv(void);

    extern unsigned char lbl_80515BA0[];
    extern int TLobby__data_805D5CEC;
void set_flag_and_update__6TLobbyFv(void) { TLobby__data_805D5CEC = (TLobby__data_805D5CEC | 0x1); TLobby__sub_801A4C6C((void*)(lbl_80515BA0)); }

void init_chr_select__6TLobbyFv(void) { reset__16TKeyBoardControlFv(); TLobby__sub_8013998C(); init__23TAdSinglePlyChrSelectGCFv(); TKeyBoardControl__sub_8000F91C(9); TKeyBoardControl__sub_8000F9CC(18); }
void reset_to_chr_select__6TLobbyFv(void) { TKeyBoardControl__sub_801A66B8(); TLobby__sub_8013998C(); free_objects__6TLobbyFv(); TKeyBoardControl__sub_8000F95C(); clear_counter__6TLobbyFv(); init__23TAdSinglePlyChrSelectGCFv(); TKeyBoardControl__sub_8000F91C(9); TKeyBoardControl__sub_8000F9CC(18); }
void TLobby__sub_801A3CF8(void) {  }

void TLobby__sub_801A3CFC(void) {
    Msg_801A3CFC msg;
    TLobby__sub_801A3E38((u8 *)&lbl_804C2288[0]);
    TLobby__sub_801A3E38((u8 *)&lbl_804C2288[1]);
    TLobby__sub_801A3DF0((s32)&msg);
    memset(&msg, 0, 0x114);
    msg.f104 = lbl_805D53A0;
    msg.f105 = TLobby__data_805D53AC;
    msg.f106 = 0;
    msg.entries[0].f2 = 1;
    msg.entries[0].f4 = 0x013158B7;
    msg.entries[0].f8 = lbl_804C2288[0].f4;
    msg.entries[0].fC = 0;
    strcpy(msg.entries[0].name, lbl_80446918);
    msg.entries[1].f2 = 1;
    msg.entries[1].f4 = 0x013158B8;
    msg.entries[1].f8 = lbl_804C2288[1].f4;
    msg.entries[1].fC = 1;
    strcpy(msg.entries[1].name, lbl_80446924);
    TLobby__sub_80136C94(&msg);
    delete_children__7TObjectFv(lbl_805D5E48);
    TLobby__sub_80135208(1 - lbl_805D53A0);
}

s32 TLobby__sub_801A3DF0(s32 arg0) {
    __construct_array((void *)(arg0 + 0x84), (void *)TLobby__sub_8013A23C, 0, 0x20, 4);
    return arg0;
}

void TLobby__sub_801A3E38(u8 *arg0) {
    *(u32 *)(arg0 + 4) = arg0[0] + (arg0[1] << 8) + (arg0[2] << 16) + (arg0[3] << 24);
    bswap_32__FPUl(arg0 + 4);
}

int TLobby__sub_801A3E8C(void) { return 0; }
void TLobby__sub_801A3E94(void) {  }

void send_and_handle__6TLobbyFPv(void* p) { TLobby__sub_801A400C((void*)(p)); }

typedef char RecoveredGlobal_801A400C_main_task_size[sizeof(RecoveredGlobal_801A400C_main_task) == 0x34 ? 1 : -1];
void TLobby__sub_801A400C(void* _w0) {
    set_field1C__9TLoadCtrlFi((int) (0));
    func_803DCDFC__Fv();
    if ((s32) lbl_805D5718 != 0) {
        some_empty_func__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        run_tl_camera_tasks__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        render__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        render_screen_overlay__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        debug_print__FPCc((void *) (lbl_80446930));
        render_tick__Fv();
    } else {
        controller_stuff__Fv();
        TKeyBoardControl__sub_801A5EC4();
        some_empty_func__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        run_task__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        render__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        render_screen_overlay__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        TLobby__sub_800FA464();
        TLobby__sub_802269B4();
        TAdSinglePlyChrSelectGC__sub_80201650();
        noop__23TAdSinglePlyChrSelectGCFv();
    }
    set_field1C__9TLoadCtrlFi((int) (1));
    render_tick__Fv();
}

void free_objects__6TLobbyFv(void) {
    TRaderMapCore__sub_801F9540();
    TSwitch__sub_8022942C();
    apply_all_players__9TTecLukerFv();
    TLobby__sub_80103F68();
    enable_all_battle_ctrl__10TNpcPlayerFv();
    if ((u32) lbl_805D5EE8 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D5EE8);
    }
    TObjCityMainWarp__sub_80186634();
    THunterGuildSeqOffline__sub_80213430();
    clear_counter__6TLobbyFv();
    reset_door_state__6TLobbyFv();
    reset_instance__8TObjDoorFv();
    set_cleanup_flag__6TLobbyFv();
    reset_quest_counter__6TLobbyFv();
    clear_quest_state__6TLobbyFv();
}

typedef char RecoveredGlobal_801A4610_lbl_804C20E8_size[sizeof(RecoveredGlobal_801A4610_lbl_804C20E8) == 0x158 ? 1 : -1];
typedef char RecoveredGlobal_801A4610_lbl_804C2240_size[sizeof(RecoveredGlobal_801A4610_lbl_804C2240) == 0x48 ? 1 : -1];
typedef char RecoveredGlobal_801A4610_lbl_80515BA0_size[sizeof(RecoveredGlobal_801A4610_lbl_80515BA0) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_801A4610_main_task_size[sizeof(RecoveredGlobal_801A4610_main_task) == 0x34 ? 1 : -1];

M2C_UNK TLobby__sub_801A4268(void) {
    u8 tmp[0x1C];
    s32 i;
    s32 j;
    VObj_18_801A4268 *q;
    VObj_18_801A4268 *p;
    __ct__7TObjectFP7TObject(tmp, 0);
    reset_state_flags__6TLobbyFv();
    TObjPlayer__sub_801B1C8C();
    TLobby__sub_8022743C();
    update_lobby_subsystems__6TLobbyFv();
    TLobby__sub_800FA260();
    TKeyBoardControl__sub_801A66B8();
    render_tick__Fv();
    render_tick__Fv();
    TLobby__sub_800FD614(TLobby__data_805011D8, TLobby__data_805D53AC);
    for (i = 0; i < 12; i++) {
        p = (VObj_18_801A4268 *) get_player_by_client_id(i);
        if (p != NULL) {
            set_parent__7TObjectFP7TObject(p, tmp);
        }
    }
    delete_all_task_children__9TMainTaskFv(&main_task.value);
    TLobby__sub_80228754(lbl_80515BA0);
    sync_story_select__6TLobbyFv();
    set_state__16TAdStorySelectGCFi(0);
    update__16TKeyBoardControlFv();
    free_objects__6TLobbyFv();
    get_team_state__6TLobbyFPv();
    TLobby__sub_8020DC78();
    TQuestThread__sub_801F5DA8();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    TLoadCtrl__sub_8001C978(1);
    TQuestThread__sub_801F60DC();
    TLobby__sub_801F3DEC();
    if (lbl_805D5EE8 != 0) {
        q = (VObj_18_801A4268 *) __nw__7TObjectFUl(0x194);
        if (q != NULL) {
            q = (VObj_18_801A4268 *) __ct__12TQuestThreadFv(q, lbl_805D5EE8, 0);
        }
        q->m1();
    }
    setup_quest_list__6TLobbyFv();
    set_enemy_mode_flag__6TLobbyFv();
    TQuestListOnline__sub_8021786C();
    TLobby__sub_802286C4(lbl_80515BA0);
    get_current_floor();
    TObjCityMainWarp__sub_801865B4();
    cleanup_scene__9TLoadCtrlFv();
    some_empty_func__9TMainTaskFv(&main_task.value);
    run_task__9TMainTaskFv(&main_task.value);
    render_screen_overlay__9TMainTaskFv(&main_task.value);
    for (j = 0; j < 12; j++) {
        p = (VObj_18_801A4268 *) get_player_by_client_id(j);
        if (p != NULL) {
            set_parent__7TObjectFP7TObject(p, tl_03);
            p->m6();
        }
    }
    TLobby__sub_80137928();
    TObjPlayer__sub_801B1BA4();
    TQuestThread__sub_801F5B5C();
    __dt__7TObjectFv(tmp, -1);
}

M2C_UNK TLobby__sub_801A441C(void) {
    u8 tmp[0x1C];
    s32 i;
    s32 j;
    s32 r;
    void *q;
    VObj_18_801A441C *p;
    __ct__7TObjectFP7TObject(tmp, 0);
    reset_state_flags__6TLobbyFv();
    TObjPlayer__sub_801B1C8C();
    TLobby__sub_8022743C();
    TLobby__sub_800FA260();
    TKeyBoardControl__sub_801A66B8();
    render_tick__Fv();
    render_tick__Fv();
    TLobby__sub_800FD614(TLobby__data_805011D8, TLobby__data_805D53AC);
    for (i = 0; i < 12; i++) {
        p = (VObj_18_801A441C *) get_player_by_client_id(i);
        if (p != NULL) {
            set_parent__7TObjectFP7TObject(p, tmp);
        }
    }
    delete_all_task_children__9TMainTaskFv(&main_task.value);
    TLobby__sub_80228754(lbl_80515BA0);
    clear_ready_flag_unless_locked__6TLobbyFPv(lbl_80515BA0);
    update__16TKeyBoardControlFv();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    TLoadCtrl__sub_8001C978(2);
    if (TLobby__data_805D5CEC & 1) {
        TLobby__data_805D5CEC &= ~1;
        init_limits__6TLobbyFv();
        TAdDialingGC__sub_801A4C90();
        TLobby__sub_80207E24(game_variations, 0x80);
        TLobby__sub_800F8B20();
        TLobby__sub_800FD6F8(&lbl_804C2240.value, 0x48);
        TLobby__sub_8011AFB8();
        TLobby__sub_80103F68();
    }
    r = ((s32)TLobby__sub_802286C4(lbl_80515BA0));
    get_current_floor();
    TObjCityMainWarp__sub_801865B4();
    cleanup_scene__9TLoadCtrlFv();
    some_empty_func__9TMainTaskFv(&main_task.value);
    run_task__9TMainTaskFv(&main_task.value);
    render_screen_overlay__9TMainTaskFv(&main_task.value);
    for (j = 0; j < 12; j++) {
        p = (VObj_18_801A441C *) get_player_by_client_id(j);
        if (p != NULL) {
            set_parent__7TObjectFP7TObject(p, tl_03);
            p->m6();
        }
    }
    if (r != 0) {
        TLobby__sub_801A3E94();
    }
    TObjPlayer__sub_801B1BA4();
    TLobby__sub_80137928();
    TQuestThread__sub_801F5B5C();
    if (r != 0) {
        TAdSinglePlyChrSelectGC__sub_801FF5E4(0);
    }
    if (lbl_805D5EEC != 0) {
        q = __nw__7TObjectFUl(0x194);
        if (q != NULL) {
            __ct__12TQuestThreadFv(q, lbl_805D5EEC, 0);
        }
    }
    if (TLobby__sub_800F8AE8() != 0) {
        reset_keyboard_state__6TLobbyFv();
        clear_callback_and_reset_keyboard__6TLobbyFv();
    }
    clear_callback_and_reset_keyboard__6TLobbyFv();
    __dt__7TObjectFv(tmp, -1);
}

void TLobby__sub_801A4610(void) {
    M2C_UNK *var_r3;
    s32 var_r31;
    s32 var_r4;
    TLobby__sub_8022743C();
    update_lobby_subsystems__6TLobbyFv();
    TLobby__sub_8013998C();
    free_objects__6TLobbyFv();
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value);
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value);
    delete_all_task_children__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value));
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value);
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value);
    clear_flag3_all_tasks__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value));
    var_r3 = (M2C_UNK *)((u8 *)(tl_su));
    delete_children__7TObjectFv((int) (var_r3));
    PPCSync();
    var_r31 = 0;
    do {
        render_tick__Fv();
        var_r31 += 1;
    } while (var_r31 < 0x1E);
    cleanup__6TLobbyFv();
    if ((s32) lbl_805D5CF0 == 0) {
        var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_801A4610_lbl_80515BA0 *)&lbl_80515BA0).value);
        var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_801A4610_lbl_80515BA0 *)&lbl_80515BA0).value);
        TLobby__sub_80228634((void *) (&(*(RecoveredGlobal_801A4610_lbl_80515BA0 *)&lbl_80515BA0).value));
    }
    free_single_player_chr_select__6TLobbyFv();
    update_photon_chairs__6TLobbyFv();
    var_r3 = (M2C_UNK *)(&lbl_804C2240.value);
    var_r4 = 0x48;
    var_r3 = (M2C_UNK *)(&lbl_804C2240.value);
    TLobby__sub_800FD6A0((void *) (&lbl_804C2240.value), (int) (0x48));
    var_r3 = (M2C_UNK *)(&lbl_804C20E8.value);
    var_r4 = 0x158;
    var_r3 = (M2C_UNK *)(&lbl_804C20E8.value);
    TLobby__sub_800FD6A0((void *) (&lbl_804C20E8.value), (int) (0x158));
    lbl_805D53A0 = 0;
    TLobby__data_805D5E24 = 0;
    TLobby__sub_800F9B84();
    update__16TKeyBoardControlFv();
    render_tick__Fv();
}

void TLobby__sub_801A46D8(void) {
    s32 temp_r0;
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    TKeyBoardControl__sub_801A5EC4();
    some_empty_func__9TMainTaskFv((void *) (&main_task.value));
    run_task__9TMainTaskFv((void *) (&main_task.value));
    render_shadows__9TMainTaskFv((void *) (&main_task.value));
    render__9TMainTaskFv((void *) (&main_task.value));
    render_screen_overlay__9TMainTaskFv((void *) (&main_task.value));
    TLobby__sub_800FA464();
    TLobby__sub_802269B4();
    TAdSinglePlyChrSelectGC__sub_80201650();
    noop__23TAdSinglePlyChrSelectGCFv();
    TObjBoss2Tunnel__sub_8007D1D0();
    if (((s32) lbl_805D55C0 == 0) && (TAdPlayerLoadGC__sub_801E1B50((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != -1)) {
        if (TAdPlayerLoadGC__sub_801E1E38((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != 0) {
            TLobby__data_805D5CF4 = 0;
        } else {
            temp_r0 = TLobby__data_805D5CF4 + 1;
            TLobby__data_805D5CF4 = temp_r0;
            if (temp_r0 > 0xC) {
                disconnect_protocol__6TLobbyFv();
            }
        }
    }
    update_periodic_tick__6TLobbyFv();
    if ((func_801A5E54__Fv() != 0) || ((s32) TLobby__data_805D55A8 == 1)) {
        reset_to_chr_select__6TLobbyFv();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        TLobby__sub_8013998C();
        TKeyBoardControl__sub_8000F9CC((int) (0));
    }
    if (get_key_state__16TKeyBoardControlFv() != 0) {
        TLobby__sub_801A441C();
        TKeyBoardControl__sub_8000F9A4();
    }
    if (TKeyBoardControl__sub_8000F968() != 0) {
        TLobby__sub_801A40D8();
        TKeyBoardControl__sub_8000F984();
    }
    if (get_input__16TKeyBoardControlFv() != 0) {
        TLobby__sub_801A3E98();
        TKeyBoardControl__sub_8000F95C();
    }
    render_tick__Fv();
}

void TLobby__sub_801A4820(void) {
    s32 temp_r0;
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    TKeyBoardControl__sub_801A5EC4();
    some_empty_func__9TMainTaskFv((void *) (&main_task.value));
    run_task__9TMainTaskFv((void *) (&main_task.value));
    render_shadows__9TMainTaskFv((void *) (&main_task.value));
    render__9TMainTaskFv((void *) (&main_task.value));
    render_screen_overlay__9TMainTaskFv((void *) (&main_task.value));
    TLobby__sub_800FA464();
    TLobby__sub_802269B4();
    TAdSinglePlyChrSelectGC__sub_80201650();
    noop__23TAdSinglePlyChrSelectGCFv();
    TObjBoss2Tunnel__sub_8007D1D0();
    TLobby__sub_8006EF90();
    if (((s32) lbl_805D55C0 == 0) && (TAdPlayerLoadGC__sub_801E1B50((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != -1)) {
        if (TAdPlayerLoadGC__sub_801E1E38((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != 0) {
            TLobby__data_805D5CF4 = 0;
        } else {
            temp_r0 = TLobby__data_805D5CF4 + 1;
            TLobby__data_805D5CF4 = temp_r0;
            if (temp_r0 > 0xC) {
                disconnect_protocol__6TLobbyFv();
            }
        }
    }
    update_periodic_tick__6TLobbyFv();
    if (get_input__16TKeyBoardControlFv() != 0) {
        TLobby__sub_801A4268();
        TKeyBoardControl__sub_8000F95C();
    }
    if (get_key_state__16TKeyBoardControlFv() != 0) {
        TLobby__sub_801A441C();
        TKeyBoardControl__sub_8000F9A4();
    }
    if (TKeyBoardControl__sub_8000F968() != 0) {
        TLobby__sub_801A40D8();
        TKeyBoardControl__sub_8000F984();
    }
    if ((s16) TLobby__data_805D5CE8 == 1) {
        TLobby__sub_801A3E98();
    }
    if ((func_801A5E54__Fv() != 0) || ((s32) TLobby__data_805D55A8 == 1)) {
        init_chr_select__6TLobbyFv();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        TLobby__sub_8013998C();
        TKeyBoardControl__sub_8000F9CC((int) (0));
    }
    render_tick__Fv();
}

void update_camera_state__6TLobbyFv(void) {
    if (TCameraCtrl__sub_8006B368() != 0) {
        TLobby__sub_801A46D8();
        return;
    }
    TLobby__sub_801A4820();
}

void TLobby__sub_801A49B0(void) {
    void *lobby;
    void *p;
    TLobby__data_805D5CEC = 0;
    TLobby__data_805D5E24 = 0;
    TLobby__sub_801E2F44(0, 0, 0);
    update__16TKeyBoardControlFv();
    TLobby__sub_801F3774();
    TKeyBoardControl__sub_801A66B8();
    TKeyBoardControl__sub_8000F9A4();
    TKeyBoardControl__sub_8000F90C(2);
    TKeyBoardControl__sub_8000F91C(0xF);
    TLobby__sub_800F9B84();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    poll_default__9TLoadCtrlFv();
    reset_keyboard_state__6TLobbyFv();
    TLobby__sub_800F8B20();
    TLobby__sub_800FD6F8((void *)(&lbl_804C20E8.value), (M2C_UNK)(0x158));
    if (TLobby__sub_800F8AE8() != 0) {
        reset_keyboard_state__6TLobbyFv();
        invoke_callback__6TLobbyFv();
        clear_callback_and_reset_keyboard__6TLobbyFv();
        cleanup_scene__9TLoadCtrlFv();
        return;
    }
    clear_callback_and_reset_keyboard__6TLobbyFv();
    TLobby__sub_80207F10();
    TLobby__sub_8020A6B0(0xF);
    open__12TAdDialingGCFv();
    create__12TAdDialingGCFv(tl_window);
    lbl_805D5CF0 = TLobby__sub_80146908();
    TAdDialingGC__sub_80328730();
    set_field1C__9TLoadCtrlFi(0);
    while (TAdDialingGC__sub_801A4C9C() != 0) {
        func_803DCDFC__Fv();
        controller_stuff__Fv();
        TKeyBoardControl__sub_801A5EC4();
        some_empty_func__9TMainTaskFv(&main_task.value);
        run_task__9TMainTaskFv(&main_task.value);
        render__9TMainTaskFv(&main_task.value);
        render_screen_overlay__9TMainTaskFv(&main_task.value);
        TLobby__sub_800FA464();
        TLobby__sub_802269B4();
        TAdSinglePlyChrSelectGC__sub_80201650();
        if (func_801A5E54__Fv() != 0) {
            break;
        }
        render_tick__Fv();
    }
    set_field1C__9TLoadCtrlFi(1);
    close__12TAdDialingGCFv();
    if (lbl_805D5CF0 != 0) {
        init__23TAdSinglePlyChrSelectGCFv();
        TKeyBoardControl__sub_8000F91C(2);
        TKeyBoardControl__sub_8000F9CC(0x12);
        cleanup_scene__9TLoadCtrlFv();
    } else {
        lobby = __nw__7TObjectFUl((M2C_UNK)(0x1C));
        if (lobby != NULL) {
            lobby = TLobby__ct(lobby, tl_su);
        }
        p = __nw__7TObjectFUl((M2C_UNK)(0x20));
        if (p != NULL) {
            TGameProtocol__ct(p, tl_su);
        }
        TLobby__sub_801A3CF8();
        reset_state_flags__6TLobbyFv();
        if (TLobby__sub_801A3E8C() != 0) {
            TLobby__sub_8020B118();
            init_range__6TLobbyFPvi(lbl_80515BA0, 0);
        } else {
            init_range__6TLobbyFPvi(lbl_80515BA0, 0xF);
            set_value__6TLobbyFPvi((void*)(lbl_80515BA0), (s32)(0));
            TLobby__sub_80203470(0xF);
            set_scene__6TSceneFi(0);
        }
        TLobby__sub_802286C4(lbl_80515BA0);
        cleanup_scene__9TLoadCtrlFv();
        TLobby__sub_80137928();
        some_empty_func__9TMainTaskFv(&main_task.value);
        run_task__9TMainTaskFv(&main_task.value);
        render_screen_overlay__9TMainTaskFv(&main_task.value);
        if (TLobby__sub_801A3E8C() != 0) {
            TLobby__sub_801A3CFC();
        } else {
            TLobby__sub_801399B8(lobby);
        }
    }
    lbl_805D53A4 = 0;
    TLobby__data_805D5CE8 = 0;
    TLobby__data_805D5CF4 = 0;
    render_tick__Fv();
}

void update_periodic_tick__6TLobbyFv(void) {
    if ((TLobby__data_805D5E24 & 1) && ((lbl_805D53A4 % 900) == 0) && ((u32) TLobby__data_805D5580 != 0U)) {
        fn_801D9E50((void*)TLobby__data_805D5580);
    }
}
void TLobby__sub_801A4C6C(void* p) { *(u32*)((char*)p + 0x20) |= 0x1; }
void set_value__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }
void reset_counter__6TLobbyFv(void) { lbl_805D4E2C = 0; }

}
