#include "types.h"

extern "C" {

void reset_slots__10TObjPlayerFPv(void* p);
int set_slot_type_state__10TObjPlayerFiiss(void*, void*, void*, void*);

void reset_slots__10TObjPlayerFPv(void* p) { *(short*)((char*)p + 0x6) = 0; { int i; for (i = 0; i < 10; i++) { set_slot_type_state__10TObjPlayerFiiss(p, (void*)i, (void*)65535, (void*)0); } } }

}
