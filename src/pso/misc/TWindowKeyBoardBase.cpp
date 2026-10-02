#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8025E9E4_lbl_804CFA70 { M2C_UNK value; u8 remaining[0x10]; };
typedef char RecoveredGlobal_8025E9E4_lbl_804CFA70_size[sizeof(RecoveredGlobal_8025E9E4_lbl_804CFA70) == 0x14 ? 1 : -1];

struct RecoveredGlobal_8025E9E4___vt__19TWindowKeyBoardBase { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8025E9E4___vt__19TWindowKeyBoardBase_size[sizeof(RecoveredGlobal_8025E9E4___vt__19TWindowKeyBoardBase) == 0x18 ? 1 : -1];

extern "C" {
u8 * TWindowKeyBoardBase__sub_8008116C(void *);
int alloc_buffer__11TOBoss4RockFPv(void *);
u8 * get_window_layout_position(s32);
M2C_UNK init_keyboard_text_buffer(void *, int, int);
M2C_UNK TWindowDD__sub_802466E0(void *, void *, int, int);
M2C_UNK TWindowSubStatusDisp__sub_8025CD44(void *, int, int);
extern RecoveredGlobal_8025E9E4_lbl_804CFA70 lbl_804CFA70;
extern M2C_UNK __vt__19TWindowKeyBoardBase[];
extern s32 lbl_805D3920;
extern s32 lbl_805D5544;
u8 *TWindowKeyBoardBase__ct(u8 *arg0);
M2C_UNK TLobby__sub_8001D600(M2C_UNK, s32, s32, s32);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 set_stream_and_load_file__6TLobbyFi(M2C_UNK *);
s32 TLobby__sub_800FD944(M2C_UNK *);
s32 Dolphin_ARAlloc(s32);
M2C_UNK TQuestVmDownLoadServer__sub_803F09A4();
M2C_UNK TQuestVmDownLoadServer__sub_803F0C04(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_8044F098[];
void TLobby__sub_8025EAD4(void);
}

extern "C" {

void *__dt__19TWindowKeyBoardBaseFv(void *arg0, s16 arg1);
void render__19TWindowKeyBoardBaseFv(void *arg0);
void run_task__19TWindowKeyBoardBaseFv(void* p);
s32 TWindowChat__sub_8025CB10(void *);
s32 TWindowKeyBoardHard__sub_8025EB68();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8025E6DC(void *, s32);
void __dl__7TObjectFPv(void *);
void destroy__19TWindowKeyBoardBaseFPvs(void *, int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 draw_default_entry__9TWindowDDFi(void *);
void free__11TOBoss4RockFUi(void *);
int initialize_subwindow__9TWindowDDFPv(void*);
int update_fade__17TWindowSubComCardFPv(void*);

void render__19TWindowKeyBoardBaseFv(void *arg0) {
    s32 temp_r31;

    if ((TWindowKeyBoardHard__sub_8025EB68() == 0) && ((TWindowChat__sub_8025CB10(arg0) != 0) || (M2C_FIELD(arg0, u16 *, 0x62) & 2))) {
        temp_r31 = draw_default_entry__9TWindowDDFi(arg0);
        if (M2C_FIELD(arg0, u16 *, 0x62) & 2) {
            TWindowSubComCard__sub_80245F98(arg0, temp_r31);
        }
        TWindowSubStatusDisp__sub_8025E6DC(arg0, temp_r31);
    }
}

void run_task__19TWindowKeyBoardBaseFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); }

extern M2C_UNK __vt__19TWindowKeyBoardBase[];

void *__dt__19TWindowKeyBoardBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowKeyBoardBase;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x9C));
        destroy__19TWindowKeyBoardBaseFPvs((s8 *)arg0 + 0x84, -1);
        destroy__19TWindowKeyBoardBaseFPvs((s8 *)arg0 + 0x6C, -1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TWindowKeyBoardBase__ct(u8 *arg0) {
    s32 temp_r31;
    TWindowDD__sub_802466E0((void *) (arg0), (void *) (&lbl_804CFA70.value), (int) (4), (int) (get_window_layout_position(0xB7)));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8025E9E4___vt__19TWindowKeyBoardBase *)&__vt__19TWindowKeyBoardBase).value;
    TWindowKeyBoardBase__sub_8008116C(arg0 + 0x6C);
    TWindowKeyBoardBase__sub_8008116C(arg0 + 0x84);
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3920;
    temp_r31 = lbl_805D5544;
    TWindowSubStatusDisp__sub_8025CD44((void *) (arg0), (int) (0), (int) (0));
    init_keyboard_text_buffer((void *) (arg0 + 0x84), (int) (0), (int) (0));
    M2C_FIELD(arg0, u8 **, 0x68) = (unsigned char *) ((void *) (arg0 + 0x6C));
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s16 *, 0x62) = 0;
    M2C_FIELD(arg0, s8 *, 0x65) = -1;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    if (temp_r31 == 0) {
        init_keyboard_text_buffer((void *) (arg0 + 0x84), (int) (0x24), (int) (0));
        M2C_FIELD(arg0, s32 *, 0x9C) = alloc_buffer__11TOBoss4RockFPv((void *)0x194);
        M2C_FIELD(arg0, s32 *, 0xB0) = 0x94;
    }
    return arg0;
}
void TLobby__sub_8025EAD4(void) {
    s32 data;
    s32 size;
    s32 aligned;
    s32 aram;
    size = TLobby__sub_800FD944(lbl_8044F098);
    aligned = (size + 0x1F) & ~0x1F;
    aram = Dolphin_ARAlloc(aligned);
    data = set_stream_and_load_file__6TLobbyFi(lbl_8044F098);
    TLobby__sub_8001D600(3, data, aram, aligned);
    safe_free__23TAdSinglePlyChrSelectGCFUi(data);
    TQuestVmDownLoadServer__sub_803F0C04(aram, size, 3, 1, 0x2710);
    TQuestVmDownLoadServer__sub_803F09A4();
}

}
