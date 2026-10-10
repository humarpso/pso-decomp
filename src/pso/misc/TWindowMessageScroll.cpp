#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8035D694___vt__20TWindowMessageScroll {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 fn_80244994(void *);
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
M2C_UNK update_window_entry_list(void *, void *);
M2C_UNK retire_scrolled_lines__14TWindowMessageFPv(f32);
void run_task__20TWindowMessageScrollFv(u8 *arg0);
s32 TWindowMessageQuest__ct(void *, void *);
extern M2C_UNK __vt__20TWindowMessageScroll[];
extern s32 TWindowMessageScroll__class_name;
extern const f32 lbl_805E01B8;
u8 *TWindowMessageScroll__ct(u8 *arg0, s32 arg1, s32 *arg2);
}

extern "C" {

void *__dt__20TWindowMessageScrollFv(void *arg0, s16 arg1);
s32 TLobby__sub_80269C90(void);
s32 TLobby__sub_80269CA4(s32 a0 = 0);
s32 TLobby__sub_80269DA4(s32 a0 = 0, s32 a1 = 0);
void __dl__7TObjectFPv(void *);
void __dt__19TWindowMessageQuestFv(void *, int);
s32 __nw__7TObjectFUl(s32 a0 = 0);
void set_timer__6TLobbyFPvf(void* p, f32 v);

extern M2C_UNK __vt__20TWindowMessageScroll[];

void run_task__20TWindowMessageScrollFv(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x94));
    retire_scrolled_lines__14TWindowMessageFPv((f32) (temp_f1));
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    update_fade__17TWindowSubComCardFPv((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
    if ((fn_80244994((void *) (arg0)) != 0) && (M2C_FIELD(arg0, f32 *, 0x80) <= M2C_FIELD(arg0, f32 *, 0x6C))) {
        *M2C_FIELD(arg0, s32 **, 0x98) = 1;
    }
}

void *__dt__20TWindowMessageScrollFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TWindowMessageScroll;
        __dt__19TWindowMessageQuestFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8035D694___vt__20TWindowMessageScroll_size[sizeof(RecoveredGlobal_8035D694___vt__20TWindowMessageScroll) == 0x18 ? 1 : -1];
u8 *TWindowMessageScroll__ct(u8 *arg0, s32 arg1, s32 *arg2) {
    TWindowMessageQuest__ct((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8035D694___vt__20TWindowMessageScroll *)&__vt__20TWindowMessageScroll).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TWindowMessageScroll__class_name;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) lbl_805E01B8;
    M2C_FIELD(arg0, s32 **, 0x98) = arg2;
    *M2C_FIELD(arg0, s32 **, 0x98) = 0;
    return arg0;
}

}
