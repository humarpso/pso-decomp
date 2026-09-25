#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Win_801A0DB4 { u8 pad[4]; u16 flags; };

struct Obj_801A0DB4 { u8 pad[0x90]; Win_801A0DB4 *wins[4]; };

struct Ctrl_801A0E38 { u8 pad[0x832]; s16 target; };

struct Obj_801A0E38 { u8 pad[0x90]; void *wins[4]; s32 cur; u8 pad2[4]; u16 id; };

struct Ctrl_801A0CE8 { u8 pad[0x832]; s16 target; };

struct Obj_801A0CE8 { u8 pad[0x90]; void *wins[4]; s32 cur; u8 pad2[4]; u16 id; };

struct Obj_801A0C38 { u8 pad[0x90]; void *parts[1]; };

extern "C" {
void allow_rendering__7TObjectFv(void *);
void clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
void TObjLuker__sub_801A0C7C(s32 arg0, s32 arg1);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
void set_flag_4__9TObjLukerFPv(void *w);
void disallow_rendering__7TObjectFv(void *w);
void TObjLuker__sub_801A0DB4(Obj_801A0DB4 *self);
Ctrl_801A0E38 *TPlayerBattleCtrl4P__sub_801BA74C(u16 id);
s32 is_split_screen(void);
void *TWindowSubComCard__sub_8026CBB8(s32 a);
void *TCheckRoomSequence__sub_802664A8(void *p, s32 a, s32 b);
void *check_room_seq_4__16TAdChrSelASlotGCFii(void *p, s32 a);
s32 get_player_floor__6TLobbyFi(s32 p);
s32 TObjLuker__sub_801329B0(s32 f);
void TWindowSubTradeMain__sub_80266200(void *w, s32 a, s32 b, s32 c, s32 d);
void set_flag_40__16TAdChrSelASlotGCFPv(void *w);
void TWindowSubComCard__sub_80265F60(void *w);
void TWindowSubComCard__sub_80265C30(void *w);
void set_flag_4__9TObjLukerFPv(void *w);
void disallow_rendering__7TObjectFv(void *w);
void TObjLuker__sub_801A0E38(Obj_801A0E38 *self);
Ctrl_801A0E38 *TPlayerBattleCtrl4P__sub_801BA74C(u16 id);
void TWindowSubComCard__sub_802655E4(void *w);
s32 get_player_floor__6TLobbyFi(s32 p);
s32 TObjLuker__sub_801329B0(s32 f);
void TWindowSubTradeMain__sub_80266200(void *w, s32 a, s32 b, s32 c, s32 d);
void TWindowSubComCard__sub_80265F60(void *w);
void TWindowSubComCard__sub_80265C30(void *w);
void TObjLuker__sub_801A0CE8(Obj_801A0CE8 *self);
void set_flag_4__9TObjLukerFPv(void *w);
void disallow_rendering__7TObjectFv(void *w);
void TObjLuker__sub_801A0C38(Obj_801A0C38 *self, u16 i);
}

extern "C" {

void *TObjLuker__create(void *arg0);
void render__9TObjLukerFv(void);
void *TObjLuker__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void TObjLuker__sub_801A0C38(Obj_801A0C38 *self, u16 i) {
    if (self->parts[i] != 0) {
        set_flag_4__9TObjLukerFPv(self->parts[i]);
        disallow_rendering__7TObjectFv(self->parts[i]);
    }
}

#pragma push
#pragma opt_common_subs off
void TObjLuker__sub_801A0C7C(s32 arg0, s32 arg1) {
    u8 *temp_r31;
    u8 *temp_r3;
    temp_r31 = (u8 *)(arg0 + ((arg1 * 4) & 0x3FFFC));
    temp_r3 = (u8 *)(M2C_FIELD(temp_r31, u8 **, 0x90));
    if (temp_r3 != NULL) {
        if (M2C_FIELD(temp_r3, u16 *, 4) & 4) {
            TBoss3Volopt__sub_8022675C(0x53703, 0U, 0, 0);
        }
        clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(temp_r31, u8 **, 0x90));
        allow_rendering__7TObjectFv(M2C_FIELD(temp_r31, u8 **, 0x90));
    }
}
#pragma pop

void TObjLuker__sub_801A0CE8(Obj_801A0CE8 *self) {
    s32 target = ((Ctrl_801A0CE8 *)TPlayerBattleCtrl4P__sub_801BA74C(self->id))->target;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->wins[i] != 0 && target > 0) {
            if (self->cur != target) {
                s32 j;
                for (j = 0; j < 4; j++) {
                    TWindowSubComCard__sub_802655E4(self->wins[j]);
                }
                self->cur = target;
            }
            TWindowSubTradeMain__sub_80266200(self->wins[i], TObjLuker__sub_801329B0(get_player_floor__6TLobbyFi(target)), 2, 0, -1);
            TWindowSubComCard__sub_80265F60(self->wins[i]);
            TWindowSubComCard__sub_80265C30(self->wins[i]);
        }
    }
}

void TObjLuker__sub_801A0DB4(Obj_801A0DB4 *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->wins[i] != 0) {
            if (!(self->wins[i]->flags & 4)) {
                TBoss3Volopt__sub_8022675C(0x53704, 0, 0, 0);
            }
            set_flag_4__9TObjLukerFPv(self->wins[i]);
            disallow_rendering__7TObjectFv(self->wins[i]);
        }
    }
}

void TObjLuker__sub_801A0E38(Obj_801A0E38 *self) {
    s32 target = TPlayerBattleCtrl4P__sub_801BA74C(self->id)->target;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->wins[i] == 0 && target > 0) {
            if (is_split_screen() != 0) {
                self->wins[i] = TCheckRoomSequence__sub_802664A8(TWindowSubComCard__sub_8026CBB8(0x33), 1, i);
            } else {
                self->wins[i] = check_room_seq_4__16TAdChrSelASlotGCFii(TWindowSubComCard__sub_8026CBB8(0x33), 1);
            }
            if (self->wins[i] != 0) {
                self->cur = target;
                TWindowSubTradeMain__sub_80266200(self->wins[i], TObjLuker__sub_801329B0(get_player_floor__6TLobbyFi(target)), 2, 0, -1);
                set_flag_40__16TAdChrSelASlotGCFPv(self->wins[i]);
                TWindowSubComCard__sub_80265F60(self->wins[i]);
                TWindowSubComCard__sub_80265C30(self->wins[i]);
                set_flag_4__9TObjLukerFPv(self->wins[i]);
                disallow_rendering__7TObjectFv(self->wins[i]);
            }
        }
    }
}

void render__9TObjLukerFv(void) {  }

extern void *tl_05;

void *TObjLuker__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjLuker__ct(o, tl_05, arg0);
    }
    return o;
}

}
