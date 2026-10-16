#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/item/TItemData.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int initialize_mag_item_data(void*);
void fn_801058E8(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);

void TWindowSubStatusDisp::clear_fields() { *(s16*)((char*)this + 0xa) = 0; *(s16*)((char*)this + 0x8) = 0; *(s16*)((char*)this + 0x6) = 0; *(s16*)((char*)this + 0x4) = 0; *(s16*)((char*)this + 0x2) = 0; *(s16*)((char*)this + 0x0) = 0; *(s16*)((char*)this + 0x14) = 0; *(s16*)((char*)this + 0x12) = 0; *(s16*)((char*)this + 0x10) = 0; *(s16*)((char*)this + 0xe) = 0; *(s16*)((char*)this + 0xc) = 0; }

}
