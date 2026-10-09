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

struct Date_80075A00 {
    u32 year : 4;
    u32 month : 4;
    u32 pad8 : 3;
    u32 day : 5;
    u32 pad16 : 3;
    u32 hour : 5;
    u32 pad24 : 2;
    u32 minute : 6;
};

struct Tomb_80075A00 {
    u8 pad0[0xAC];
    s32 owner;
    u8 padB0[0xC8 - 0xB0];
    u32 date;
    u8 padCC[0x200 - 0xCC];
    char text[1];
};

struct Tomb_80075B5C { u8 pad[0xCC]; s32 rt_index; u8 pad2[0x1A0 - 0xD0]; char text[0x30]; };

extern "C" {
void reset_entries_and_format_name__13TObjTombstoneFPv(O_80075D68 *self);
void subtract_vector(Vec_8007598C *, Vec_8007598C *);
f32 vector_length(Vec_8007598C *);
extern s32 lbl_805D53A0;
extern const f32 lbl_805D91A8;
extern const f32 TObjTombstone__data_805D9174;
f32 get_distance_to_local_player_xz__13TObjTombstoneFPvPv(Obj_8007598C *self, void * _w1);
s32 submit_card_password__17TWindowSubComCardFi(char *);
int sprintf(char *, const char *, ...);
extern char lbl_804387F8[];
void format_quoted_name__13TObjTombstoneFPv(Obj_80075AE8 *self);
s32 submit_card_password__17TWindowSubComCardFi(char *);
const char *TQuestVmDownLoadServer__sub_8006EF6C(s32);
int sprintf(char *, const char *, ...);
extern char lbl_80438800[];
void build_name_text__13TObjTombstoneFPv(Obj_80075BE0 *self);
const char *TQuestVmDownLoadServer__sub_8006EF6C(s32);
int sprintf(char *, const char *, ...);
extern char lbl_80438808[];
void format_label__13TObjTombstoneFPv(Obj_80075C60 *self);
Ply_8007598C * get_player_by_client_id(s32, void *);
int sprintf(char *, const char *, ...);
char *strncpy(char *, const char *, unsigned long);
unsigned long strlen(const char *);
extern char lbl_80438810[];
void format_player_name__13TObjTombstoneFPv(Obj_80075CB4 *self);
int sprintf(char *, const char *, ...);
extern char lbl_804387C8[];
extern char lbl_804387E0[];
extern s32 lbl_805D53A0;
extern s32 current_language;
void format_date_text__13TObjTombstoneFPv(Tomb_80075A00 *self);
const char *TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 enemy_name_for_rt_index(s32);
int sprintf(char *, const char *, ...);
char *strncpy(char *, const char *, unsigned long);
void format_enemy_text__13TObjTombstoneFPv(Tomb_80075B5C *self);
}

extern "C" {

void render__13TObjTombstoneFv(s32 arg0);
s32 resolve_player_slot__20TWindowSubStatusDispFi(M2C_UNK);
M2C_UNK update_fade_by_distance__13TObjTombstoneFPv(s32);
M2C_UNK draw_name_labels__13TObjTombstoneFPv(s32);
M2C_UNK update_render_flags__13TObjTombstoneFPv(s32);
s32 check_height_ready__13TObjTombstoneFPv();

void render__13TObjTombstoneFv(s32 arg0) {
    s32 temp_r3;

    if (check_height_ready__13TObjTombstoneFPv() != 0) {
        update_render_flags__13TObjTombstoneFPv(arg0);
        temp_r3 = resolve_player_slot__20TWindowSubStatusDispFi(-1);
        switch (temp_r3) {
        case 2:
        case 3:
            update_fade_by_distance__13TObjTombstoneFPv(arg0);
            break;
        default:
            draw_name_labels__13TObjTombstoneFPv(arg0);
            break;
        }
    }
}

f32 get_distance_to_local_player_xz__13TObjTombstoneFPvPv(Obj_8007598C *self, void * _w1) {
    Ply_8007598C *p = get_player_by_client_id((s32)(lbl_805D53A0), (void *)(_w1));
    if (p == 0) {
        return lbl_805D91A8;
    }
    Vec_8007598C v = self->pos;
    subtract_vector(&v, &p->pos);
    v.y = TObjTombstone__data_805D9174;
    return vector_length(&v);
}

void format_date_text__13TObjTombstoneFPv(Tomb_80075A00 *self) {
    char *text;
    s32 month;
    s32 day;
    s32 hour;
    s32 minute;
    s32 year;
    u32 d;
    text = self->text;
    text[0] = 0;
    if (self->owner != lbl_805D53A0) {
        return;
    }
    d = self->date;
    year = d >> 28;
    month = (d >> 24) & 0xF;
    day = (d >> 16) & 0x1F;
    hour = (d >> 8) & 0x1F;
    minute = d & 0x3F;
    if (year == 15 || month <= 0 || month > 12 || day <= 0 || day > 31
        || hour < 0 || hour >= 24 || minute < 0 || minute >= 60) {
        return;
    }
    switch (current_language) {
    case 0:
        sprintf(text, lbl_804387C8, year + 2000, month, day, hour, minute);
        break;
    default:
        sprintf(text, lbl_804387E0, month, day, year + 2000, hour, minute);
        break;
    }
}

void format_quoted_name__13TObjTombstoneFPv(Obj_80075AE8 *self) {
    char *buf = self->buf;
    if (self->name[0] == 0 || submit_card_password__17TWindowSubComCardFi(self->name) != 0) {
        buf[0] = 0;
    } else {
        sprintf(buf, lbl_804387F8, self->name);
    }
    buf[0x2F] = 0;
}

void format_enemy_text__13TObjTombstoneFPv(Tomb_80075B5C *self) {
    char fmt[0x30];
    char *text = self->text;
    s32 name;
    text[0] = 0;
    if (self->rt_index > 0) {
        name = enemy_name_for_rt_index(self->rt_index);
        if (name != 0) {
            strncpy(fmt, TQuestVmDownLoadServer__sub_8006EF6C(0x4E), 0x2F);
            fmt[0x2F] = 0;
            sprintf(text, fmt, name);
        }
    }
    text[0x2F] = 0;
}

void build_name_text__13TObjTombstoneFPv(Obj_80075BE0 *self) {
    char *buf = self->buf;
    if (self->name[0] == 0 || submit_card_password__17TWindowSubComCardFi(self->name) != 0) {
        buf[0] = 0;
    } else {
        sprintf(buf, lbl_80438800, TQuestVmDownLoadServer__sub_8006EF6C(0x4C), self->name);
    }
    buf[0x2F] = 0;
}

void format_label__13TObjTombstoneFPv(Obj_80075C60 *self) {
    sprintf(self->buf, lbl_80438808, TQuestVmDownLoadServer__sub_8006EF6C(0x4D), self->val);
    self->buf[0x2F] = 0;
}

void format_player_name__13TObjTombstoneFPv(Obj_80075CB4 *self) {
    char buf[0x30];
    char *p;
    Ply_80075CB4 *ply;
    char *dst = self->name;
    ply = ((Ply_80075CB4 *)get_player_by_client_id((s32)(self->fac), (void *)(self)));
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

void reset_entries_and_format_name__13TObjTombstoneFPv(O_80075D68 *self) {
    s32 i;
    for (i = 0; i < 6; i++) {
        self->e[i].f0 = 0;
    }
    format_player_name__13TObjTombstoneFPv((Obj_80075CB4 *)(self));
}

}
