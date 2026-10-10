#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOWreckAncientBrakable__ct(void *arg0);
void *__dt__22TOWreckAncientBrakableFv(void *arg0, s16 arg1);
void TOWreckAncient__ct(void *);
void __dl__7TObjectFPv(void *);
void __dt__14TOWreckAncientFv(void *, int);

extern M2C_UNK __vt__22TOWreckAncientBrakable[];

void *__dt__22TOWreckAncientBrakableFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TOWreckAncientBrakable;
        __dt__14TOWreckAncientFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__22TOWreckAncientBrakable[];
extern void *TOWreckAncientBrakable__name;

void *TOWreckAncientBrakable__ct(void *arg0) {
    TOWreckAncient__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TOWreckAncientBrakable;
    M2C_FIELD(arg0, void **, 0x0) = TOWreckAncientBrakable__name;
    M2C_FIELD(arg0, u32 *, 0xB4) = 0;
    M2C_FIELD(arg0, u32 *, 0xB8) = -1;
    return arg0;
}

}

extern "C" {
extern char lbl_80443528[];
void *TOWreckAncientBrakable__name = lbl_80443528;
}
