#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__19TObjBoss5FloorStoneFv(void);
M2C_UNK render_impl__19TObjBoss5FloorStoneFPvPv(s32, s32);
s32 is_any_teammate_in_state__10TObjPlayerFv();

extern void *lbl_805D4DD8;
extern s32 lbl_805D4DDC;

void render__19TObjBoss5FloorStoneFv(void) {
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        render_impl__19TObjBoss5FloorStoneFPvPv(lbl_805D4DDC, M2C_FIELD(M2C_FIELD(lbl_805D4DD8, void **, 0x42C), s32 *, 0x58));
    }
}

}
