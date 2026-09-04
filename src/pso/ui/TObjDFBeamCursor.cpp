#include "pso/TObjDFBeamCursor.h"

void TObjDFBeamCursor::run_task() {}

TObjDFBeamCursor::~TObjDFBeamCursor() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjDFBeamCursor__ct(void *arg0, void *arg1, void *arg2);
void * create__16TObjDFBeamCursorFPvPv(void *arg0, void *arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

extern M2C_UNK __vt__16TObjDFBeamCursor[];
extern void *lbl_805D27C0;

void *TObjDFBeamCursor__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjDFBeamCursor;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D27C0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 32;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 32), arg2);
    return arg0;
}

void * create__16TObjDFBeamCursorFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TObjDFBeamCursor__ct((void *)(o), (void *)(arg0), (void *)(arg1));
    }
    return o;
}

}
