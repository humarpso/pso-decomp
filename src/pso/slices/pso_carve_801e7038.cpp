#include "types.h"

extern "C" {

extern int lbl_80512220[];
extern int lbl_805D5EA4;
void fn_801E7038(int a0)
{
  unsigned long new_var3;
  int new_var;
  int *new_var2;
  new_var = lbl_805D5EA4;
  new_var2 = &a0;
  new_var3 = *new_var2;
  lbl_805D5EA4 = lbl_805D5EA4 + 0x1;
  lbl_80512220[new_var] = new_var3;
}

}
