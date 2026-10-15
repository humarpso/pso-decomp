#include "types.h"

extern "C" {

void init_buffers__6TLobbyFii(s32 arg0, s32 arg1);
void free_boss4rock__6TLobbyFv(void);
int free_boss4rock__6TLobbyFPvs(void*, void*);
u32 find_type5_header__6TLobbyFPvi(s32, s32);
u32 find_chunk_by_id__6TLobbyFPvi(s32, s32);
u32 find_header_by_id__6TLobbyFPvi(s32, s32);
s32 TLobby__sub_80209D34(s32);
int __dl__FPv(void*);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 alloc__22TQuestVmDownLoadServerFPv(s32);

extern u32 lbl_805D60A8;
extern u32 lbl_805D60AC;
extern u32 TLobby__item_data_table_buffer;
extern s32 lbl_805D60B4;
extern s32 lbl_805D60BC;
extern s32 lbl_805D60C0;
extern s32 lbl_805D60C4;
extern s32 lbl_805D60C8;

void init_buffers__6TLobbyFii(s32 arg0, s32 arg1) {
    u32 temp_r3;

    lbl_805D60A8 = find_header_by_id__6TLobbyFPvi(arg1, arg0);
    lbl_805D60AC = find_chunk_by_id__6TLobbyFPvi(arg1, arg0);
    temp_r3 = find_type5_header__6TLobbyFPvi(arg1, arg0);
    TLobby__item_data_table_buffer = temp_r3;
    if (((u32) lbl_805D60A8 != 0U) && ((u32) lbl_805D60AC != 0U) && (temp_r3 != 0U)) {
        lbl_805D60B4 = alloc__22TQuestVmDownLoadServerFPv(0x9000);
        lbl_805D60BC = alloc__22TQuestVmDownLoadServerFPv(0x1400);
        lbl_805D60C0 = 0;
        lbl_805D60C4 = alloc__22TQuestVmDownLoadServerFPv(0x1000);
        lbl_805D60C8 = 0;
        TLobby__sub_80209D34(arg0);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D60C4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D60BC);
        lbl_805D60BC = 0;
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D60B4);
        lbl_805D60B4 = 0;
    }
}

    extern int item_drop_rng;
    extern int lbl_805D60A4;
void free_boss4rock__6TLobbyFv(void) { free_boss4rock__6TLobbyFPvs((void*)(lbl_805D60A4), (void*)1); lbl_805D60A4 = 0; __dl__FPv((void*)(item_drop_rng)); item_drop_rng = 0; }

}
