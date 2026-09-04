#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss7Tentacle.h"

TBoss7Tentacle::~TBoss7Tentacle() {}
#else
#if PSO_CLASS_PACKAGE == 0x802EF8F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 advance_toward_limit__14TBoss7TentacleFPvf(void *arg0, f32 farg0);

extern M2C_UNK TBoss7Tentacle__data_804740C8;
extern const f32 TBoss7Tentacle__data_805DEC00;
extern const f32 TBoss7Tentacle__data_805DEC04;

s32 advance_toward_limit__14TBoss7TentacleFPvf(void *arg0, f32 farg0) {
    f32 temp_f4;

    temp_f4 = M2C_FIELD(arg0, f32 *, 0x74);
    if (temp_f4 < ((f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), u32 *, 4) - TBoss7Tentacle__data_805DEC00)) {
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) (temp_f4 + farg0);
        return 0;
    }
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) TBoss7Tentacle__data_805DEC04;
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802EF954
#include "types.h"

extern "C" {

void TBoss7Tentacle__sub_802EF954(void* p);
int advance_toward_limit__14TBoss7TentacleFPvf(void*, f32);
int disallow_rendering__7TObjectFv(void*);
int queue_destruction__7TObjectFv(void*);

extern const f32 TBoss7Tentacle__data_805DEC00;

void TBoss7Tentacle__sub_802EF954(void* p) { if (advance_toward_limit__14TBoss7TentacleFPvf(p, TBoss7Tentacle__data_805DEC00) != 0) { queue_destruction__7TObjectFv(p); disallow_rendering__7TObjectFv(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F0130
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void switch_state__14TBoss7TentacleFPv(void *arg0);
M2C_UNK TBoss7Tentacle__sub_802F0918(void *);
M2C_UNK TBoss7Tentacle__sub_802F09B4(void *);
M2C_UNK TBoss7Tentacle__sub_802F09EC(void *);
M2C_UNK reset_state__14TBoss7TentacleFPv(void *);
M2C_UNK setup_state__14TBoss7TentacleFPv(void *);
M2C_UNK TBoss7Tentacle__sub_802F09C8(void *);

void switch_state__14TBoss7TentacleFPv(void *arg0) {
    s32 state = M2C_FIELD(arg0, s32 *, 0x34);
    if (state != (s32) M2C_FIELD(arg0, s32 *, 0x30)) {
        switch (state) {
        case 0:
            TBoss7Tentacle__sub_802F09EC(arg0);
            break;
        case 1:
            TBoss7Tentacle__sub_802F09C8(arg0);
            break;
        case 4:
            TBoss7Tentacle__sub_802F09B4(arg0);
            break;
        case 2:
            setup_state__14TBoss7TentacleFPv(arg0);
            break;
        case 3:
            reset_state__14TBoss7TentacleFPv(arg0);
            break;
        case 5:
            TBoss7Tentacle__sub_802F0918(arg0);
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F0918
#include "types.h"

extern "C" {

void TBoss7Tentacle__sub_802F0918(void* p);

void TBoss7Tentacle__sub_802F0918(void* p) { *(s32*)((char*)p + 0x13c) = 0; *(s32*)((char*)p + 0x140) = 16384; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F092C
#include "types.h"

extern "C" {

void reset_state__14TBoss7TentacleFPv(void* a0);
void setup_state__14TBoss7TentacleFPv(void* a0);
int TBoss7Tentacle__sub_802F0A5C(void);

    extern const float TBoss7Tentacle__data_805DEC00;
    extern const float TBoss7Tentacle__data_805DEC04;
    extern const float lbl_805DEC48;
void reset_state__14TBoss7TentacleFPv(void* a0) { *(int*)((char*)a0 + 0x13c) = 0; *(int*)((char*)a0 + 0x140) = 0; *(int*)((char*)a0 + 0x38) = 0; TBoss7Tentacle__sub_802F0A5C(); *(float*)((char*)a0 + 0x158) = lbl_805DEC48; *(int*)((char*)a0 + 0x164) = 0; *(float*)((char*)a0 + 0x15c) = TBoss7Tentacle__data_805DEC04; *(float*)((char*)a0 + 0x160) = TBoss7Tentacle__data_805DEC00; }

    extern int TBoss7Tentacle__data_8047407C[];
void setup_state__14TBoss7TentacleFPv(void* a0) { *(int*)((char*)a0 + 0x13c) = TBoss7Tentacle__data_8047407C[*(int*)((char*)a0 + 0x4c)]; *(int*)((char*)a0 + 0x140) = 16384; *(int*)((char*)a0 + 0x38) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F09B4
#include "types.h"

extern "C" {

void TBoss7Tentacle__sub_802F09B4(void* p);

void TBoss7Tentacle__sub_802F09B4(void* p) { *(s32*)((char*)p + 0x13c) = 0; *(s32*)((char*)p + 0x140) = 16384; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F09C8
#include "types.h"

extern "C" {

void TBoss7Tentacle__sub_802F09C8(void* a0);

    extern int TBoss7Tentacle__data_8047407C[];
void TBoss7Tentacle__sub_802F09C8(void* a0) { *(int*)((char*)a0 + 0x13c) = TBoss7Tentacle__data_8047407C[*(int*)((char*)a0 + 0x4c)]; *(int*)((char*)a0 + 0x140) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F09EC
#include "types.h"

extern "C" {

void TBoss7Tentacle__sub_802F09EC(void* p);

void TBoss7Tentacle__sub_802F09EC(void* p) { *(s32*)((char*)p + 0x140) = 0; *(s32*)((char*)p + 0x13c) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F0AD0
#include "types.h"

extern "C" {

void TBoss7Tentacle__sub_802F0AD0(void* a0);

    extern const float lbl_805DEC5C;
void TBoss7Tentacle__sub_802F0AD0(void* a0) { *(float*)((char*)a0 + 0x138) = lbl_805DEC5C; *(int*)((char*)a0 + 0x144) = 3038; *(int*)((char*)a0 + 0x140) = 0; *(int*)((char*)a0 + 0x34) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F0B70
#include "types.h"

extern "C" {

void TBoss7Tentacle__sub_802F0B70(void* p);
void TBoss7Tentacle__sub_802F0B80(void* p);

void TBoss7Tentacle__sub_802F0B70(void* p) { *(u32*)((char*)p + 0x3c) |= 0x2; }
void TBoss7Tentacle__sub_802F0B80(void* p) { *(u32*)((char*)p + 0x3c) &= 0xfffffffd; }

}
#endif
#endif
