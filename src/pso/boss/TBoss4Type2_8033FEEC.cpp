#include "types.h"
#include "pso/boss/TBoss6Demo15_TYPE2_WAIT.h"
#include "pso/boss/TBoss4Type2.h"

extern "C" {

void TObjFish__sub_8033FF64(void* p);

extern const f32 lbl_805DFB08;
extern const f32 lbl_805DFB0C;

void TBoss6Demo15_TYPE2_WAIT::advance_offset() {
    *(s32 *)&(*(void * *)((u8 *)this + 0x58)) = (s32) ((f32) *(s32 *)&(*(void * *)((u8 *)this + 0x58)) + lbl_805DFB08);
    *(s32 *)((s8 *)this + 0x5C) = (s32) ((f32) *(s32 *)((s8 *)this + 0x5C) + lbl_805DFB0C);
}

void TObjFish__sub_8033FF64(void* p) { *(s32*)((char*)p + 0x58) = 24576; *(s32*)((char*)p + 0x5c) = 0; }

}
