#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80286824_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 TWindowSubStatusDisp__sub_80257C28(void *, void *);
s32 is_active__20TWindowSubSymbolChatFPv(void *);
void handle_cancel__28TWindowSubSymbolChatPartsSetFPv(void *arg0);
void handle_decide__28TWindowSubSymbolChatPartsSetFPv(void *arg0);
s32 TWindowSubSymbolChatPartsSet__sub_8028625C(void *);
s32 TWindowSubSymbolChatPartsSet__sub_8028642C(void *);
s32 TWindowSubSymbolChatPartsSet__sub_802864C4(void *);
s32 update_subwindow__20TWindowSubStatusDispFPv(int);
extern RecoveredGlobal_80286824_lbl_8050E208 lbl_8050E208;
extern const f32 lbl_805DD820;
void run_task__28TWindowSubSymbolChatPartsSetFv(u8 *arg0);
}

extern "C" {

struct Vec2_80286708_802861AC { f32 x; f32 y; };

void *__dt__28TWindowSubSymbolChatPartsSetFv(void *arg0, s16 arg1);
void handle_cancel__28TWindowSubSymbolChatPartsSetFPv(void *arg0);
void handle_decide__28TWindowSubSymbolChatPartsSetFPv(void *arg0);
void render__28TWindowSubSymbolChatPartsSetFv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80245808(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int, f32);
M2C_UNK TWindowSubSymbolChatPartsSet__sub_80286120(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__17TWindowChatSymbolFv(void *, int);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
u8 *draw_default_entry__9TWindowDDFi();
M2C_UNK forward_render__20TWindowSubStatusDispFPv(int, int);
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(s32, M2C_UNK);

void handle_cancel__28TWindowSubSymbolChatPartsSetFPv(void *arg0) {
    if (is_active__20TWindowSubSymbolChatFPv((void *)(arg0)) == 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x68) = (u8) (M2C_FIELD(arg0, u8 *, 0x68) | 2);
    }
}

void handle_decide__28TWindowSubSymbolChatPartsSetFPv(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x68) = (u8) (M2C_FIELD(arg0, u8 *, 0x68) | 1);
    set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x88), 2);
}

extern M2C_UNK lbl_8044FC38;
extern const f32 lbl_805DD820;

void render__28TWindowSubSymbolChatPartsSetFv(u8 *arg0) {
    struct Vec2_80286708_802861AC sp10;
    struct Vec2_80286708_802861AC sp8;
    f32 temp_f1;
    u8 *temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (&sp10), (void *) (temp_r3 + 0x10));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (&sp8), (void *) (temp_r3 + 0x28));
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x30) < 0) {
        M2C_FIELD(temp_r3, f32 *, 0x28) = (f32) ((f32) M2C_FIELD(arg0, s32 *, 0x5C) / lbl_805DD820);
        M2C_FIELD(temp_r3, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x28);
    }
    TWindowSubComCard__sub_80245808((void *) (arg0), (int) (temp_r3));
    M2C_FIELD(temp_r3, f32 *, 0x10) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x10) + M2C_FIELD(arg0, f32 *, 0x8C));
    M2C_FIELD(temp_r3, f32 *, 0x14) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x14) + M2C_FIELD(arg0, f32 *, 0x90));
    M2C_FIELD(temp_r3, f32 *, 0x28) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x28) * M2C_FIELD(arg0, f32 *, 0x94));
    temp_f1 = M2C_FIELD(temp_r3, f32 *, 0x2C);
    M2C_FIELD(temp_r3, f32 *, 0x2C) = (f32) (temp_f1 * M2C_FIELD(arg0, f32 *, 0x94));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3), (f32) (temp_f1));
    TWindowSubSymbolChatPartsSet__sub_80286120((void *) (arg0), (int) (temp_r3));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (temp_r3 + 0x10), (void *) (&sp10));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (temp_r3 + 0x28), (void *) (&sp8));
    forward_render__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x88)), (int) (temp_r3));
}

extern M2C_UNK __vt__28TWindowSubSymbolChatPartsSet[];

typedef char RecoveredGlobal_80286824_lbl_8050E208_size[sizeof(RecoveredGlobal_80286824_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__28TWindowSubSymbolChatPartsSetFv(u8 *arg0) {
    u8 *temp_r31;
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    if (is_active__20TWindowSubSymbolChatFPv((void *)((void *) (arg0))) == 0) {
        TWindowSubSymbolChatPartsSet__sub_802864C4((void *) (arg0));
        temp_r31 = (u8 *)&lbl_8050E208.value + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (4)) != 0)) {
            handle_decide__28TWindowSubSymbolChatPartsSetFPv((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0)) {
            handle_cancel__28TWindowSubSymbolChatPartsSetFPv((void *) (arg0));
        }
    }
    TWindowSubSymbolChatPartsSet__sub_8028642C((void *) (arg0));
    TWindowSubSymbolChatPartsSet__sub_8028625C((void *) (arg0));
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DD820) {
        update_subwindow__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x88)));
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    TWindowSubStatusDisp__sub_80257C28((void *) (arg0), (void *) (arg0 + 0x24));
}

void *__dt__28TWindowSubSymbolChatPartsSetFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__28TWindowSubSymbolChatPartsSet;
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x88), 1);
        __dt__17TWindowChatSymbolFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
