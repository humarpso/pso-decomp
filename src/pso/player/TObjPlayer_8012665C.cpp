#include "types.h"
#include "pso/item/TUnk_804A2A58.h"

extern "C" {

void update_weapon__13TUnk_804A2A58Fv(void *arg0);

void TUnk_804A2A58::update_weapon() {
    s32 temp_r4;

    temp_r4 = *(s32 *)((s8 *)this + 0x1FC);
    if (temp_r4 > 0) {
        *(s32 *)((s8 *)this + 0x1FC) = (s32) (temp_r4 - 0x888);
        *(s32 *)((s8 *)this + 0x1F8) = (s32) (*(s32 *)((s8 *)this + 0x1F8) - 0x888);
    }
}

}
