#include "types.h"
#include "pso/misc/TWindowReturnCity.h"
#include "pso/misc/THunterGuildSeqOffline.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/object/TObjAreaWarpQuest.h"

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
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8026D40C___vt__17TWindowReturnCity
{
  s32 value;
  u8 remaining[0x14];
};

extern "C" {
void *get_player_by_client_id(s32);
s32 get_floor_map_terrain(s32);
s32 mark_area_change_pending();
s32 prepare_hospital_return__10TObjPlayerFi();
s32 set_area__6TLobbyFl(void *, int, int);
s32 send_inter_level_warp_all__10TNpcPlayerFl();
extern RecoveredGlobal_8026D18C_lbl_80515BA0 lbl_80515BA0;
extern s32 lbl_805D55C0;
extern int TWindowReturnCity__client_scan_index;
void return_to_city_after_defeat(void);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 fn_8024AC64(int);
s32 get_window_layout_position(int);
void TWindowCtrl__sub_8026D4E8(void);
s32 free_member__17TWindowSubComCardFv(int, int);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPv(int, int, int, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, int, int, int);
extern s32 __vt__17TWindowReturnCity[];
extern s32 TWindowReturnCity__class_name;
extern const f32 lbl_805DD2E8;
u8 *TWindowReturnCity__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 queue_destruction__7TObjectFv(void *);
u32 __nw__7TObjectFUl(s32);
s32 TWindowReturnCity__sub_8024ACA8(s32);
void return_to_city_after_defeat(void);
extern s32 lbl_805D55C0;
extern s32 tl_00;
extern int TWindowReturnCity__client_scan_index;
s32 queue_destruction__7TObjectFv(void *);
u32 __nw__7TObjectFUl(s32);
s32 TWindowReturnCity__sub_8024ACA8(s32);
void return_to_city_after_defeat(void);
extern s32 lbl_805D55C0;
extern s32 tl_00;
extern int TWindowReturnCity__client_scan_index;
}

extern "C" {

void TWindowCtrl__sub_8026D4E8(void);
void TWindowReturnCity__sub_8026D4BC(void);
void TWindowReturnCity__sub_8026D4C0(void);
void *__dt__17TWindowReturnCityFv(void *arg0, s16 arg1);
void *get_player_by_client_id(s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

typedef char RecoveredGlobal_8026D18C_lbl_80515BA0_size[sizeof(RecoveredGlobal_8026D18C_lbl_80515BA0) == 0x28 ? 1 : -1];
void return_to_city_after_defeat(void) {
    if (((s32) lbl_805D55C0 != 1) && ((s32) (*(s32 *)&TWindowReturnCity__client_scan_index) < 4)) {
        if (((s32)get_player_by_client_id((s32)((u32) (*(s32 *)&TWindowReturnCity__client_scan_index)))) != 0U) {
            prepare_hospital_return__10TObjPlayerFi();
        }
        set_area__6TLobbyFl((void *) (&lbl_80515BA0.value), (int) (0), (int) (get_floor_map_terrain(0)));
        mark_area_change_pending();
        ((TObjAreaWarpQuest *)(&lbl_80515BA0.value))->get_dest_area();
        send_inter_level_warp_all__10TNpcPlayerFl();
        (*(s32 *)&TWindowReturnCity__client_scan_index) = 4;
    }
}

s32 TWindowReturnCity::query_battle_state() {
    struct VObj_8026D208 *o = (struct VObj_8026D208 *)get_player_by_client_id(*(s32 *)&this->m_24);
    if (o == NULL) {
        return 0;
    }
    return o->m31();
}

void TWindowReturnCity::render() {  }

extern s32 __vt__17TWindowReturnCity[];

void TWindowReturnCity::run_task() {
    s32 temp_r0;
    s32 temp_r3;
    if ((s32) lbl_805D55C0 != 1) {
        temp_r0 = *(s32 *)&this->m_20;
        switch (temp_r0) {
        case 2:
            break;
        case 0:
            *(s32 *)&this->m_20 = 1;
        case 1:
            if ((query_battle_state() == 0) || ((s32) TWindowReturnCity__client_scan_index != 4)) {
                TWindowReturnCity::clear_flag_bit5();
                TWindowReturnCity__sub_8024ACA8(*(s32 *)&this->m_24);
                TWindowCtrl::clear_flag_2();
                queue_destruction__7TObjectFv(this);
                *(s32 *)&this->m_20 = 2;
                return;
            }
            if (((TWindowSubComCard *)(*(s32 *)&this->m_1c))->get_card_data() != 0) {
                TWindowReturnCity::clear_flag_bit5();
                TWindowReturnCity__sub_8024ACA8(*(s32 *)&this->m_24);
                TWindowCtrl::clear_flag_2();
                queue_destruction__7TObjectFv(this);
                *(s32 *)&this->m_20 = 2;
                return;
            }
            if (((TWindowSubComCard *)(*(s32 *)&this->m_1c))->is_child_visible() != 0) {
                temp_r3 = ((TWindowSubComCard *)(*(s32 *)&this->m_1c))->get_slot_or_neg1();
                if (temp_r3 == 0) {
                    TWindowReturnCity__client_scan_index = *(s32 *)&this->m_24;
                    u32 task = __nw__7TObjectFUl(0x28);
                    if (task != 0U) {
                        ((THunterGuildSeqOffline *)task)->init((void *)tl_00, (void *)return_to_city_after_defeat);
                    }
                    *(s32 *)&this->m_20 = 2;
                }
                if (temp_r3 == 1) {
                    TWindowReturnCity::clear_flag_bit5();
                    TWindowReturnCity__sub_8024ACA8(*(s32 *)&this->m_24);
                    TWindowCtrl::clear_flag_2();
                    queue_destruction__7TObjectFv(this);
                    *(s32 *)&this->m_20 = 2;
                }
            }
            break;
        }
    }
}

void *__dt__17TWindowReturnCityFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TWindowReturnCity;
        if (*(void **)((s8 *)arg0 + 0x1C) != NULL) { ((TWindowSubComCard *)(*(void **)((s8 *)arg0 + 0x1C)))->close(); *(s32 *)((s8 *)arg0 + 0x1C) = 0; }
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
  *((s32 **) (((s8 *) arg0) + 0x18)) = &(*(RecoveredGlobal_8026D40C___vt__17TWindowReturnCity *)&__vt__17TWindowReturnCity).value;
  *((s32 *) (((s8 *) arg0) + 0)) = (s32) TWindowReturnCity__class_name;
  *((s32 *) (((s8 *) arg0) + 0x24)) = arg2;
  temp_r31 = create__19TWindowMessageYesNoFPvPvPvPv((void *) arg0, (int) (*((s32 *) (((s8 *) arg0) + 0x24))), (int) 0, (int) 0);
  *((s32 *) (((s8 *) arg0) + 0x1C)) = temp_r31;
  if (arg0)
  {
  }
  temp_r31 = get_window_layout_position((int) 0x23);
  forward_slot_selection__16TAdChrSelASlotGCFPvPv((int) (*((s32 *) (((s8 *) arg0) + 0x1C))), (int) TWindowSubStatusDisp::get_message_10((int) 0x43), (int) temp_r31, (f32) lbl_805DD2E8);
  free_member__17TWindowSubComCardFv((int) (*((s32 *) (((s8 *) arg0) + 0x1C))), (int) 1);
  fn_8024AC64((int) (*((s32 *) (((s8 *) arg0) + 0x24))));
  TWindowCtrl::set_close_flag();
  TWindowCtrl__sub_8026D4E8();
  *((s32 *) (((s8 *) arg0) + 0x20)) = 0;
  return arg0;
}

void TWindowReturnCity__sub_8026D4BC(void) {  }

    extern int TWindowReturnCity__client_scan_index;
void TWindowReturnCity__sub_8026D4C0(void) { TWindowReturnCity__client_scan_index = 4; }

extern void *TWindowCtrl__active_window;

void TWindowReturnCity::clear_flag_bit5() {
    if ((void *) TWindowCtrl__active_window != NULL) {
        *(u16 *)((s8 *)TWindowCtrl__active_window + 0x1C) = (u16) (*(u16 *)((s8 *)TWindowCtrl__active_window + 0x1C) & 0xFFFFFFDF);
    }
}

extern void *TWindowCtrl__active_window;

void TWindowCtrl__sub_8026D4E8(void) {
    if ((void *) TWindowCtrl__active_window != NULL) {
        *(u16 *)((s8 *)TWindowCtrl__active_window + 0x1C) = (u16) (*(u16 *)((s8 *)TWindowCtrl__active_window + 0x1C) | 0x20);
    }
}

}
