#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/item/TItemData.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int initialize_mag_item_data(void*);
void fn_801058E8(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);

void TWindowSubStatusDisp::clear_fields() { *(s16*)((char*)this + 0xa) = 0; *(s16 *)&this->m_prev = 0; *(s16 *)&this->m_id = 0; *(s16 *)&this->m_flags = 0; *(s16*)((char*)this + 0x2) = 0; *(s16 *)&this->m_name = 0; *(s16 *)&this->m_down = 0; *(s16*)((char*)this + 0x12) = 0; *(s16 *)&this->m_up = 0; *(s16*)((char*)this + 0xe) = 0; *(s16 *)&this->m_next = 0; }

}
