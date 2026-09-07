#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803E5EFC_lbl_8058DD88 {
    M2C_UNK value;
    u8 remaining[0x7C];
};

extern "C" {
void TQuestVmDownLoadServer__sub_803E6ED0(void);
s32 TQuestVmDownLoadServer__sub_803F0890(void);
extern s32 lbl_805D782C;
extern s32 lbl_805D7834;
s32 TQuestVmDownLoadServer__sub_803E5EB8(void);
M2C_UNK TQuestVmDownLoadServer__sub_803E6ACC(int);
s32 TQuestVmDownLoadServer__sub_803F08E4(void *);
extern RecoveredGlobal_803E5EFC_lbl_8058DD88 lbl_8058DD88;
extern s32 lbl_805D782C;
extern s32 lbl_805D7834;
s32 TQuestVmDownLoadServer__sub_803E5EFC(void);
u8 * TQuestVmDownLoadServer__sub_803EE828(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8039DCE0(int, int);
void TQuestVmDownLoadServer__sub_803E6ED0(void);
M2C_UNK TQuestVmDownLoadServer__sub_803EE2F4(int, void *);
extern s32 lbl_805D7834;
extern s32 lbl_805D78C0;
M2C_UNK strcpy(int, int);
void TQuestVmDownLoadServer__sub_803E6ED0(void);
M2C_UNK TQuestVmDownLoadServer__sub_803EE2F4(int, void *);
u8 * TQuestVmDownLoadServer__sub_803EE828(void);
extern s32 lbl_805D7834;
extern s32 lbl_805D78C0;
s32 TQuestVmDownLoadServer__sub_803E60CC(s32 *arg0);
}

extern "C" {

s32 TQuestVmDownLoadServer__sub_803E5668(void);

s32 TQuestVmDownLoadServer__sub_803E5668(void) {
    return -1;
}
s32 TQuestVmDownLoadServer__sub_803E5EB8(void) {
    if ((s32) lbl_805D782C == 0) {
        return -1;
    }
    TQuestVmDownLoadServer__sub_803E6ED0();
    TQuestVmDownLoadServer__sub_803F0890();
    lbl_805D7834 = 0;
    return 0;
}
typedef char RecoveredGlobal_803E5EFC_lbl_8058DD88_size[sizeof(RecoveredGlobal_803E5EFC_lbl_8058DD88) == 0x80 ? 1 : -1];
s32 TQuestVmDownLoadServer__sub_803E5EFC(void) {
    if ((s32) lbl_805D782C == 0) {
        return -1;
    }
    if (TQuestVmDownLoadServer__sub_803F08E4((void *) (&lbl_8058DD88.value)) == -7) {
        return 1;
    }
    TQuestVmDownLoadServer__sub_803E6ACC((int) (0));
    lbl_805D7834 = 1;
    return 0;
}
s32 TQuestVmDownLoadServer__sub_803E60CC(s32 *arg0) {
    s32 temp_r31;
    if ((s32) lbl_805D7834 != 3) {
        return -1;
    }
    temp_r31 = M2C_FIELD(arg0, s32 *, 0);
    TQuestVmDownLoadServer__sub_803EE2F4((int) (0), (void *) (lbl_805D78C0));
    strcpy((int) (temp_r31), (int) (((s32)TQuestVmDownLoadServer__sub_803EE828())));
    TQuestVmDownLoadServer__sub_803E6ED0();
    lbl_805D7834 = 1;
    return 0;
}

}
