#include "pso/TChCrTagOccHeader.h"

TChCrTagOccHeader::~TChCrTagOccHeader() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Hdr_802A2C30 {
    u8 pad[0x20];
    s32 f20;
};

extern "C" {
s32 get_selected_index__15TChCrCharSelectFv();
s32 get_selected_char__15TChCrCharSelectFv();
s32 get_instance__15TChCrCharSelectFv();
s32 TChCrTagOccHeader__vt4(Hdr_802A2C30 *arg0);
}

extern "C" {

void run_task__17TChCrTagOccHeaderFv(u8 *arg0);
M2C_UNK TChCrTag__sub_802A1A00();
int fn_802A2A00(void*);
int render__17TChCrTagOccHeaderFv(void* p);

void run_task__17TChCrTagOccHeaderFv(u8 *arg0) {
    TChCrTag__sub_802A1A00();
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + 1);
}
s32 TChCrTagOccHeader__vt4(Hdr_802A2C30 *arg0) {
    switch (get_selected_index__15TChCrCharSelectFv()) {
    case 0:
        if (arg0->f20 < 3 && arg0->f20 == get_selected_char__15TChCrCharSelectFv()) {
            return 1;
        }
        break;
    default:
        if (arg0->f20 >= 3 && arg0->f20 - 3 == get_instance__15TChCrCharSelectFv()) {
            return 1;
        }
        break;
    }
    return 0;
}

}
