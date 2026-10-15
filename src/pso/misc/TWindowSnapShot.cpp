#include "types.h"

struct Base_802A7DDC { char pad[0x3C]; };
struct VObj_802A7DDC : Base_802A7DDC {
    virtual void m0(int);
};

struct Stack_802A7F00 {
    f32 sp8;
    f32 spC;
};

struct RecoveredGlobal_802A7FB0_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_802A80A0_lbl_804DDEB4 {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_802A80A0___vt__15TWindowSnapShot {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * init_and_reset__15TWindowSnapShotFPv(void *);
s32 start_capture__15TWindowSnapShotFPvi(void *, s32);
extern int player_motion_data_filename_ptr;
extern void *shared_snapshot_capture;
s32 load_player_motion_data(void);
s32 TObjBoss2Tunnel__sub_8007CAE8(f32 *, f32);
s32 get_localized_text_entry(s32, s32);
u8 *draw_default_entry__9TWindowDDFi();
s32 draw_window_frame(void *, void *);
s32 draw_window_text(void *, s32, s32, s32, f32);
s32 draw_visible_window_entries(void *, void *, void *);
extern const f32 lbl_805DE018;
extern const f32 lbl_805DE01C;
void render__15TWindowSnapShotFv(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 update_fade__17TWindowSubComCardFPv(void *);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 update_window_entry_list(void *, void *);
void play_open_sound__15TWindowSnapShotFPv(void *arg0);
extern RecoveredGlobal_802A7FB0_lbl_8050E208 controller_input_state;
void run_task__15TWindowSnapShotFv(u8 *arg0);
s32 verify_snapshot_checksum__15TObjBoss2TunnelFv(void);
s32 get_localized_text_entry(s32, s32);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
u8 * construct_base__9TWindowDDFPvPvsPv(void *, s32, s16, s32);
int set_default_status__17TWindowDuelResultFPvi(void *, int);
extern RecoveredGlobal_802A80A0_lbl_804DDEB4 window_snapshot_layout;
extern s32 __vt__15TWindowSnapShot[];
extern s32 TWindowSnapShot__name;
u8 *TWindowSnapShot__ct(u8 *arg0, s32 arg1);
}

extern "C" {

int TWindowSnapShot__sub_802A7EAC(void);
void *__dt__15TWindowSnapShotFv(void *arg0, s16 arg1);
void free_shared_instance__15TWindowSnapShotFv(void);
s32 get_field_8__15TWindowSnapShotFPv(void* p);
int get_height__15TWindowSnapShotFv(void);
s32 get_size__15TWindowSnapShotFPv(void* p);
void play_open_sound__15TWindowSnapShotFPv(void *arg0);
s32 play_sound_effect(s32, s32, s32, s32);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 update_both__15TWindowSnapShotFPv(void *);

extern void *shared_snapshot_capture;

void free_shared_instance__15TWindowSnapShotFv(void) {
    struct VObj_802A7DDC *o;
    update_both__15TWindowSnapShotFPv(shared_snapshot_capture);
    o = (struct VObj_802A7DDC *)shared_snapshot_capture;
    if (o != NULL) {
        o->m0(1);
    }
    shared_snapshot_capture = NULL;
}

s32 load_player_motion_data(void) {
    s32 temp_r3;
    s32 var_r0;
    if ((void *) (*(u8 * *)&shared_snapshot_capture) != NULL) {
        return 0;
    }
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x40);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (init_and_reset__15TWindowSnapShotFPv((void *) temp_r3));
    }
    (*(u8 * *)&shared_snapshot_capture) = (unsigned char *) ((void *) var_r0);
    if ((u32) var_r0 == 0U) {
        return 0;
    }
    start_capture__15TWindowSnapShotFPvi((void *) var_r0, (*(s32 *)&player_motion_data_filename_ptr));
    return 1;
}

s32 get_size__15TWindowSnapShotFPv(void* p) { return *(s32*)((char*)p + 0x0); }
s32 get_field_8__15TWindowSnapShotFPv(void* p) { return *(s32*)((char*)p + 0x8); }
int get_height__15TWindowSnapShotFv(void) { return 600; }

    extern int player_motion_data_filename_ptr;
int TWindowSnapShot__sub_802A7EAC(void) {  return player_motion_data_filename_ptr; }

void play_open_sound__15TWindowSnapShotFPv(void *arg0) {
    play_sound_effect(0x52F16, 0, 0, 0);
    *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) | 1);
}

extern s32 __vt__15TWindowSnapShot[];

void render__15TWindowSnapShotFv(u8 *arg0) {
    Stack_802A7F00 stack;
    u8 *temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    draw_window_frame(arg0, temp_r3);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
    if (!(*(u8 *)((s8 *)arg0 + 0x60) & 2)) {
        if ((s32) *(s32 *)((s8 *)temp_r3 + 0x30) > 0) {
            stack.sp8 = lbl_805DE018 + *(f32 *)((s8 *)temp_r3 + 0x10);
            stack.spC = *(f32 *)((s8 *)temp_r3 + 0x14);
            TObjBoss2Tunnel__sub_8007CAE8(&stack.sp8, lbl_805DE018);
        }
    } else {
        draw_window_text(temp_r3 + 0x10, get_localized_text_entry(0x24, 7), -1, 0, lbl_805DE01C);
    }
}

typedef char RecoveredGlobal_802A7FB0_lbl_8050E208_size[sizeof(RecoveredGlobal_802A7FB0_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__15TWindowSnapShotFv(u8 *arg0) {
    if (!(*(s32 *)((s8 *)arg0 + 0x2C) & 2)) {
        *(s32 *)((s8 *)arg0 + 0x5C) = 0x01000000;
    }
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&controller_input_state.value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
        play_open_sound__15TWindowSnapShotFPv((void *) (arg0));
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    update_fade__17TWindowSubComCardFPv((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}

void *__dt__15TWindowSnapShotFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TWindowSnapShot;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_802A80A0_lbl_804DDEB4_size[sizeof(RecoveredGlobal_802A80A0_lbl_804DDEB4) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_802A80A0___vt__15TWindowSnapShot_size[sizeof(RecoveredGlobal_802A80A0___vt__15TWindowSnapShot) == 0x18 ? 1 : -1];
u8 *TWindowSnapShot__ct(u8 *arg0, s32 arg1) {
    s32 temp_r31;
    construct_base__9TWindowDDFPvPvsPv(arg0, (s32) &window_snapshot_layout.value, 4, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_802A80A0___vt__15TWindowSnapShot *)&__vt__15TWindowSnapShot).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowSnapShot__name;
    *(u8 *)((s8 *)arg0 + 0x60) = 0U;
    if (verify_snapshot_checksum__15TObjBoss2TunnelFv() == 0) {
        *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) | 2);
    }
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
    set_default_status__17TWindowDuelResultFPvi((void *) temp_r31, get_localized_text_entry((s32)(0xF), (s32)(0x13)));
    return arg0;
}

}
