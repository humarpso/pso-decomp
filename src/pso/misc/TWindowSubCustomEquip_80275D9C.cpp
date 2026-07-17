#include "types.h"

extern "C" {

int is_active__22TWindowSubCustomSelectFPv(void* p);
int fn_80275D90(void* p);
int is_selected__21TWindowSubCustomEquipFPv(void* p);
int TWindowSubCustomEquip__sub_80275DA8(void* p);

int is_selected__21TWindowSubCustomEquipFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowSubCustomEquip__sub_80275DA8(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
