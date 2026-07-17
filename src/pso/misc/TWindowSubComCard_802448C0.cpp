#include "types.h"

extern "C" {

void save_position__17TWindowSubComCardFPv(void* p);
s32 TWindowCtrlMain__sub_8024CE24();
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 TWindowSubAreaMapDisp__sub_80246948();
s32 set_parent__7TObjectFP7TObject(s32, s32);

void save_position__17TWindowSubComCardFPv(void* p) { *(f32*)((char*)p + 0x40) = *(f32*)((char*)p + 0x30); *(f32*)((char*)p + 0x44) = *(f32*)((char*)p + 0x34); *(f32*)((char*)p + 0x48) = *(f32*)((char*)p + 0x38); *(f32*)((char*)p + 0x4c) = *(f32*)((char*)p + 0x3c); }

}
