#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Pkt_801CADA4 { u8 hdr[2]; s16 id; s16 dir; s16 f6; f32 x; f32 z; };

extern "C" {
s32 obj_isState2_324(void *);
s32 obj_testFlags30(void *, M2C_UNK);
s16 obj_getField1c(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 newton_sqrtf(f32);
M2C_UNK spawn_effect__10TObjPlayerFi(void *);
M2C_UNK drop_items_on_death__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D1A24(Pkt_801CADA4 *);
M2C_UNK send_head_pair_packet__10TObjPlayerFPv(Pkt_801CADA4 *);
extern const f64 lbl_80447148;
extern const f32 lbl_805DC390;
void begin_fall_reaction__10TObjPlayerFPv(void *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void begin_fall_reaction__10TObjPlayerFPv(void *arg0) {
    f32 x;
    f32 z;
    Pkt_801CADA4 pkt;
    z = M2C_FIELD(arg0, f32 *, 0x310);
    x = M2C_FIELD(arg0, f32 *, 0x308);
    if (newton_sqrtf(x * x + z * z) > lbl_805DC390) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) ((s32) (lbl_80447148 * get_ad_end_text_start__10TObjPlayerFv(x, z)) + 0x8000);
    }
    if (obj_testFlags30(arg0, 0x800) != 0) {
        drop_items_on_death__10TObjPlayerFPv(arg0);
    }
    spawn_effect__10TObjPlayerFi(arg0);
    if ((arg0 == NULL) || (obj_isState2_324(arg0) == 0)) {
        TObjPlayer__sub_801D1A24(&pkt);
        pkt.id = obj_getField1c(arg0);
        pkt.dir = (s16) M2C_FIELD(arg0, s32 *, 0x60);
        pkt.f6 = M2C_FIELD(arg0, s16 *, 0x32C);
        pkt.x = x;
        pkt.z = z;
        send_head_pair_packet__10TObjPlayerFPv(&pkt);
    }
}
#pragma pop

}
