#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_800F9DF4(int a0);
void TLobby__sub_800F9E18(void);
int TGStream__sub_800FDADC(void);
u32 TLoadCtrl__sub_800F9F00();
M2C_UNK TLobby__sub_800F8AD0();
M2C_UNK TLobby__sub_800F8F34();
s32 all_parents_unqueued_for_destruction__7TObjectFv();
M2C_UNK empty_func2__7TObjectFv(s32);
M2C_UNK empty_func__7TObjectFv(s32);
M2C_UNK fn_80141A30();
M2C_UNK fn_801E2C50();
M2C_UNK TLobby__sub_803382E4();
s8 func_801A5E54__Fv();
M2C_UNK func_803DCDFC__Fv();
s32 is_ready__22TQuestVmDownLoadServerFv();
M2C_UNK render_nodes__7TObjectFv(s32);
M2C_UNK render_tick__Fv();
M2C_UNK run_tasks__7TObjectFv(s32);
M2C_UNK set_depth_buffer_settings_1__Fv();
M2C_UNK system_reset();

    extern int lbl_805D5338;
void TLobby__sub_800F9DF4(int a0) { lbl_805D5338 = a0; TGStream__sub_800FDADC(); }

extern s32 tl_su;
extern s32 tl_camera;
extern s32 tl_07;
extern s32 tl_particle;
extern s32 tl_fade;

void TLobby__sub_800F9E18(void) {
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
    fn_80141A30();
    if (func_801A5E54__Fv() != 0) {
        TLobby__sub_800F8AD0();
    }
    TLobby__sub_803382E4();
    render_tick__Fv();
}

}
