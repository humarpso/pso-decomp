#include "types.h"

extern "C" {

int get_indexed_offset__6TLobbyFi(int a0);

extern int TLobby__data_80512240[];
extern int TLobby__data_805D5E8C;
void push_op_arg__6TLobbyFi(int a0)
{
  int new_var;
  new_var = (TLobby__data_805D5E8C = (0, TLobby__data_805D5E8C));
  TLobby__data_805D5E8C = TLobby__data_805D5E8C + 0x1;
  TLobby__data_80512240[new_var] = a0;
}

    extern int* TLobby__data_805D5E74;
    extern int TLobby__data_805D5E70;
int get_indexed_offset__6TLobbyFi(int a0) {  return (TLobby__data_805D5E70 + TLobby__data_805D5E74[(unsigned short)(a0)]); }

}
