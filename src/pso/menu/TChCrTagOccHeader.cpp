#include "pso/TChCrTagOccHeader.h"

TChCrTagOccHeader::~TChCrTagOccHeader() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TChCrTagOccHeader__vt4(void);
void run_task__17TChCrTagOccHeaderFv(u8 *arg0);
M2C_UNK TChCrTag__sub_802A1A00();
int fn_802A2A00(void*);
int render__17TChCrTagOccHeaderFv(void* p);

void run_task__17TChCrTagOccHeaderFv(u8 *arg0) {
    TChCrTag__sub_802A1A00();
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + 1);
}

int TChCrTagOccHeader__vt4(void) { return 0; }

}
