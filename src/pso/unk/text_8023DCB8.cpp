#include "types.h"
struct Rec_8023DCB8 { u8 kind; u8 pad[3]; u32 w; };

struct Set_8023DCB8 { Rec_8023DCB8 *recs; u32 count; };

extern "C" {
void set_material_texture_slot(Set_8023DCB8 *set, s32 arg1);
}

extern "C" {

void set_material_texture_slot(Set_8023DCB8 *set, s32 arg1) {
    Rec_8023DCB8 *p;
    u32 i;
    if (set != NULL) {
        p = set->recs;
        for (i = 0; i < set->count; i++, p++) {
            if (p->kind == 8) {
                p->w = p->w & 0xFFFFE000;
                p->w = p->w | (arg1 & 0x1FFF);
            }
        }
    }
}

}
