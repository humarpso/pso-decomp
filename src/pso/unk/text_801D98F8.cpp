#include "types.h"
struct Obj_801D98F8 { u8 pad[0x48]; u8 arr[1]; };

extern "C" {
void set_technique_level_entry(Obj_801D98F8 *p, s16 i, u8 v);
}

extern "C" {

void set_technique_level_entry(Obj_801D98F8 *p, s16 i, u8 v) {
    p->arr[i] = v;
}

}
