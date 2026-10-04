#include "types.h"
typedef struct A_803F63F0 {
    char name[0x20];
    s16 v20, v22, v24, v26;
} A_803F63F0;

typedef struct B_803F63F0 {
    char s000[0x20];
    char s020[0x80];
    char s0A0[0x20];
    s32 v0C0;
    s32 v0C4;
    s32 v0C8;
    char s0CC[0x40];
    u16 v10C;
    s16 v10E;
    u8 v110;
    u8 v111;
    u8 pad112[2];
    char s114[0x10];
    char s124[0x10];
    char s134[0x20];
    char s154[0x20];
    char s174[0x20];
    s16 v194;
    s16 v196;
    char s198[0x20];
    u8 v1B8;
    u8 v1B9;
    u8 pad1BA[2];
    s32 v1BC;
    s32 v1C0;
    s32 v1C4;
    char s1C8[0x40];
    s32 v208;
    s32 v20C;
} B_803F63F0;

typedef struct C_803F63F0 {
    u8 v00;
    u8 v01;
    s16 v02;
    char s04[0x40];
    char s44[0x40];
    char s84[0x40];
    char sC4[0x20];
    char sE4[0x20];
    char s104[0x20];
} C_803F63F0;

typedef struct D_803F63F0 {
    u8 v00;
    u8 pad01[3];
    char s04[0x20];
    char s24[0x20];
    char s44[0x20];
    char s64[0x20];
} D_803F63F0;

typedef struct E_803F63F0 {
    char s[0x190];
} E_803F63F0;

typedef struct F_803F63F0 {
    char s[0x100];
} F_803F63F0;

typedef struct Q_803F63F0 {
    u16 v0;
    s16 v2;
    s16 v4;
    s16 v6;
    A_803F63F0 a[6];
    B_803F63F0 b[6];
    C_803F63F0 c[6];
    D_803F63F0 d[1];
    E_803F63F0 e[2];
    F_803F63F0 f[2];
} Q_803F63F0;

extern "C" {
int strncmp(const char *, const char *, unsigned long);
char *strncpy(char *, const char *, unsigned long);
int atoi(const char *);
s32 TQuestVmDownLoadServer__sub_803F7058(char *, u32);
s32 TQuestVmDownLoadServer__sub_803F70C0(char *, u32);
void TQuestVmDownLoadServer__sub_803F7128(char *, char *, u32, int);
extern char lbl_805A8C08[];
extern char lbl_805D4710[8];
extern char lbl_805D4718[8];
extern char lbl_805D4720[8];
extern char lbl_805D4728[8];
extern char lbl_805D4730[4];
extern char lbl_805D4734[4];
extern char lbl_805D4738[4];
extern char lbl_805D473C[4];
extern char lbl_805D4740[4];
extern char lbl_805D4744[4];
extern char lbl_805D4748[4];
extern char lbl_805D474C[4];
extern char lbl_805D4750[4];
extern char lbl_805D4754[4];
extern char lbl_805D4758[4];
extern char lbl_805D475C[4];
extern char lbl_805D4760[4];
extern char lbl_805D4764[4];
extern char lbl_805D4768[4];
extern char lbl_805D476C[4];
extern char lbl_805D4770[4];
extern char lbl_805D4774[4];
extern char lbl_805D4778[4];
extern char lbl_805D477C[4];
extern char lbl_805D4780[4];
extern char lbl_805D4784[4];
extern char lbl_805D4788[4];
extern char lbl_805D478C[4];
extern char lbl_805D4790[4];
extern char lbl_805D4794[4];
extern char lbl_805D4798[4];
extern char lbl_805D479C[4];
extern char lbl_805D47A0[4];
extern char lbl_805D47A4[4];
extern char lbl_805D47A8[4];
extern char lbl_805D47AC[4];
extern char lbl_805D47B0[4];
extern char lbl_805D47B4[4];
extern char lbl_805D47B8[4];
extern char lbl_805D47BC[4];
extern char lbl_805D47C0[4];
extern char lbl_805D47C4[4];
extern char lbl_805D47C8[4];
extern char lbl_805D47CC[4];
extern char lbl_805D47D0[4];
extern char lbl_805D47D4[4];
extern char lbl_805D47D8[4];
extern char lbl_805D47DC[4];
extern char lbl_805D47E0[4];
extern char lbl_805D47E4[4];
extern char lbl_805D47E8[4];
extern char lbl_805D47EC[4];
extern s32 lbl_805D79E8;
extern u32 lbl_805D79EC;
s32 TQuestVmDownLoadServer__sub_803F63F0(char *s, u32 n, Q_803F63F0 *q);
}

extern "C" {

#pragma push
#pragma peephole off
#pragma scheduling off
#define GET(f) TQuestVmDownLoadServer__sub_803F7058(s, n)
#define GETL() TQuestVmDownLoadServer__sub_803F70C0(s, n)
#define CPY(dst, len) TQuestVmDownLoadServer__sub_803F7128(dst, s, n, len)
s32 TQuestVmDownLoadServer__sub_803F63F0(char *s, u32 n, Q_803F63F0 *q) {
    char buf[8];
    s32 i;
    lbl_805D79E8 = 0;
    if (n < 4) {
        return 0;
    }
    if (s[4] != '=') {
        return 0;
    }
    strncpy(buf, s, 4);
    buf[4] = 0;
    i = atoi(&buf[3]);
    if (strncmp(s, lbl_805D4710, 4) == 0) {
        q->v0 = TQuestVmDownLoadServer__sub_803F7058(s, n);
    } else if (strncmp(s, lbl_805D4718, 4) == 0) {
        q->v2 = TQuestVmDownLoadServer__sub_803F7058(s, n);
    } else if (strncmp(s, lbl_805D4720, 4) == 0) {
        q->v4 = TQuestVmDownLoadServer__sub_803F7058(s, n);
    } else if (strncmp(s, lbl_805D4728, 4) == 0) {
        q->v6 = TQuestVmDownLoadServer__sub_803F7058(s, n);
    }
    if (lbl_805D79E8 == 0 && i < 6) {
        if (strncmp(s, lbl_805D4730, 3) == 0) {
            CPY(q->a[i].name, 0x20);
        } else if (strncmp(s, lbl_805D4734, 3) == 0) {
            q->a[i].v20 = GET();
        } else if (strncmp(s, lbl_805D4738, 3) == 0) {
            q->a[i].v22 = GET();
        } else if (strncmp(s, lbl_805D473C, 3) == 0) {
            q->a[i].v24 = GET();
        } else if (strncmp(s, lbl_805D4740, 3) == 0) {
            q->a[i].v26 = GET();
        }
    }
    if (lbl_805D79E8 == 0 && i < 6) {
        if (strncmp(s, lbl_805D4744, 3) == 0) {
            CPY(q->b[i].s000, 0x20);
        } else if (strncmp(s, lbl_805D4748, 3) == 0) {
            CPY(q->b[i].s020, 0x80);
        } else if (strncmp(s, lbl_805D474C, 3) == 0) {
            CPY(q->b[i].s0A0, 0x20);
        } else if (strncmp(s, lbl_805D4750, 3) == 0) {
            q->b[i].v0C0 = GETL();
        } else if (strncmp(s, lbl_805D4754, 3) == 0) {
            q->b[i].v0C4 = GETL();
        } else if (strncmp(s, lbl_805D4758, 3) == 0) {
            q->b[i].v0C8 = GET();
        } else if (strncmp(s, lbl_805D475C, 3) == 0) {
            CPY(q->b[i].s0CC, 0x40);
        } else if (strncmp(s, lbl_805D4760, 3) == 0) {
            q->b[i].v10C = GETL();
        } else if (strncmp(s, lbl_805D4764, 3) == 0) {
            q->b[i].v10E = GET();
        } else if (strncmp(s, lbl_805D4768, 3) == 0) {
            q->b[i].v110 = GET();
        } else if (strncmp(s, lbl_805D476C, 3) == 0) {
            q->b[i].v111 = GET();
        } else if (strncmp(s, lbl_805D4770, 3) == 0) {
            CPY(q->b[i].s114, 0x10);
        } else if (strncmp(s, lbl_805D4774, 3) == 0) {
            CPY(q->b[i].s124, 0x10);
        } else if (strncmp(s, lbl_805D4778, 3) == 0) {
            CPY(q->b[i].s134, 0x20);
        } else if (strncmp(s, lbl_805D477C, 3) == 0) {
            CPY(q->b[i].s154, 0x20);
        } else if (strncmp(s, lbl_805D4780, 3) == 0) {
            CPY(q->b[i].s174, 0x20);
        } else if (strncmp(s, lbl_805D4784, 3) == 0) {
            q->b[i].v194 = GET();
        } else if (strncmp(s, lbl_805D4788, 3) == 0) {
            q->b[i].v196 = GET();
        } else if (strncmp(s, lbl_805D478C, 3) == 0) {
            CPY(q->b[i].s198, 0x20);
        } else if (strncmp(s, lbl_805D4790, 3) == 0) {
            q->b[i].v1B8 = GET();
        } else if (strncmp(s, lbl_805D4794, 3) == 0) {
            q->b[i].v1B9 = GET();
        } else if (strncmp(s, lbl_805D4798, 3) == 0) {
            q->b[i].v1BC = GETL();
        } else if (strncmp(s, lbl_805D479C, 3) == 0) {
            q->b[i].v1C0 = GETL();
        } else if (strncmp(s, lbl_805D47A0, 3) == 0) {
            q->b[i].v1C4 = GETL();
        } else if (strncmp(s, lbl_805D47A4, 3) == 0) {
            CPY(q->b[i].s1C8, 0x40);
        } else if (strncmp(s, lbl_805D47A8, 3) == 0) {
            q->b[i].v208 = GET();
        } else if (strncmp(s, lbl_805D47AC, 3) == 0) {
            q->b[i].v20C = GET();
        }
    }
    if (lbl_805D79E8 == 0 && i < 6) {
        if (strncmp(s, lbl_805D47B0, 3) == 0) {
            q->c[i].v00 = GET();
        } else if (strncmp(s, lbl_805D47B4, 3) == 0) {
            q->c[i].v01 = GET();
        } else if (strncmp(s, lbl_805D47B8, 3) == 0) {
            q->c[i].v02 = GET();
        } else if (strncmp(s, lbl_805D47BC, 3) == 0) {
            CPY(q->c[i].s04, 0x40);
        } else if (strncmp(s, lbl_805D47C0, 3) == 0) {
            CPY(q->c[i].s44, 0x40);
        } else if (strncmp(s, lbl_805D47C4, 3) == 0) {
            CPY(q->c[i].s84, 0x40);
        } else if (strncmp(s, lbl_805D47C8, 3) == 0) {
            CPY(q->c[i].sC4, 0x20);
        } else if (strncmp(s, lbl_805D47CC, 3) == 0) {
            CPY(q->c[i].sE4, 0x20);
        } else if (strncmp(s, lbl_805D47D0, 3) == 0) {
            CPY(q->c[i].s104, 0x20);
        }
    }
    if (lbl_805D79E8 == 0 && i < 1) {
        if (strncmp(s, lbl_805D47D4, 3) == 0) {
            q->d[i].v00 = GET();
        } else if (strncmp(s, lbl_805D47D8, 3) == 0) {
            CPY(q->d[i].s04, 0x20);
        } else if (strncmp(s, lbl_805D47DC, 3) == 0) {
            CPY(q->d[i].s24, 0x20);
        } else if (strncmp(s, lbl_805D47E0, 3) == 0) {
            CPY(q->d[i].s44, 0x20);
        } else if (strncmp(s, lbl_805D47E4, 3) == 0) {
            CPY(q->d[i].s64, 0x20);
        }
    }
    if (lbl_805D79E8 == 0 && lbl_805D79EC + n < 0x400) {
        if (strncmp(s, lbl_805D47E8, 3) == 0) {
            CPY(q->e[i].s, 0x190);
        } else if (strncmp(s, lbl_805D47EC, 3) == 0) {
            CPY(q->f[i].s, 0x100);
        }
    }
    if (lbl_805D79E8 == 0 && lbl_805D79EC + n < 0x400) {
        strncpy(lbl_805A8C08 + lbl_805D79EC, s, n + 2);
        lbl_805D79EC += n + 2;
        lbl_805A8C08[lbl_805D79EC] = 0;
    }
    return 0;
}
#pragma pop

}
