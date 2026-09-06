#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct Base_800C00F4_800BFBBC { char pad[0x18]; };

struct VObj_800C00F4_800BFBBC : Base_800C00F4_800BFBBC {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m48();
};

extern "C" {
s32 TObjPlayer__sub_800F06B4(s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 lbl_805D9F28;
extern const f32 lbl_805D9F2C;
void TObjPlayer__sub_800BFEDC(u8 *arg0);
void TObjPlayer__sub_800BFF54(void);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
extern const f32 lbl_805D9F44;
extern const f32 lbl_805D9F48;
void set_boss4_state__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_80017E6C(void *);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK fn_800C20B0();
extern const f32 lbl_805D9F24;
extern const f32 lbl_805D9F2C;
extern const f32 lbl_805D9F4C;
void apply_move_friction__10TObjPlayerFPv(void *arg0);
s32 TBoss3Volopt__sub_8022675C(s32, u32, M2C_UNK, s32);
s32 TObjPlayer__sub_800F06B4(s32, s32);
M2C_UNK TObjPlayer__sub_800F6B68(void *);
M2C_UNK query_lobby_state__10TObjPlayerFPv(void *);
void set_flag_and_notify__10TObjPlayerFPv(void *arg0);
void handle_death__10TObjPlayerFPv(u8 *arg0);
s32 TBoss3Volopt__sub_8022675C(s32, u32, M2C_UNK, s32);
s32 TObjPlayer__sub_800F06B4(s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
f32 fn_801315A0(void *, s32);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
void set_flag_and_notify__10TObjPlayerFPv(void *arg0);
extern const f32 lbl_805D9F50;
void enter_state_4__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
extern const f32 lbl_805D9F4C;
void update_invuln_timer__10TObjPlayerFPv(void *arg0);
void set_action_state_3__10TObjPlayerFPv(void *arg0);
s32 obj_testFlags30(void *, M2C_UNK);
void enter_down_state__10TObjPlayerFPv(void *arg0);
}

extern "C" {

s32 TObjPlayer__sub_800BFC58(s32 arg0);
void clear_flags_60__10TObjPlayerFPv(u8 *arg0);
void set_flag_and_notify__10TObjPlayerFPv(void *arg0);
s32 try_clear_flags_60__10TObjPlayerFi(s32 arg0);
s32 TObjPlayer__sub_80016D78();
s32 TObjPlayer__sub_80016FF8();
M2C_UNK TObjPlayer__sub_80156844(void *, void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK send_entity_set_flags__6TLobbyFPv();

void clear_flags_60__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x374);
    if (temp_r4 & 0x60) {
        M2C_FIELD(arg0, s16 *, 0x374) = (s16) (temp_r4 & 0xFFFFFF9F);
        TObjPlayer__sub_80156844(arg0, arg0 + 0x38, 0);
        obj_setFlags30(arg0, 0x800000);
    }
}

s32 try_clear_flags_60__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_80016D78() != 0) {
        clear_flags_60__10TObjPlayerFPv((u8 *)(arg0));
        return 1;
    }
    return 0;
}

s32 TObjPlayer__sub_800BFC58(s32 arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        clear_flags_60__10TObjPlayerFPv((u8 *)(arg0));
        return 1;
    }
    return 0;
}

void set_flag_and_notify__10TObjPlayerFPv(void *arg0) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x374);
    if (!(temp_r4 & 0x80)) {
        M2C_FIELD(arg0, s16 *, 0x374) = (s16) (temp_r4 | 0x80);
        send_entity_set_flags__6TLobbyFPv();
    }
}
void TObjPlayer__sub_800BFEDC(u8 *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 3) && ((objInBand__FP7GameObjf(arg0, lbl_805D9F28) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D9F2C) != 0))) {
        TBoss3Volopt__sub_8022675C(TObjPlayer__sub_800F06B4(0x3D20C, 5), (u32) (arg0 + 0x38), 0, 0);
    }
}
void TObjPlayer__sub_800BFF54(void) {  }
void set_boss4_state__10TObjPlayerFPv(void *arg0) {
    s16 temp_r4;
    s16 temp_r4_2;
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x374);
    if (!(temp_r4 & 2)) {
        temp_r4_2 = temp_r4 | 2;
        M2C_FIELD(arg0, s16 *, 0x374) = temp_r4_2;
        M2C_FIELD(arg0, s16 *, 0x394) = 0;
        M2C_FIELD(arg0, s32 *, 0x390) = (s32) (lbl_805D9F44 * (lbl_805D9F48 * calc_boss4_scale__10TObjPlayerFi(arg0)));
    }
    M2C_FIELD(arg0, s16 *, 0x326) = 1;
    M2C_FIELD(arg0, s16 *, 0x37A) = 3;
    ((struct VObj_800C00F4_800BFBBC *)arg0)->m48();
    M2C_FIELD(arg0, s16 *, 0x32C) = 1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & ~0xA00);
}
void apply_move_friction__10TObjPlayerFPv(void *arg0) {
    fn_800C20B0();
    TBoss1Dragon__sub_80143504((void *)(arg0));
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        TObjPlayer__sub_80011734(arg0, 0, lbl_805D9F4C);
    }
    TObjPlayer__sub_80154E3C(arg0);
    if (M2C_FIELD(arg0, f32 *, 0xC0) < (lbl_805D9F24 * (lbl_805D9F2C * M2C_FIELD(arg0, f32 *, 0xC8)))) {
        TObjPlayer__sub_80017E6C(arg0);
        M2C_FIELD(arg0, f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x308) * lbl_805D9F24);
        M2C_FIELD(arg0, f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x310) * lbl_805D9F24);
    }
}
void handle_death__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFFC0);
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x374);
    if (temp_r3 & 2) {
        if (!(temp_r3 & 4)) {
            M2C_FIELD(arg0, s16 *, 0x374) = (s16) (temp_r3 | 4);
            TBoss3Volopt__sub_8022675C((s32)(((M2C_UNK)TObjPlayer__sub_800F06B4((s32)(0x3AD13), (s32)(5)))), (u32)(arg0 + 0x38), (M2C_UNK)(0), (s32)(0));
            query_lobby_state__10TObjPlayerFPv(arg0);
            M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        }
    } else if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 5) {
        M2C_FIELD(arg0, s16 *, 0x326) = 5;
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        if (!(M2C_FIELD(arg0, s16 *, 0x374) & 0x10)) {
            TBoss3Volopt__sub_8022675C((s32)(((M2C_UNK)TObjPlayer__sub_800F06B4((s32)(0x3AE10), (s32)(5)))), (u32)(arg0 + 0x38), (M2C_UNK)(0), (s32)(0));
            TObjPlayer__sub_800F6B68(arg0);
            set_flag_and_notify__10TObjPlayerFPv(arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x380) = 0;
    }
}
void enter_state_4__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    if (M2C_FIELD(arg0, s16 *, 0x374) & 2) {
        obj_clearFlags30(arg0, 0x23F);
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 4) {
        M2C_FIELD(arg0, s16 *, 0x326) = 4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x2D4));
        if ((temp_r3 != 0) && !(fn_801315A0(arg0 + 0x38, temp_r3 + 0x38) < lbl_805D9F50)) {
            M2C_FIELD(arg0, s16 *, 0x374) = (s16) (M2C_FIELD(arg0, s16 *, 0x374) | 2);
            set_flag_and_notify__10TObjPlayerFPv(arg0);
        }
        TBoss3Volopt__sub_8022675C((s32)((void*)((M2C_UNK)TObjPlayer__sub_800F06B4((s32)(0x3B10F), (s32)(5)))), (u32)(arg0 + 0x38), (M2C_UNK)(0), (s32)(0));
    }
}
void update_invuln_timer__10TObjPlayerFPv(void *arg0) {
    s16 temp_r4;
    TBoss1Dragon__sub_80143504((void *)(arg0));
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        TObjPlayer__sub_80011734(arg0, 0, (*(f32 *)&lbl_805D9F4C));
    }
    update_collisions__10TObjPlayerFPv(arg0);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
    M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFEFF);
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
    }
}
void set_action_state_3__10TObjPlayerFPv(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 3) {
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF9FFFFF);
    }
}
void enter_down_state__10TObjPlayerFPv(void *arg0) {
    u16 temp_r4;
    if (!(M2C_FIELD(arg0, s16 *, 0x374) & 0x42) && (obj_testFlags30(arg0, 0xA02) == 0) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 2;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x200000);
        if ((s16) M2C_FIELD(arg0, s16 *, 0x382) != (s32) (temp_r4 = M2C_FIELD(arg0, u16 *, 0x338))) {
            M2C_FIELD(arg0, s16 *, 0x382) = (s16) temp_r4;
            M2C_FIELD(arg0, s16 *, 0x384) = 0;
        } else {
            M2C_FIELD(arg0, s16 *, 0x384) = (s16) (M2C_FIELD(arg0, s16 *, 0x384) + 1);
        }
        M2C_FIELD(arg0, s32 *, 0x388) = 0;
    }
}

}
