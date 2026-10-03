#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802A7DDC { char pad[0x3C]; };
struct VObj_802A7DDC : Base_802A7DDC {
    virtual void m0(int);
};

struct Stack_802A7F00 {
    f32 sp8;
    f32 spC;
};

struct RecoveredGlobal_802A7FB0_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_802A80A0_lbl_804DDEB4 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_802A80A0___vt__15TWindowSnapShot {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * TWindowSnapShot__sub_802A5F24(void *);
s32 start_capture__15TWindowSnapShotFPvi(void *, s32);
extern int lbl_805D3E10;
extern void *lbl_805D6690;
s32 load_player_motion_data(void);
M2C_UNK TObjBoss2Tunnel__sub_8007CAE8(f32 *, f32);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
u8 *draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, void *);
M2C_UNK TWindowSubStatusDisp__sub_8024FD8C(void *, s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, void *);
extern const f32 lbl_805DE018;
extern const f32 lbl_805DE01C;
void render__15TWindowSnapShotFv(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
M2C_UNK update_window_entry_list(void *, void *);
void play_open_sound__15TWindowSnapShotFPv(void *arg0);
extern RecoveredGlobal_802A7FB0_lbl_8050E208 lbl_8050E208;
void run_task__15TWindowSnapShotFv(u8 *arg0);
s32 TObjBoss2Tunnel__sub_8007CB50(void);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
u8 * TWindowDD__sub_802466E0(void *, s32, s16, s32);
int set_default_status__17TWindowDuelResultFPvi(void *, int);
extern RecoveredGlobal_802A80A0_lbl_804DDEB4 lbl_804DDEB4;
extern M2C_UNK __vt__15TWindowSnapShot[];
extern s32 lbl_805D3E18;
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
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK update_both__15TWindowSnapShotFPv(void *);

extern void *lbl_805D6690;

void free_shared_instance__15TWindowSnapShotFv(void) {
    struct VObj_802A7DDC *o;
    update_both__15TWindowSnapShotFPv(lbl_805D6690);
    o = (struct VObj_802A7DDC *)lbl_805D6690;
    if (o != NULL) {
        o->m0(1);
    }
    lbl_805D6690 = NULL;
}

s32 load_player_motion_data(void) {
    s32 temp_r3;
    s32 var_r0;
    if ((void *) (*(u8 * *)&lbl_805D6690) != NULL) {
        return 0;
    }
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x40);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TWindowSnapShot__sub_802A5F24((void *) temp_r3));
    }
    (*(u8 * *)&lbl_805D6690) = (unsigned char *) ((void *) var_r0);
    if ((u32) var_r0 == 0U) {
        return 0;
    }
    start_capture__15TWindowSnapShotFPvi((void *) var_r0, (*(s32 *)&lbl_805D3E10));
    return 1;
}

s32 get_size__15TWindowSnapShotFPv(void* p) { return *(s32*)((char*)p + 0x0); }
s32 get_field_8__15TWindowSnapShotFPv(void* p) { return *(s32*)((char*)p + 0x8); }
int get_height__15TWindowSnapShotFv(void) { return 600; }

    extern int lbl_805D3E10;
int TWindowSnapShot__sub_802A7EAC(void) {  return lbl_805D3E10; }

void play_open_sound__15TWindowSnapShotFPv(void *arg0) {
    play_sound_effect(0x52F16, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
}

extern M2C_UNK __vt__15TWindowSnapShot[];

void render__15TWindowSnapShotFv(u8 *arg0) {
    Stack_802A7F00 stack;
    u8 *temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    if (!(M2C_FIELD(arg0, u8 *, 0x60) & 2)) {
        if ((s32) M2C_FIELD(temp_r3, s32 *, 0x30) > 0) {
            stack.sp8 = lbl_805DE018 + M2C_FIELD(temp_r3, f32 *, 0x10);
            stack.spC = M2C_FIELD(temp_r3, f32 *, 0x14);
            TObjBoss2Tunnel__sub_8007CAE8(&stack.sp8, lbl_805DE018);
        }
    } else {
        TWindowSubStatusDisp__sub_8024FD8C(temp_r3 + 0x10, get_localized_text_entry(0x24, 7), -1, 0, lbl_805DE01C);
    }
}

typedef char RecoveredGlobal_802A7FB0_lbl_8050E208_size[sizeof(RecoveredGlobal_802A7FB0_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__15TWindowSnapShotFv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&lbl_8050E208.value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0)) {
        play_open_sound__15TWindowSnapShotFPv((void *) (arg0));
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    update_fade__17TWindowSubComCardFPv((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}

void *__dt__15TWindowSnapShotFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowSnapShot;
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
    TWindowDD__sub_802466E0(arg0, (s32) &lbl_804DDEB4.value, 4, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802A80A0___vt__15TWindowSnapShot *)&__vt__15TWindowSnapShot).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E18;
    M2C_FIELD(arg0, u8 *, 0x60) = 0U;
    if (TObjBoss2Tunnel__sub_8007CB50() == 0) {
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 2);
    }
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
    set_default_status__17TWindowDuelResultFPvi((void *) temp_r31, get_localized_text_entry((M2C_UNK)(0xF), (M2C_UNK)(0x13)));
    return arg0;
}

}
