#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void set_char_slots__23TAdSinglePlyChrSelectGCFPvii(void *, s32, s32);
void init_warps__23TAdSinglePlyChrSelectGCFPv(void *);
extern s32 lbl_805D6D90;
void TAdSinglePlyChrSelectGC__sub_8033A9F0(u8 *arg0);
}

extern "C" {

void alloc_download_buffer__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void clear_buffer(void* p);
void free_buffer__23TAdSinglePlyChrSelectGCFPv(void* p);
void init_logo_state__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void noop__23TAdSinglePlyChrSelectGCFv(void);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
int memset(void*, void*, void*);
int safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

extern s32 lbl_805D6D80;
extern s32 lbl_805D6D84;
extern s32 lbl_805D6D88;
extern s32 lbl_805D6D8C;

void init_logo_state__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    lbl_805D6D88 = 0;
    lbl_805D6D84 = 0;
    lbl_805D6D80 = arg0;
    lbl_805D6D8C = 0xFFFF;
}

void noop__23TAdSinglePlyChrSelectGCFv(void) {  }
void free_buffer__23TAdSinglePlyChrSelectGCFPv(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { safe_free__23TAdSinglePlyChrSelectGCFUi(*(void**)((char*)p + 0x20)); *(int*)((char*)p + 0x20) = 0; *(int*)((char*)p + 0x1c) = 0; } }
void clear_buffer(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { memset(*(void**)((char*)p + 0x20), (void*)0, *(void**)((char*)p + 0x1c)); } }
void alloc_download_buffer__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x16000;
        M2C_FIELD(arg0, u32 *, 0x20) = alloc__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, s32 *, 0x1C));
    }
}
void TAdSinglePlyChrSelectGC__sub_8033A9F0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2C) = 0xB;
    lbl_805D6D90 &= 0xFFFFFFFE;
    set_char_slots__23TAdSinglePlyChrSelectGCFPvii(arg0, 0xA, M2C_FIELD(arg0, s32 *, 0x24) + 0xF);
    init_warps__23TAdSinglePlyChrSelectGCFPv(arg0);
}

}
