#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_803558E4___vt__20TBoss5GryphonTornado {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK __vt__20TBoss5GryphonTornado[];
extern s32 lbl_805D4398;
extern const f32 lbl_805DFFA8;
u8 *TBoss5GryphonTornado__ct(u8 *arg0, u8 *arg1, s32 arg2, u8 *arg3, s16 arg4);
}

extern "C" {

void *__dt__20TBoss5GryphonTornadoFv(void *arg0, s16 arg1);
void render__20TBoss5GryphonTornadoFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

void render__20TBoss5GryphonTornadoFv(void) {  }

extern M2C_UNK __vt__20TBoss5GryphonTornado[];

void *__dt__20TBoss5GryphonTornadoFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TBoss5GryphonTornado;
        if (M2C_FIELD(arg0, void **, 0x58) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x58)); M2C_FIELD(arg0, M2C_UNK *, 0x58) = 0; }
        if (M2C_FIELD(arg0, void **, 0x54) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x54)); M2C_FIELD(arg0, M2C_UNK *, 0x54) = 0; }
        if (M2C_FIELD(arg0, void **, 0x50) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x50)); M2C_FIELD(arg0, M2C_UNK *, 0x50) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_803558E4___vt__20TBoss5GryphonTornado_size[sizeof(RecoveredGlobal_803558E4___vt__20TBoss5GryphonTornado) == 0x18 ? 1 : -1];
u8 *TBoss5GryphonTornado__ct(u8 *arg0, u8 *arg1, s32 arg2, u8 *arg3, s16 arg4) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_803558E4___vt__20TBoss5GryphonTornado *)&__vt__20TBoss5GryphonTornado).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4398;
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg3);
    M2C_FIELD(arg0, s16 *, 0x24) = arg4;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DFFA8;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DFFA8;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DFFA8;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

}
