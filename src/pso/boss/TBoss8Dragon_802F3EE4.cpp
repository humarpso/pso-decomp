#include "types.h"

extern "C" {

void render_nodes_flagged__12TBoss8DragonFi(s32 arg0);
s32 render_nodes__7TObjectFv(s32, s32);

extern s32 lbl_805D5660;
extern s32 model_render_flags;

void render_nodes_flagged__12TBoss8DragonFi(s32 arg0) {
    s32 temp_r4;

    temp_r4 = model_render_flags;
    lbl_805D5660 = temp_r4;
    model_render_flags = temp_r4 | 0x400;
    render_nodes__7TObjectFv(arg0 + 0x3C4, temp_r4);
    model_render_flags = lbl_805D5660;
}

}
