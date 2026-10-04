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

struct Luker_801A16D8 { u8 pad0[0x18]; void *f18; u8 pad1C[0x74]; void *wins[4]; };

struct VBase_801A1768 { char pad[0x18]; };

struct VObj_801A1768 : VBase_801A1768 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

struct Luker_801A1768 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *f18;
    u8 pad1C[0x84 - 0x1C];
    s32 f84;
    u8 pad88[0x90 - 0x88];
    s32 wins[4];
    s32 fA0;
    s32 fA4;
    u16 fA8;
    u16 fAA;
    s16 fAC;
    s16 fAE;
    s16 fB0;
    u8 padB2[2];
    s32 fB4;
    s32 fB8;
};

struct Plr_801A0F34 { u8 pad[0x30]; s32 flags; u8 pad34[4]; u8 pos[0xc]; };

struct Pad_801A0F34 { u8 pad[0x20]; u8 btn[0x30]; };

struct Ctrl_801A0E38;
struct Obj_801A0DB4;
struct Obj_801A0E38;
struct Obj_801A0CE8;
struct Obj_801A0C38;

struct Luker_801A1260
{
  u8 pad[0xA8];
  u16 owner;
  u16 partner;
};

extern "C" {
void allow_rendering__7TObjectFv(void *);
void clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
s32 play_sound_effect(s32, u32, s16, s32);
void TObjLuker__sub_801A0C7C(s32 arg0, s32 arg1);
s32 play_sound_effect(s32, u32, s16, s32);
void set_flag_4__9TObjLukerFPv(void *w);
void disallow_rendering__7TObjectFv(void *w);
void TObjLuker__sub_801A0DB4(Obj_801A0DB4 *self);
Ctrl_801A0E38 *get_player_by_client_id(u16 id);
s32 is_split_screen(void);
void *get_window_layout_position(s32 a);
void *create_window_menu(void *p, s32 a, s32 b);
void *check_room_seq_4__16TAdChrSelASlotGCFii(void *p, s32 a);
s32 get_player_floor__6TLobbyFi(s32 p);
s32 get_floor_destination_name(s32 f);
void TWindowSubTradeMain__sub_80266200(void *w, s32 a, s32 b, s32 c, s32 d);
void set_flag_40__16TAdChrSelASlotGCFPv(void *w);
void TWindowSubComCard__sub_80265F60(void *w);
void align_menu_entry_positions(void *w);
void set_flag_4__9TObjLukerFPv(void *w);
void disallow_rendering__7TObjectFv(void *w);
void TObjLuker__sub_801A0E38(Obj_801A0E38 *self);
Ctrl_801A0E38 *get_player_by_client_id(u16 id);
void TWindowSubComCard__sub_802655E4(void *w);
s32 get_player_floor__6TLobbyFi(s32 p);
s32 get_floor_destination_name(s32 f);
void TWindowSubTradeMain__sub_80266200(void *w, s32 a, s32 b, s32 c, s32 d);
void TWindowSubComCard__sub_80265F60(void *w);
void align_menu_entry_positions(void *w);
void TObjLuker__sub_801A0CE8(Obj_801A0CE8 *self);
void set_flag_4__9TObjLukerFPv(void *w);
void disallow_rendering__7TObjectFv(void *w);
void TObjLuker__sub_801A0C38(Obj_801A0C38 *self, u16 i);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void __dl__7TObjectFPv(void *);
void TWindow__close(void *);
extern u8 __vt__9TObjLuker[];
Luker_801A16D8 *__dt__9TObjLukerFv(Luker_801A16D8 *arg0, s16 arg1);
void TPhotonMagicSquare__sub_801A2640(void *, void *);
extern u8 __vt__9TObjLuker[];
extern s32 lbl_805D34A8;
void *TObjLuker__ct(void *arg0, void *arg1, void *arg2);
s32 is_split_screen(void);
Ctrl_801A0E38 *get_player_by_client_id(u16 id);
u16 TCameraCtrl__sub_80068958(s32);
s32 get_instance__11TCameraCtrlFv(void);
f32 horizontal_distance_squared(void *, void *);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 get_map_id__13TRaderMapCoreFPv(void *);
s32 check_flag_100__10TObjPlayerFPv(void *);
extern Pad_801A0F34 lbl_8050E208[];
s32 are_players_gathered_near(void *arg0, s32 *arg1, f32 range);
s32 is_split_screen(void);
void queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_particle_effect(void *, int);
void TObjLuker__sub_801A0CE8(Obj_801A0CE8 *self);
void TObjLuker__sub_801A0DB4(Obj_801A0DB4 *self);
void TObjLuker__sub_801A0E38(Obj_801A0E38 *self);
s32 are_players_gathered_near(void *arg0, s32 *arg1, f32 range);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
M2C_UNK play_effect_default__10TObjPlayerFii(void *, int);
s32 check_flag_100__10TObjPlayerFPv(void *);
Ctrl_801A0E38 *get_player_by_client_id(u16 id);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
s32 play_sound_effect(s32, u32, s16, s32);
void *__nw__7TObjectFUl(int);
s32 TTecLuker__sub_8023401C(void *);
void *create_telepipe_visual(void *, void *, int, int);
M2C_UNK offset_point_toward_camera(void *, void *, f32);
M2C_UNK init_all_slots__11TWindowCtrlFv();
M2C_UNK init_all_slots2__11TWindowCtrlFv();
extern Pad_801A0F34 lbl_8050E208[];
extern s32 lbl_805D53A0;
extern s32 tl_07;
extern const f32 lbl_805DC080;
void run_task__9TObjLukerFv(u8 *arg0);
s32 obj_getField1c(int);
s32 is_split_screen(void);
f32 horizontal_distance_squared(void *, void *);
void TObjLuker__sub_801A0C38(Obj_801A0C38 *self, u16 i);
void TObjLuker__sub_801A0C7C(s32 arg0, s32 arg1);
void TObjLuker__sub_801A0DB4(Obj_801A0DB4 *self);
s32 check_flag_100__10TObjPlayerFPv(void *);
Ctrl_801A0E38 *get_player_by_client_id(u16 id);
extern s32 lbl_805D53A0;
s32 is_player_in_range__9TObjLukerFv(s32 arg0, f32 farg0);
s32 get_main_phase();
M2C_UNK mark_area_change_pending();
s32 obj_isState3_324(int);
s32 is_split_screen(void);
s32 get_dest_area__17TObjAreaWarpQuestFPv(void *);
M2C_UNK set_state__9TTecLukerFPvi(void *, int);
M2C_UNK set__10TObjRoomIdFPvs(int, volatile short);
Ctrl_801A0E38 *get_player_by_client_id(u16 id);
M2C_UNK send_6x21_inter_level_warp(int, void *);
s32 get_floor_map_terrain(int);
M2C_UNK set_area__6TLobbyFPvi(void *, int, int);
M2C_UNK init_fields__9TTecLukerFPvs(void *, int);
M2C_UNK TTecLuker__sub_802340E4(void *);
extern M2C_UNK lbl_80515BA0[];
extern s32 lbl_805D53A0;
extern s32 lbl_805D55C0;
void transfer_to_town__9TObjLukerFv(u8 *arg0_);
}

extern "C" {

void *TObjLuker__create(void *arg0);
void render__9TObjLukerFv(void);
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
            play_sound_effect(0x53703, 0U, 0, 0);
        }
        clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(temp_r31, u8 **, 0x90));
        allow_rendering__7TObjectFv(M2C_FIELD(temp_r31, u8 **, 0x90));
    }
}
#pragma pop

void TObjLuker__sub_801A0CE8(Obj_801A0CE8 *self) {
    s32 target = ((Ctrl_801A0CE8 *)get_player_by_client_id(self->id))->target;
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
            TWindowSubTradeMain__sub_80266200(self->wins[i], get_floor_destination_name(get_player_floor__6TLobbyFi(target)), 2, 0, -1);
            TWindowSubComCard__sub_80265F60(self->wins[i]);
            align_menu_entry_positions(self->wins[i]);
        }
    }
}

void TObjLuker__sub_801A0DB4(Obj_801A0DB4 *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->wins[i] != 0) {
            if (!(self->wins[i]->flags & 4)) {
                play_sound_effect(0x53704, 0, 0, 0);
            }
            set_flag_4__9TObjLukerFPv(self->wins[i]);
            disallow_rendering__7TObjectFv(self->wins[i]);
        }
    }
}

void TObjLuker__sub_801A0E38(Obj_801A0E38 *self) {
    s32 target = get_player_by_client_id(self->id)->target;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->wins[i] == 0 && target > 0) {
            if (is_split_screen() != 0) {
                self->wins[i] = create_window_menu(get_window_layout_position(0x33), 1, i);
            } else {
                self->wins[i] = check_room_seq_4__16TAdChrSelASlotGCFii(get_window_layout_position(0x33), 1);
            }
            if (self->wins[i] != 0) {
                self->cur = target;
                TWindowSubTradeMain__sub_80266200(self->wins[i], get_floor_destination_name(get_player_floor__6TLobbyFi(target)), 2, 0, -1);
                set_flag_40__16TAdChrSelASlotGCFPv(self->wins[i]);
                TWindowSubComCard__sub_80265F60(self->wins[i]);
                align_menu_entry_positions(self->wins[i]);
                set_flag_4__9TObjLukerFPv(self->wins[i]);
                disallow_rendering__7TObjectFv(self->wins[i]);
            }
        }
    }
}

s32 are_players_gathered_near(void *arg0, s32 *arg1, f32 range) {
    s32 ret;
    s32 flag;
    s32 i;
    Plr_801A0F34 *p;
    void *pos;
    ret = 1;
    flag = 0;
    if (is_split_screen() == 0) {
        return 1;
    }
    i = 0;
    range = range * range;
    do {
        p = (Plr_801A0F34 *)((Ctrl_801A0E38 *(*)(s32))get_player_by_client_id)(i);
        if (p != NULL) {
            pos = p->pos;
            if (!(p->flags & 0x800)) {
                if (check_flag_100__10TObjPlayerFPv(p) == 1) {
                    ret = 0;
                }
                if (horizontal_distance_squared(arg0, pos) > range) {
                    ret = 0;
                }
                flag = 0;
            } else {
                flag = 1;
            }
        }
            i++;
    } while (i < 4);
    if (arg1 == NULL) {
        return ret;
    }
    if (ret != 0 && flag == 0) {
        s32 found = 0;
        s32 j;
        for (j = 0; j < get_instance__11TCameraCtrlFv(); j++) {
            p = (Plr_801A0F34 *)((Ctrl_801A0E38 *(*)(s32))get_player_by_client_id)(TCameraCtrl__sub_80068958(j));
            if (p != NULL &&
                TWindowShortListCtrl__check_controller_button(lbl_8050E208[get_map_id__13TRaderMapCoreFPv(p)].btn, 4) != 0) {
                found = 1;
                if (arg1 != NULL) {
                    *arg1 = j;
                }
                break;
            }
        }
        if (found != 0) {
            ret = 1;
        } else {
            ret = 0;
        }
    }
    return ret;
}

#define C38_801A10A0 ((void (*)(void *, int))TObjLuker__sub_801A0C38)
#define DB4_801A10A0 ((void (*)(void *))TObjLuker__sub_801A0DB4)
#define PBC_801A10A0 ((u32 (*)(void *))get_player_by_client_id)
s32 is_player_in_range__9TObjLukerFv(s32 arg0, f32 farg0) {
    u32 p;
    s32 found;
    found = 0;
    if (is_split_screen() != 0) {
        for (s32 i = 0; i < 4; i++) {
            p = PBC_801A10A0((void *) (i));
            if (p != 0U) {
                if (horizontal_distance_squared((void *) (arg0 + 0x38), (void *) (p + 0x38)) < (farg0 * farg0)) {
                    found = 1;
                    if ((p != 0U) && (check_flag_100__10TObjPlayerFPv((void *) (p)) == 0)) {
                        TObjLuker__sub_801A0C7C(arg0, (int) (obj_getField1c((int) (p))));
                    }
                } else {
                    C38_801A10A0((void *) (arg0), (int) (obj_getField1c((int) (p))));
                }
            }
        }
        for (s32 i = 0; i < 4; i++) {
            p = PBC_801A10A0((void *) (i));
            if ((p != 0U) && (check_flag_100__10TObjPlayerFPv((void *) (p)) == 1)) {
                C38_801A10A0((void *) (arg0), (int) (obj_getField1c((int) (p))));
            }
        }
    } else {
        p = PBC_801A10A0((void *) (lbl_805D53A0));
        if ((p != 0U) && (horizontal_distance_squared((void *) (p + 0x38), (void *) (arg0 + 0x38)) < (farg0 * farg0))) {
            found = 1;
        }
        if (found != 0) {
            if (p != 0U) {
                if (check_flag_100__10TObjPlayerFPv((void *) (p)) == 0) {
                    TObjLuker__sub_801A0C7C(arg0, (int) (obj_getField1c((int) (p))));
                } else {
                    C38_801A10A0((void *) (arg0), (int) (obj_getField1c((int) (p))));
                }
            }
            return 1;
        }
    }
    if (is_split_screen() != 0) {
        if (found != 1) {
            DB4_801A10A0((void *) (arg0));
        }
        return found;
    }
    DB4_801A10A0((void *) (arg0));
    return 0;
}

typedef struct Ctrl_801A0E38 Ctrl_801A0E38;
typedef struct Luker_801A1260 Luker_801A1260;
void transfer_to_town__9TObjLukerFv(u8 *arg0_) {
  Luker_801A1260 *arg0 = (Luker_801A1260 *) arg0_;
  u8 *self;
  u8 *local;
  s32 i;
  u8 *p;
  s32 flag;
  self = (u8 *) ((Ctrl_801A0E38 *(*)(s32)) get_player_by_client_id)(arg0->owner);
  local = (u8 *) ((Ctrl_801A0E38 *(*)(s32)) get_player_by_client_id)(lbl_805D53A0);
  if ((((get_main_phase() == 0xF) && (lbl_805D55C0 != 0)) || (self == 0)) || (local == 0))
  {
    return;
  }
  set_area__6TLobbyFPvi(lbl_80515BA0, *((s16 *) (((s8 *) self) + 0x832)), get_floor_map_terrain(*((s16 *) (((s8 *) self) + 0x832))));
  mark_area_change_pending();
  for (i = 0; i < 4; i++)
  {
    p = (u8 *) ((Ctrl_801A0E38 *(*)(s32)) get_player_by_client_id)(i);
    if (p != 0)
    {
      flag = 0x830 * 0;
      if (is_split_screen() != 0)
      {
        flag = 1;
      }
      else
        if (obj_isState3_324((int) p) != 0)
      {
        flag = 1;
      }
      if (flag != 0)
      {
        set_state__9TTecLukerFPvi(p + 0x848, arg0->owner);
        send_6x21_inter_level_warp((int) p, (void *) get_dest_area__17TObjAreaWarpQuestFPv(lbl_80515BA0));
        set__10TObjRoomIdFPvs((int) p, (s16) (*((s32 *) (((s8 *) self) + 0x834))));
      }
    }
  }
  if (local != 0)
  {
    set_state__9TTecLukerFPvi(local + 0x848, arg0->owner);
    if (((Ctrl_801A0E38 *(*)(s32)) get_player_by_client_id)(arg0->owner) != 0)
    {
      set__10TObjRoomIdFPvs((int) local, (s16) (*((s32 *) (((s8 *) self) + 0x834))));
    }
    send_6x21_inter_level_warp((int) local, (void *) get_dest_area__17TObjAreaWarpQuestFPv(lbl_80515BA0));
  }
  if (is_split_screen() != 0)
  {
    self = (u8 *) ((Ctrl_801A0E38 *(*)(s32)) get_player_by_client_id)(arg0->partner);
    if (self != 0)
    {
      init_fields__9TTecLukerFPvs(self + 0x830, arg0->partner);
      TTecLuker__sub_802340E4(self + 0x830);
    }
  }
  else
    if (lbl_805D53A0 == arg0->owner)
  {
    init_fields__9TTecLukerFPvs(local + 0x830, arg0->owner);
    TTecLuker__sub_802340E4(local + 0x830);
  }
}

void render__9TObjLukerFv(void) {  }

extern void *tl_05;

#define PBC_801A1418(x) (((u8 *(*)(s32))get_player_by_client_id)(x))
void run_task__9TObjLukerFv(u8 *arg0) {
    s32 sp8;
    u8 spC[0xC];
    u8 *p;
    void *o;
    s32 flag;
    p = (u8 *)get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0xA8));
    if (p != NULL) {
        TObjLuker__sub_801A0CE8((Obj_801A0CE8 *) arg0);
        TObjLuker__sub_801A0E38((Obj_801A0E38 *) arg0);
    }
    if (p == NULL) {
        if (M2C_FIELD(arg0, void **, 0xA4) != NULL) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xA4));
            M2C_FIELD(arg0, void **, 0xA4) = NULL;
        }
        M2C_FIELD(arg0, s32 *, 0xB4) = 1;
        TObjLuker__sub_801A0DB4((Obj_801A0DB4 *) arg0);
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 0xA8) != 0xFFFF && p != NULL) {
        if (TTecLuker__sub_8023401C(p + 0x830) != 0) {
            M2C_FIELD(arg0, s16 *, 0xAE) = 1;
            if (M2C_FIELD(arg0, s32 *, 0xB4) != 0 && M2C_FIELD(arg0, void **, 0xA4) == NULL) {
                o = __nw__7TObjectFUl(0x44);
                if (o != NULL) {
                    o = create_telepipe_visual(o, arg0 + 0x38, M2C_FIELD(arg0, u16 *, 0xA8), tl_07);
                }
                M2C_FIELD(arg0, void **, 0xA4) = o;
                M2C_FIELD(arg0, s32 *, 0xB4) = 0;
            }
            play_persistent_sound(0x4002B219, arg0, arg0 + 0x38, 0, 0);
            switch (M2C_FIELD(arg0, s16 *, 0xB0)) {
            case 0:
                sp8 = 0;
                if (is_player_in_range__9TObjLukerFv((s32)((s32) arg0), lbl_805DC080) != 0) {
                    flag = 0;
                    if (is_split_screen() != 0) {
                        if (are_players_gathered_near(arg0 + 0x38, &sp8, lbl_805DC080) != 0) {
                            flag = 1;
                            M2C_FIELD(arg0, u16 *, 0xAA) = M2C_FIELD(arg0, u16 *, 0xA8);
                        }
                    } else {
                        p = PBC_801A1418(lbl_805D53A0);
                        if (p != NULL && check_flag_100__10TObjPlayerFPv(p) == 0 &&
                            TWindowShortListCtrl__check_controller_button(lbl_8050E208[sp8].btn, 4) != 0) {
                            flag = 1;
                        }
                    }
                    if (flag != 0) {
                        M2C_FIELD(arg0, s16 *, 0xB0) = 1;
                        offset_point_toward_camera(arg0 + 0x38, spC, lbl_805DC080);
                        spawn_particle_effect(spC, 0xB3);
                        p = PBC_801A1418(lbl_805D53A0);
                        if (p != NULL) {
                            play_effect_default__10TObjPlayerFii(p, 0xA);
                            play_sound_effect(0x40022D1A, (u32) (arg0 + 0x38), 0, 0);
                        }
                        init_all_slots__11TWindowCtrlFv();
                        M2C_FIELD(arg0, s32 *, 0xB8) = 1;
                    }
                }
                break;
            case 1:
                if (M2C_FIELD(arg0, s16 *, 0xAC)++ > 10) {
                    M2C_FIELD(arg0, s16 *, 0xB0) = 2;
                }
                break;
            case 2:
                transfer_to_town__9TObjLukerFv((u8 *)(arg0));
                queue_destruction__7TObjectFv(arg0);
                break;
            }
        } else {
            TObjLuker__sub_801A0DB4((Obj_801A0DB4 *) arg0);
            M2C_FIELD(arg0, s16 *, 0xB0) = M2C_FIELD(arg0, s16 *, 0xAE) = 0;
            if (M2C_FIELD(arg0, s32 *, 0xB8) != 0) {
                M2C_FIELD(arg0, s32 *, 0xB8) = 0;
                init_all_slots2__11TWindowCtrlFv();
            }
            M2C_FIELD(arg0, s16 *, 0xAC) = 0;
            if (M2C_FIELD(arg0, void **, 0xA4) != NULL) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xA4));
                M2C_FIELD(arg0, void **, 0xA4) = NULL;
            }
            M2C_FIELD(arg0, s32 *, 0xB4) = 1;
        }
    }
}

Luker_801A16D8 *__dt__9TObjLukerFv(Luker_801A16D8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        s32 i;
        arg0->f18 = __vt__9TObjLuker;
        for (i = 0; i < 4; i++) {
            if (arg0->wins[i] != 0) {
                TWindow__close(arg0->wins[i]);
                arg0->wins[i] = 0;
            }
        }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#define self ((Luker_801A1768 *)arg0)
void *TObjLuker__ct(void *arg0, void *arg1, void *arg2) {
    s32 i;
    TPhotonMagicSquare__sub_801A2640(self, arg1);
    self->f18 = __vt__9TObjLuker;
    self->f0 = lbl_805D34A8;
    ((VObj_801A1768 *)self)->m5(arg2);
    self->fB0 = 0;
    self->fAA = 0xFFFF;
    self->fA8 = self->f84;
    if (self->fA8 > 4) {
        self->fA8 = 0xFFFF;
    }
    for (i = 0; i < 4; i++) {
        self->wins[i] = 0;
    }
    self->fB4 = 1;
    self->fA4 = 0;
    self->fAC = 0;
    self->fA0 = -1;
    self->fB8 = 0;
    return self;
}
#undef self

void *TObjLuker__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjLuker__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

}
