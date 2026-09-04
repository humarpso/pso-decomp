#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8033C4E0_8033C420 { char pad[0x18]; };
struct VObj_8033C4E0_8033C420 : Base_8033C4E0_8033C420 { virtual void m0(int); };

extern "C" {

void *TCheckMemoryCard__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *__dt__16TCheckMemoryCardFv(void *arg0, s16 arg1);
void * create__16TCheckMemoryCardFPvPvPv(void *arg0, void *arg1, void *arg2);
void render__16TCheckMemoryCardFv(void);
s32 TKeyBoardControl__sub_8000F8EC();
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
int TWindowSubComCard__sub_8033BF90(void*);
s32 TWindowSubComCard__sub_8033C024(void *, s32);
int TWindowSubComCard__sub_8033C178(void* p);
void TWindowSubComCard__sub_8033C198(void);
int TWindowSubComCard__sub_8033C19C(void* p);
M2C_UNK TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
s32 init__22TQuestVmDownLoadServerFPvPvPvPvPv(void *, s32, s32, s32, s32);
s32 poll_memcard_status__15TAdPlayerLoadGCFPv();
void reset__17TWindowSubComCardFPv(void *);
int update_card_display__17TWindowSubComCardFPvPvPvPvPv(void*, int, int, int, int);

void render__16TCheckMemoryCardFv(void) {  }

extern M2C_UNK __vt__16TCheckMemoryCard[];

void *__dt__16TCheckMemoryCardFv(void *arg0, s16 arg1) {
    void *temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TCheckMemoryCard;
        temp_r3 = M2C_FIELD(arg0, void **, 0x30);
        if (temp_r3 != NULL) {
            if (temp_r3 != NULL) {
                ((VObj_8033C4E0_8033C420 *)temp_r3)->m0(1);
            }
            M2C_FIELD(arg0, void **, 0x30) = NULL;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__16TCheckMemoryCard[];
extern void *lbl_805D4290;

void *TCheckMemoryCard__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TCheckMemoryCard;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4290;
    M2C_FIELD(arg0, void **, 0x48) = arg2;
    M2C_FIELD(arg0, void **, 0x1C) = arg4;
    M2C_FIELD(arg0, void **, 0x4C) = arg3;
    reset__17TWindowSubComCardFPv(arg0);
    return arg0;
}

void * create__16TCheckMemoryCardFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x250);
    if (o != NULL) {
        o = TCheckMemoryCard__ct((void *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(1));
    }
    return o;
}

}
