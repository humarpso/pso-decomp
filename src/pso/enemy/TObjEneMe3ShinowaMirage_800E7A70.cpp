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
struct VB_800E7A98 { u8 pad[0xC]; };

struct VO_800E7A98 : VB_800E7A98 { virtual ~VO_800E7A98(); };

extern "C" {
extern RecoveredGlobal_8031B170_lbl_804E8880 lbl_80495C6C;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5C4;
void TObjEneMe3ShinowaMirage__sub_800E7A70(s32 arg0, f32 farg0);
M2C_UNK TLobby__sub_8001FE7C(void *, s32);
M2C_UNK __dt__11TBoss4Type3FPvs(void *, s32);
M2C_UNK free__11TOBoss4RockFUi(void *);
extern void *lbl_80500FEC[];
extern void *TObjEneMe3ShinowaMirage__data_805D5298;
extern VO_800E7A98 *TObjEneMe3ShinowaMirage__data_805D52A0;
extern void *TObjEneMe3ShinowaMirage__data_805D52A4;
extern void *TObjEneMe3ShinowaMirage__data_805D52A8;
extern void *TObjEneMe3ShinowaMirage__data_805D52AC;
void TObjEneMe3ShinowaMirage__sub_800E7A98(void);
}

extern "C" {

int TObjEneMe3ShinowaMirage__sub_800E7B74(void* p);
int create__21TObjEneMe3ShinowaRealFPv(void*);

typedef struct RecoveredGlobal_8031B170_lbl_804E8880 RecoveredGlobal_8031B170_lbl_804E8880;
typedef char RecoveredGlobal_8031B170_lbl_804E8880_size[((sizeof(RecoveredGlobal_8031B170_lbl_804E8880)) == 0xD0) ? (1) : (-1)];
void TObjEneMe3ShinowaMirage__sub_800E7A70(s32 arg0, f32 farg0) {
  u8 *new_var;
  f32 var_f1;
  var_f1 = farg0;
  if (var_f1 < TObjEneMe3ShinowaMirage__data_805DA5C4)
  {
    var_f1 = TObjEneMe3ShinowaMirage__data_805DA5C4;
  }
  new_var = (u8 *) (&lbl_80495C6C.value);
  new_var = new_var + (arg0 * 0x10);
  *((f32 *) (((s8 *) new_var) + 8)) = var_f1;
}

void TObjEneMe3ShinowaMirage__sub_800E7A98(void) {
    if (TObjEneMe3ShinowaMirage__data_805D52A8 != 0) {
        __dt__11TBoss4Type3FPvs(TObjEneMe3ShinowaMirage__data_805D52A8, 1);
        TObjEneMe3ShinowaMirage__data_805D52A8 = 0;
    }
    if (TObjEneMe3ShinowaMirage__data_805D52A4 != 0) {
        __dt__11TBoss4Type3FPvs(TObjEneMe3ShinowaMirage__data_805D52A4, 1);
        TObjEneMe3ShinowaMirage__data_805D52A4 = 0;
    }
    if (TObjEneMe3ShinowaMirage__data_805D52AC != 0) {
        __dt__11TBoss4Type3FPvs(TObjEneMe3ShinowaMirage__data_805D52AC, 1);
        TObjEneMe3ShinowaMirage__data_805D52AC = 0;
    }
    if (TObjEneMe3ShinowaMirage__data_805D52A0 != 0) {
        delete TObjEneMe3ShinowaMirage__data_805D52A0;
        TObjEneMe3ShinowaMirage__data_805D52A0 = 0;
    }
    if (lbl_80500FEC[0] != 0) {
        free__11TOBoss4RockFUi(lbl_80500FEC[0]);
        lbl_80500FEC[0] = 0;
    }
    if (TObjEneMe3ShinowaMirage__data_805D5298 != 0) {
        TLobby__sub_8001FE7C(TObjEneMe3ShinowaMirage__data_805D5298, 1);
        TObjEneMe3ShinowaMirage__data_805D5298 = 0;
    }
}

int TObjEneMe3ShinowaMirage__sub_800E7B74(void* p) { return create__21TObjEneMe3ShinowaRealFPv(p); }

}
