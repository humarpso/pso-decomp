#include "types.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {
int update_card_display__17TWindowSubComCardFPvPvPvPv(void*, int, int, int, int);
int close_windows__17TWindowSubComCardFv(void*);
}

extern "C" {

s32 TKeyBoardControl__sub_8000F8EC();
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
int close_windows__17TWindowSubComCardFv(void*);
s32 set_state__17TWindowSubComCardFl(void *, s32);
int TWindowSubComCard__sub_8033C178(void* p);
void TWindowSubComCard__sub_8033C198(void);
int TWindowSubComCard__sub_8033C19C(void* p);
s32 init__22TQuestVmDownLoadServerFPvPvPvPv(void *, s32, s32, s32, s32);
s32 poll_memcard_status__15TAdPlayerLoadGCFv();
void render__16TCheckMemoryCardFv(void);
int update_card_display__17TWindowSubComCardFPvPvPvPv(void*, int, int, int, int);

void TWindowSubComCard::update_display_state() {
    s32 temp_r4;

    temp_r4 = *(s32 *)((s8 *)this + 0x28);
    if (!(temp_r4 & 2)) {
        if (temp_r4 & 1) {
            if ((u32) *(u32 *)((s8 *)this + 0x30) == 0U) {
                update_card_display__17TWindowSubComCardFPvPvPvPv((void*)(this), 0, -1, -1, -1);
            }
        } else {
            if (temp_r4 & 4) {
                if ((s32) *(s32 *)((s8 *)this + 0x40) != 0) {
                    set_state__17TWindowSubComCardFl((void *)(this), 3);
                    return;
                }
                set_state__17TWindowSubComCardFl((void *)(this), 1);
                return;
            }
            if (temp_r4 & 8) {
                if ((s32) *(s32 *)((s8 *)this + 0x40) != 0) {
                    set_state__17TWindowSubComCardFl((void *)(this), 3);
                    return;
                }
                set_state__17TWindowSubComCardFl((void *)(this), 1);
                return;
            }
            if (temp_r4 & 0x10) {
                if ((s32) *(s32 *)((s8 *)this + 0x40) != 0) {
                    set_state__17TWindowSubComCardFl((void *)(this), 3);
                    return;
                }
                set_state__17TWindowSubComCardFl((void *)(this), 1);
                return;
            }
            if (temp_r4 == 0) {
                set_state__17TWindowSubComCardFl((void *)(this), 2);
            }
        }
    }
}

void TWindowSubComCard::close_and_update_display() {
    u8 *arg0 = (u8 *)this;
    close_windows__17TWindowSubComCardFv((void*)arg0);
    if (*(s32 *)((s8 *)arg0 + 0x28) & 1) {
        update_card_display__17TWindowSubComCardFPvPvPvPv((void*)((void *) (arg0)), (int)((int) (0)), (int)((int) (-1)), (int)((int) (-1)), (int)((int) (-1)));
    }
}

}
