#include "types.h"

extern "C" {

int fn_8003F0E8(void* p);
s32 fn_8003F108(void* p);
void fn_8003F22C(void* p);
void fn_8003F2F4(void* p);
void fn_8003F33C(void* p);
void fn_8003F384(void* p);
int fn_80154B28(void*);

int fn_8003F0E8(void* p) { return fn_80154B28(p); }
s32 fn_8003F108(void* p) { return *(s32*)((char*)p + 0x3e0); }
int fn_8003F110(void) { return 0; }
int fn_8003F168(void) { return 0; }
int fn_8003F1AC(void) { return 0; }
int fn_8003F1F8(void) { return 0; }
void fn_8003F22C(void* p) { *(u8*)((char*)p + 0x0) = 23; *(u8*)((char*)p + 0x1) = 5; }
int fn_8003F240(void) { return 0; }
int fn_8003F274(void) { return 0; }
int fn_8003F2C0(void) { return 0; }
void fn_8003F2F4(void* p) { *(u8*)((char*)p + 0x0) = 21; *(u8*)((char*)p + 0x1) = 3; }
int fn_8003F308(void) { return 0; }
void fn_8003F33C(void* p) { *(u8*)((char*)p + 0x0) = 22; *(u8*)((char*)p + 0x1) = 3; }
int fn_8003F350(void) { return 0; }
void fn_8003F384(void* p) { *(u8*)((char*)p + 0x0) = 132; *(u8*)((char*)p + 0x1) = 4; }

}
