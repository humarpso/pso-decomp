#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
void TWindowSubStatusDisp__sub_803386F0(void) { free_if_valid__10TObjPlayerFi((void*)(lbl_805D6D5C)); }

    extern unsigned char lbl_80477BD4[];
    extern int lbl_805D6D5C;
void load_info_icon(void) { lbl_805D6D5C = TLanguage__sub_801E4874(lbl_80477BD4); }

}
