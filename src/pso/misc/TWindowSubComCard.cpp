#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag_and_release__17TWindowSubComCardFPv(void *arg0);
s32 fn_802183B4(void* p);
void TQuestListVM__sub_802183F8(void* p, void* a1);
void poll_download__12TQuestListVMFv(void);
int TQuestListVM__sub_80073DC4(void*, void*);
u32 TQuestVmDownLoadServer__sub_800FA8A4();
s32 TQuestVmDownLoadServer__sub_800FA8C4();
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);

s32 fn_802183B4(void* p) { return *(s32*)((char*)p + 0x68); }
void clear_flag_and_release__17TWindowSubComCardFPv(void *arg0) {
    u32 temp;
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) & 0xFFFFFFFD);
    temp = (u32) M2C_FIELD(arg0, u32 *, 0x88);
    if (temp != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc(temp, 1);
    }
}
void TQuestListVM__sub_802183F8(void* p, void* a1) { TQuestListVM__sub_80073DC4(p, (void*)20); *(void**)((char*)p + 0x23b4) = a1; }
void poll_download__12TQuestListVMFv(void) {
    if (TQuestVmDownLoadServer__sub_800FA8A4() == 0U) {
        TQuestVmDownLoadServer__sub_800FA8C4();
    }
}

}
