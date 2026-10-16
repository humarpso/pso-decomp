#include "pso/TAdFloorLoadGC.h"
#include "pso/ui/TAdFloorLoadCamGC.h"

#include "types.h"

extern "C" {

void *__ct__14TAdFloorLoadGCFP7TObjectPv(void *arg0, void *arg1, void *arg2);
void *__ct__17TAdFloorLoadCamGCFP7TObjectPv(void *, void *, void *);
void *TAdFloorLoadPrtGC__ct(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

void TAdFloorLoadGC::render() {  }
void TAdFloorLoadGC::run_task() {  }

extern s32 __vt__14TAdFloorLoadGC[];
extern void *lbl_805D4328;

TAdFloorLoadGC::~TAdFloorLoadGC() {}
}
TAdFloorLoadGC::TAdFloorLoadGC(TObject *arg1, void *arg2) : TObject(arg1) {
    void *o;
    void *o2;
    *(void **)((s8 *)this + 0x0) = lbl_805D4328;
    o = new TAdFloorLoadCamGC(this, arg2);
    o2 = __nw__7TObjectFUl(0x3A0);
    if (o2 != NULL) {
        TAdFloorLoadPrtGC__ct(o2, this);
    }
}
extern "C" {

}
