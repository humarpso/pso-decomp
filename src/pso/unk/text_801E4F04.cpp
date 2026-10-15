#include "types.h"

extern "C" {

void *destroy_quad_sprite_base(void *arg0, s16 arg1);
void *quad_sprite_base_ct(void *arg0, void *arg_r4, void *arg2);
s32 __ct__7TObjectFP7TObject();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
s32 quad_sprite_reset_entries(void *);
void free__11TOBoss4RockFUi(void *);

extern s32 lbl_804C57F0[];

void *destroy_quad_sprite_base(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804C57F0;
        free__11TOBoss4RockFUi(*(void **)((s8 *)arg0 + 0x20));
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        free__11TOBoss4RockFUi(*(void **)((s8 *)arg0 + 0x1C));
        *(s32 *)((s8 *)arg0 + 0x1C) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804C57F0[];

void *quad_sprite_base_ct(void *arg0, void *arg_r4, void *arg2) {
    s32 temp_r31;

    __ct__7TObjectFP7TObject();
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804C57F0;
    *(void **)((s8 *)arg0 + 0x28) = arg2;
    temp_r31 = *(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0x28)) + 0xC);
    *(s32 *)((s8 *)arg0 + 0x1C) = alloc_buffer__11TOBoss4RockFPv(temp_r31 * 0x2C);
    *(s32 *)((s8 *)arg0 + 0x20) = alloc_buffer__11TOBoss4RockFPv(temp_r31 * 4);
    quad_sprite_reset_entries(arg0);
    return arg0;
}

}
