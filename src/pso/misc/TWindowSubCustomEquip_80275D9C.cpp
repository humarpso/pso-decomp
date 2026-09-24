#include "types.h"

struct Obj_80275DB4 { u8 pad[0x60]; char f60; u8 pad2[0x6c - 0x61]; void *f6c; };

extern "C" {
void set_entry_state__20TWindowSubStatusDispFPvc(void *p, char c);
void TWindowSubCustomEquip__sub_80275DB4(Obj_80275DB4 *o);
}

extern "C" {

int TWindowSubCustomEquip__sub_80275DA8(void* p);
int is_selected__21TWindowSubCustomEquipFPv(void* p);
int fn_80275D90(void* p);
int is_active__22TWindowSubCustomSelectFPv(void* p);

int is_selected__21TWindowSubCustomEquipFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowSubCustomEquip__sub_80275DA8(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }
void TWindowSubCustomEquip__sub_80275DB4(Obj_80275DB4 *o) {
    o->f60 &= ~1;
    set_entry_state__20TWindowSubStatusDispFPvc(o->f6c, 1);
}

}
