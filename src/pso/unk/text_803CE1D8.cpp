#include "types.h"
struct RecoveredFields_803CE1D8_arg0
{
  u8 unknown_0[0xAC];
  u8 field_AC;
};

extern "C" {
s8 TLobby__sub_803CE1D8(u8 *arg0);
typedef struct RecoveredFields_803CE1D8_arg0 RecoveredFields_803CE1D8_arg0;
s8 TLobby__sub_803CE1D8(u8 *arg0) {
  s8 new_var;
  int new_var2;
  new_var2 = ((RecoveredFields_803CE1D8_arg0 *) arg0)->field_AC & 0xFFFFFFFFFFFFFFFFu;
  new_var = (s8) new_var2;
  return new_var;
}

}
