#include "types.h"
#include "pso/unk/text_801E4F04.h"
#include "pso/unk/TUnk_804C57F0.h"

extern "C" {

s32 __ct__7TObjectFP7TObject();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *mem_alloc(u32 size);
void mem_free(void *);

extern s32 lbl_804C57F0[];

void *__dt__13TUnk_804C57F0Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804C57F0;
        mem_free(*(void **)((s8 *)arg0 + 0x20));
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        mem_free(*(void **)((s8 *)arg0 + 0x1C));
        *(s32 *)((s8 *)arg0 + 0x1C) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *quad_sprite_base_ct(void *arg0, void *arg_r4, void *arg2) {
    s32 temp_r31;

    __ct__7TObjectFP7TObject();
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804C57F0;
    ((TUnk_804C57F0 *)arg0)->m_28 = arg2;
    temp_r31 = *(s32 *)((s8 *)(((TUnk_804C57F0 *)arg0)->m_28) + 0xC);
    *(s32 *)((s8 *)arg0 + 0x1C) = (s32)mem_alloc(temp_r31 * 0x2C);
    ((TUnk_804C57F0 *)arg0)->m_20 = (s32)mem_alloc(temp_r31 * 4);
    ((TUnk_804C57F0 *)arg0)->quad_sprite_reset_entries();
    return arg0;
}

}
