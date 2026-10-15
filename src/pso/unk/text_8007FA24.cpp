#include "types.h"

struct RecoveredGlobal_8007FA24_lbl_8048DF88
{
  s32 value;
  u8 remaining[0x8];
};

extern "C" {
s32 launch_switcher_dol(int);
s32 TLobby__sub_8014618C();
s32 init_modem_check_params__18TAdTrialModemChkGCFv();
extern RecoveredGlobal_8007FA24_lbl_8048DF88 lbl_8048DF88;
void TAdTrialModemChkGC__sub_8007FA24(s32 arg0);
}

extern "C" {

typedef struct RecoveredGlobal_8007FA24_lbl_8048DF88 RecoveredGlobal_8007FA24_lbl_8048DF88;
typedef char RecoveredGlobal_8007FA24_lbl_8048DF88_size[((sizeof(RecoveredGlobal_8007FA24_lbl_8048DF88)) == 0xC) ? (1) : (-1)];
void TAdTrialModemChkGC__sub_8007FA24(s32 arg0) {
  s32 temp_r31;
  s32 var_r31;
  var_r31 = 0;
  init_modem_check_params__18TAdTrialModemChkGCFv();
  if (TLobby__sub_8014618C() != 0)
  {
    var_r31 = 1;
  }
  temp_r31 = ~(0 - (arg0 == 0));
  temp_r31 = (var_r31 + 1) & temp_r31;
  if ((temp_r31 == 1) != 0)
  {
    init_modem_check_params__18TAdTrialModemChkGCFv();
  }
  launch_switcher_dol((int) (*((s32 *) (((s8 *) (((u8 *) (&lbl_8048DF88.value)) + (temp_r31 * 4))) + 0))));
}

}
