#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8018343C_lbl_804B5C40 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804B5C40[];
extern s32 lbl_805D328C;
extern const f32 lbl_805DBC1C;
u8 *TObjEneBm5GibonU__sub_8018343C(u8 *arg0, u8 *arg1, u8 *arg2, f32 farg0);
}

extern "C" {

void *destroy__16TObjEneBm5GibonUFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804B5C40[];

void *destroy__16TObjEneBm5GibonUFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5C40;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8018343C_lbl_804B5C40_size[sizeof(RecoveredGlobal_8018343C_lbl_804B5C40) == 0x18 ? 1 : -1];
u8 *TObjEneBm5GibonU__sub_8018343C(u8 *arg0, u8 *arg1, u8 *arg2, f32 farg0) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8018343C_lbl_804B5C40 *)&lbl_804B5C40).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D328C;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, f32 *, 0x30) = farg0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DBC1C;
    return arg0;
}

}
