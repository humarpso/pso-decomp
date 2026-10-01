#include "pso/TAdFloorLoadGC.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__14TAdFloorLoadGCFv(void *arg0, void *arg1, void *arg2);
void render__14TAdFloorLoadGCFv(void);
void run_task__14TAdFloorLoadGCFv(void);
void *TAdFloorLoadCamGC__ct(void *, void *, void *);
void *TAdFloorLoadPrtGC__ct(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

void render__14TAdFloorLoadGCFv(void) {  }
void run_task__14TAdFloorLoadGCFv(void) {  }

extern M2C_UNK __vt__14TAdFloorLoadGC[];
extern void *lbl_805D4328;

TAdFloorLoadGC::~TAdFloorLoadGC() {}
void *__ct__14TAdFloorLoadGCFv(void *arg0, void *arg1, void *arg2) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TAdFloorLoadGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4328;
    o = __nw__7TObjectFUl(0x4C);
    if (o != NULL) {
        TAdFloorLoadCamGC__ct(o, arg0, arg2);
    }
    o2 = __nw__7TObjectFUl(0x3A0);
    if (o2 != NULL) {
        TAdFloorLoadPrtGC__ct(o2, arg0);
    }
    return arg0;
}

}
