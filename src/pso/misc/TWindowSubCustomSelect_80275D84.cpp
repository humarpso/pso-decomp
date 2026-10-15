#include "types.h"
#include "pso/misc/TWindowSubCustomSelect.h"

extern "C" {

int fn_80275D90(void* p);
int is_selected__21TWindowSubCustomEquipFv(void* p);
int TWindowSubCustomEquip__sub_80275DA8(void* p);

int TWindowSubCustomSelect::is_active() { return *(u8*)((char*)this + 0x73) & 0x1; }
int fn_80275D90(void* p) { return *(u8*)((char*)p + 0x73) & 0x2; }

}
