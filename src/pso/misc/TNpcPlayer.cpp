#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8014FEAC {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

typedef s32 M2C_UNK;
struct Rec_8014F844 { s32 id; s32 f4; f32 dist; };

struct Npc_8014F844 {
    s32 f0;
    Rec_8014F844 recs[10];
    s32 f7C;
    s32 f80;
    s32 f84;
    s16 f88;
    u16 f8A;
    s32 f8C;
    s32 f90;
    s32 f94;
    s32 f98;
    f32 f9C;
    f32 fA0;
    f32 fA4;
    void *fA8;
    f32 fAC;
    f32 fB0;
    f32 fB4;
    f32 fB8;
    f32 fBC;
    s32 fC0;
    s32 fC4;
    u8 padC8[0x104 - 0xC8];
    s32 f104;
};

extern "C" {
u32 get_player_by_client_id(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
s32 TNpcPlayer__sub_8014F7F0(void *arg0);
f32 horizontal_distance_squared(void *, void *);
M2C_UNK request_chatter__10TNpcPlayerFPvUi(void *, int);
M2C_UNK reset_partner_counter(void *, int);
M2C_UNK increment_partner_counter(void *, int);
s16 get_partner_counter(void *, int);
M2C_UNK npc_counter_reset_if_reached(void *, int, int);
extern const f32 lbl_805DB234;
s32 TNpcPlayer__sub_8014FF5C(u8 *arg0);
u8 *get_position_ptr__10TObjPlayerFPv(s32);
u8 *get_target_ptr__11TCameraCtrlFPv(s32);
f32 TBoss6Kakusan__sub_803D8BD8(void *, f32);
extern const f32 lbl_805DB230;
s32 partner_view_check_moved(u8 *arg0);
s16 obj_getS16_32E(void *);
s16 obj_getS16_2BA(void *);
s16 obj_getS16_32C(void *);
s16 get_field_2b8__14TItemProShieldFPv(void *);
extern const f32 TNpcPlayer__data_805DB1F0;
extern f32 TNpcPlayer__data_805DB218;
extern const f32 lbl_805DB224;
extern const f32 lbl_805DB228;
extern f32 TNpcPlayer__data_805DB22C;
s32 partner_view_update_conditions(u8 *arg0);
s16 obj_getS16_32C(void *);
s16 get_field_2b8__14TItemProShieldFPv(void *);
extern f32 TNpcPlayer__data_805DB218;
extern const f32 lbl_805DB21C;
extern const f32 lbl_805DB220;
s32 partner_view_update_hp_change(void *arg0);
s32 find_entity_by_id(u16);
void init_collision_body_parts(void *, void *, s32);
void *TObjPlayer__sub_801569F4(void *, void *);
void *__nw__7TObjectFUl(u32);
extern void *tl_05;
extern const f32 TNpcPlayer__data_805DB1F0;
extern const f32 TNpcPlayer__data_805DB20C;
extern const f32 lbl_805DB214;
Npc_8014F844 *TNpcPlayer__sub_8014F844(Npc_8014F844 *self, s32 id);
}

extern "C" {

s32 check_and_set_reached__10TNpcPlayerFPv(void *arg0);
void *dt__10TNpcPlayerFPvs(void *arg0, s16 arg1);
s32 try_attack__10TNpcPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
s32 try_update_target_flag__10TNpcPlayerFPvi(void *arg0, s32 arg1);
s32 TNpcPlayer__sub_8014F424(void *, s32, s32, s32);
s32 TNpcPlayer__sub_8014F57C(void *, s32);
M2C_UNK TObjEneGibbles__sub_80156720(u32);
M2C_UNK __dl__FPv(void *);
s32 fn_801B7C78(s32, M2C_UNK, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(u32);
s32 try_camera_action__10TObjPlayerFii(s32, M2C_UNK);

void *dt__10TNpcPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xA8) != 0U) {
            TObjEneGibbles__sub_80156720(M2C_FIELD(arg0, u32 *, 0xA8));
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xA8));
            M2C_FIELD(arg0, u32 *, 0xA8) = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
s32 TNpcPlayer__sub_8014F7F0(void *arg0) {
    u32 v;
    M2C_FIELD(arg0, u32 *, 0x94) = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x8A));
    v = M2C_FIELD(arg0, u32 *, 0x94);
    if (v == 0U) {
        return 1;
    }
    return (u32) __cntlzw(all_parents_unqueued_for_destruction__7TObjectFv((void *)v)) >> 5;
}
#pragma pop

Npc_8014F844 *TNpcPlayer__sub_8014F844(Npc_8014F844 *self, s32 id) {
    s32 i;
    void *p;
    self->f94 = find_entity_by_id(id);
    self->f9C = TNpcPlayer__data_805DB1F0;
    self->fA0 = TNpcPlayer__data_805DB1F0;
    self->fA4 = TNpcPlayer__data_805DB1F0;
    self->f8C = 0;
    self->f90 = 0;
    self->f8A = id;
    self->f88 = -1;
    self->f84 = 0;
    self->f0 = 0;
    for (i = 0; i < 10; i++) {
        self->recs[i].id = 0xFFFF;
        self->recs[i].dist = TNpcPlayer__data_805DB1F0;
    }
    self->f104 = 0;
    self->fAC = TNpcPlayer__data_805DB1F0;
    self->fB0 = TNpcPlayer__data_805DB1F0;
    self->fB4 = TNpcPlayer__data_805DB20C;
    self->fB8 = lbl_805DB214;
    self->fBC = TNpcPlayer__data_805DB20C;
    self->fC0 = 0;
    self->fC4 = 0x1103;
    p = __nw__7TObjectFUl(0xAC);
    if (p != 0) {
        p = TObjPlayer__sub_801569F4(p, tl_05);
    }
    self->fA8 = p;
    if (self->fA8 != 0) {
        init_collision_body_parts(self->fA8, &self->fAC, 1);
    }
    self->f7C = 0xFFFF;
    self->f80 = 0xFFFF;
    return self;
}

s32 partner_view_update_hp_change(void *arg0) {
    s16 temp_r0;
    s16 temp_r31;
    s16 temp_r3;
    s16 temp_r4;
    temp_r31 = obj_getS16_32C((void *)(M2C_FIELD(arg0, s32 *, 0x94)));
    temp_r3 = get_field_2b8__14TItemProShieldFPv((void *)(M2C_FIELD(arg0, s32 *, 0x94)));
    if (M2C_FIELD(arg0, s16 *, 0x88) <= 0) {
        M2C_FIELD(arg0, s16 *, 0x88) = temp_r31;
        return 0;
    }
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x88);
    temp_r0 = (s16)(temp_r4 - temp_r31);
    if (temp_r4 >= (s32) (temp_r31 - 1)) {
        if ((f32) temp_r0 > (lbl_805DB21C * (f32) temp_r3)) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x40);
        } else if ((f32) temp_r0 > ((*(const f32 *)&TNpcPlayer__data_805DB218) * (f32) temp_r3)) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x80);
        } else if ((f32) temp_r0 > (lbl_805DB220 * (f32) temp_r3)) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x100);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x200);
    }
    M2C_FIELD(arg0, s16 *, 0x88) = temp_r31;
    return temp_r0 ? 1 : 0;
}

s32 partner_view_update_conditions(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f31;
    f32 temp_f31_2;
    s32 temp_r3;
    s32 var_r31;
    var_r31 = 0;
    temp_f31 = (f32) obj_getS16_32C(M2C_FIELD(arg0, u8 **, 0x94));
    temp_f1 = temp_f31 / (f32) get_field_2b8__14TItemProShieldFPv(M2C_FIELD(arg0, u8 **, 0x94));
    if (M2C_FIELD(arg0, s32 *, 0x8C) & 2) {
        if (temp_f1 <= lbl_805DB224) {
            var_r31 = 1;
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 8);
            M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 4);
        }
        if (temp_f1 <= lbl_805DB228) {
            var_r31 = 1;
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x1000);
        }
    } else if (temp_f1 <= lbl_805DB228) {
        var_r31 = 1;
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 8);
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 4);
    }
    if (temp_f1 <= TNpcPlayer__data_805DB22C) {
        var_r31 = 1;
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x800);
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 4);
    }
    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x94), s32 *, 0x30);
    if ((temp_r3 & 1) || (temp_r3 & 2) || (temp_r3 & 0x10)) {
        var_r31 = 1;
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 2);
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 4);
    }
    temp_f31_2 = (f32) obj_getS16_32E(M2C_FIELD(arg0, u8 **, 0x94));
    temp_f2 = (f32) obj_getS16_2BA(M2C_FIELD(arg0, u8 **, 0x94));
    if (((temp_f31_2 / temp_f2) <= TNpcPlayer__data_805DB218) && (TNpcPlayer__data_805DB1F0 != temp_f2)) {
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 4);
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x10);
    }
    return var_r31;
}

s32 try_update_target_flag__10TNpcPlayerFPvi(void *arg0, s32 arg1) {
    s32 temp_r6;

    temp_r6 = M2C_FIELD(arg0, s32 *, 0x94);
    if (TNpcPlayer__sub_8014F424(arg0, temp_r6 + 0x38, arg1, temp_r6) != 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 2);
        return 1;
    }
    return 0;
}

s32 check_and_set_reached__10TNpcPlayerFPv(void *arg0) {
    if (TNpcPlayer__sub_8014F57C(arg0, M2C_FIELD(arg0, s32 *, 0x94) + 0x38) != 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 2);
        return 1;
    }
    return 0;
}

s32 try_attack__10TNpcPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        if ((arg2 != 0) && (fn_801B7C78(M2C_FIELD(arg0, s32 *, 0x94), 3, 0) != -1)) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x20);
            return 1;
        }
        if (try_camera_action__10TObjPlayerFii(M2C_FIELD(arg0, s32 *, 0x94), 0xF) != 0) {
            return 1;
        }
        break;
    case 1:
        if (fn_801B7C78(M2C_FIELD(arg0, s32 *, 0x94), 3, 1) != -1) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x20);
            return 1;
        }
        break;
    case 2:
        if (try_camera_action__10TObjPlayerFii(M2C_FIELD(arg0, s32 *, 0x94), 0x10) != 0) {
            return 1;
        }
        break;
    case 3:
        if (fn_801B7C78(M2C_FIELD(arg0, s32 *, 0x94), 3, 6) != -1) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x20);
            return 1;
        }
        if (try_camera_action__10TObjPlayerFii(M2C_FIELD(arg0, s32 *, 0x94), 0x11) != 0) {
            return 1;
        }
        break;
    }
    return 0;
}

s32 partner_view_check_moved(u8 *arg0) {
    Stack_8014FEAC stack;
    f32 temp_f1;
    u8 *temp_r31;
    u8 *temp_r3;
    temp_r31 = (u8 *)(get_target_ptr__11TCameraCtrlFPv(M2C_FIELD(arg0, s32 *, 0x94)));
    temp_r3 = (u8 *)(get_position_ptr__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x94)));
    if ((temp_r31 == NULL) || (temp_r3 == NULL)) {
        return 0;
    }
    stack.sp8 = M2C_FIELD(temp_r3, f32 *, 0) - M2C_FIELD(temp_r31, f32 *, 0);
    stack.spC = M2C_FIELD(temp_r3, f32 *, 4) - M2C_FIELD(temp_r31, f32 *, 4);
    temp_f1 = M2C_FIELD(temp_r3, f32 *, 8);
    stack.sp10 = temp_f1 - M2C_FIELD(temp_r31, f32 *, 8);
    if (TBoss6Kakusan__sub_803D8BD8((void *) (&stack.sp8), (f32) (temp_f1)) > lbl_805DB230) {
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 1);
        return 1;
    }
    return 0;
}

#pragma push
#pragma fp_contract on
s32 TNpcPlayer__sub_8014FF5C(u8 *arg0) {
    s8 temp_r3;
    if (horizontal_distance_squared((void *) (arg0 + 0xAC), (void *) (arg0 + 0xD0)) <= lbl_805DB234) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s8 *, 0x8C);
    if (temp_r3 > 0x1E) {
        M2C_FIELD(arg0, u8 *, 0x8C) = 0x1EU;
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) | 0x4000);
        if (get_partner_counter((void *) (arg0 + 0x5C), (int) (7)) == 0) {
            request_chatter__10TNpcPlayerFPvUi((void *) (arg0), (int) (7));
        }
        increment_partner_counter((void *) (arg0 + 0x5C), (int) (7));
        npc_counter_reset_if_reached((void *) (arg0 + 0x5C), (int) (7), (int) (0x12C));
        return 0;
    }
    if ((temp_r3 == 0) && (M2C_FIELD(arg0, s32 *, 0x80) & 0x4000)) {
        reset_partner_counter((void *) (arg0 + 0x5C), (int) (7));
        request_chatter__10TNpcPlayerFPvUi((void *) (arg0), (int) (0x18));
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) & 0xFFFFBFFF);
    }
    return 1;
}
#pragma pop

}
