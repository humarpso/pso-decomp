#include "types.h"

extern "C" {

void *TScene__sub_802A81B8(void *arg0, s16 arg1);
void draw_field_1c__6TSceneFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void set_indirect_tev__6TSceneFii(s32 ignored, s32 arg1);
s32 GXSetNumIndStages(s32);
s32 GXSetTevDirect(s32);
s32 set_ginja_post_texgen_count(s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 play_particle_at_active_slot__10TObjPlayerFiiiiii(u8, s32, s32, s32, s32, s32);

void set_indirect_tev__6TSceneFii(s32 ignored, s32 arg1) {
    if (arg1 != 0) {
        GXSetTevDirect(1);
    } else {
        GXSetTevDirect(0);
    }
    GXSetNumIndStages(0);
    set_ginja_post_texgen_count(0);
}

void draw_field_1c__6TSceneFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    play_particle_at_active_slot__10TObjPlayerFiiiiii(*(u8 *)((s8 *)arg0 + 0x1C), arg1, arg2, 0, arg3, 0);
}

extern s32 lbl_804DDF04[];

void *TScene__sub_802A81B8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804DDF04;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
