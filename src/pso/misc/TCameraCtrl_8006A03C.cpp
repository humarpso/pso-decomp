#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_8006A044 { u8 pad[0x1c0]; s32 id; f32 v; };

typedef s32 M2C_UNK;
struct Big_8006A13C { u8 pad[0x70]; u8 unk70[0x10]; };

struct Sel_8006A13C { u8 busy; u8 pad1; u16 slot; u8 pad4[0xC]; };

extern "C" {
extern void *camera_ctrl_instance;
M2C_UNK queue_event_1D__12TBoss3VoloptFss(M2C_UNK, M2C_UNK, void *);
void TCameraCtrl__sub_8006A044(s32 id, f32 v);
s32 obj_testFlags30(u32, M2C_UNK);
s32 is_split_screen();
s32 get_field_3e4__10TObjPlayerFPv(u32);
M2C_UNK reset_cameras_to_actor(u32, M2C_UNK);
s32 is_quest_active();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, M2C_UNK);
M2C_UNK refresh_equipment_slot__10TObjPlayerFv(u32);
u32 get_player_by_client_id(s32);
s32 get_global_state__14TOKeyMachine01Fv();
extern Sel_8006A13C TCameraCtrl__view_state;
extern Big_8006A13C controller_input_state;
extern s32 local_client_id;
void cycle_spectate_target__11TCameraCtrlFv(void);
}

extern "C" {

void* get_params__11TCameraCtrlFPv(void* p);
void set_shake_preset__11TCameraCtrlFi(s32 arg0);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(M2C_UNK, M2C_UNK, void *);

void* get_params__11TCameraCtrlFPv(void* p) { return (char*)p + 0x20; }

extern void *camera_ctrl_instance;
extern const f32 lbl_805D8FE8;
extern const f32 lbl_805D8FEC;
extern const f32 lbl_805D8FF0;

void TCameraCtrl__sub_8006A044(s32 id, f32 v) {
    O_8006A044 *p;
    if ((*(O_8006A044 * *)&camera_ctrl_instance) != 0) {
        (*(O_8006A044 * *)&camera_ctrl_instance)->v = v;
        p = (*(O_8006A044 * *)&camera_ctrl_instance);
        p->id = id;
        queue_event_1D__12TBoss3VoloptFss((M2C_UNK)(0x60), (M2C_UNK)((s16)id), (void *)(p));
    }
}

void set_shake_preset__11TCameraCtrlFi(s32 arg0) {
    void *p;

    if ((void *) camera_ctrl_instance != NULL) {
        switch (arg0) {
        case 0:
            M2C_FIELD(camera_ctrl_instance, s32 *, 0x1C0) = 0x14;
            p = camera_ctrl_instance;
            M2C_FIELD(p, f32 *, 0x1C4) = (f32) lbl_805D8FE8;
            queue_event_1D__12TBoss3VoloptFss(0x60, 0x14, p);
            return;
        case 1:
            M2C_FIELD(camera_ctrl_instance, s32 *, 0x1C0) = 0x1E;
            p = camera_ctrl_instance;
            M2C_FIELD(p, f32 *, 0x1C4) = (f32) lbl_805D8FEC;
            queue_event_1D__12TBoss3VoloptFss(0xA0, 0x1E, p);
            return;
        case 2:
            M2C_FIELD(camera_ctrl_instance, s32 *, 0x1C0) = 0x1E;
            p = camera_ctrl_instance;
            M2C_FIELD(p, f32 *, 0x1C4) = (f32) lbl_805D8FF0;
            queue_event_1D__12TBoss3VoloptFss(0xE0, 0x1E, p);
            break;
        }
    }
}
void cycle_spectate_target__11TCameraCtrlFv(void) {
    void *pad;
    u32 q;
    u32 pl;
    s8 tries;
    u16 slot;
    s32 i;
    if (is_split_screen() != 0 || is_quest_active() != 0) {
        return;
    }
    pad = controller_input_state.unk70;
    if (is_on_current_screen__11TCameraCtrlFPv(pad, 0x20000) == 0 ||
        TWindowShortListCtrl__check_controller_button(pad, 0x10) == 0 ||
        is_on_current_screen__11TCameraCtrlFPv(pad, 0x10000) == 0 ||
        (pl = get_player_by_client_id(local_client_id)) == 0 ||
        (tries = 0, TCameraCtrl__view_state.busy != 0) ||
        get_global_state__14TOKeyMachine01Fv() == 0xB ||
        get_global_state__14TOKeyMachine01Fv() == 0xC ||
        get_global_state__14TOKeyMachine01Fv() == 0xD ||
        get_global_state__14TOKeyMachine01Fv() == 0xE ||
        get_global_state__14TOKeyMachine01Fv() == 0x1E ||
        get_global_state__14TOKeyMachine01Fv() == 0x1F ||
        get_global_state__14TOKeyMachine01Fv() == 0x20 ||
        get_global_state__14TOKeyMachine01Fv() == 0x21 ||
        get_global_state__14TOKeyMachine01Fv() == 0xF ||
        get_global_state__14TOKeyMachine01Fv() == 0x12 ||
        get_global_state__14TOKeyMachine01Fv() == 0) {
        return;
    }
    slot = TCameraCtrl__view_state.slot;
    while (tries <= 3) {
        slot++;
        tries++;
        if (slot >= 4) {
            slot = 0;
        }
        q = get_player_by_client_id(slot);
        if (q != 0) {
            if (get_field_3e4__10TObjPlayerFPv(q) == get_field_3e4__10TObjPlayerFPv(pl) && obj_testFlags30(q, 0x02000000) == 0) {
                TCameraCtrl__view_state.slot = slot;
                reset_cameras_to_actor(q, 0);
                for (i = 0; i < 4; i++) {
                    u32 p = get_player_by_client_id(i);
                    if (p != 0) {
                        refresh_equipment_slot__10TObjPlayerFv(p);
                    }
                }
                return;
            }
        }
    }
}

}
