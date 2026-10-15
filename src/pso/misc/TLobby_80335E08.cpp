#include "types.h"

struct Stack_80335E7C
{
  f32 sp8;
  f32 spC;
  f32 sp10;
  f32 sp14;
  f32 sp18;
  f32 sp1C;
  f32 sp20;
  f32 sp24;
};

struct RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 {
    s32 value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_8000F7FC_lbl_80515F48 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8000F9E4_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F90C_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F9CC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8FC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8EC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F91C_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void TLobby__sub_80335F40(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
extern s32 lbl_804EE470[];
void *dt__6TLobbyFPvs(void *arg0, s16 arg1);
int __ct__7TObjectFP7TObject(void *);
extern s32 lbl_804EE470[];
void *ct_with_parent__6TLobbyFPvPv(void *arg0, void *arg1);
void TLobby__sub_80335FE0(void);
void TLobby__sub_80335FE4(void);
    extern unsigned char lobby_record_table[];
void* get_record__6TLobbyFi(int a0);
int TAdTrialAgreementGC__sub_8033596C(void*);
int TLobby__sub_80336030(void* p);
s32 TCameraCtrl__sub_80068EF0();
s32 restore_full_screen_view__11TCameraCtrlFv();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 begin_screen_draw(int);
s32 get_player__20TWindowSubStatusDispFv();
s32 draw_textured_quad_at_depth(void *, f32);
s32 set_draw_texture_and_color(int, int);
extern const f32 lbl_805DF8C8;
extern const f32 lbl_805DF8CC;
extern const f32 lbl_805DF8D0;
extern const f32 lbl_805DF8D4;
extern const f32 lbl_805DF8D8;
extern const f32 lbl_805DF8DC;
extern const f32 lbl_805DF8E0;
extern const f32 lbl_805DF8E4;
void draw_title_screen__6TLobbyFv(void);
s32 notify_fish_if_valid__10TObjPlayerFUi(s32 *);
extern RecoveredGlobal_8000F7FC_lbl_80515F48 title_texture_list;
void bind_title_texture_list(void);
extern RecoveredGlobal_8000F7FC_lbl_80515F48 title_texture_list;
void *get_title_texture_list(void);
}

extern "C" {

void TLobby__sub_80335E74(void);
void TLobby__sub_80335E78(void);
void* init_camera_state__6TLobbyFPvi(void* a0, int a1);

    extern unsigned char lbl_804EE458[];
    extern const float lbl_805DF8B4;
    extern const float lbl_805DF8C0;
void* init_camera_state__6TLobbyFPvi(void* a0, int a1) { __ct__7TObjectFP7TObject((void *)(a0)); *(int*)((char*)a0 + 0x18) = (int)lbl_804EE458; *(int*)((char*)a0 + 0x1c) = a1; *(int*)((char*)a0 + 0x20) = 0; *(int*)((char*)a0 + 0x24) = 0; *(float*)((char*)a0 + 0x28) = lbl_805DF8C0; *(float*)((char*)a0 + 0x2c) = lbl_805DF8B4; *(float*)((char*)a0 + 0x30) = lbl_805DF8B4; *(float*)((char*)a0 + 0x34) = lbl_805DF8B4; *(int*)((char*)a0 + 0x38) = 0; return a0; }

void TLobby__sub_80335E74(void) {  }
void TLobby__sub_80335E78(void) {  }

typedef struct Stack_80335E7C Stack_80335E7C;
void draw_title_screen__6TLobbyFv(void) {
  Stack_80335E7C stack;
  begin_effect_render__13TParticleCtrlFv();
  restore_full_screen_view__11TCameraCtrlFv();
  begin_screen_draw((int) 1);
  bind_title_texture_list();
  set_draw_texture_and_color((int) 1, (int) (-1));
  stack.sp8 = lbl_805DF8C8;
  stack.spC = lbl_805DF8CC;
  stack.sp10 = lbl_805DF8D0;
  stack.sp14 = lbl_805DF8D4;
  stack.sp1C = (stack.sp18 = lbl_805DF8D8);
  stack.sp24 = (stack.sp20 = lbl_805DF8DC);
  draw_textured_quad_at_depth((void *) (&stack.sp8), (f32) lbl_805DF8E0);
  set_draw_texture_and_color((int) 2, (int) (-1));
  stack.sp8 = lbl_805DF8D0;
  stack.spC = lbl_805DF8CC;
  stack.sp10 = lbl_805DF8E4;
  stack.sp14 = lbl_805DF8D4;
  draw_textured_quad_at_depth((void *) (&stack.sp8), (f32) lbl_805DF8E0);
  get_player__20TWindowSubStatusDispFv();
  TCameraCtrl__sub_80068EF0();
  end_effect_render__13TParticleCtrlFv();
}

void TLobby__sub_80335F40(void) {  }
void *dt__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804EE470;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *ct_with_parent__6TLobbyFPvPv(void *arg0, void *arg1) {
    __ct__7TObjectFP7TObject((void *)(arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804EE470;
    *(void **)((s8 *)arg0 + 0x1C) = arg1;
    return arg0;
}
void TLobby__sub_80335FE0(void) {  }
void TLobby__sub_80335FE4(void) {  }

void *get_title_texture_list(void) {
    return ((char *)&title_texture_list);
}

void* get_record__6TLobbyFi(int a0) {  return (char*)lobby_record_table + a0 * 32; }

typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];
void bind_title_texture_list(void) {
    notify_fish_if_valid__10TObjPlayerFUi((s32 *)(&title_texture_list.value));
}
typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];

int TLobby__sub_80336030(void* p) { return TAdTrialAgreementGC__sub_8033596C(*(void**)((char*)p + 0x24)); }

}
