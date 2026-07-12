#include "types.h"

extern "C" {

void send_state__12TOChatSensorFPv(void* p);
int TLobby__send_and_handle_60(void*);
int TOChatSensor__sub_8015B274(void*);
void TOChatSensor__sub_8015B2B0(void* p);

void send_state__12TOChatSensorFPv(void* p) { TOChatSensor__sub_8015B274(p); TLobby__send_and_handle_60(p); }

}
