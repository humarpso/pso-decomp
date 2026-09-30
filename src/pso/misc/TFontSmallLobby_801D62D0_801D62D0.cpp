#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Lobby_801D6498 {
    u8 pad[0x14];
    u32 arr[10];
    u8 pad2[0x4C - 0x3C];
    u8 fields[1];
};

typedef struct Obj_801D650C {
    u16 a;
    s16 b;
    s16 c;
    u8 pad6[2];
    s32 d;
    f32 e;
    f32 f;
    u8 arr[10][4];
    f32 g;
    u8 sub[4];
    u8 flags[6];
} Obj_801D650C;

extern "C" {
M2C_UNK TFontSmallLobby__sub_801D60B4();
extern const f32 lbl_805DC3DC;
void TFontSmallLobby__sub_801D63DC(u8 *arg0, f32 farg0);
M2C_UNK TFontSmallLobby__sub_801D60B4();
int update_ready__15TFontSmallLobbyFPv(void*);
M2C_UNK TFontSmallLobby__sub_801D677C(void *);
extern const f32 lbl_805DC3DC;
extern const f32 lbl_805DC3E4;
void TFontSmallLobby__sub_801D6350(u8 *arg0, f32 farg0);
int update_field_40__15TFontSmallLobbyFPv(void *);
M2C_UNK TFontSmallLobby__sub_801D5FC0();
extern const f32 lbl_805DC3DC;
extern const f32 lbl_805DC3E0;
extern const f32 lbl_805DC3E4;
s32 TFontSmallLobby__sub_801D62D0(u8 *arg0, f32 farg0);
void init_feed_timer__8TItemMagFPv(void *);
void TFontSmallLobby__sub_80152F28(void *);
void clear_photon_blast_state__10TObjPlayerFPv(void *);
void set_section_index__15TFontSmallLobbyFPvs(void *, s16);
void reset_fields__15TFontSmallLobbyFPv(void *);
void TFontSmallLobby__sub_801D67C8(void);
void TFontSmallLobby__sub_801D6498(struct Lobby_801D6498 *s);
void clear_id__10TObjPlayerFPv(void *);
void TFontSmallLobby__sub_80152F28(void *);
void reset_fields__15TFontSmallLobbyFPv(void *);
extern const f32 lbl_805DC3E0;
extern const f32 lbl_805DC3E8;
void TFontSmallLobby__sub_801D650C(Obj_801D650C *arg0);
}

extern "C" {

void send_photon_blast_ready__15TFontSmallLobbyFv(void);
void update_if_ready__15TFontSmallLobbyFPv(void* p);
int TFontSmallLobby__sub_801D67AC(void*);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
u16 get_type__15TFontSmallLobbyFPv();
M2C_UNK send_field_state__10TObjPlayerFPv();

s32 TFontSmallLobby__sub_801D62D0(u8 *arg0, f32 farg0) {
  const f32 *new_var;
  f32 temp_f0;
  f32 temp_f1;
  temp_f0 = *((f32 *) (((s8 *) arg0) + 0x3C));
  if (temp_f0 < lbl_805DC3DC)
  {
    *((f32 *) (((s8 *) arg0) + 0x3C)) = (f32) (temp_f0 - farg0);
    if ((*((f32 *) (((s8 *) arg0) + 0x3C))) < (*(new_var = &lbl_805DC3E0)))
    {
      *((f32 *) (((s8 *) arg0) + 0x3C)) = (f32) (*new_var);
      return 0;
    }
    goto block_7;
  }
  *((f32 *) (((s8 *) arg0) + 0x3C)) = (f32) (temp_f0 - farg0);
  temp_f1 = *((f32 *) (((s8 *) arg0) + 0x3C));
  if (temp_f1 < lbl_805DC3DC)
  {
    TFontSmallLobby__sub_801D5FC0();
  }
  else
    if (temp_f1 < lbl_805DC3E4)
  {
    update_field_40__15TFontSmallLobbyFPv(arg0);
  }
  block_7:
  return 1;
}

void TFontSmallLobby__sub_801D6350(u8 *arg0, f32 farg0) {
    f32 temp_f0;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f0 < lbl_805DC3DC) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f0 + farg0);
        if (M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805DC3DC) {
            TFontSmallLobby__sub_801D60B4();
        }
    } else if (temp_f0 < lbl_805DC3E4) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f0 + farg0);
        if (M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805DC3E4) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DC3E4;
            update_ready__15TFontSmallLobbyFPv((void*)(arg0));
            TFontSmallLobby__sub_801D677C((void *) (arg0));
        }
    }
}

void TFontSmallLobby__sub_801D63DC(u8 *arg0, f32 farg0) {
    f32 temp_f0;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f0 < lbl_805DC3DC) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f0 + farg0);
        if (M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805DC3DC) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DC3DC;
            TFontSmallLobby__sub_801D60B4();
        }
    }
}

void send_photon_blast_ready__15TFontSmallLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(get_type__15TFontSmallLobbyFPv()) != 0U) {
        send_field_state__10TObjPlayerFPv();
    }
}

void update_if_ready__15TFontSmallLobbyFPv(void* p) { if (TFontSmallLobby__sub_801D67AC(p) != 0) { update_ready__15TFontSmallLobbyFPv((void*)(p)); } }
void TFontSmallLobby__sub_801D6498(struct Lobby_801D6498 *s) {
    s32 i;
    TFontSmallLobby__sub_801D67C8();
    set_section_index__15TFontSmallLobbyFPvs(s, 0);
    for (i = 0; i < 10; i++) {
        TFontSmallLobby__sub_80152F28(&s->arr[i]);
    }
    init_feed_timer__8TItemMagFPv(s);
    clear_photon_blast_state__10TObjPlayerFPv(s);
    reset_fields__15TFontSmallLobbyFPv(s->fields);
}
void TFontSmallLobby__sub_801D650C(Obj_801D650C *arg0) {
    s32 i;
    s32 k;
    u8 *fp;
    i = 0;
    arg0->a = 0xFFFF;
    arg0->b = 0;
    arg0->c = 0;
    arg0->d = 0;
    arg0->e = lbl_805DC3E8;
    arg0->f = lbl_805DC3E0;
    do {
        TFontSmallLobby__sub_80152F28(arg0->arr[i]);
        i++;
    } while (i < 10);
    arg0->g = lbl_805DC3E0;
    clear_id__10TObjPlayerFPv(arg0->sub);
    for (k = 0, fp = arg0->flags; k < 6; k++, fp++) {
        *fp = 0;
    }
    reset_fields__15TFontSmallLobbyFPv((u8 *)arg0 + 0x4C);
}

}
