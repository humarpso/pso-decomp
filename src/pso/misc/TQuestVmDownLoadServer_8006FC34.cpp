#include "types.h"

struct Info_8006FE7C {
    s8 a;
    s8 b;
    s8 c;
    u8 pad3;
    s16 d;
};

struct Rec_8006FE7C {
    s32 active;
    u8 pad4[0x60];
    Info_8006FE7C info;
    u8 pad6A[0x104 - 0x6A];
};

struct Table_8006FE7C {
    s32 v0;
    s32 v4;
    s32 v8;
    u8 padC[0x270 - 0xC];
    Rec_8006FE7C recs[4];
};

struct Date_8006FC7C { u16 year; u8 a; u8 b; u8 c; u8 d; u8 pad[6]; };

struct Vec_8006FC7C { f32 x, y, z; };

struct Ply_8006FC7C { u8 pad[0x38]; Vec_8006FC7C pos; };

struct Card_8006FC7C {
    u8 pad0[0x2224];
    s8 f2224;
    s8 f2225;
    s8 f2226;
    u8 pad2227;
    s16 f2228;
    u8 pad222a[2];
    s32 f222C;
    s32 f2230;
    Vec_8006FC7C pos;
    char name[0x14];
    char unit[0x20];
};

struct Unit_8006FC7C { u8 pad[0x370]; s32 f370; };

extern "C" {
s32 resolve_player_slot__20TWindowSubStatusDispFi(int);
void TLobby__sub_80074E48(void);
void create__13TObjTombstoneFPvPvPv(void *, void *, void *);
void *get_player_by_client_id(s32);
extern Table_8006FE7C lbl_8048C9D8;
extern void *tl_07;
void spawn_player_tombstones__6TLobbyFv(void);
s32 get_field_2d4__10TObjPlayerFPv(Ply_8006FC7C *);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_current_floor();
s32 resolve_player_slot__20TWindowSubStatusDispFi(int);
char *get_unit_list__6TLobbyFv(void);
char *TLobby__sub_80070ACC(u8, u8, s32);
Unit_8006FC7C *find_entity_by_id(void);
void *get_player_by_client_id(s32);
void getDateStamp__FP9DateStamp(Date_8006FC7C *);
Card_8006FC7C *get_card_window__17TWindowSubComCardFUi(u32);
void fn_8026A1C4(char *, char *, s32);
char *strncpy(char *, const char *, u32);
char *strcpy(char *, const char *);
u32 strlen(const char *);
extern char lbl_8043857C[];
extern Table_8006FE7C lbl_8048C9D8;
extern s32 lbl_805D53A0;
void update_card_save_info__6TLobbyFv(void);
}

extern "C" {

void split_time_hms__22TQuestVmDownLoadServerFiPvPvPv(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3);

void split_time_hms__22TQuestVmDownLoadServerFiPvPvPv(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg1 = arg0 / 3600;
    if ((s32) *arg1 > 0x63) {
        *arg1 = 0x63;
    }
    *arg2 = (arg0 / 60) % 60;
    *arg3 = arg0 % 60;
}

void update_card_save_info__6TLobbyFv(void) {
    char buf[0x60];
    char name[0x20];
    Date_8006FC7C date;
    Card_8006FC7C *card;
    Ply_8006FC7C *ply;
    s32 n;
    s32 v;
    u8 b;
    u8 c;
    Unit_8006FC7C *u;
    char *s;
    char *unit;
    s32 id;
    if (get_card_window__17TWindowSubComCardFUi(0xFFFF) == NULL) {
        return;
    }
    card = get_card_window__17TWindowSubComCardFUi(0xFFFF);
    ply = (Ply_8006FC7C *)get_player_by_client_id(lbl_805D53A0);
    if (ply == NULL) {
        return;
    }
    card->f2224 = resolve_player_slot__20TWindowSubStatusDispFi(-1);
    card->f2225 = lbl_8048C9D8.v0;
    card->f2226 = get_current_floor();
    if (card->f2228 < 0) {
        card->f2228 = 0x270F;
    }
    if (++card->f2228 > 0x270F) {
        card->f2228 = 0x270F;
    }
    VecCopy__FP3VecPC3Vec(&card->pos, &ply->pos);
    getDateStamp__FP9DateStamp(&date);
    if (date.year / 100 != 20) {
        v = 0xF;
    } else {
        n = date.year % 100;
        v = n;
        if (n > 0xF) {
            v = 0xF;
        }
    }
    v <<= 4;
    v |= date.a;
    v <<= 8;
    v |= (b = date.b);
    v <<= 8;
    v |= (c = date.c);
    v <<= 8;
    v |= date.d;
    card->f222C = v;
    strncpy(card->name, TLobby__sub_80070ACC(c, b, v), 0x13);
    card->name[0x13] = 0;
    unit = card->unit;
    card->unit[0] = 0;
    s = get_unit_list__6TLobbyFv();
    if (s != NULL) {
        strncpy(buf, s, 0x5F);
        buf[0x5F] = 0;
        n = strlen(buf);
        if (n != 0) {
            if (n <= 0x1F) {
                strncpy(name, buf, 0x1F);
            } else {
                strncpy(name, lbl_8043857C, 4);
                fn_8026A1C4(name + 4, buf, 0x1B);
            }
            name[0x1F] = 0;
            strcpy(unit, name);
        }
    }
    id = -1;
    if ((get_field_2d4__10TObjPlayerFPv(ply) & 0xF000) == 0x1000) {
        u = find_entity_by_id();
        if (u != NULL) {
            id = u->f370;
        }
    }
    card->f2230 = id;
}

void spawn_player_tombstones__6TLobbyFv(void) {
    s32 i;
    Rec_8006FE7C *rec;
    Info_8006FE7C *info;
    TLobby__sub_80074E48();
    for (i = 0; i < 4; i++) {
        rec = &lbl_8048C9D8.recs[i];
        if (rec->active != 0 && get_player_by_client_id(i) != NULL) {
            info = &rec->info;
            if (info->d > 0 && info->a == resolve_player_slot__20TWindowSubStatusDispFi(-1)
                && info->b == lbl_8048C9D8.v0 && info->c == lbl_8048C9D8.v8) {
                create__13TObjTombstoneFPvPvPv(tl_07, (void *)i, info);
            }
        }
    }
}

}
