#include "types.h"

#pragma scheduling off

struct Word12 { int w; u8 _[8]; };
struct ObjArr254 { u8 _pad[0x254]; Word12 arr[1]; };
struct ObjArrFC  { u8 _pad[0xfc];  u16 arr[1];     };

extern "C" {

int obj_getArrWord_254(ObjArr254* p, int i) {
    return p->arr[i].w;
}

void obj_setArrS16_FC(ObjArrFC* p, int i, s16 v) {
    p->arr[i] = v;
}

u16 obj_getArrU16_FC(ObjArrFC* p, int i) {
    return p->arr[i];
}

#pragma scheduling on
void obj_clearArrS16_FC(ObjArrFC* p, int i) {
    p->arr[i] = 0xFFFF;
}
#pragma scheduling off

u8 obj_isState2_324(u8* p) {
    return *(s16*)(p + 0x324) == 2;
}

s16 obj_getS16_32E(u8* p) {
    return *(s16*)(p + 0x32e);
}

int obj_getPtr2B0_20(u8* p) {
    return *(int*)(*(u8**)(p + 0x2b0) + 0x20);
}

int obj_getPtr2B0_1C(u8* p) {
    return *(int*)(*(u8**)(p + 0x2b0) + 0x1c);
}

s16 obj_getS16_2BA(u8* p) {
    return *(s16*)(p + 0x2ba);
}

s16 obj_getS16_32C(u8* p) {
    return *(s16*)(p + 0x32c);
}

u8 obj_testFlag_2E4(u8* p, u32 mask) {
    return (*(u32*)(p + 0x2e4) & mask) != 0;
}

s16 obj_getS16_118(u8* p) {
    return *(s16*)(p + 0x118);
}

s16 obj_getS16_116(u8* p) {
    return *(s16*)(p + 0x116);
}

u8 obj_isState3_324(u8* p) {
    return *(s16*)(p + 0x324) == 3;
}

void obj_copyVec2_0(u8* d, u8* s) {
    *(int*)(d + 0) = *(int*)(s + 0);
    *(f32*)(d + 4) = *(f32*)(s + 4);
}

}
