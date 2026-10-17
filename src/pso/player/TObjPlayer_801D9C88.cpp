#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int set_slot_type_state__10TObjPlayerFllss(void*, void*, void*, void*);

void TObjPlayer::reset_slots() { *(short *)&this->m_id = 0; { int i; for (i = 0; i < 10; i++) { set_slot_type_state__10TObjPlayerFllss(this, (void*)i, (void*)65535, (void*)0); } } }

}
