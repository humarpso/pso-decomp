#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8026D208 { char pad[0x18]; };
struct VObj_8026D208 : Base_8026D208 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30();
    virtual s32 m31();
};

struct RecoveredGlobal_8026D18C_lbl_80515BA0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8026D40C___vt__17TWindowReturnCity
{
  M2C_UNK value;
  u8 remaining[0x14];
};

extern "C" {
s32 get_dest_area__17TObjAreaWarpQuestFPv(void *);
void *get_player_by_client_id(s32);
s32 TLobby__sub_80207770(s32);
M2C_UNK TKeyBoardControl__sub_8000F998();
M2C_UNK TObjPlayer__sub_801B31D8();
M2C_UNK set_area__6TLobbyFPvi(void *, int, int);
M2C_UNK TNpcPlayer__sub_8034E7A0();
extern RecoveredGlobal_8026D18C_lbl_80515BA0 lbl_80515BA0;
extern s32 lbl_805D55C0;
extern int TWindowReturnCity__data_805D6468;
void TWindowReturnCity__sub_8026D18C(void);
s32 get_message_10__20TWindowSubStatusDispFPv(int);
s32 set_close_flag__11TWindowCtrlFv();
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 fn_8024AC64(int);
s32 get_window_layout_position(int);
void TWindowCtrl__sub_8026D4E8(void);
s32 free_member__17TWindowSubComCardFPv(int, int);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(int, int, int, f32);
s32 TWindowMessageYesNo__sub_802A59D8(void *, int, int, int);
extern M2C_UNK __vt__17TWindowReturnCity[];
extern s32 lbl_805D39B8;
extern const f32 lbl_805DD2E8;
u8 *TWindowReturnCity__ct(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(u32, s32, void (*)());
M2C_UNK clear_flag_2__11TWindowCtrlFv();
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TWindowReturnCity__sub_8024ACA8(s32);
s32 query_battle_state__17TWindowReturnCityFPv(void *arg0);
void clear_flag_bit5__17TWindowReturnCityFv(void);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
void TWindowReturnCity__sub_8026D18C(void);
extern s32 lbl_805D55C0;
extern s32 tl_00;
extern int TWindowReturnCity__data_805D6468;
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(u32, s32, void (*)());
M2C_UNK clear_flag_2__11TWindowCtrlFv();
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TWindowReturnCity__sub_8024ACA8(s32);
s32 query_battle_state__17TWindowReturnCityFPv(void *arg0);
void clear_flag_bit5__17TWindowReturnCityFv(void);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
void TWindowReturnCity__sub_8026D18C(void);
extern s32 lbl_805D55C0;
extern s32 tl_00;
extern int TWindowReturnCity__data_805D6468;
void run_task__17TWindowReturnCityFv(void *arg0);
}

extern "C" {

void TWindowCtrl__sub_8026D4E8(void);
void TWindowReturnCity__sub_8026D4BC(void);
void TWindowReturnCity__sub_8026D4C0(void);
void *__dt__17TWindowReturnCityFv(void *arg0, s16 arg1);
void clear_flag_bit5__17TWindowReturnCityFv(void);
s32 query_battle_state__17TWindowReturnCityFPv(void *arg0);
void render__17TWindowReturnCityFv(void);
void *get_player_by_client_id(s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void close__17TWindowSubComCardFPv(void *);

typedef char RecoveredGlobal_8026D18C_lbl_80515BA0_size[sizeof(RecoveredGlobal_8026D18C_lbl_80515BA0) == 0x28 ? 1 : -1];
void TWindowReturnCity__sub_8026D18C(void) {
    if (((s32) lbl_805D55C0 != 1) && ((s32) (*(s32 *)&TWindowReturnCity__data_805D6468) < 4)) {
        if (((s32)get_player_by_client_id((s32)((u32) (*(s32 *)&TWindowReturnCity__data_805D6468)))) != 0U) {
            TObjPlayer__sub_801B31D8();
        }
        set_area__6TLobbyFPvi((void *) (&lbl_80515BA0.value), (int) (0), (int) (TLobby__sub_80207770(0)));
        TKeyBoardControl__sub_8000F998();
        get_dest_area__17TObjAreaWarpQuestFPv(&lbl_80515BA0.value);
        TNpcPlayer__sub_8034E7A0();
        (*(s32 *)&TWindowReturnCity__data_805D6468) = 4;
    }
}

s32 query_battle_state__17TWindowReturnCityFPv(void *arg0) {
    struct VObj_8026D208 *o = (struct VObj_8026D208 *)get_player_by_client_id(M2C_FIELD(arg0, s32 *, 0x24));
    if (o == NULL) {
        return 0;
    }
    return o->m31();
}

void render__17TWindowReturnCityFv(void) {  }

extern M2C_UNK __vt__17TWindowReturnCity[];

void run_task__17TWindowReturnCityFv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    if ((s32) lbl_805D55C0 != 1) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
        switch (temp_r0) {
        case 2:
            break;
        case 0:
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
        case 1:
            if ((query_battle_state__17TWindowReturnCityFPv(arg0) == 0) || ((s32) TWindowReturnCity__data_805D6468 != 4)) {
                clear_flag_bit5__17TWindowReturnCityFv();
                TWindowReturnCity__sub_8024ACA8(M2C_FIELD(arg0, s32 *, 0x24));
                clear_flag_2__11TWindowCtrlFv();
                queue_destruction__7TObjectFv(arg0);
                M2C_FIELD(arg0, s32 *, 0x20) = 2;
                return;
            }
            if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x1C)) != 0) {
                clear_flag_bit5__17TWindowReturnCityFv();
                TWindowReturnCity__sub_8024ACA8(M2C_FIELD(arg0, s32 *, 0x24));
                clear_flag_2__11TWindowCtrlFv();
                queue_destruction__7TObjectFv(arg0);
                M2C_FIELD(arg0, s32 *, 0x20) = 2;
                return;
            }
            if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x1C)) != 0) {
                temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x1C));
                if (temp_r3 == 0) {
                    TWindowReturnCity__data_805D6468 = M2C_FIELD(arg0, s32 *, 0x24);
                    u32 task = __nw__7TObjectFUl(0x28);
                    if (task != 0U) {
                        init__22THunterGuildSeqOfflineFPvPvPv(task, tl_00, TWindowReturnCity__sub_8026D18C);
                    }
                    M2C_FIELD(arg0, s32 *, 0x20) = 2;
                }
                if (temp_r3 == 1) {
                    clear_flag_bit5__17TWindowReturnCityFv();
                    TWindowReturnCity__sub_8024ACA8(M2C_FIELD(arg0, s32 *, 0x24));
                    clear_flag_2__11TWindowCtrlFv();
                    queue_destruction__7TObjectFv(arg0);
                    M2C_FIELD(arg0, s32 *, 0x20) = 2;
                }
            }
            break;
        }
    }
}

void *__dt__17TWindowReturnCityFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowReturnCity;
        if (M2C_FIELD(arg0, void **, 0x1C) != NULL) { close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x1C)); M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef struct RecoveredGlobal_8026D40C___vt__17TWindowReturnCity RecoveredGlobal_8026D40C___vt__17TWindowReturnCity;
typedef char RecoveredGlobal_8026D40C___vt__17TWindowReturnCity_size[((sizeof(RecoveredGlobal_8026D40C___vt__17TWindowReturnCity)) == 0x18) ? (1) : (-1)];
u8 *TWindowReturnCity__ct(u8 *arg0, s32 arg1, s32 arg2) {
  s32 temp_r31;
  __ct__7TObjectFP7TObject((void *) arg0, (void *) arg1);
  *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = &(*(RecoveredGlobal_8026D40C___vt__17TWindowReturnCity *)&__vt__17TWindowReturnCity).value;
  *((s32 *) (((s8 *) arg0) + 0)) = (s32) lbl_805D39B8;
  *((s32 *) (((s8 *) arg0) + 0x24)) = arg2;
  temp_r31 = TWindowMessageYesNo__sub_802A59D8((void *) arg0, (int) (*((s32 *) (((s8 *) arg0) + 0x24))), (int) 0, (int) 0);
  *((s32 *) (((s8 *) arg0) + 0x1C)) = temp_r31;
  if (arg0)
  {
  }
  temp_r31 = get_window_layout_position((int) 0x23);
  forward_slot_selection__16TAdChrSelASlotGCFPvPvPv((int) (*((s32 *) (((s8 *) arg0) + 0x1C))), (int) get_message_10__20TWindowSubStatusDispFPv((int) 0x43), (int) temp_r31, (f32) lbl_805DD2E8);
  free_member__17TWindowSubComCardFPv((int) (*((s32 *) (((s8 *) arg0) + 0x1C))), (int) 1);
  fn_8024AC64((int) (*((s32 *) (((s8 *) arg0) + 0x24))));
  set_close_flag__11TWindowCtrlFv();
  TWindowCtrl__sub_8026D4E8();
  *((s32 *) (((s8 *) arg0) + 0x20)) = 0;
  return arg0;
}

void TWindowReturnCity__sub_8026D4BC(void) {  }

    extern int TWindowReturnCity__data_805D6468;
void TWindowReturnCity__sub_8026D4C0(void) { TWindowReturnCity__data_805D6468 = 4; }

extern void *TWindowCtrl__data_805D63F8;

void clear_flag_bit5__17TWindowReturnCityFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) & 0xFFFFFFDF);
    }
}

extern void *TWindowCtrl__data_805D63F8;

void TWindowCtrl__sub_8026D4E8(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) | 0x20);
    }
}

}
