#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TKeyBoardControl__sub_8000F8EC();
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 init__22TQuestVmDownLoadServerFPvPvPvPvPv(void *, s32, s32, s32, s32);
s32 poll_memcard_status__15TAdPlayerLoadGCFPv();
s32 TWindowSubComCard__sub_8033C024(void *, s32);
int TWindowSubComCard__sub_8033C178(void* p);
void TWindowSubComCard__sub_8033C198(void);
int TWindowSubComCard__sub_8033C19C(void* p);
void render__16TCheckMemoryCardFv(void);
int update_card_display__17TWindowSubComCardFPvPvPvPvPv(void*, int, int, int, int);
int TWindowSubComCard__sub_8033BF90(void*);

void update_display_state__17TWindowSubComCardFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x28);
    if (!(temp_r4 & 2)) {
        if (temp_r4 & 1) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == 0U) {
                update_card_display__17TWindowSubComCardFPvPvPvPvPv((void*)(arg0), 0, -1, -1, -1);
            }
        } else {
            if (temp_r4 & 4) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x40) != 0) {
                    TWindowSubComCard__sub_8033C024((void *)(arg0), 3);
                    return;
                }
                TWindowSubComCard__sub_8033C024((void *)(arg0), 1);
                return;
            }
            if (temp_r4 & 8) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x40) != 0) {
                    TWindowSubComCard__sub_8033C024((void *)(arg0), 3);
                    return;
                }
                TWindowSubComCard__sub_8033C024((void *)(arg0), 1);
                return;
            }
            if (temp_r4 & 0x10) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x40) != 0) {
                    TWindowSubComCard__sub_8033C024((void *)(arg0), 3);
                    return;
                }
                TWindowSubComCard__sub_8033C024((void *)(arg0), 1);
                return;
            }
            if (temp_r4 == 0) {
                TWindowSubComCard__sub_8033C024((void *)(arg0), 2);
            }
        }
    }
}

}
