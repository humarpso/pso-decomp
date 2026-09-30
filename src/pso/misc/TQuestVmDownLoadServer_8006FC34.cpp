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

extern "C" {
s32 TWindowSubStatusDisp__sub_8006F190(int);
void TLobby__sub_80074E48(void);
void create__13TObjTombstoneFPvPvPv(void *, void *, void *);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern Table_8006FE7C lbl_8048C9D8;
extern void *tl_07;
void TLobby__sub_8006FE7C(void);
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
void TLobby__sub_8006FE7C(void) {
    s32 i;
    Rec_8006FE7C *rec;
    Info_8006FE7C *info;
    TLobby__sub_80074E48();
    for (i = 0; i < 4; i++) {
        rec = &lbl_8048C9D8.recs[i];
        if (rec->active != 0 && TPlayerBattleCtrl4P__sub_801BA74C(i) != NULL) {
            info = &rec->info;
            if (info->d > 0 && info->a == TWindowSubStatusDisp__sub_8006F190(-1)
                && info->b == lbl_8048C9D8.v0 && info->c == lbl_8048C9D8.v8) {
                create__13TObjTombstoneFPvPvPv(tl_07, (void *)i, info);
            }
        }
    }
}

}
