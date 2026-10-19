#include "types.h"
#include "pso/misc/TWindowLoadItemTexture.h"
#include "pso/misc/TWindowSubStatusDisp_8025B050.h"

extern "C" {
void *__nw__7TObjectFUl(int);

#pragma push
#pragma fp_contract on
TWindowLoadItemTexture *fn_802628C0(void *layout, void *table, void *id) {
    TWindowLoadItemTexture *window;
    s32 sprite;

    window = (TWindowLoadItemTexture *)__nw__7TObjectFUl(0x74);
    if (window != NULL) {
        window = (TWindowLoadItemTexture *)TWindowLoadItemTexture__ct(window, layout, table, id);
    }
    fn_80262C2C(window);
    sprite = window->get_array_entry(0);
    *(f32 *)(sprite + 0x8) = 0.5f * window->m_38 - 32.0f - 4.0f;
    *(f32 *)(sprite + 0xC) = 0.5f * *(f32 *)window->unk_3C - 32.0f - 10.0f;
    *(f32 *)(sprite + 0x10) = 64.0f;
    *(f32 *)(sprite + 0x14) = 64.0f;
    set_sprite_uv_bounds((void *)sprite, 0.0f, 0.0f, 1.0f, 1.0f);
    return window;
}
#pragma pop
}
