#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8012B524_lbl_804A4D70 { M2C_UNK value; u8 remaining[0xF4]; };
typedef char RecoveredGlobal_8012B524_lbl_804A4D70_size[sizeof(RecoveredGlobal_8012B524_lbl_804A4D70) == 0xF8 ? 1 : -1];

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_8012B5C0(u8 *arg0);
u8 get_slot_count__14TItemProShieldFPv(void *);
u8 * TObjPlayer__sub_80120D50(void *, void *);
void set_status_flags__10TObjPlayerFPvUi(void *, s32);
extern RecoveredGlobal_8012B524_lbl_804A4D70 lbl_804A4D70;
extern const f32 lbl_805DAE88;
extern const f32 lbl_805DAEA4;
u8 *TObjPlayer__sub_8012B524(u8 *arg0, u8 *arg1, s32 _w2);
}

extern "C" {

u8 *TObjPlayer__sub_8012B524(u8 *arg0, u8 *arg1, s32 _w2) {
    TObjPlayer__sub_80120D50(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804A4D70.value;
    M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, f32 *, 0x1FC) = (f32) lbl_805DAEA4;
    M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DAEA4;
    M2C_FIELD(arg0, f32 *, 0x204) = (f32) lbl_805DAEA4;
    M2C_FIELD(arg0, f32 *, 0x208) = (f32) lbl_805DAE88;
    M2C_FIELD(arg0, f32 *, 0x20C) = (f32) lbl_805DAE88;
    M2C_FIELD(arg0, f32 *, 0x210) = (f32) lbl_805DAE88;
    M2C_FIELD(arg0, f32 *, 0x214) = (f32) lbl_805DAE88;
    M2C_FIELD(arg0, f32 *, 0x218) = (f32) lbl_805DAE88;
    M2C_FIELD(arg0, f32 *, 0x21C) = (f32) lbl_805DAE88;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    if (get_slot_count__14TItemProShieldFPv(arg0) == 6) {
        set_status_flags__10TObjPlayerFPvUi(arg0, 0x20);
    }
    return arg0;
}

u8 *TObjPlayer__sub_8012B5C0(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x220));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_8012B524((u8 *)(temp_r3), (u8 *)(tl_05), (s32)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
