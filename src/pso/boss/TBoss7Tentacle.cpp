#include "pso/TBoss7Tentacle.h"

TBoss7Tentacle::~TBoss7Tentacle() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TBoss7Tentacle__sub_802F0904(void);
void TBoss7Tentacle__sub_802F0918(void* p);
void TBoss7Tentacle__sub_802F09B4(void* p);
void TBoss7Tentacle__sub_802F09C8(void* a0);
void TBoss7Tentacle__sub_802F09EC(void* p);
int TBoss7Tentacle__sub_802F09FC(void);
int TBoss7Tentacle__sub_802F0A14(void);
int TBoss7Tentacle__sub_802F0A2C(void);
int TBoss7Tentacle__sub_802F0A44(void);
void TBoss7Tentacle__sub_802F0AD0(void* a0);
int TBoss7Tentacle__sub_802F0AF0(void);
int TBoss7Tentacle__sub_802F0B08(void);
int TBoss7Tentacle__sub_802F0B58(void);
void TBoss7Tentacle__sub_802F0B70(void* p);
void TBoss7Tentacle__sub_802F0B80(void* p);
void TObjPlayer__sub_802F0D2C(void);
void reset_state__14TBoss7TentacleFPv(void* a0);
void setup_state__14TBoss7TentacleFPv(void* a0);
void switch_state__14TBoss7TentacleFPv(void *arg0);
int TBoss7Tentacle__sub_802F0A5C(void);

void switch_state__14TBoss7TentacleFPv(void *arg0) {
    s32 state = M2C_FIELD(arg0, s32 *, 0x34);
    if (state != (s32) M2C_FIELD(arg0, s32 *, 0x30)) {
        switch (state) {
        case 0:
            TBoss7Tentacle__sub_802F09EC((void*)(arg0));
            break;
        case 1:
            TBoss7Tentacle__sub_802F09C8((void*)(arg0));
            break;
        case 4:
            TBoss7Tentacle__sub_802F09B4((void*)(arg0));
            break;
        case 2:
            setup_state__14TBoss7TentacleFPv((void*)(arg0));
            break;
        case 3:
            reset_state__14TBoss7TentacleFPv((void*)(arg0));
            break;
        case 5:
            TBoss7Tentacle__sub_802F0918((void*)(arg0));
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
    }
}

int TBoss7Tentacle__sub_802F0904(void) { return 0; }

void TBoss7Tentacle__sub_802F0918(void* p) { *(s32*)((char*)p + 0x13c) = 0; *(s32*)((char*)p + 0x140) = 16384; }

    extern const float TBoss7Tentacle__data_805DEC00;
    extern const float TBoss7Tentacle__data_805DEC04;
    extern const float lbl_805DEC48;
void reset_state__14TBoss7TentacleFPv(void* a0) { *(int*)((char*)a0 + 0x13c) = 0; *(int*)((char*)a0 + 0x140) = 0; *(int*)((char*)a0 + 0x38) = 0; TBoss7Tentacle__sub_802F0A5C(); *(float*)((char*)a0 + 0x158) = lbl_805DEC48; *(int*)((char*)a0 + 0x164) = 0; *(float*)((char*)a0 + 0x15c) = TBoss7Tentacle__data_805DEC04; *(float*)((char*)a0 + 0x160) = TBoss7Tentacle__data_805DEC00; }

    extern int TBoss7Tentacle__data_8047407C[];
void setup_state__14TBoss7TentacleFPv(void* a0) { *(int*)((char*)a0 + 0x13c) = TBoss7Tentacle__data_8047407C[*(int*)((char*)a0 + 0x4c)]; *(int*)((char*)a0 + 0x140) = 16384; *(int*)((char*)a0 + 0x38) = 0; }

void TBoss7Tentacle__sub_802F09B4(void* p) { *(s32*)((char*)p + 0x13c) = 0; *(s32*)((char*)p + 0x140) = 16384; }

    extern int TBoss7Tentacle__data_8047407C[];
void TBoss7Tentacle__sub_802F09C8(void* a0) { *(int*)((char*)a0 + 0x13c) = TBoss7Tentacle__data_8047407C[*(int*)((char*)a0 + 0x4c)]; *(int*)((char*)a0 + 0x140) = 0; }

void TBoss7Tentacle__sub_802F09EC(void* p) { *(s32*)((char*)p + 0x140) = 0; *(s32*)((char*)p + 0x13c) = 0; }

int TBoss7Tentacle__sub_802F09FC(void) { return 0; }
int TBoss7Tentacle__sub_802F0A14(void) { return 0; }
int TBoss7Tentacle__sub_802F0A2C(void) { return 0; }
int TBoss7Tentacle__sub_802F0A44(void) { return 0; }

    extern const float lbl_805DEC5C;
void TBoss7Tentacle__sub_802F0AD0(void* a0) { *(float*)((char*)a0 + 0x138) = lbl_805DEC5C; *(int*)((char*)a0 + 0x144) = 3038; *(int*)((char*)a0 + 0x140) = 0; *(int*)((char*)a0 + 0x34) = 0; }

int TBoss7Tentacle__sub_802F0AF0(void) { return 0; }
int TBoss7Tentacle__sub_802F0B08(void) { return 0; }
int TBoss7Tentacle__sub_802F0B58(void) { return 0; }

void TBoss7Tentacle__sub_802F0B70(void* p) { *(u32*)((char*)p + 0x3c) |= 0x2; }
void TBoss7Tentacle__sub_802F0B80(void* p) { *(u32*)((char*)p + 0x3c) &= 0xfffffffd; }

void TObjPlayer__sub_802F0D2C(void) {  }

}
