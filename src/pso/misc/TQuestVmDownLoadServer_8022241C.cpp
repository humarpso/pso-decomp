#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
int sprintf(char *, const char *, ...);
void TQuestVmDownLoadServer__sub_80222704(void *arg0, s32 arg1);
s32 get_field230__22TQuestVmDownLoadServerFv(void);
extern char lbl_805DC718[4];
void TQuestVmDownLoadServer__sub_8022241C(s32 arg0);
}

extern "C" {

void TQuestVmDownLoadServer__sub_80222704(void *arg0, s32 arg1);
void TQuestVmDownLoadServer__sub_80222754(void *arg0, s8 arg1);
void TQuestVmDownLoadServer__sub_80222768(void *arg0, s32 arg1, s32 arg2);
void display_message__22TQuestVmDownLoadServerFPvii(u8 *arg0, s32 arg1, s32 arg2);
void format_and_send_message__22TQuestVmDownLoadServerFPvii(u8 *arg0, s32 arg1, s32 arg2);
u8 is_idle__22TQuestVmDownLoadServerFPv(void *arg0);
s32 poll_field_20c__22TQuestVmDownLoadServerFPv(void *arg0);
u8 read_byte__22TQuestVmDownLoadServerFPv(void *arg0);
void send_message__22TQuestVmDownLoadServerFPvii(void *arg0, s32 arg1, s32 arg2);
M2C_UNK strcpy(s32, s32);
s32 TLobby__sub_80222C54(s32);
s32 TLobby__sub_80222CBC(s32);
M2C_UNK TQuestVmDownLoadServer__sub_80222774(void *, s32, void *);
M2C_UNK TWindowMessagePage__sub_8026AE20(u32, void *, s32);
s32 is_ready__18TWindowMessagePageFPv(void *);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
s32 strlen(s32);

void TQuestVmDownLoadServer__sub_8022241C(s32 arg0) {
    char buf[0x20];
    s32 v = get_field230__22TQuestVmDownLoadServerFv();
    memset((void *)(buf), (M2C_UNK)(0), (M2C_UNK)(0x20));
    sprintf(buf, lbl_805DC718, v);
    TQuestVmDownLoadServer__sub_80222704((void *)(arg0), (s32)((s32 *)buf));
}

u8 is_idle__22TQuestVmDownLoadServerFPv(void *arg0) {
    return (u8) ((s8) *M2C_FIELD(arg0, u8 **, 0x204) == 0);
}

u8 read_byte__22TQuestVmDownLoadServerFPv(void *arg0) {
    u8 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 **, 0x204);
    M2C_FIELD(arg0, u8 **, 0x204) = (u8 *) (temp_r4 + 1);
    return *temp_r4;
}

void TQuestVmDownLoadServer__sub_80222704(void *arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = strlen(arg1);
    strcpy(M2C_FIELD(arg0, s32 *, 0x208), arg1);
    M2C_FIELD(arg0, s32 *, 0x208) = (s32) (M2C_FIELD(arg0, s32 *, 0x208) + temp_r31);
}

void TQuestVmDownLoadServer__sub_80222754(void *arg0, s8 arg1) {
    s8 *temp_r5;

    temp_r5 = M2C_FIELD(arg0, s8 **, 0x208);
    M2C_FIELD(arg0, s8 **, 0x208) = (s8 *) (temp_r5 + 1);
    *temp_r5 = arg1;
}

void TQuestVmDownLoadServer__sub_80222768(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x204) = arg1;
    M2C_FIELD(arg0, s32 *, 0x208) = arg2;
}

s32 poll_field_20c__22TQuestVmDownLoadServerFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x20C);
    if (temp_r3 != NULL) {
        return is_ready__18TWindowMessagePageFPv(temp_r3);
    }
    return 1;
}

void send_message__22TQuestVmDownLoadServerFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20C) != 0U) {
        TWindowMessagePage__sub_8026AE20((u32)(M2C_FIELD(arg0, u32 *, 0x20C)), (void *)(TLobby__sub_80222CBC(arg1)), (s32)(arg2 | 0x80));
    }
}

void format_and_send_message__22TQuestVmDownLoadServerFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x20C) != 0U) {
        temp_r31 = TLobby__sub_80222C54(arg1);
        memset(arg0 + 4, 0, 0x200);
        TQuestVmDownLoadServer__sub_80222774(arg0, temp_r31, arg0 + 4);
        TWindowMessagePage__sub_8026AE20((u32)(M2C_FIELD(arg0, u32 *, 0x20C)), (void *)(arg0 + 4), (s32)(arg2 | 0x80));
    }
}

void display_message__22TQuestVmDownLoadServerFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20C) != 0U) {
        memset(arg0 + 4, 0, 0x200);
        TQuestVmDownLoadServer__sub_80222774(arg0, arg1, arg0 + 4);
        TWindowMessagePage__sub_8026AE20(M2C_FIELD(arg0, u32 *, 0x20C), arg0 + 4, arg2 | 0x80);
    }
}

}
