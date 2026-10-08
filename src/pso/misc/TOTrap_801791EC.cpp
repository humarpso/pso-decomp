#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK;
struct Self_80179244 { s32 type; u8 pad4[0x18 - 4]; M2C_UNK *vt; u8 pad1c[0x334 - 0x1C]; f32 f334; f32 f338; u16 s33c; u8 pad33e[2]; s32 f340; };

extern "C" {
void *construct_actor_base__10TObjPlayerFPvPv(void *, void *, void *);
extern M2C_UNK __vt__6TOTrap[];
extern s32 lbl_805D3198;
extern const f32 TOTrap__data_805DBA3C;
Self_80179244 *TOTrap__ct(Self_80179244 *self, void *a, void *b);
}

extern "C" {

void TOTrap__vt82(void);
void *__dt__6TOTrapFv(void *arg0, s16 arg1);
void TOTrap__sub_801792AC(void);
void TOTrap__sub_801792B0(void);
void __dl__7TObjectFPv(void *);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);

extern M2C_UNK __vt__6TOTrap[];

void *__dt__6TOTrapFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__6TOTrap;
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Self_80179244 *TOTrap__ct(Self_80179244 *self, void *a, void *b) {
    construct_actor_base__10TObjPlayerFPvPv(self, a, b);
    self->vt = __vt__6TOTrap;
    self->type = lbl_805D3198;
    self->f334 = self->f338 = TOTrap__data_805DBA3C;
    self->s33c = 0xFFFF;
    self->f340 = 1;
    return self;
}

void TOTrap__vt82(void) {  }

}
