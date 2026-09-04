#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss2Tentacle.h"

TBoss2Tentacle::~TBoss2Tentacle() {}
#else
#if PSO_CLASS_PACKAGE == 0x8003998C
#include "types.h"

extern "C" {

void TBoss2Tentacle__sub_8003998C(void);
void TBoss2Tentacle__sub_80039990(void);

void TBoss2Tentacle__sub_8003998C(void) {  }
void TBoss2Tentacle__sub_80039990(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80039CB4
#include "types.h"

extern "C" {

void TBoss2Tentacle__sub_80039CB4(void* p);

void TBoss2Tentacle__sub_80039CB4(void* p) { *(s32*)((char*)p + 0x11c) = 0; *(s32*)((char*)p + 0x120) = 16384; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80039CC8
#include "types.h"

extern "C" {

void reset__14TBoss2TentacleFPv(void* a0);
void init_motion_from_table__14TBoss2TentacleFPv(void* a0);
int TBoss2Tentacle__sub_80039DE0(void);

    extern const float TBoss2Tentacle__data_805D8530;
    extern const float TBoss2Tentacle__data_805D8534;
    extern const float lbl_805D8544;
void reset__14TBoss2TentacleFPv(void* a0) { *(int*)((char*)a0 + 0x11c) = 0; *(int*)((char*)a0 + 0x120) = 0; *(int*)((char*)a0 + 0x24) = 0; TBoss2Tentacle__sub_80039DE0(); *(float*)((char*)a0 + 0x138) = lbl_805D8544; *(int*)((char*)a0 + 0x14c) = 0; *(float*)((char*)a0 + 0x13c) = TBoss2Tentacle__data_805D8534; *(float*)((char*)a0 + 0x150) = TBoss2Tentacle__data_805D8530; }

    extern int TBoss2Tentacle__data_80435B78[];
void init_motion_from_table__14TBoss2TentacleFPv(void* a0) { *(int*)((char*)a0 + 0x11c) = TBoss2Tentacle__data_80435B78[*(int*)((char*)a0 + 0x2c)]; *(int*)((char*)a0 + 0x120) = 16384; *(int*)((char*)a0 + 0x24) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80039D50
#include "types.h"

extern "C" {

void TBoss2Tentacle__sub_80039D50(void* p);

void TBoss2Tentacle__sub_80039D50(void* p) { *(s32*)((char*)p + 0x11c) = 0; *(s32*)((char*)p + 0x120) = 16384; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80039D64
#include "types.h"

extern "C" {

void TBoss2Tentacle__sub_80039D64(void* a0);

    extern int TBoss2Tentacle__data_80435B78[];
void TBoss2Tentacle__sub_80039D64(void* a0) { *(int*)((char*)a0 + 0x11c) = TBoss2Tentacle__data_80435B78[*(int*)((char*)a0 + 0x2c)]; *(int*)((char*)a0 + 0x120) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80039D88
#include "types.h"

extern "C" {

void TBoss2Tentacle__sub_80039D88(void* p);
void TBoss2Tentacle__sub_80039DA4(void* p);
void TBoss2Tentacle__sub_80039DBC(void* p);
void TBoss2Tentacle__sub_80039DD4(void* p);
void TBoss2Tentacle__sub_80039D98(void* p);
void TBoss2Tentacle__sub_80039DB0(void* p);
void TBoss2Tentacle__sub_80039DC8(void* p);

void TBoss2Tentacle__sub_80039D88(void* p) { *(s32*)((char*)p + 0x120) = 0; *(s32*)((char*)p + 0x11c) = 0; }
void TBoss2Tentacle__sub_80039D98(void* p) { *(s32*)((char*)p + 0x20) = 5; }
void TBoss2Tentacle__sub_80039DA4(void* p) { *(s32*)((char*)p + 0x20) = 3; }
void TBoss2Tentacle__sub_80039DB0(void* p) { *(s32*)((char*)p + 0x20) = 2; }
void TBoss2Tentacle__sub_80039DBC(void* p) { *(s32*)((char*)p + 0x20) = 4; }
void TBoss2Tentacle__sub_80039DC8(void* p) { *(s32*)((char*)p + 0x20) = 1; }
void TBoss2Tentacle__sub_80039DD4(void* p) { *(s32*)((char*)p + 0x20) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80039E54
#include "types.h"

extern "C" {

void TBoss2Tentacle__sub_80039E54(void* a0);

    extern const float lbl_805D8558;
void TBoss2Tentacle__sub_80039E54(void* a0) { *(float*)((char*)a0 + 0x118) = lbl_805D8558; *(int*)((char*)a0 + 0x124) = 3038; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80039E68
#include "types.h"

extern "C" {

int TBoss2Tentacle__sub_80039E68(void* p);
int forward_80039DC8__14TBoss2TentacleFPv(void* p);
int TBoss2Tentacle__sub_80039D98(void*);
int TBoss2Tentacle__sub_80039DC8(void*);

int TBoss2Tentacle__sub_80039E68(void* p) { return TBoss2Tentacle__sub_80039D98(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80039ED8
#include "types.h"

extern "C" {

int TBoss2Tentacle__sub_80039E68(void* p);
int forward_80039DC8__14TBoss2TentacleFPv(void* p);
int TBoss2Tentacle__sub_80039D98(void*);
int TBoss2Tentacle__sub_80039DC8(void*);

int forward_80039DC8__14TBoss2TentacleFPv(void* p) { return TBoss2Tentacle__sub_80039DC8(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003A0A8
#include "types.h"

extern "C" {

void TBoss2Tentacle__sub_8003A0A8(void);

void TBoss2Tentacle__sub_8003A0A8(void) {  }

}
#endif
#endif
