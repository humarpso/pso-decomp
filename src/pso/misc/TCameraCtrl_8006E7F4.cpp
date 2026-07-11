#include "types.h"

extern "C" {

void TCameraCtrl__sub_8006E7F4(void* p, s32 v);
s32 TCameraCtrl__sub_8006E7FC(void* p);
void TCameraCtrl__sub_8006E804(void* a0);

void TCameraCtrl__sub_8006E7F4(void* p, s32 v) { *(s32*)((char*)p + 0x100) = v; }
s32 TCameraCtrl__sub_8006E7FC(void* p) { return *(s32*)((char*)p + 0x10c); }

    extern const float TCameraCtrl__data_805D905C;
void TCameraCtrl__sub_8006E804(void* a0) { *(int*)((char*)a0 + 0x18) = 0; *(float*)((char*)a0 + 0x0) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x4) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x8) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0xc) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x10) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x14) = TCameraCtrl__data_805D905C; }

}
