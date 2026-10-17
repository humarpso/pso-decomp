#include "types.h"
typedef struct Obj_800A0884 {
    u8 pad0[0x37C];
    s32 count;
    s32 sel;
    u16 ids[16];
} Obj_800A0884;

extern "C" {
void clear_lappy_flag_set_param(u8 *arg0);
void fn_800A0FDC(u8 *arg0);
u8 *get_enemy_entity(u16 arg0);
s32 fn_800A0884(Obj_800A0884 *o);
s32 fn_800A0884(Obj_800A0884 *o) {
    void *ents[16];
    s32 n;
    s32 i;
    s32 j;
    n = 0;
    for (i = 0; i < o->count; i++) {
        ents[i] = get_enemy_entity(o->ids[i]);
        if (ents[i] != NULL) {
            n++;
        }
    }
    if (n == 0) {
        return 0;
    }
    do {
        o->sel++;
        if (o->sel >= o->count) {
            o->sel = 0;
        }
    } while (ents[o->sel] == NULL);
    for (j = 0; j < o->count; j++) {
        if (ents[j] != NULL) {
            if (j == o->sel) {
                fn_800A0FDC((u8 *)ents[j]);
            } else {
                clear_lappy_flag_set_param((u8 *)ents[j]);
            }
        }
    }
    return 1;
}

}
