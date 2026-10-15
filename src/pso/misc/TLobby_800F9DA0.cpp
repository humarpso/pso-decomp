#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void read_disc_file(int a0);
int read_whole_file__8TGStreamFlPUc(void);
u32 TLoadCtrl__sub_800F9F00();
s32 TLobby__sub_800F8AD0();
s32 TLobby__sub_800F8F34();
int get_resource_file_size__6TLobbyFv(void*);
s32 TLobby__sub_803382E4();
s32 adxf_get_fsize_byte__6TLobbyFv();
s32 close_adxf_handle__6TLobbyFPv(s32);
s32 adxf_open__6TLobbyFUii(s32, s32);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
s32 empty_func2__7TObjectFv(s32);
s32 empty_func__7TObjectFv(s32);
s32 restore_saved_depth_alpha_state();
s32 fn_801E2C50();
s8 func_801A5E54__Fv();
s32 func_803DCDFC__Fv();
s32 is_ready__22TQuestVmDownLoadServerFv();
s32 render_nodes__7TObjectFv(s32);
s32 render_tick__Fv();
s32 run_tasks__7TObjectFv(s32);
s32 set_depth_buffer_settings_1__Fv();
s32 system_reset();
int update_lobby_scene__6TSceneFv(void* p);

s32 TLobby::get_file_size() {
    s32 temp_r31;
    s32 temp_r3;
    s32 uninit;

    temp_r3 = adxf_open__6TLobbyFUii(uninit, 0);
    if (temp_r3 == 0) {
        return -1;
    }
    temp_r31 = adxf_get_fsize_byte__6TLobbyFv();
    close_adxf_handle__6TLobbyFPv(temp_r3);
    return temp_r31;
}

    extern int disc_read_filename;
void read_disc_file(int a0) { disc_read_filename = a0; read_whole_file__8TGStreamFlPUc(); }

extern s32 tl_su;
extern s32 tl_camera;
extern s32 tl_07;
extern s32 tl_particle;
extern s32 tl_fade;

void TLobby::run_frame() {
    func_803DCDFC__Fv();
    TLobby__sub_800F8F34();
    run_tasks__7TObjectFv(tl_su);
    run_tasks__7TObjectFv(tl_camera);
    run_tasks__7TObjectFv(tl_07);
    run_tasks__7TObjectFv(tl_particle);
    if ((TLoadCtrl__sub_800F9F00() != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0)) {
        run_tasks__7TObjectFv(tl_fade);
    }
    set_depth_buffer_settings_1__Fv();
    render_nodes__7TObjectFv(tl_su);
    render_nodes__7TObjectFv(tl_07);
    render_nodes__7TObjectFv(tl_particle);
    if ((TLoadCtrl__sub_800F9F00() != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0)) {
        render_nodes__7TObjectFv(tl_fade);
    }
    empty_func__7TObjectFv(tl_su);
    empty_func2__7TObjectFv(tl_su);
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        system_reset();
        fn_801E2C50();
    }
    restore_saved_depth_alpha_state();
    if (func_801A5E54__Fv() != 0) {
        TLobby__sub_800F8AD0();
    }
    TLobby__sub_803382E4();
    render_tick__Fv();
}

}
