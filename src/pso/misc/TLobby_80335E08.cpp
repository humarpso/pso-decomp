#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

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

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_8000F7FC_lbl_80515F48 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8000F9E4_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F90C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F9CC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8FC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8EC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F91C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void TLobby__sub_80335F40(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
extern M2C_UNK lbl_804EE470[];
void *dt__6TLobbyFPvs(void *arg0, s16 arg1);
int __ct__7TObjectFP7TObject(void *);
extern M2C_UNK lbl_804EE470[];
void *ct_with_parent__6TLobbyFPvPv(void *arg0, void *arg1);
void TLobby__sub_80335FE0(void);
void TLobby__sub_80335FE4(void);
    extern unsigned char lbl_804EE9A4[];
void* get_record__6TLobbyFi(int a0);
int TAdTrialAgreementGC__sub_8033596C(void*);
int TLobby__sub_80336030(void* p);
s32 TCameraCtrl__sub_80068EF0();
s32 TCameraCtrl__sub_80069024();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 TWindowSubStatusDisp__sub_803DEE6C(int);
s32 get_player__20TWindowSubStatusDispFv();
s32 TWindowSubComCard__sub_803DEECC(void *, f32);
s32 TWindowSubStatusDisp__sub_803DF160(int, int);
extern const f32 lbl_805DF8C8;
extern const f32 lbl_805DF8CC;
extern const f32 lbl_805DF8D0;
extern const f32 lbl_805DF8D4;
extern const f32 lbl_805DF8D8;
extern const f32 lbl_805DF8DC;
extern const f32 lbl_805DF8E0;
extern const f32 lbl_805DF8E4;
void TLobby__sub_80335E7C(void);
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(M2C_UNK *);
extern RecoveredGlobal_8000F7FC_lbl_80515F48 lbl_804EE584;
void TLobby__sub_80336008(void);
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
void TLobby__sub_80335E7C(void) {
  Stack_80335E7C stack;
  begin_effect_render__13TParticleCtrlFv();
  TCameraCtrl__sub_80069024();
  TWindowSubStatusDisp__sub_803DEE6C((int) 1);
  TLobby__sub_80336008();
  TWindowSubStatusDisp__sub_803DF160((int) 1, (int) (-1));
  stack.sp8 = lbl_805DF8C8;
  stack.spC = lbl_805DF8CC;
  stack.sp10 = lbl_805DF8D0;
  stack.sp14 = lbl_805DF8D4;
  stack.sp1C = (stack.sp18 = lbl_805DF8D8);
  stack.sp24 = (stack.sp20 = lbl_805DF8DC);
  TWindowSubComCard__sub_803DEECC((void *) (&stack.sp8), (f32) lbl_805DF8E0);
  TWindowSubStatusDisp__sub_803DF160((int) 2, (int) (-1));
  stack.sp8 = lbl_805DF8D0;
  stack.spC = lbl_805DF8CC;
  stack.sp10 = lbl_805DF8E4;
  stack.sp14 = lbl_805DF8D4;
  TWindowSubComCard__sub_803DEECC((void *) (&stack.sp8), (f32) lbl_805DF8E0);
  get_player__20TWindowSubStatusDispFv();
  TCameraCtrl__sub_80068EF0();
  end_effect_render__13TParticleCtrlFv();
}

void TLobby__sub_80335F40(void) {  }
void *dt__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EE470;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *ct_with_parent__6TLobbyFPvPv(void *arg0, void *arg1) {
    __ct__7TObjectFP7TObject((void *)(arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EE470;
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    return arg0;
}
void TLobby__sub_80335FE0(void) {  }
void TLobby__sub_80335FE4(void) {  }
void* get_record__6TLobbyFi(int a0) {  return (char*)lbl_804EE9A4 + a0 * 32; }

typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];
void TLobby__sub_80336008(void) {
    notify_fish_if_valid__10TObjPlayerFUi((M2C_UNK *)(&lbl_804EE584.value));
}
typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];

int TLobby__sub_80336030(void* p) { return TAdTrialAgreementGC__sub_8033596C(*(void**)((char*)p + 0x24)); }

}
