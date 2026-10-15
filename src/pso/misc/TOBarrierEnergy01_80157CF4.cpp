#include "types.h"

extern "C" {
u32 get_global_state__14TOKeyMachine01Fv();
void play_persistent_sound(int, void *, void *, int, int);
void play_ambient_loop_sound__17TOBarrierEnergy01Fi(s32 arg0);
}

extern "C" {

void TOBarrierEnergy01__vt18(void);
void* init__17TOBarrierEnergy01FPv(void* p);
int TLobby__send_and_handle_60(void*);
int TLobby__sub_80156BA8(void*);
void TOAttackableCol__sub_80157C20(void* p, s32 v);
s32 TOAttackableCol__sub_80157C28(void* p);
void TOAttackableCol__vt23(void);
int bswap_16__FPUs(void*);
int bswap_header__6TLobbyFi(void*);

extern "C" void TLobby__sub_801A1FD8();
extern "C" void TOBarrierEnergy01__vt13();
extern "C" void TOBarrierEnergy01__vt14();
extern "C" void TOBarrierEnergy01__vt15();
extern "C" void TOBarrierEnergy01__vt16();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjRoomId__sub_801A1E2C();
extern "C" void TParticleCtrl__sub_801A2124();
extern "C" void __dt__17TOBarrierEnergy01Fv();
extern "C" void apply_object_set_data();
extern "C" void classify_actor_view_detail();
extern "C" void init_door_switch_binding();
extern "C" u8 lbl_80440188[];
extern "C" u8 lbl_804401A4[];
extern "C" u8 lbl_804401B8[];
extern "C" u8 lbl_804401D0[];
extern "C" void release_member_90__10TObjPlayerFPv();
extern "C" void render__17TOBarrierEnergy01Fv();
extern "C" void render_shadows__7TObjectFv();
extern "C" void run_switch_door_task();
extern "C" void update_door_switch_state();
extern "C" void update_object_view_visibility();
extern void *bm_fs_obj_lazerguard_model_names[3];
extern void *bm_fs_obj_lazerguard_motion_names[2];
void *bm_fs_obj_lazerguard_model_names[3] = {
    (void *)&lbl_80440188, (void *)&lbl_804401A4, (void *)0x0,
};
__declspec(section ".data") void *bm_fs_obj_lazerguard_motion_names[2] = {
    (void *)&lbl_804401B8, (void *)0x0,
};
void *bm_fs_obj_lazerguard_resource_descriptor[4] = {
    (void *)&lbl_804401D0, (void *)&bm_fs_obj_lazerguard_model_names, (void *)&bm_fs_obj_lazerguard_motion_names, (void *)0x20001,
};
void *lbl_804AFB34[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40a00000,
    (void *)0x41a00000, (void *)0x1, (void *)0x10003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *__vt__17TOBarrierEnergy01[21] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__17TOBarrierEnergy01Fv, (void *)&run_switch_door_task,
    (void *)&render__17TOBarrierEnergy01Fv, (void *)&render_shadows__7TObjectFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFPv, (void *)&TParticleCtrl__sub_801A2124, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&TObjRoomId__sub_801A1E2C, (void *)&TObjPlayer__sub_80019568, (void *)&update_door_switch_state, (void *)&TOBarrierEnergy01__vt13,
    (void *)&TOBarrierEnergy01__vt14, (void *)&TOBarrierEnergy01__vt15, (void *)&TOBarrierEnergy01__vt16, (void *)&init_door_switch_binding,
    (void *)&TOBarrierEnergy01__vt18,
};

void* init__17TOBarrierEnergy01FPv(void* p) { TLobby__sub_80156BA8(p); return p; }

void TOBarrierEnergy01__vt18(void) {  }
void play_ambient_loop_sound__17TOBarrierEnergy01Fi(s32 arg0) {
    u32 temp_r3;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    case 1:
    case 2:
        play_persistent_sound((int) (0x4CB09), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 3:
    case 4:
    case 5:
        play_persistent_sound((int) (0x44B08), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 6:
    case 7:
        play_persistent_sound((int) (0x4004CB02), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 8:
    case 9:
    case 10:
        play_persistent_sound((int) (0x4004CB09), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 0:
        return;
    case 11:
        return;
    case 12:
        return;
    case 13:
        return;
    case 14:
        return;
    case 15:
        return;
    }
}

}
