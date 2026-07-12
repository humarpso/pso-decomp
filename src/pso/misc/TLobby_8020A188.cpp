#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_buffers__6TLobbyFii(s32 arg0, s32 arg1);
void free_boss4rock__6TLobbyFv(void);
int free_boss4rock__6TLobbyFPvs(void*, void*);
u32 TLobby__sub_802095EC(s32, s32);
u32 TLobby__sub_8020967C(s32, s32);
u32 TLobby__sub_80209C58(s32, s32);
M2C_UNK TLobby__sub_80209D34(s32);
int __dl__FPv(void*);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007EBB4(s32);
s32 TQuestVmDownLoadServer__sub_8007EBFC(M2C_UNK);

extern u32 lbl_805D60A8;
extern u32 lbl_805D60AC;
extern u32 lbl_805D60B0;
extern s32 lbl_805D60B4;
extern s32 lbl_805D60BC;
extern s32 lbl_805D60C0;
extern s32 lbl_805D60C4;
extern s32 lbl_805D60C8;

void init_buffers__6TLobbyFii(s32 arg0, s32 arg1) {
    u32 temp_r3;

    lbl_805D60A8 = TLobby__sub_80209C58(arg1, arg0);
    lbl_805D60AC = TLobby__sub_8020967C(arg1, arg0);
    temp_r3 = TLobby__sub_802095EC(arg1, arg0);
    lbl_805D60B0 = temp_r3;
    if (((u32) lbl_805D60A8 != 0U) && ((u32) lbl_805D60AC != 0U) && (temp_r3 != 0U)) {
        lbl_805D60B4 = TQuestVmDownLoadServer__sub_8007EBFC(0x9000);
        lbl_805D60BC = TQuestVmDownLoadServer__sub_8007EBFC(0x1400);
        lbl_805D60C0 = 0;
        lbl_805D60C4 = TQuestVmDownLoadServer__sub_8007EBFC(0x1000);
        lbl_805D60C8 = 0;
        TLobby__sub_80209D34(arg0);
        TAdSinglePlyChrSelectGC__sub_8007EBB4(lbl_805D60C4);
        TAdSinglePlyChrSelectGC__sub_8007EBB4(lbl_805D60BC);
        lbl_805D60BC = 0;
        TAdSinglePlyChrSelectGC__sub_8007EBB4(lbl_805D60B4);
        lbl_805D60B4 = 0;
    }
}

    extern int lbl_805D60A0;
    extern int lbl_805D60A4;
void free_boss4rock__6TLobbyFv(void) { free_boss4rock__6TLobbyFPvs((void*)(lbl_805D60A4), (void*)1); lbl_805D60A4 = 0; __dl__FPv((void*)(lbl_805D60A0)); lbl_805D60A0 = 0; }

}
