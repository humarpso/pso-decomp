#include "types.h"
#include "pso/unk/text_801D79DC.h"
typedef struct Tbl_801D79DC {
    s32 v[3];
} Tbl_801D79DC;

extern "C" {
void set_palette_entry__20TWindowActionPaletteFlllll(void *, s32, s32, s32, u16);
u16 get_slot_type__20TWindowActionPaletteFlll(void *, s32, s32);
extern Tbl_801D79DC lbl_80447178;
void assign_photon_blast_palette_slot(u8 *arg0, s32 arg1) {
    Tbl_801D79DC t = lbl_80447178;
    s32 id;
    s32 i;
    for (i = 0; i < 3; i++) {
        id = t.v[i];
        if (get_slot_type__20TWindowActionPaletteFlll(arg0 + 0x24, 1, id) == 0) {
            set_palette_entry__20TWindowActionPaletteFlllll(arg0 + 0x24, 1, id, 5, arg1);
            return;
        }
    }
}

}
