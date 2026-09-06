#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase { char pad[0x18]; };

struct VObj : VBase { virtual void m0(int); };

extern "C" {
s32 poll_memcard_status__15TAdPlayerLoadGCFPv(void *);
s32 TWindowSubComCard__sub_8033C024(void *, s32);
void TWindowSubComCard__sub_8033C10C(u8 *arg0);
void TWindow__close(void *);
void TWindowSubComCard__sub_8033BF90(u8 *arg0);
}

extern "C" {

void TWindowSubComCard__sub_8033C178(void* p);
void TWindowSubComCard__sub_8033C198(void);
int TWindowSubComCard__sub_8033C19C(void* p);
int TWindowSubComCard__sub_8033C1CC(void);
void reset__17TWindowSubComCardFPv(void *arg0);
s32 TKeyBoardControl__sub_8000F8EC();
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 TWindowSubComCard__sub_8033C024(void *, s32);
s32 init__22TQuestVmDownLoadServerFPvPvPvPvPv(void *, s32, s32, s32, s32);
void render__16TCheckMemoryCardFv(void);
int update_card_display__17TWindowSubComCardFPvPvPvPvPv(void*, int, int, int, int);

#pragma push
#pragma fp_contract on
void TWindowSubComCard__sub_8033BF90(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x30));
    if (temp_r3 != NULL) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
            if (temp_r3 != NULL) {
                ((VObj *)temp_r3)->m0(1);
            }
        } else {
            TWindow__close(temp_r3);
        }
        M2C_FIELD(arg0, u8 **, 0x30) = NULL;
        M2C_FIELD(arg0, s32 *, 0x38) = 7;
    }
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
    if (temp_r3_2 != NULL) {
        TWindow__close(temp_r3_2);
        M2C_FIELD(arg0, u8 **, 0x34) = NULL;
        M2C_FIELD(arg0, s32 *, 0x38) = 7;
    }
}
#pragma pop

void reset__17TWindowSubComCardFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = poll_memcard_status__15TAdPlayerLoadGCFPv((void *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    TWindowSubComCard__sub_8033C024(arg0, 0);
}

void TWindowSubComCard__sub_8033C10C(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = poll_memcard_status__15TAdPlayerLoadGCFPv((void *)(arg0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0) {
            TWindowSubComCard__sub_8033C024((void *)((void *) (arg0)), (s32)((int) (1)));
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x3C) = 1;
    }
}

void TWindowSubComCard__sub_8033C178(void* p) { TWindowSubComCard__sub_8033BF90((u8 *)(p)); }
void TWindowSubComCard__sub_8033C198(void) {  }
int TWindowSubComCard__sub_8033C19C(void* p) { return update_card_display__17TWindowSubComCardFPvPvPvPvPv(p, 0, -1, -1, -1); }

int TWindowSubComCard__sub_8033C1CC(void) { return 0; }

}
