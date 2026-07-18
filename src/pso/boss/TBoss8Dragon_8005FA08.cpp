#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_facing__12TBoss8DragonFPvf(void *arg0, f32 farg0);
M2C_UNK TBoss8Dragon__sub_8005FA78(void *, s32, f32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK update_velocity__9TObjEneDDFPv();

extern const f64 lbl_80437EB0;

void update_facing__12TBoss8DragonFPvf(void *arg0, f32 farg0) {
    update_velocity__9TObjEneDDFPv();
    TBoss8Dragon__sub_8005FA78(arg0, (s32) (lbl_80437EB0 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))), farg0);
}

}
