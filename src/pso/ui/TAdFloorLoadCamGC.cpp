#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
void __ct__7TObjectFP7TObject(void *);
extern M2C_UNK __vt__17TAdFloorLoadCamGC[];
extern const f32 lbl_805DFDB8;
extern void *lbl_805D4340;
void TAdMultiChgGameModeGC__sub_8023E834(void *);
void *TAdFloorLoadCamGC__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void *__dt__17TAdFloorLoadCamGCFv(void *arg0, s16 arg1);
u16 fn_8034BE30(void* p);
void fn_8034BE38(void* p);
void fn_8034BE48(void* p);
void render__17TAdFloorLoadCamGCFv(void);
void TCameraCtrl__sub_800687C8(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

u16 fn_8034BE30(void* p) { return *(u16*)((char*)p + 0x24); }
void fn_8034BE38(void* p) { *(u32*)((char*)p + 0x334) &= 0xbfffffff; }
void fn_8034BE48(void* p) { *(u32*)((char*)p + 0x334) |= 0x40000000; }
void render__17TAdFloorLoadCamGCFv(void) {  }

extern M2C_UNK __vt__17TAdFloorLoadCamGC[];

void *__dt__17TAdFloorLoadCamGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdFloorLoadCamGC;
        TCameraCtrl__sub_800687C8();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TAdFloorLoadCamGC__ct(void *arg0, void *arg1, void *arg2) {
  void *new_var;
  __ct__7TObjectFP7TObject(arg0);
  *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = __vt__17TAdFloorLoadCamGC;
  new_var = lbl_805D4340;
  *((void **) (((s8 *) arg0) + 0x0)) = new_var;
  *((u32 *) (((s8 *) arg0) + 0x20)) = 0;
  *((u32 *) (((s8 *) arg0) + 0x24)) = 0;
  *((f32 *) (((s8 *) arg0) + 0x40)) = lbl_805DFDB8;
  *((f32 *) (((s8 *) arg0) + 0x44)) = lbl_805DFDB8;
  *((f32 *) (((s8 *) arg0) + 0x48)) = lbl_805DFDB8;
  *((void **) (((s8 *) arg0) + 0x1C)) = arg2;
  TAdMultiChgGameModeGC__sub_8023E834(new_var);
  return arg0;
}

}
