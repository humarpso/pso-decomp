#ifndef PSO_CLASS_PACKAGE
#include "pso/TObjOnlineEndingHexMove.h"

void TObjOnlineEndingHexMove::run_task() {}

TObjOnlineEndingHexMove::~TObjOnlineEndingHexMove() {}
#else
#if PSO_CLASS_PACKAGE == 0x802E61F4
#include "types.h"

extern "C" {

void copy_move_params__23TObjOnlineEndingHexMoveFPvPv(void* p, void* q);

void copy_move_params__23TObjOnlineEndingHexMoveFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); }

}
#endif
#endif
