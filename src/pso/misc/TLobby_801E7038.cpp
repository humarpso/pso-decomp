#include "types.h"

extern "C" {

extern int TLobby__data_80512220[];
extern int TLobby__data_805D5EA4;
void TLobby__sub_801E7038(int a0)
{
  unsigned long new_var3;
  int new_var;
  int *new_var2;
  new_var = TLobby__data_805D5EA4;
  new_var2 = &a0;
  new_var3 = *new_var2;
  TLobby__data_805D5EA4 = TLobby__data_805D5EA4 + 0x1;
  TLobby__data_80512220[new_var] = new_var3;
}

}
