#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Player_8005254C { u8 pad[0x30]; u32 flags; };

extern "C" {
extern const f32 lbl_805D8AE0;
f32 TBoss4Type3__sub_800524E8(f32 farg0);
Player_8005254C *get_player_by_client_id(s32 id);
s32 get_field_3e0__12TBoss3VoloptFPv(void *p);
s32 TBoss4Type3__sub_8005254C(u16 id);
}

extern "C" {

f32 compute_wave_offset__11TBoss4Type3Ff(f32 farg0);
f32 cos_table_lookup(s32);

extern const f32 lbl_805D8AE0;
extern const f32 lbl_805D8AE4;
extern const f32 lbl_805D8AF0;

#pragma push
#pragma fp_contract on
f32 TBoss4Type3__sub_800524E8(f32 farg0) {
    f32 temp_f1;
    temp_f1 = lbl_805D8AE0 - farg0;
    return -((temp_f1 * (temp_f1 * (temp_f1 * (temp_f1 * (temp_f1 * temp_f1))))) - lbl_805D8AE0);
}
#pragma pop

f32 compute_wave_offset__11TBoss4Type3Ff(f32 farg0) {
    return lbl_805D8AE4 * (lbl_805D8AE0 - cos_table_lookup((s32) (lbl_805D8AF0 * farg0)));
}
s32 TBoss4Type3__sub_8005254C(u16 id) {
    Player_8005254C *p;
    if (id != 0xFFFF) {
        p = get_player_by_client_id(id);
        if (p != 0 && !(p->flags & 0x2000800) && get_field_3e0__12TBoss3VoloptFPv(p) == 0xE) {
            return 1;
        }
    }
    return 0;
}

}
