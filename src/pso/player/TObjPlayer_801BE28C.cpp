#include "types.h"

extern "C" {

s32 TCameraCtrl__sub_8006B368();
void TObjPlayer__sub_801BE2C0(void* p, s32 v);
s32 TObjPlayer__sub_801BE2C8(void* p);
int TObjPlayer__sub_801BE2D0(void* p);
int TObjPlayer__sub_801BE2DC(void* p);
int TObjPlayer__sub_801BE2E8(void* p);
int TObjPlayer__sub_801BE310(void* p);
int TObjPlayer__sub_801BE338(void* p);
int TObjPlayer__sub_801BE360(void* p);
int fn_8001BED8(void*, int);

int TObjPlayer__vt77(void) { return 0; }
u8 check_camera_mode__10TObjPlayerFv(void) {
    return (u8) (TCameraCtrl__sub_8006B368() == 1);
}
void TObjPlayer__sub_801BE2C0(void* p, s32 v) { *(s32*)((char*)p + 0x370) = v; }
s32 TObjPlayer__sub_801BE2C8(void* p) { return *(s32*)((char*)p + 0x370); }
int TObjPlayer__sub_801BE2D0(void* p) { return (*(u32*)((char*)p + 0x890) >> 3) & 0x1; }
int TObjPlayer__sub_801BE2DC(void* p) { return (*(u32*)((char*)p + 0x890) >> 4) & 0x1; }
int TObjPlayer__sub_801BE2E8(void* p) { return fn_8001BED8((char*)p + 0x41c, 32); }
int TObjPlayer__sub_801BE310(void* p) { return fn_8001BED8((char*)p + 0x41c, 4); }
int TObjPlayer__sub_801BE338(void* p) { return fn_8001BED8((char*)p + 0x41c, 2); }
int TObjPlayer__sub_801BE360(void* p) { return fn_8001BED8((char*)p + 0x41c, 8); }

}
