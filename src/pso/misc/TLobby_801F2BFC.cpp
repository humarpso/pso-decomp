#include "types.h"

extern "C" {

int TLobby__sub_801F2C1C(int a0);

extern int lbl_80512240[];
extern int lbl_805D5E8C;
void TLobby__sub_801F2BFC(int a0)
{
  int new_var;
  new_var = (lbl_805D5E8C = (0, lbl_805D5E8C));
  lbl_805D5E8C = lbl_805D5E8C + 0x1;
  lbl_80512240[new_var] = a0;
}

    extern int* lbl_805D5E74;
    extern int lbl_805D5E70;
int TLobby__sub_801F2C1C(int a0) {  return (lbl_805D5E70 + lbl_805D5E74[(unsigned short)(a0)]); }

}
