#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredGlobal_8031B170_lbl_804E8880
{
  M2C_UNK value;
  u8 remaining[0xCC];
};

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VB_800F5324 { u8 pad[0xC]; };

struct VO_800F5324 : VB_800F5324 { virtual ~VO_800F5324(); };

extern "C" {
extern RecoveredGlobal_8031B170_lbl_804E8880 lbl_804977A0;
extern const f32 lbl_805DA8AC;
void TObjEneMe3Stelth__sub_800F52FC(s32 arg0, f32 farg0);
M2C_UNK TLobby__sub_8001FE7C(void *, s32);
M2C_UNK __dt__11TBoss4Type3FPvs(void *, s32);
M2C_UNK free__11TOBoss4RockFUi(void *);
extern void *lbl_8050110C[];
extern void *TObjEneMe3Stelth__data_805D5300;
extern VO_800F5324 *TObjEneMe3Stelth__data_805D5308;
extern void *TObjEneMe3Stelth__data_805D530C;
void TObjEneMe3Stelth__sub_800F5324(void);
}

extern "C" {

typedef struct RecoveredGlobal_8031B170_lbl_804E8880 RecoveredGlobal_8031B170_lbl_804E8880;
typedef char RecoveredGlobal_8031B170_lbl_804E8880_size[((sizeof(RecoveredGlobal_8031B170_lbl_804E8880)) == 0xD0) ? (1) : (-1)];
void TObjEneMe3Stelth__sub_800F52FC(s32 arg0, f32 farg0) {
  u8 *new_var;
  f32 var_f1;
  var_f1 = farg0;
  if (var_f1 < lbl_805DA8AC)
  {
    var_f1 = lbl_805DA8AC;
  }
  new_var = (u8 *) (&lbl_804977A0.value);
  new_var = new_var + (arg0 * 0x10);
  *((f32 *) (((s8 *) new_var) + 8)) = var_f1;
}
void TObjEneMe3Stelth__sub_800F5324(void) {
    if (TObjEneMe3Stelth__data_805D530C != 0) {
        __dt__11TBoss4Type3FPvs(TObjEneMe3Stelth__data_805D530C, 1);
        TObjEneMe3Stelth__data_805D530C = 0;
    }
    if (TObjEneMe3Stelth__data_805D5308 != 0) {
        delete TObjEneMe3Stelth__data_805D5308;
        TObjEneMe3Stelth__data_805D5308 = 0;
    }
    if (lbl_8050110C[0] != 0) {
        free__11TOBoss4RockFUi(lbl_8050110C[0]);
        lbl_8050110C[0] = 0;
    }
    if (TObjEneMe3Stelth__data_805D5300 != 0) {
        TLobby__sub_8001FE7C(TObjEneMe3Stelth__data_805D5300, 1);
        TObjEneMe3Stelth__data_805D5300 = 0;
    }
}

}
