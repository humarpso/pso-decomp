#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredGlobal_8031B170_lbl_804E8880
{
  M2C_UNK value;
  u8 remaining[0xCC];
};

typedef s32 M2C_UNK;
struct Base_8031B198 { u8 pad[0xC]; };

struct Obj_8031B198 : Base_8031B198 {
    virtual ~Obj_8031B198();
};

struct G_8031B198 { u32 p; u32 rest[3]; };

extern "C" {
extern RecoveredGlobal_8031B170_lbl_804E8880 lbl_804E8880;
extern const f32 lbl_805DF38C;
void TObjEneMe3SinowZoa__sub_8031B170(s32 arg0, f32 farg0);
M2C_UNK TLobby__sub_8001FE7C(u32, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(u32);
extern G_8031B198 lbl_80542FDC;
extern u32 TObjEneMe3SinowZoa__data_805D6AD8;
extern Obj_8031B198 *TObjEneMe3SinowZoa__data_805D6AE0;
void TObjEneMe3SinowZoa__sub_8031B198(void);
}

extern "C" {

typedef struct RecoveredGlobal_8031B170_lbl_804E8880 RecoveredGlobal_8031B170_lbl_804E8880;
typedef char RecoveredGlobal_8031B170_lbl_804E8880_size[((sizeof(RecoveredGlobal_8031B170_lbl_804E8880)) == 0xD0) ? (1) : (-1)];
void TObjEneMe3SinowZoa__sub_8031B170(s32 arg0, f32 farg0) {
  u8 *new_var;
  f32 var_f1;
  var_f1 = farg0;
  if (var_f1 < lbl_805DF38C)
  {
    var_f1 = lbl_805DF38C;
  }
  new_var = (u8 *) (&lbl_804E8880.value);
  new_var = new_var + (arg0 * 0x10);
  *((f32 *) (((s8 *) new_var) + 8)) = var_f1;
}
void TObjEneMe3SinowZoa__sub_8031B198(void) {
    if (TObjEneMe3SinowZoa__data_805D6AE0 != NULL) {
        delete TObjEneMe3SinowZoa__data_805D6AE0;
        TObjEneMe3SinowZoa__data_805D6AE0 = NULL;
    }
    if (lbl_80542FDC.p != 0) {
        free__11TOBoss4RockFUi(lbl_80542FDC.p);
        lbl_80542FDC.p = 0;
    }
    if (TObjEneMe3SinowZoa__data_805D6AD8 != 0) {
        TLobby__sub_8001FE7C(TObjEneMe3SinowZoa__data_805D6AD8, 1);
        TObjEneMe3SinowZoa__data_805D6AD8 = 0;
    }
}

}
