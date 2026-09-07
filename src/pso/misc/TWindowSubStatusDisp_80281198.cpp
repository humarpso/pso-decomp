#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
M2C_UNK TWindowSubStatusDisp__sub_80257C28(void *, void *);
M2C_UNK TWindowSubStatusDisp__sub_80257CB8(void *);
M2C_UNK fn_8026C7AC(int, int);
s32 TWindowShortListCtrl__sub_8026C9DC(int);
M2C_UNK TWindowSubStatusDisp__sub_80281198(void *);
M2C_UNK TWindowSubStatusDisp__sub_802813B4(void *);
extern M2C_UNK lbl_805DD6F4;
void TWindowSubStatusDisp__sub_80281644(u8 *arg0);
}

extern "C" {

void *dt__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
void update_status__20TWindowSubStatusDispFPv(u8 *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026C800(s32, s32);
void __dl__7TObjectFPv(void *);
void delete_if_allocated(void *, int);
void destroy_window_base__9TWindowDDFPvs(void *, int);

void update_status__20TWindowSubStatusDispFPv(u8 *arg0) {
    s32 temp_r3;

    if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20)) != 0U) {
        temp_r3 = TWindowSubComCard__sub_80244C0C(arg0, arg0 + 0x6C);
        TWindowSubComCard__sub_80245F98(arg0, temp_r3);
        TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
        TWindowSubStatusDisp__sub_8026C800(M2C_FIELD(arg0, s32 *, 0x68), temp_r3);
    }
}

extern M2C_UNK lbl_804D2B30[];

void TWindowSubStatusDisp__sub_80281644(u8 *arg0) {
  s16 temp_r3;
  if (!((*((s32 *) (((s8 *) arg0) + 0x2C))) & 2))
  {
    *((s32 *) (((s8 *) arg0) + 0x5C)) = 0x01000000;
  }
  if ((TWindowShortListCtrl__sub_8026C9DC((int) (*((s32 *) (((s8 *) arg0) + 0x68)))) != 0) || (((s16) (*((s16 *) (((s8 *) arg0) + 0x60)))) != ((s16) (*((s16 *) (((s8 *) arg0) + 0x62))))))
  {
    temp_r3 = *((s16 *) (((s8 *) arg0) + 0x62));
    if (((s16) (*((s16 *) (((s8 *) arg0) + 0x60)))) != temp_r3)
    {
      *((s16 *) (((s8 *) arg0) + 0x60)) = *((s16 *) (((s8 *) arg0) + 0x62));
      fn_8026C7AC((int) (*((s32 *) (((s8 *) arg0) + 0x68))), (int) ((s8) (*((u8 *) (((s8 *) (((u8 *) (&lbl_805DD6F4)) + (*((s16 *) (((s8 *) arg0) + 0x60))))) + 0)))));
    }
    TWindowSubStatusDisp__sub_80257CB8((void *) (((u8 *) arg0) + 0x24));
    TWindowSubStatusDisp__sub_802813B4((void *) arg0);
  }
  TWindowSubStatusDisp__sub_80281198((void *) arg0);
  initialize_subwindow__9TWindowDDFPv((void *) arg0);
  TWindowSubStatusDisp__sub_80257C28((void *) arg0, (void *) (((u8 *) arg0) + 0x24));
}

void *dt__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D2B30;
        delete_if_allocated(M2C_FIELD(arg0, void **, 0x68), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
