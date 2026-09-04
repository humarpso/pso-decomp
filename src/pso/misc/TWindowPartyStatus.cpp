#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void draw__18TWindowPartyStatusFPv(void* p);
int update_status_entry__20TWindowSubStatusDispFi(void*);
int fn_8026F8CC(void*);

void draw__18TWindowPartyStatusFPv(void* p) { fn_8026F8CC(p); update_status_entry__20TWindowSubStatusDispFi(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8030C20C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__18TWindowPartyStatusFv(s32 arg0);
M2C_UNK TWindowComCard__sub_8026F9F4(void *, int);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
s32 TWindowSubComCard__sub_8026CBB8(int);
M2C_UNK TWindowSubStatusDisp__sub_80257C28(void *, void *);
M2C_UNK draw__18TWindowPartyStatusFPv(void *);
M2C_UNK fn_8026FDC0(void *);
M2C_UNK fn_80270014();
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);
M2C_UNK update_status_help_item(void *);

void run_task__18TWindowPartyStatusFv(s32 arg0) {
    fn_80270014();
    draw__18TWindowPartyStatusFPv((void *) (arg0));
    update_status_help_item((void *) (arg0));
    TWindowComCard__sub_8026F9F4((void *) (arg0), (int) (TWindowSubComCard__sub_8026CBB8((int) (0xAC))));
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    update_fade__17TWindowSubComCardFPv((void *) (arg0));
    TWindowSubStatusDisp__sub_80257C28((void *) (arg0), (void *) (arg0 + 0x24));
    fn_8026FDC0((void *) (arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030C280
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TWindowPartyStatusFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__19TWindowSimpleStatusFv(void *, int);

extern M2C_UNK __vt__18TWindowPartyStatus[];

void *__dt__18TWindowPartyStatusFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TWindowPartyStatus;
        __dt__19TWindowSimpleStatusFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
