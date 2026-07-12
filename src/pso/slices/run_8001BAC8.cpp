#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TBoss7Tentacle__sub_803D8A6C(void*, void*, void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjFish__sub_803DA798(void*);
int TObjFish__sub_803E46BC(void*);
int func_803e11e8__FUl(void*);
int func_803e11f0__Fv(void);
void render__11TAdRicoRingFv(void* p);

void render__11TAdRicoRingFv(void* p) { TObjPlayer__sub_803D9B2C(p); TObjFish__sub_803DA798(*(void**)((char*)p + 0x50)); TOHangerMachine01__sub_803D9C00((char*)p + 0x58); TBoss7Tentacle__sub_803D8A6C((void*)0, *(void**)((char*)p + 0x64), *(void**)((char*)p + 0x68), *(void**)((char*)p + 0x6c)); func_803e11e8__FUl((void*)1); TObjFish__sub_803E46BC(*(void**)((char*)p + 0x4c)); func_803e11e8__FUl((void*)2); TObjFish__sub_803E46BC(*(void**)((char*)p + 0x4c)); func_803e11f0__Fv(); TObjPlayer__sub_803D9B78(); }

void set_scale4__15TAdRicoRingCtrlFPvf(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x1C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x20) = farg0;
    M2C_FIELD(arg0, f32 *, 0x24) = farg0;
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
}

void update_position__11TAdRicoRingFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + M2C_FIELD(arg0, f32 *, 0x38));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
}

}
