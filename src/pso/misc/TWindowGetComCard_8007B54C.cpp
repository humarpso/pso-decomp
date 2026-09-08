#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8007B54C_TWindowGetComCard__data_80500158 {
    M2C_UNK value;
    u8 remaining[0x23C];
};

struct RecoveredGlobal_8007B594_TWindowGetComCard__data_80500158 {
    M2C_UNK value;
    u8 remaining[0x23C];
};

struct RecoveredGlobal_8007B60C_TWindowGetComCard__data_80500158
{
  M2C_UNK value;
  u8 remaining[0x23C];
};

extern "C" {
void remove_entry__17TWindowGetComCardFiii(s32 arg0, s32 arg1, s32 arg2);
s32 is_active__17TWindowSubComCardFPv(void *);
void TWindowCtrl__sub_8024A08C(void);
extern RecoveredGlobal_8007B54C_TWindowGetComCard__data_80500158 TWindowGetComCard__data_80500158;
void TWindowGetComCard__sub_8007B54C(void);
extern RecoveredGlobal_8007B54C_TWindowGetComCard__data_80500158 TWindowGetComCard__data_80500158;
M2C_UNK *TWindowGetComCard__sub_8007B594(void);
M2C_UNK TWindowSubComCard__sub_8007B26C(s32);
void TWindowCtrl__sub_8024A08C(void);
extern RecoveredGlobal_8007B54C_TWindowGetComCard__data_80500158 TWindowGetComCard__data_80500158;
void TWindowGetComCard__sub_8007B60C(s32 _w0);
}

extern "C" {

void TWindowGetComCard__sub_8007B65C(void* p);
void TWindowGetComCard__sub_8007B67C(void* p);
void remove_entry__17TWindowGetComCardFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TLobby__sub_803DE7BC(s32, s32, u32);
M2C_UNK TWindowSubComCard__sub_8007B26C(s32);

typedef char RecoveredGlobal_8007B54C_TWindowGetComCard__data_80500158_size[sizeof(RecoveredGlobal_8007B54C_TWindowGetComCard__data_80500158) == 0x240 ? 1 : -1];
void TWindowGetComCard__sub_8007B54C(void) {
    remove_entry__17TWindowGetComCardFiii(0, (s32) &TWindowGetComCard__data_80500158.value, 4);
    if (is_active__17TWindowSubComCardFPv(&TWindowGetComCard__data_80500158.value) == 0) {
        TWindowCtrl__sub_8024A08C();
    }
}

typedef char RecoveredGlobal_8007B594_TWindowGetComCard__data_80500158_size[sizeof(RecoveredGlobal_8007B594_TWindowGetComCard__data_80500158) == 0x240 ? 1 : -1];
M2C_UNK *TWindowGetComCard__sub_8007B594(void) {
    return &(*(RecoveredGlobal_8007B594_TWindowGetComCard__data_80500158 *)&TWindowGetComCard__data_80500158).value;
}

void remove_entry__17TWindowGetComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    if (arg0 < (s32) (arg2 - 1)) {
        temp_r3 = arg1 + (arg0 * 0x90);
        TLobby__sub_803DE7BC(temp_r3, temp_r3 + 0x90, (u32) (((arg2 - arg0) - 1) * 0x90) >> 2U);
    }
    arg1 += (arg2 - 1) * 0x90;
    TWindowSubComCard__sub_8007B26C(arg1);
}

typedef struct RecoveredGlobal_8007B60C_TWindowGetComCard__data_80500158 RecoveredGlobal_8007B60C_TWindowGetComCard__data_80500158;
typedef char RecoveredGlobal_8007B60C_TWindowGetComCard__data_80500158_size[((sizeof(RecoveredGlobal_8007B60C_TWindowGetComCard__data_80500158)) == 0x240) ? (1) : (-1)];
void TWindowGetComCard__sub_8007B60C(s32 _w0) {
  int new_var;
  s32 var_r29;
  s32 var_r31;
  TWindowCtrl__sub_8024A08C();
  var_r29 = 0;
  var_r31 = 0;
  do
  {
    new_var = 0xFFFFFFFFFFFFFFFF;
    TWindowSubComCard__sub_8007B26C((s32)((void *) (((u8 *) (&(*(RecoveredGlobal_8007B60C_TWindowGetComCard__data_80500158 *)&TWindowGetComCard__data_80500158).value)) + (var_r31 & new_var))));
    var_r29 += 1;
    var_r31 += 0x90;
  }
  while (var_r29 < 4);
}

void TWindowGetComCard__sub_8007B65C(void* p) { TWindowGetComCard__sub_8007B60C((s32)(p)); }
void TWindowGetComCard__sub_8007B67C(void* p) { TWindowGetComCard__sub_8007B60C((s32)(p)); }

}
