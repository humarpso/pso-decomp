#include "types.h"
#include "pso/misc/TLobby_80132ED0.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TWindowSubSymbolChat.h"

void*TWindowSubStatusDisp::get_message_10(s32 index) { return (void*)get_localized_text_entry(10, index); }
