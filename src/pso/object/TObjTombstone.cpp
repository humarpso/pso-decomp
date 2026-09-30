#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_80075D68 { u8 f0; u8 pad[0x2f]; };

struct O_80075D68 { u8 pad[0x110]; E_80075D68 e[6]; };

struct Vec_8007598C { f32 x, y, z; };

struct Obj_8007598C { u8 pad[0x38]; Vec_8007598C pos; };

struct Ply_8007598C { u8 pad[0x38]; Vec_8007598C pos; };

struct Obj_80075AE8 { u8 pad[0xF0]; char name[0xE0]; char buf[0x30]; };

struct Obj_80075BE0 { u8 pad[0xDC]; char name[0x94]; char buf[0x30]; };

struct Obj_80075C60 { u8 pad[0xC4]; s16 val; u8 pad2[0x7A]; char buf[0x30]; };

struct Obj_80075CB4 { u8 pad[0xAC]; s32 fac; u8 pad_b0[0x110 - 0xB0]; char name[0x30]; };

struct Ply_80075CB4 { u8 pad[0x85C]; char name[0x30]; };

extern "C" {
void TObjTombstone__sub_80075D68(O_80075D68 *self);
void TBoss6Type1__sub_803D9370(Vec_8007598C *, Vec_8007598C *);
f32 TBoss6Kakusan__sub_803D8BD8(Vec_8007598C *);
extern s32 lbl_805D53A0;
extern const f32 lbl_805D91A8;
extern const f32 TObjTombstone__data_805D9174;
f32 TObjTombstone__sub_8007598C(Obj_8007598C *self, void * _w1);
s32 submit_card_password__17TWindowSubComCardFi(char *);
int sprintf(char *, const char *, ...);
extern char lbl_804387F8[];
void TObjTombstone__sub_80075AE8(Obj_80075AE8 *self);
s32 submit_card_password__17TWindowSubComCardFi(char *);
const char *TQuestVmDownLoadServer__sub_8006EF6C(s32);
int sprintf(char *, const char *, ...);
extern char lbl_80438800[];
void TObjTombstone__sub_80075BE0(Obj_80075BE0 *self);
const char *TQuestVmDownLoadServer__sub_8006EF6C(s32);
int sprintf(char *, const char *, ...);
extern char lbl_80438808[];
void TObjTombstone__sub_80075C60(Obj_80075C60 *self);
Ply_8007598C * TPlayerBattleCtrl4P__sub_801BA74C(s32, void *);
int sprintf(char *, const char *, ...);
char *strncpy(char *, const char *, unsigned long);
unsigned long strlen(const char *);
extern char lbl_80438810[];
void TObjTombstone__sub_80075CB4(Obj_80075CB4 *self);
}

extern "C" {

void render__13TObjTombstoneFv(s32 arg0);
s32 TWindowSubStatusDisp__sub_8006F190(M2C_UNK);
M2C_UNK TObjTombstone__sub_80075340(s32);
M2C_UNK TObjTombstone__sub_800753DC(s32);
M2C_UNK update_render_flags__13TObjTombstoneFPv(s32);
s32 check_height_ready__13TObjTombstoneFPv();

void render__13TObjTombstoneFv(s32 arg0) {
    s32 temp_r3;

    if (check_height_ready__13TObjTombstoneFPv() != 0) {
        update_render_flags__13TObjTombstoneFPv(arg0);
        temp_r3 = TWindowSubStatusDisp__sub_8006F190(-1);
        switch (temp_r3) {
        case 2:
        case 3:
            TObjTombstone__sub_80075340(arg0);
            break;
        default:
            TObjTombstone__sub_800753DC(arg0);
            break;
        }
    }
}

f32 TObjTombstone__sub_8007598C(Obj_8007598C *self, void * _w1) {
    Ply_8007598C *p = TPlayerBattleCtrl4P__sub_801BA74C((s32)(lbl_805D53A0), (void *)(_w1));
    if (p == 0) {
        return lbl_805D91A8;
    }
    Vec_8007598C v = self->pos;
    TBoss6Type1__sub_803D9370(&v, &p->pos);
    v.y = TObjTombstone__data_805D9174;
    return TBoss6Kakusan__sub_803D8BD8(&v);
}

void TObjTombstone__sub_80075AE8(Obj_80075AE8 *self) {
    char *buf = self->buf;
    if (self->name[0] == 0 || submit_card_password__17TWindowSubComCardFi(self->name) != 0) {
        buf[0] = 0;
    } else {
        sprintf(buf, lbl_804387F8, self->name);
    }
    buf[0x2F] = 0;
}

void TObjTombstone__sub_80075BE0(Obj_80075BE0 *self) {
    char *buf = self->buf;
    if (self->name[0] == 0 || submit_card_password__17TWindowSubComCardFi(self->name) != 0) {
        buf[0] = 0;
    } else {
        sprintf(buf, lbl_80438800, TQuestVmDownLoadServer__sub_8006EF6C(0x4C), self->name);
    }
    buf[0x2F] = 0;
}

void TObjTombstone__sub_80075C60(Obj_80075C60 *self) {
    sprintf(self->buf, lbl_80438808, TQuestVmDownLoadServer__sub_8006EF6C(0x4D), self->val);
    self->buf[0x2F] = 0;
}

void TObjTombstone__sub_80075CB4(Obj_80075CB4 *self) {
    char buf[0x30];
    char *p;
    Ply_80075CB4 *ply;
    char *dst = self->name;
    ply = ((Ply_80075CB4 *)TPlayerBattleCtrl4P__sub_801BA74C((s32)(self->fac), (void *)(self)));
    dst[0] = 0;
    if (ply != NULL) {
        strncpy(buf, ply->name, 0x2F);
        buf[0x2F] = 0;
        for (p = buf + strlen(buf) - 1; p > buf && *p == ' '; p--) {
            *p = 0;
        }
        sprintf(dst, lbl_80438810, buf);
    }
    dst[0x2F] = 0;
}

void TObjTombstone__sub_80075D68(O_80075D68 *self) {
    s32 i;
    for (i = 0; i < 6; i++) {
        self->e[i].f0 = 0;
    }
    TObjTombstone__sub_80075CB4((Obj_80075CB4 *)(self));
}

}
