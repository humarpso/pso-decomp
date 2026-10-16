#include "types.h"
#include "pso/item/TUnk_804A64E8.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemWeapon__ct(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char lbl_804A64E8[];
    extern const float lbl_805DAFB8;
void*TUnk_804A64E8::init_position_state() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A64E8; set_status_flags__10TObjPlayerFPvUi(this, (void*)2); *(int *)&(*(s32 *)((u8 *)this + 0x204)) = 0; *(float*)((char*)this + 0x200) = lbl_805DAFB8; *(float *)&(*(s32 *)((u8 *)this + 0x1FC)) = lbl_805DAFB8; *(float*)((char*)this + 0x1f8) = lbl_805DAFB8; return this; }

}
