#include "types.h"
#include "pso/player/TObjPlayer.h"

struct T_803374C4 { u8 b[8]; void *p; };

extern "C" {
extern char lbl_804C3E44[];
T_803374C4 *TObjPlayer__sub_803374C4(T_803374C4 *self);
s32 TObjPlayer__sub_801BED70(s32);
s32 TObjPlayer__sub_801BED78(s32);
s32 TObjPlayer__sub_801BED80(s32);
s32 TObjPlayer__sub_801BED88(s32);
s32 TObjPlayer__sub_801BED90();
s32 get_total_materials_used(s32 arg0);
u8 get_material_limit_for_class(s32 arg0);
int fn_803374F0(s32, s32, u8);
s32 fn_803374F8(s32, s32);

s32 TObjPlayer::try_add_item_count(s32 arg0, s32 arg1, s32 arg2, u8 arg3) {
    s32 temp_r31;

    temp_r31 = get_total_materials_used((s32)(arg0));
    if ((u8) (temp_r31 + arg3) > get_material_limit_for_class((s32)(arg1))) {
        return 0;
    }
    fn_803374F0(arg0, arg2, (u8) (arg3 + fn_803374F8(arg0, arg2)));
    return 1;
}

s32 TObjPlayer::can_use_more_materials(s32 arg1) {
    s32 arg0 = (s32)this;
    s32 t = get_total_materials_used(arg0);
    if ((u8)t >= get_material_limit_for_class(arg1)) {
        return 1;
    }
    return 0;
}

s32 get_total_materials_used(s32 arg0) {
    s32 sum;
    sum = TObjPlayer__sub_801BED90();
    sum += TObjPlayer__sub_801BED88(arg0);
    sum += TObjPlayer__sub_801BED80(arg0);
    sum += TObjPlayer__sub_801BED78(arg0);
    sum += TObjPlayer__sub_801BED70(arg0);
    return sum;
}

u8 get_material_limit_for_class(s32 arg0) {
    switch ((s8)arg0) {
    case 0:
    case 3:
    case 6:
    case 10:
    case 11:
        return 0xFA;
    case 1:
    case 7:
    case 8:
        return 0x96;
    case 2:
    case 4:
    case 5:
    case 9:
        return 0x96;
    }
    return 0xFA;
}

T_803374C4 *TObjPlayer__sub_803374C4(T_803374C4 *self) {
    s32 i;
    self->p = lbl_804C3E44;
    for (i = 0; i < 8; i++) {
        self->b[i] = 0;
    }
    return self;
}

}
