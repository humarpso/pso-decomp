#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define PAD3 virtual void CAT(f,__LINE__)(); virtual void CAT(g,__LINE__)(); virtual void CAT(h,__LINE__)();
#include <stddef.h>
struct Base_A_8003d558_8003CFEC { char pad[0x18]; };

struct V_A_8003d558_8003CFEC : Base_A_8003d558_8003CFEC {
    virtual void f0();
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    virtual void CAT(f,__LINE__)(); virtual void CAT(g,__LINE__)();
    virtual void m72(s32);
};

struct Stack_8003D648 {
    s8 sp8;
    s8 sp9;
    s16 spA;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_8003D648_lbl_8048377C { M2C_UNK value; u8 remaining[0x2C]; };

extern "C" {
void *find_entity_by_id(u16);
s32 is_photon_blast_active__11TCameraCtrlFPv();
extern u16 lbl_80483770[];
extern u16 lbl_805D271C;
s32 is_photon_blast_active__11TCameraCtrlFv(void);
void *find_entity_by_id(u16);
extern u16 lbl_805D2718;
s32 fn_8003F3F8();
s32 is_photon_ready__11TCameraCtrlFv(void);
M2C_UNK TBoss3Volopt__sub_8003DD4C(void *);
int TCameraCtrl__sub_8003D1E8(void *);
s32 TLobby__sub_800C6C10();
M2C_UNK play_persistent_sound(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
s32 get_main_phase();
M2C_UNK init_object__16TBoss3VoloptCtrlFPv();
M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK update_phase__12TBoss3VoloptFv();
void update_volopt_seq__11TCameraCtrlFPv(void *arg0);
s32 TBoss3Volopt__sub_8003DC34(void *);
s32 set_player_view_flag__11TCameraCtrlFi();
s32 set_flag_08000000__11TCameraCtrlFi();
s32 set_active_camera_pose(void *, void *);
s32 restore_player_cameras();
s32 TCameraCtrl__sub_80069E7C(int);
s32 set_scripted_camera_pose(int, int, void *);
s32 cache_target_and_forward__11TCameraCtrlFii(void *, int);
u8 *get_scripted_camera_playback();
void *find_entity_by_id(u16);
s32 TObjPlayer__sub_801BA42C();
s32 TObjPlayer__sub_801BA494();
s32 init_all_slots__11TWindowCtrlFv();
s32 init_all_slots2__11TWindowCtrlFv();
extern RecoveredGlobal_8003D648_lbl_8048377C lbl_8048377C;
extern u16 lbl_805D2718;
extern s32 lbl_805D4D14;
extern const f32 lbl_805D8660;
extern const f32 lbl_805D8678;
void TCameraCtrl__sub_8003D648(u8 *arg0);
void *find_entity_by_id(u16);
s32 is_photon_blast_active__11TCameraCtrlFPv();
s32 TObjPlayer__sub_80042EC0(void *);
extern u16 lbl_80483770[];
s32 TCameraCtrl__sub_8003D2C4(void);
void *find_entity_by_id(u16);
void set_target_id__10TObjPlayerFPvi(void *, s32);
extern u16 lbl_80483770[];
extern s8 lbl_804FEE74[];
void TCameraCtrl__sub_8003CFFC(s32 n);
}

extern "C" {

int TCameraCtrl__sub_8003CFF4(void);
void fn_8003CFEC(int a0);

    extern int lbl_805D4C20;
void fn_8003CFEC(int a0) { lbl_805D4C20 = a0; }

    extern int lbl_805D4C20;
int TCameraCtrl__sub_8003CFF4(void) {  return lbl_805D4C20; }

    extern int lbl_805D4C24;

void TCameraCtrl__sub_8003CFFC(s32 n) {
  s32 i;
  void *p;
  if (n == 0)
  {
    return;
  }
  p = find_entity_by_id(((volatile unsigned short *)&lbl_80483770)[lbl_804FEE74[0]]);
  if (p != 0)
  {
    set_target_id__10TObjPlayerFPvi(p, 1);
  }
  for (i = 1; i < n; i++)
  {
    p = find_entity_by_id(((volatile unsigned short *)&lbl_80483770)[lbl_804FEE74[i]]);
    if (p != 0)
    {
      set_target_id__10TObjPlayerFPvi(p, 0);
    }
  }
}

int TCameraCtrl__sub_8003D1E8(void * _w0) {  return lbl_805D4C24; }
s32 is_photon_blast_active__11TCameraCtrlFv(void) {
    s32 var_r29;
    s32 var_r31;
    void *temp_r3;
    temp_r3 = find_entity_by_id(lbl_805D271C);
    if ((temp_r3 != NULL) && (M2C_FIELD(temp_r3, s32 *, 0x30) & 0x800)) {
        return 1;
    }
    for (var_r29 = 0; var_r29 < 6; var_r29 += 1) {
        if ((find_entity_by_id(lbl_80483770[var_r29]) != NULL) && (is_photon_blast_active__11TCameraCtrlFPv() == 0)) {
            return 0;
        }
    }
    return 1;
}
s32 is_photon_ready__11TCameraCtrlFv(void) {
    if ((((u32)find_entity_by_id(lbl_805D2718)) != 0U) && (fn_8003F3F8() != 0)) {
        return 1;
    }
    return 0;
}

s32 TCameraCtrl__sub_8003D2C4(void) {
    s32 i;
    void *p;
    for (i = 0; i < 6; i++) {
        p = find_entity_by_id(lbl_80483770[i]);
        if (p != 0 && is_photon_blast_active__11TCameraCtrlFPv() == 0 && TObjPlayer__sub_80042EC0(p) == 0) {
            return 0;
        }
    }
    return 1;
}

void update_volopt_seq__11TCameraCtrlFPv(void *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        if (get_main_phase() == 0xF) {
            if (TLobby__sub_800C6C10() != 0) {
                TBoss3Volopt__sub_8003DD4C(arg0);
            }
        } else {
            TBoss3Volopt__sub_8003DD4C(arg0);
        }
        if (((s32)TCameraCtrl__sub_8003D1E8((void *)(arg0))) != 0) {
            update_phase__12TBoss3VoloptFv();
            obj_setFlags30(arg0, 0x800);
            ((V_A_8003d558_8003CFEC *)arg0)->m72(0);
            M2C_FIELD(arg0, s32 *, 0x374) = 5;
            if (__nw__7TObjectFUl(0x1C) != 0U) {
                init_object__16TBoss3VoloptCtrlFPv();
            }
        }
        play_persistent_sound(0x4003C601, arg0, 0, 0, 0);
        break;
    case -1:
        break;
    case 2:
        break;
    }
}
void TCameraCtrl__sub_8003D648(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8003D648, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_8003D648, sp9) == 0x1) ? 1 : -1];
    typedef char spA_offset[(offsetof(Stack_8003D648, spA) == 0x2) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8003D648, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8003D648, sp10) == 0x8) ? 1 : -1];
    Stack_8003D648 stack;
    s32 temp_r0;
    s32 temp_r0_2;
    u8 *temp_r3;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        TBoss3Volopt__sub_8003DC34((void *) (arg0));
        TCameraCtrl__sub_80069E7C((int) (9));
        set_active_camera_pose((void *) (&lbl_8048377C.value), (void *) ((u8 *)&lbl_8048377C.value + 0xC));
        TObjPlayer__sub_801BA494();
        init_all_slots__11TWindowCtrlFv();
        if (((u32)find_entity_by_id((u16)((void *) (lbl_805D2718)))) != 0U) {
            set_flag_08000000__11TCameraCtrlFi();
        }
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        return;
    case 1:
        if ((s32) lbl_805D4D14 == 1) {
            M2C_FIELD(arg0, s32 *, 0x384) = 0x96;
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        }
        return;
    case 2:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
        M2C_FIELD(arg0, s32 *, 0x384) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            restore_player_cameras();
            M2C_FIELD(arg0, s32 *, 0x37C) = 3;
            return;
        }
        break;
    case 3:
        stack.sp9 = 0;
        stack.sp8 = 2;
        stack.spA = 0;
        stack.spC = lbl_805D8660;
        stack.sp10 = lbl_805D8678;
        TCameraCtrl__sub_80069E7C((int) (5));
        cache_target_and_forward__11TCameraCtrlFii((void *) (&stack.sp8), (int) (0x160A));
        temp_r3 = (u8 *)(arg0 + 0x38);
        set_scripted_camera_pose((int) (temp_r3), (int) (temp_r3), (void *) (arg0 + 0x5C));
        M2C_FIELD(arg0, s32 *, 0x37C) = 4;
        return;
    case 4:
        if (M2C_FIELD(get_scripted_camera_playback(), u16 *, 2) & 1) {
            restore_player_cameras();
            M2C_FIELD(arg0, s32 *, 0x374) = 4;
            return;
        }
        break;
    case -1:
        if (((u32)find_entity_by_id((u16)((void *) (lbl_805D2718)))) != 0U) {
            set_player_view_flag__11TCameraCtrlFi();
        }
        init_all_slots2__11TWindowCtrlFv();
        TObjPlayer__sub_801BA42C();
        break;
    }
}

}
