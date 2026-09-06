#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TQuestListOnline__sub_8013ACF4(s32);
M2C_UNK memcpy(int, void *, int);
extern u32 TQuestListOnline__data_805D6190;
void TQuestListOnline__sub_80215458(s32 arg0);
}

extern "C" {
    int memset(void*, void*, void*);
    extern unsigned char TQuestListOnline__data_80513DE8[];
    extern unsigned char TQuestListOnline__data_80513E24[];
    extern int TQuestListOnline__data_805D6198;
    extern int TQuestListOnline__data_805D619C;
    extern int TQuestListOnline__data_805D61A0;
    extern int TQuestListOnline__data_805D61A4;
    extern int TQuestListOnline__data_805D61A8;
    extern int lbl_805D61AC;
    extern int lbl_805D61B0;
    extern int lbl_805D61B4;

void TQuestListOnline__sub_80215458(s32 arg0) {
    if ((u32) TQuestListOnline__data_805D6190 != 0U) {
        memcpy((int) (TQuestListOnline__data_805D6190), (void *) (arg0), (int) (0x11D4));
        TQuestListOnline__sub_8013ACF4(1);
    }
}

void reset_globals(void) { TQuestListOnline__data_805D61A0 = 0; TQuestListOnline__data_805D61A4 = 0; TQuestListOnline__data_805D61A8 = 0; lbl_805D61AC = 0; memset(TQuestListOnline__data_80513DE8, (void*)0, (void*)60); memset(TQuestListOnline__data_80513E24, (void*)0, (void*)60); TQuestListOnline__data_805D6198 = 0; TQuestListOnline__data_805D619C = 0; lbl_805D61B0 = 0; lbl_805D61B4 = 0; }
}
