#include "types.h"

extern "C" {

s32 TKeyBoardControl__sub_8000F8EC();
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 init__22TQuestVmDownLoadServerFPvPvPvPvPv(void *, s32, s32, s32, s32);
s32 poll_memcard_status__15TAdPlayerLoadGCFPv();
s32 set_state__17TWindowSubComCardFPvi(void *, s32);
int TWindowSubComCard__sub_8033C178(void* p);
void TWindowSubComCard__sub_8033C198(void);
int TWindowSubComCard__sub_8033C19C(void* p);
void render__16TCheckMemoryCardFv(void);
int update_card_display__17TWindowSubComCardFPvPvPvPvPv(void*, int, int, int, int);
int close_windows__17TWindowSubComCardFPv(void*);

void init_from_keyboard_state__22TQuestVmDownLoadServerFPv(void *arg0) {
    s32 var_r31;
    s32 var_r6;

    if (TKeyBoardControl__sub_8000F8EC() == 0xF) {
        var_r31 = TQuestVmDownLoadServer__sub_8006EF6C(0xA);
        var_r6 = TQuestVmDownLoadServer__sub_8006EF6C(0xE);
        init__22TQuestVmDownLoadServerFPvPvPvPvPv(arg0, var_r31, -2, var_r6, 0);
        return;
    }
    var_r31 = TQuestVmDownLoadServer__sub_8006EF6C(0x62);
    var_r6 = TQuestVmDownLoadServer__sub_8006EF6C(0xE);
    if (*(s32 *)((s8 *)arg0 + 0x28) & 0x20) {
        var_r31 = TQuestVmDownLoadServer__sub_8006EF6C(0x6D);
        var_r6 = TQuestVmDownLoadServer__sub_8006EF6C(0xE);
    }
    init__22TQuestVmDownLoadServerFPvPvPvPvPv(arg0, var_r31, -2, var_r6, 0);
}

}
