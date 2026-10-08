#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 is_within_xz_distance__12TBoss8DragonFPvPvf(s32, void *, f32);
f32 calc_sq_offset__12TBoss8DragonFPvf(s32, void *, f32);
extern void *lbl_805D4DD8;
extern const f32 lbl_805DD900;
void TBoss8Dragon__sub_8028A900(void *self, s32 arg1, s32 arg2);
}

extern "C" {

int get_instance__12TBoss8DragonFv(void);

    extern int lbl_805D64CC;
int get_instance__12TBoss8DragonFv(void) {  return lbl_805D64CC; }
void TBoss8Dragon__sub_8028A900(void *self, s32 arg1, s32 arg2) {
    f32 temp_f31;
    void *temp_r31;
    void *temp_r4;
    void *var_r31;
    temp_r4 = M2C_FIELD(lbl_805D4DD8, void **, 0x42C);
    temp_r31 = M2C_FIELD(temp_r4, void **, 0x78);
    temp_f31 = calc_sq_offset__12TBoss8DragonFPvf(arg2, temp_r4, lbl_805DD900);
    for (var_r31 = M2C_FIELD(temp_r31, void **, 0x2C); var_r31 != NULL; var_r31 = M2C_FIELD(var_r31, void **, 0x30)) {
        if (!(M2C_FIELD(var_r31, s32 *, 0) & 0x10) && (is_within_xz_distance__12TBoss8DragonFPvPvf(arg1, var_r31, temp_f31) != 0)) {
            M2C_FIELD(var_r31, s32 *, 0) |= 0x10;
        }
    }
}

}
