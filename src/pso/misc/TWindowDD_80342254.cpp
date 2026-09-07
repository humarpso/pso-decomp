#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80342384_TWindowDD__data_804EFC50 { M2C_UNK value; u8 remaining[0x3C]; };
typedef char RecoveredGlobal_80342384_TWindowDD__data_804EFC50_size[sizeof(RecoveredGlobal_80342384_TWindowDD__data_804EFC50) == 0x40 ? 1 : -1];

extern "C" {
s16 TWindowDD__sub_80342158(int);
M2C_UNK TWindowDD__sub_8034330C(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK TWindowDD__sub_80347B70(void *);
M2C_UNK TWindowDD__sub_80347C50();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_803484C4(void *);
void TWindowDD__sub_80342428(u8 *arg0);
s32 __nw__7TObjectFUl(int);
s32 TWindowDD__sub_803422F0(int, void *, void *);
extern RecoveredGlobal_80342384_TWindowDD__data_804EFC50 TWindowDD__data_804EFC50;
s32 TWindowDD__sub_80342384(s32 arg0, s32 arg1);
}

extern "C" {

int TWindowDD__sub_80342254(void);
int TWindowDD__sub_80342268(void);
void *destroy__9TWindowDDFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
void free__11TOBoss4RockFUi(void *);
s32 get_field_68__9TWindowDDFPv(void* p);
int spawn_window__9TWindowDDFv(void);

int TWindowDD__sub_80342254(void) { return 0; }
int TWindowDD__sub_80342268(void) { return 0; }

extern M2C_UNK lbl_804EFC90[];

void *destroy__9TWindowDDFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFC90;
        if (M2C_FIELD(arg0, void **, 0x80) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x80)); M2C_FIELD(arg0, M2C_UNK *, 0x80) = 0; }
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 TWindowDD__sub_80342384(s32 arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r0;
    M2C_FIELD(&TWindowDD__data_804EFC50.value, s32 *, 4) = arg1;
    temp_r3 = __nw__7TObjectFUl((int) (0x90));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = TWindowDD__sub_803422F0((int) (temp_r3), (void *) (arg0), (void *) (arg1));
    }
    return var_r0;
}

void TWindowDD__sub_80342428(u8 *arg0) {
  u8 *new_var;
  TWindowDD__sub_80347C50();
  TWindowDD__sub_80347B70((void *) arg0);
  if (test_input_flag_4__9TWindowDDFPv((void *) arg0))
  {
    play_sound__9TWindowDDFv();
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0xB0)))) == 0xA)
    {
      new_var = arg0;
      new_var = new_var + ((*((s32 *) (((s8 *) arg0) + 0x20))) * 4);
      if (TWindowDD__sub_80342158((int) (*((s32 *) (((s8 *) new_var) + 0x24)))) == 0x685)
      {
        *((s32 *) (((s8 *) arg0) + 0xB4)) = 0x14;
        *((s32 *) (((s8 *) arg0) + 0x8C)) = -0x3C;
        TWindowDD__sub_803435A0((void *) arg0);
        return;
      }
      TWindowDD__sub_803484C4((void *) arg0);
      return;
    }
    TWindowDD__sub_803484C4((void *) arg0);
    return;
  }
  if (TWindowDD__sub_803482B0((void *) arg0) != 0)
  {
    play_se__9TWindowDDFv();
    TWindowDD__sub_8034330C((void *) arg0);
  }
}

}
