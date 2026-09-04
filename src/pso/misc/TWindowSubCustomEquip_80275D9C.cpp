#include "types.h"

extern "C" {

int TWindowSubCustomEquip__sub_80275DA8(void* p);
int TWindowSubCustomEquip__sub_80275DB4(void);
int is_selected__21TWindowSubCustomEquipFPv(void* p);
int fn_80275D90(void* p);
int is_active__22TWindowSubCustomSelectFPv(void* p);

int is_selected__21TWindowSubCustomEquipFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowSubCustomEquip__sub_80275DA8(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

int TWindowSubCustomEquip__sub_80275DB4(void) { return 0; }

}
