#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdEnterSerialAccessGC__sub_80321478(void);
M2C_UNK render_status_line__15TAdSubPlyItemGCFPvi(void *, int, f32, f32, f32);

extern const f32 TAdEnterSerialAccessGC__data_805DF4DC;
extern const f32 lbl_805DF4E4;
extern const f32 lbl_805DF4E8;
extern M2C_UNK lbl_805DF4EC;
extern const f32 lbl_805DF4F0;

void TAdEnterSerialAccessGC__sub_80321478(void) {
    render_status_line__15TAdSubPlyItemGCFPvi((void *) (&lbl_805DF4EC), (int) (-1), (f32) (lbl_805DF4E8), (f32) (lbl_805DF4E4), (f32) (TAdEnterSerialAccessGC__data_805DF4DC));
    render_status_line__15TAdSubPlyItemGCFPvi((void *) (&lbl_805DF4EC), (int) (-1), (f32) (lbl_805DF4F0), (f32) (lbl_805DF4E4), (f32) (TAdEnterSerialAccessGC__data_805DF4DC));
}

}
