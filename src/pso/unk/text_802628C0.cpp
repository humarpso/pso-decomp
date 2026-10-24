#include "pso/ui/ItemTextureConstants.h"
#include "types.h"
#include "pso/misc/TWindowLoadItemTexture.h"
#include "pso/misc/TWindowSubStatusDisp_8025B050.h"
#pragma push
#pragma opt_common_subs off

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
    *(f32 *)(sprite + 0x8) = item_texture_half_scale * window->m_38 - item_texture_half_size - item_texture_horizontal_inset;
    *(f32 *)(sprite + 0xC) = item_texture_half_scale * *(f32 *)window->unk_3C - item_texture_half_size - item_texture_vertical_inset;
    *(f32 *)(sprite + 0x10) = item_texture_size;
    *(f32 *)(sprite + 0x14) = item_texture_size;
    set_sprite_uv_bounds((void *)sprite, item_texture_uv_origin, item_texture_uv_origin, item_texture_full_scale, item_texture_full_scale);
    return window;
}
#pragma pop
}

extern "C" {
__declspec(section ".sdata2") const f32 item_texture_half_scale = 0.5f;
__declspec(section ".sdata2") const f32 item_texture_half_size = 32.0f;
__declspec(section ".sdata2") const f32 item_texture_horizontal_inset = 4.0f;
__declspec(section ".sdata2") const f32 item_texture_vertical_inset = 10.0f;
__declspec(section ".sdata2") const f32 item_texture_size = 64.0f;
__declspec(section ".sdata2") const f32 item_texture_uv_origin = 0.0f;
__declspec(section ".sdata2") const f32 item_texture_full_scale = 1.0f;
}

#pragma pop
