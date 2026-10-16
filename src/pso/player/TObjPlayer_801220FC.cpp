#include "types.h"
#include "pso/item/TUnk_804A0DB0.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);

    extern unsigned char lbl_804A0DB0[];
    extern const float lbl_805DACDC;
void*TUnk_804A0DB0::init_state_vector() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A0DB0; *(float*)((char*)this + 0x200) = lbl_805DACDC; *(float *)&(*(s32 *)((u8 *)this + 0x1FC)) = lbl_805DACDC; *(float*)((char*)this + 0x1f8) = lbl_805DACDC; return this; }

}
