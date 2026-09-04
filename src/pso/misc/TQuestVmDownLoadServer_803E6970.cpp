#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TQuestVmDownLoadServer__sub_803E719C(u8 arg0, s32 arg1);
s32 TQuestVmDownLoadServer__sub_803E8788(void);
void TQuestVmDownLoadServer__sub_803E8918(void);
s32 TQuestVmDownLoadServer__sub_803F0BD8(void);
s32 TQuestVmDownLoadServer__sub_803F0BE0(void);
void TQuestVmDownLoadServer__sub_803F0BE8(u8 *arg0);
s32 get_buffer_size__22TQuestVmDownLoadServerFv(void);
s32 get_download_state__22TQuestVmDownLoadServerFv(void);
s32 is_download_command__22TQuestVmDownLoadServerFUsi(u16 arg0, s32 arg1);
s32 is_sjis_lead_byte__22TQuestVmDownLoadServerFUc(u8 arg0);
void push_download_entry__22TQuestVmDownLoadServerFPv(M2C_UNK *arg0);
void set_active__22TQuestVmDownLoadServerFv(void);

s32 get_buffer_size__22TQuestVmDownLoadServerFv(void) {
    return 0x48;
}

s32 TQuestVmDownLoadServer__sub_803E719C(u8 arg0, s32 arg1) {
    return arg0 | ((arg1 & 0x100) + 0x2400);
}

extern u8 *lbl_805D7858;

void set_active__22TQuestVmDownLoadServerFv(void) {
    M2C_FIELD(lbl_805D7858, s32 *, 4) = 1;
}

s32 TQuestVmDownLoadServer__sub_803E8788(void) {
    return -1;
}

extern s8 lbl_805D7868;

void TQuestVmDownLoadServer__sub_803E8918(void) {
    lbl_805D7868 = 1;
}

s32 is_download_command__22TQuestVmDownLoadServerFUsi(u16 arg0, s32 arg1) {
    if ((arg1 != 0) && (arg0 == 0x213C)) {
        return 1;
    }
    if ((s32) (arg0 & 0xFF00) == 0x2500) {
        return 1;
    }
    return 0;
}

s32 is_sjis_lead_byte__22TQuestVmDownLoadServerFUc(u8 arg0) {
    if ((arg0 < 0x81U) || (arg0 > 0xFCU) || ((arg0 >= 0xA0U) && (arg0 < 0xE0U))) {
        return 0;
    }
    return 1;
}

extern s32 lbl_805D78AC;
extern M2C_UNK *lbl_805D78B0;

void push_download_entry__22TQuestVmDownLoadServerFPv(M2C_UNK *arg0) {
    if (arg0 != NULL) {
        *arg0 = (long) (lbl_805D78B0);
        lbl_805D78B0 = arg0;
        lbl_805D78AC += 1;
    }
}

extern s32 lbl_805D7900;

s32 get_download_state__22TQuestVmDownLoadServerFv(void) {
    return lbl_805D7900;
}

s32 TQuestVmDownLoadServer__sub_803F0BD8(void) {
    return 0;
}

s32 TQuestVmDownLoadServer__sub_803F0BE0(void) {
    return 1;
}

extern u32 lbl_805D7924;
extern s32 lbl_805D7928;

void TQuestVmDownLoadServer__sub_803F0BE8(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 4) == (u32) lbl_805D7924) {
        lbl_805D7928 = 0;
    }
}

}
