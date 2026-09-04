#include "types.h"

extern "C" {

void TLobby__sub_801E6F78(int a0);
void create_chat_sensor_capture__6TLobbyFv(void);
int create_instance__19TOChatSensorCaptureFPv(void*);

    extern int tl_01;
void create_chat_sensor_capture__6TLobbyFv(void) { create_instance__19TOChatSensorCaptureFPv((void*)(tl_01)); }

    extern int TLobby__data_80512220[];
    extern int TLobby__data_805D5EA4;
void TLobby__sub_801E6F78(int a0) { int old = TLobby__data_805D5EA4; TLobby__data_805D5EA4 = old + 1; TLobby__data_80512220[old] = a0; }

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
