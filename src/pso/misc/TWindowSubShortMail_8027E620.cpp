#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TWindowSubShortMail__sub_8027FAD0(u8 *arg0);
s32 get_camera_id__11TCameraCtrlFv();
s32 get_message_10__20TWindowSubStatusDispFPv(int);
s32 set_flag70_bit10__16TObjCityMainWarpFPv(int);
s32 TWindowSubComCard__sub_80265C30(int);
s32 TWindowSubComCard__sub_80265E60(int, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 create_window_menu(int, int, int);
s32 create_titled_window_menu(int, int, int, int);
s32 get_window_layout_position(int);
extern const f32 lbl_805DD6D8;
s32 create_status_category_menu(u8 *arg0);
}

extern "C" {

struct VObj_8027FBF0_Base_8027fbf0_8027E620 { char pad[0x18]; };
struct VObj_8027FBF0_8027E620 : VObj_8027FBF0_Base_8027fbf0_8027E620 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
};

void *TWindowSubShortMail__ct(void *arg0, void *arg1, void *arg2);
void TWindowSubShortMail__sub_8027FBEC(void);
void *__dt__19TWindowSubShortMailFv(void *arg0, s16 arg1);
void *destroy__19TWindowSubShortMailFPvs(void *arg0, s16 arg1);
u8 get_field_cc__19TWindowSubShortMailFPv(void* p);
void* get_mail_ptr__19TWindowSubShortMailFPv(void* p);
void render__19TWindowSubShortMailFv(void);
void update__19TWindowSubShortMailFPv(void *arg0);
M2C_UNK TLobby__sub_8001DA00();
M2C_UNK TLobby__sub_802258C8();
s32 get_selected_menu_value(s32);
void TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK fn_8027FD94(s32, s16);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
M2C_UNK is_player_input_active(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

void render__19TWindowSubShortMailFv(void) {  }

extern M2C_UNK __vt__19TWindowSubShortMail[];

void *__dt__19TWindowSubShortMailFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubShortMail;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x50));
            M2C_FIELD(arg0, u32 *, 0x50) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x5C));
            M2C_FIELD(arg0, u32 *, 0x5C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x4C)));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x48)));
            M2C_FIELD(arg0, u32 *, 0x48) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x44)));
            M2C_FIELD(arg0, u32 *, 0x44) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x3C)));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x38)));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x58)));
            M2C_FIELD(arg0, u32 *, 0x58) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x54)));
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x40)));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        TLobby__sub_802258C8();
        TLobby__sub_8001DA00();
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

extern M2C_UNK __vt__19TWindowSubShortMail[];
extern void *lbl_805D3A98;

void *TWindowSubShortMail__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubShortMail;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3A98;
    M2C_FIELD(arg0, void **, 0x34) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x40) = 0;
    M2C_FIELD(arg0, u32 *, 0x54) = 0;
    M2C_FIELD(arg0, u32 *, 0x58) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u32 *, 0x44) = 0;
    M2C_FIELD(arg0, u32 *, 0x48) = 0;
    M2C_FIELD(arg0, u32 *, 0x4C) = 0;
    M2C_FIELD(arg0, u32 *, 0x5C) = 0;
    M2C_FIELD(arg0, u32 *, 0x50) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = -1;
    M2C_FIELD(arg0, u32 *, 0x28) = -1;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

void TWindowSubShortMail__sub_8027FAD0(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0xCC) = (u8) (M2C_FIELD(arg0, u8 *, 0xCC) & ~0xA);
    M2C_FIELD(arg0, u8 *, 0xCC) = (u8) (M2C_FIELD(arg0, u8 *, 0xCC) | 4);
}

void* get_mail_ptr__19TWindowSubShortMailFPv(void* p) { return (char*)p + 0x20; }

u8 get_field_cc__19TWindowSubShortMailFPv(void* p) { return *(u8*)((char*)p + 0xcc); }

s32 create_status_category_menu(u8 *arg0) {
  s32 temp_r31;
  s32 var_r31;
  if (get_camera_id__11TCameraCtrlFv() > 2)
  {
    temp_r31 = get_window_layout_position((int) 0x18);
    var_r31 = create_window_menu((int) temp_r31, (int) 3, (int) (*((s32 *) (((s8 *) arg0) + 0x1C))));
  }
  else
  {
    temp_r31 = get_message_10__20TWindowSubStatusDispFPv((int) 0x1D);
    var_r31 = create_titled_window_menu((int) get_window_layout_position((int) 0x18), (int) 3, (int) temp_r31, (int) (*((s32 *) (((s8 *) arg0) + 0x1C))));
  }
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) var_r31, (int) get_message_10__20TWindowSubStatusDispFPv((int) 0x10A), (int) 0x36, (int) 0);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) var_r31, (int) get_message_10__20TWindowSubStatusDispFPv((int) 0x10B), (int) 0x36, (int) 1);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) var_r31, (int) get_message_10__20TWindowSubStatusDispFPv((int) 0x10C), (int) 0x36, (int) 2);
  set_flag70_bit10__16TObjCityMainWarpFPv((int) var_r31);
  TWindowSubComCard__sub_80265E60((int) var_r31, (f32) lbl_805DD6D8);
  TWindowSubComCard__sub_80265C30((int) var_r31);
  return var_r31;
}

void TWindowSubShortMail__sub_8027FBEC(void) {  }

void update__19TWindowSubShortMailFPv(void *arg0) {
    is_player_input_active(M2C_FIELD(arg0, s32 *, 0x1C));
    if (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x24)) != 0) {
        ((VObj_8027FBF0_8027E620 *) M2C_FIELD(arg0, void **, 0x20))->m7();
    }
    fn_8027FD94(M2C_FIELD(arg0, s32 *, 0x28), get_selected_menu_value(M2C_FIELD(arg0, s32 *, 0x24)));
}

extern M2C_UNK lbl_804D1AD0[];

void *destroy__19TWindowSubShortMailFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D1AD0;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x28))); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x24))); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

}
