#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__19TObjBoss5FloorGrassFv(void);
void run_task__19TObjBoss5FloorGrassFv(void);
M2C_UNK draw_ginja_object(s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
s32 is_any_teammate_in_state__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *lbl_805D4DD8;
extern s32 lbl_805D4DDC;

void render__19TObjBoss5FloorGrassFv(void) {
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        push_matrix();
        set_global_param__8TObjFishFi(lbl_805D4DDC);
        draw_ginja_object(M2C_FIELD(M2C_FIELD(lbl_805D4DD8, void **, 0x42C), s32 *, 0x78));
        pop_matrix();
    }
}

void run_task__19TObjBoss5FloorGrassFv(void) {  }

}
