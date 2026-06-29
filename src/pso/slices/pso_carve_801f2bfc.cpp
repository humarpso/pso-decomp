#include "types.h"

extern "C" {

extern int lbl_80512240[];
extern int lbl_805D5E8C;
void fn_801F2BFC(int a0)
{
  int new_var;
  new_var = (lbl_805D5E8C = (0, lbl_805D5E8C));
  lbl_805D5E8C = lbl_805D5E8C + 0x1;
  lbl_80512240[new_var] = a0;
}

}
