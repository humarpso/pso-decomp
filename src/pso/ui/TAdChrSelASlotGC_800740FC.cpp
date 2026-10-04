#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Srv_80074114 {
    u8 pad0[0x28];
    char buf[0x100];
    s32 f128;
    u8 pad12C[4];
    s32 f130;
    s32 f134;
    char name138[0xC];
    s32 f144;
    s32 f148;
    char name14c[0xC];
    s32 f158;
};

extern "C" {
char *TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
s32 TWindowSubStatusDisp__sub_8006F190(int);
M2C_UNK split_time_hms__22TQuestVmDownLoadServerFiPvPvPv(s32, s32 *, s32 *, s32 *);
int sprintf(char *, const char *, ...);
int strncmp(const char *, const char *, unsigned long);
char *strncat(char *, const char *, unsigned long);
extern char lbl_80438678[];
extern char lbl_80438698[];
extern char lbl_804386B0[];
extern char lbl_804386B8[];
extern char lbl_804386C4[];
extern char lbl_804386D8[];
extern char lbl_804386F0[];
extern char lbl_804386FC[];
extern char *lbl_8048D1A8[];
extern char lbl_805D9158[4];
void TQuestVmDownLoadServer__sub_80074114(Srv_80074114 *arg0);
}

extern "C" {

int TObjNewFloorWin__sub_8007410C(void);
void set_flag_40__16TAdChrSelASlotGCFPv(void* p);
int close_active_window__11TWindowCtrlFv(void*);
int fn_800740DC(void* p);

void set_flag_40__16TAdChrSelASlotGCFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x40; }

    extern int lbl_805D5FD8;
int TObjNewFloorWin__sub_8007410C(void) {  return lbl_805D5FD8; }
void TQuestVmDownLoadServer__sub_80074114(Srv_80074114 *arg0) {
    char tmp[0x28];
    s32 h;
    s32 m;
    s32 sec;
    s32 h2;
    s32 m2;
    s32 s2;
    s32 h3;
    s32 m3;
    s32 s3;
    s32 i;
    s32 d;
    char c;
    char *n;
    for (i = 0; i < 0x100; i++) {
        arg0->buf[i] = 0;
    }
    c = arg0->f128 + '1';
    split_time_hms__22TQuestVmDownLoadServerFiPvPvPv(arg0->f148, &h, &m, &sec);
    sprintf(tmp, lbl_80438678, TQuestVmDownLoadServer__sub_8006EF6C(0x54), TQuestVmDownLoadServer__sub_8006EF6C(0x53), c, h, m, sec);
    strncat(arg0->buf, tmp, 0x30);
    if (arg0->f130 != 0) {
        split_time_hms__22TQuestVmDownLoadServerFiPvPvPv(arg0->f130, &h2, &m2, &s2);
        sprintf(tmp, lbl_80438698, TQuestVmDownLoadServer__sub_8006EF6C(0x55), h2, m2, s2);
        strncat(arg0->buf, tmp, 0x30);
    }
    if (arg0->f134 == 0) {
        strncat(arg0->buf, lbl_804386B0, 0x30);
        strncat(arg0->buf, TQuestVmDownLoadServer__sub_8006EF6C(0x56), 0x30);
    } else {
        d = arg0->f148 - arg0->f134;
        if (d == 0) {
            sprintf(tmp, lbl_804386B8);
        } else if (d >= 0) {
            split_time_hms__22TQuestVmDownLoadServerFiPvPvPv(d, &h3, &m3, &s3);
            sprintf(tmp, lbl_804386C4, h3, m3, s3);
        } else {
            split_time_hms__22TQuestVmDownLoadServerFiPvPvPv(-d, &h3, &m3, &s3);
            sprintf(tmp, lbl_804386D8, h3, m3, s3, TQuestVmDownLoadServer__sub_8006EF6C(0x56));
        }
        strncat(arg0->buf, tmp, 0x30);
    }
    strncat(arg0->buf, lbl_805D9158, 2);
    if (TWindowSubStatusDisp__sub_8006F190(-1) == 0) {
        n = TQuestVmDownLoadServer__sub_8006EF6C(0x57);
        if (arg0->name138[0] == 0 || strncmp(arg0->name138, arg0->name14c, 0xC) == 0) {
            sprintf(tmp, lbl_804386F0, n, arg0->name14c);
        } else {
            sprintf(tmp, lbl_804386FC, n, arg0->name138, arg0->name14c);
        }
        strncat(arg0->buf, tmp, 0x30);
        strncat(arg0->buf, lbl_805D9158, 2);
    }
    if (arg0->f158 != 0) {
        n = TQuestVmDownLoadServer__sub_8006EF6C(0x58);
        if (arg0->f144 == 0 || arg0->f144 == arg0->f158) {
            sprintf(tmp, lbl_804386F0, n, lbl_8048D1A8[arg0->f158]);
        } else {
            sprintf(tmp, lbl_804386FC, n, lbl_8048D1A8[arg0->f144], lbl_8048D1A8[arg0->f158]);
        }
        strncat(arg0->buf, tmp, 0x30);
    }
}

}
