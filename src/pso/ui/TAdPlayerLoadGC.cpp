#include "pso/TAdPlayerLoadGC.h"

TAdPlayerLoadGC::~TAdPlayerLoadGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdPlayerLoadGC__sub_802D655C(void *arg0, s16 arg1);
void *__ct__15TAdPlayerLoadGCFv(void *arg0, void *arg1, void *arg2);
int fn_802D6BDC(void);
void fn_802D6BE4(int a0);
void render__15TAdPlayerLoadGCFv(void);
void __ct__7TObjectFP7TObject(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void set_state__15TAdPlayerLoadGCFi(int);

extern M2C_UNK lbl_804E24F0[];

void *TAdPlayerLoadGC__sub_802D655C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E24F0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

void render__15TAdPlayerLoadGCFv(void) {  }

extern M2C_UNK __vt__15TAdPlayerLoadGC[];
extern void *lbl_805D3F48;

void *__ct__15TAdPlayerLoadGCFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TAdPlayerLoadGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3F48;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    set_state__15TAdPlayerLoadGCFi(0);
    return arg0;
}

    extern int lbl_805D63D0;
int fn_802D6BDC(void) {  return lbl_805D63D0; }

    extern int lbl_805D6AA0;
void fn_802D6BE4(int a0) { lbl_805D6AA0 = a0; }

}
