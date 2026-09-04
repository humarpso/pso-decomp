#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy__9TObjLightFPvs(void *arg0, s16 arg1);
int fn_8022F42C(void);
u8 *init_from_source__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TLobby__sub_80226294(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int fn_80236EE8(void*);
int init_params__10TTecDebandFPv(void* p);

extern M2C_UNK lbl_804CC74C[];

void *destroy__9TObjLightFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC74C;
        TLobby__sub_80226294(M2C_FIELD(arg0, void **, 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804CC74C[];

u8 *init_from_source__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC74C;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (int) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = TBoss3Volopt__sub_8022675C((int) (0x4002BB1F), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    return arg0;
}

int fn_8022F42C(void) { return 0; }

}
