#include "types.h"

extern "C" {
s32 is_within_xz_distance__12TBoss8DragonFPvPvf(s32, void *, f32);
f32 calc_sq_offset__12TBoss8DragonFPvf(s32, void *, f32);
extern void *lbl_805D4DD8;
extern const f32 lbl_805DD900;
void TBoss8Dragon__sub_8028A900(void *self, s32 arg1, s32 arg2);
}

extern "C" {

int get_instance__12TBoss8DragonFv(void);

    extern int green_door_texture_handle;
int get_instance__12TBoss8DragonFv(void) {  return green_door_texture_handle; }
void TBoss8Dragon__sub_8028A900(void *self, s32 arg1, s32 arg2) {
    f32 temp_f31;
    void *temp_r31;
    void *temp_r4;
    void *var_r31;
    temp_r4 = *(void **)((s8 *)lbl_805D4DD8 + 0x42C);
    temp_r31 = *(void **)((s8 *)temp_r4 + 0x78);
    temp_f31 = calc_sq_offset__12TBoss8DragonFPvf(arg2, temp_r4, lbl_805DD900);
    for (var_r31 = *(void **)((s8 *)temp_r31 + 0x2C); var_r31 != NULL; var_r31 = *(void **)((s8 *)var_r31 + 0x30)) {
        if (!(*(s32 *)((s8 *)var_r31 + 0) & 0x10) && (is_within_xz_distance__12TBoss8DragonFPvPvf(arg1, var_r31, temp_f31) != 0)) {
            *(s32 *)((s8 *)var_r31 + 0) |= 0x10;
        }
    }
}

}
