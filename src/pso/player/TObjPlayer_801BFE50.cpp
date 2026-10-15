#include "types.h"

extern "C" {
extern const f32 TObjPlayer__data_805DC278;
void TObjPlayer__sub_801BFE88(u8 *arg0);
}

extern "C" {

void* init_pair__10TObjPlayerFPv(void* p);
s32 init_state__10TObjPlayerFi(s32 arg0);
void TObjPlayer__sub_801BFED4(void* p);
int clear_id__10TObjPlayerFv(void*);
s32 init_forward__10TObjPlayerFv();
s32 setup_state__10TObjPlayerFv();
int setup_state_helper__10TObjPlayerFv(void* p);

void* init_pair__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801BFE88((u8 *)(p)); TObjPlayer__sub_801BFE88((u8 *)((char*)p + 0xc)); return p; }

#include "types.h"

extern "C" {

void TObjPlayer__sub_801BFE88(u8 *arg0) {
    *(f32 *)((s8 *)arg0 + 8) = (f32) TObjPlayer__data_805DC278;
    *(f32 *)((s8 *)arg0 + 4) = (f32) TObjPlayer__data_805DC278;
    *(f32 *)((s8 *)arg0 + 0) = (f32) TObjPlayer__data_805DC278;
}

s32 init_state__10TObjPlayerFi(s32 arg0) {
    setup_state__10TObjPlayerFv();
    TObjPlayer__sub_801BFED4((void *) (arg0));
    return arg0;
}

}

}
