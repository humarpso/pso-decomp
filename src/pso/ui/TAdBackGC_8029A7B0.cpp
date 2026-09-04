#include "pso/TAdBackGC.h"

TAdBackGC::~TAdBackGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__9TAdBackGCFv(void *arg0);
void run_task__9TAdBackGCFv(void);
void __ct__7TObjectFP7TObject(void *);

void run_task__9TAdBackGCFv(void) {  }

extern const f32 lbl_805DDC68;
extern M2C_UNK __vt__9TAdBackGC[];
extern void *lbl_805D3D00;

void *__ct__9TAdBackGCFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TAdBackGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D00;
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_805DDC68;
    M2C_FIELD(arg0, u32 *, 0x20) = 1;
    return arg0;
}

}
