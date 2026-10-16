#include "types.h"
#include "pso/item/TUnk_804A3928.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);

    extern unsigned char lbl_804A3928[];
    extern const float lbl_805DADE8;
void*TUnk_804A3928::init_shot_params() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A3928; *(float*)((char*)this + 0x200) = lbl_805DADE8; *(float *)&(*(s32 *)((u8 *)this + 0x1FC)) = lbl_805DADE8; *(float*)((char*)this + 0x1f8) = lbl_805DADE8; return this; }

}
