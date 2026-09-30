#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_instance__15TAdPlayerLoadGCFv();
M2C_UNK TLobby__sub_80338534();
M2C_UNK TLobby__sub_80338608(int);
void TLobby__sub_803384D4(void);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(int);
s32 alloc__22TQuestVmDownLoadServerFPv(int);
M2C_UNK TLobby__sub_800F7DAC(int, int);
M2C_UNK set_stream_state__6TLobbyFi(void *, int);
M2C_UNK TLobby__sub_803DE084(int, void *);
extern M2C_UNK lbl_80477BC4[];
extern M2C_UNK lbl_804EF1DC[];
extern s32 lbl_805D6D58;
void TLobby__sub_8033843C(void);
}

extern "C" {

void TWindowSubStatusDisp__sub_803386F0(void);
void handle_flag2_request__6TLobbyFv(void);
void load_info_icon(void);
int TLanguage__sub_801E4874(void*);
M2C_UNK TLobby__sub_803DA16C(M2C_UNK *);
int free_if_valid__10TObjPlayerFi(void*);

extern M2C_UNK lbl_804EF1DC[];
extern s32 lbl_805D6D58;

void handle_flag2_request__6TLobbyFv(void) {
    if (lbl_805D6D58 & 2) {
        TLobby__sub_803DA16C(lbl_804EF1DC);
        lbl_805D6D58 &= 0xFFFFFFFD;
    }
}

    extern int lbl_805D6D5C;

void TLobby__sub_8033843C(void) {
    s32 temp_r31;
    s32 temp_r3;
    if (!(lbl_805D6D58 & 2)) {
        temp_r31 = alloc__22TQuestVmDownLoadServerFPv((int) (0x11000));
        temp_r3 = alloc__22TQuestVmDownLoadServerFPv((int) (0x2000));
        set_stream_state__6TLobbyFi((void *) (lbl_80477BC4), (int) (temp_r3));
        TLobby__sub_800F7DAC((int) (temp_r3), (int) (temp_r31));
        TLobby__sub_803DE084((int) (temp_r31), (void *) (lbl_804EF1DC));
        safe_free__23TAdSinglePlyChrSelectGCFUi((int) (temp_r3));
        safe_free__23TAdSinglePlyChrSelectGCFUi((int) (temp_r31));
        lbl_805D6D58 |= 2;
    }
}

void TLobby__sub_803384D4(void) {
    s32 temp_r3;
    temp_r3 = get_instance__15TAdPlayerLoadGCFv();
    switch (temp_r3) {
    case 5:
    case 6:
    case 11:
    case 12:
    case 15:
    case 19:
        TLobby__sub_80338608((int) (0));
        TLobby__sub_80338534();
        return;
    case 18:
        TLobby__sub_80338608((int) (1));
        TLobby__sub_80338534();
    default:
        return;
    }
}

void TWindowSubStatusDisp__sub_803386F0(void) { free_if_valid__10TObjPlayerFi((void*)(lbl_805D6D5C)); }

    extern unsigned char lbl_80477BD4[];
    extern int lbl_805D6D5C;
void load_info_icon(void) { lbl_805D6D5C = TLanguage__sub_801E4874(lbl_80477BD4); }

}
