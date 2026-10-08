#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void* copy__16TPlyGuildCardTagFPvPv(void* p, void* a1);
void TPlyGuildCardTag__sub_8013ACA4(void *arg0, void *arg1);
void __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *arg0, void *arg1);
    extern int lbl_805D60D0;
void fn_8013ACE4(int a0);
    extern int lbl_805D5328;
void set_area_random_seed(int a0);
void set_field_20__12TQuestListVMFPvi(void *, s32);
extern u8 *TQuestListOnline__data_805D61E0;
void TQuestListOnline__sub_8013ACF4(s32 arg0);
}

extern "C" {

void *copy_full__16TPlyGuildCardTagFPvPv(void *arg0, void *arg1);

void *copy_full__16TPlyGuildCardTagFPvPv(void *arg0, void *arg1) {
    copy__16TPlyGuildCardTagFPvPv((void*)(arg0), (void*)(arg1));
    ((void (*)(void *, void *))copy__16TPlyGuildCardTagFPvPv)((void *)((char *)arg0 + 36), (void *)((char *)arg1 + 36));
    return arg0;
}
void* copy__16TPlyGuildCardTagFPvPv(void* p, void* a1) { *(void**)(p) = *(void**)((char*)a1 + 0x0); TPlyGuildCardTag__sub_8013ACA4((void *)((char*)p + 0x4), (void *)((char*)a1 + 0x4)); TPlyGuildCardTag__sub_8013ACA4((void *)((char*)p + 0x8), (void *)((char*)a1 + 0x8)); TPlyGuildCardTag__sub_8013ACA4((void *)((char*)p + 0xc), (void *)((char*)a1 + 0xc)); TPlyGuildCardTag__sub_8013ACA4((void *)((char*)p + 0x10), (void *)((char*)a1 + 0x10)); TPlyGuildCardTag__sub_8013ACA4((void *)((char*)p + 0x14), (void *)((char*)a1 + 0x14)); TPlyGuildCardTag__sub_8013ACA4((void *)((char*)p + 0x18), (void *)((char*)a1 + 0x18)); TPlyGuildCardTag__sub_8013ACA4((void *)((char*)p + 0x1c), (void *)((char*)a1 + 0x1c)); TPlyGuildCardTag__sub_8013ACA4((void *)((char*)p + 0x20), (void *)((char*)a1 + 0x20)); return p; }
void TPlyGuildCardTag__sub_8013ACA4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
}
void __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
}
void fn_8013ACE4(int a0) { lbl_805D60D0 = a0; }
void set_area_random_seed(int a0) { lbl_805D5328 = a0; }
void TQuestListOnline__sub_8013ACF4(s32 arg0) {
    if ((void *) TQuestListOnline__data_805D61E0 != NULL) {
        set_field_20__12TQuestListVMFPvi(TQuestListOnline__data_805D61E0, arg0);
    }
}

}
