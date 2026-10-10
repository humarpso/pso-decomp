#include "pso/TObjBoss8Piller.h"

TObjBoss8Piller::~TObjBoss8Piller() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8030B048_lbl_804E7688 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8030B048_lbl_804E7688_size[sizeof(RecoveredGlobal_8030B048_lbl_804E7688) == 0x10 ? 1 : -1];

struct RecoveredGlobal_8030AF60___vt__15TObjBoss8Piller {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8030B048_lbl_804E7688 lbl_804E7688;
extern u32 TObjBoss8Piller__shared_resource;
void load_resource_descriptor__15TObjBoss8PillerFv(void);
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
s32 rand(void);
extern RecoveredGlobal_8030AF60___vt__15TObjBoss8Piller __vt__15TObjBoss8Piller;
extern s32 TObjBoss8Piller__class_name;
extern u32 TObjBoss8Piller__shared_resource;
extern const f32 lbl_805DF158;
extern const f32 lbl_805DF15C;
extern const f32 lbl_805DF160;
u8 *__ct__15TObjBoss8PillerFv(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3);
}

extern "C" {

void free_held_object__15TObjBoss8PillerFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjBoss8Piller__shared_resource;

typedef char RecoveredGlobal_8030AF60___vt__15TObjBoss8Piller_size[sizeof(RecoveredGlobal_8030AF60___vt__15TObjBoss8Piller) == 0x18 ? 1 : -1];
u8 *__ct__15TObjBoss8PillerFv(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__15TObjBoss8Piller.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TObjBoss8Piller__class_name;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805DF158;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DF158;
    M2C_FIELD(arg0, s16 *, 0x30) = arg3;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (lbl_805DF15C * (lbl_805DF160 * (f32) rand()));
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TObjBoss8Piller__shared_resource), u8 **, 0x430), s32 *, 4);
    return arg0;
}

void free_held_object__15TObjBoss8PillerFv(void) {
    if ((u32) TObjBoss8Piller__shared_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TObjBoss8Piller__shared_resource, 1);
        TObjBoss8Piller__shared_resource = 0U;
    }
}
void load_resource_descriptor__15TObjBoss8PillerFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804E7688.value, 0, 0, 0));
    }
    (*(s32 *)&TObjBoss8Piller__shared_resource) = var_r0;
}

}
