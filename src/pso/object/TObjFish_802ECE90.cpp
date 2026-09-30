#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802ED4AC_lbl_80472D04 {
    M2C_UNK value;
    u8 remaining[0x74];
};

typedef s32 M2C_UNK;
struct Vec_802ED3E4 { f32 x, y, z; };

extern "C" {
M2C_UNK TBoss2DeRolLe__sub_80035FCC(void *);
extern const f32 lbl_805DEA94;
extern const f32 lbl_805DEB64;
extern const f32 lbl_805DEB68;
u8 TObjFish__sub_802ED068(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern RecoveredGlobal_802ED4AC_lbl_80472D04 lbl_80472D04;
extern const f32 lbl_805DEA10;
void TObjFish__sub_802ED4AC(u8 *arg0, s32 arg1);
M2C_UNK TBoss2DeRolLe__sub_80035FCC(void *);
extern const f32 lbl_805DEA7C;
extern const f32 lbl_805DEB64;
extern const f32 lbl_805DEB68;
extern const f32 lbl_805DEB8C;
extern const f32 lbl_805DEB90;
u32 TObjFish__sub_802ED144(u8 *arg0);
M2C_UNK TBoss2DeRolLe__sub_80035FCC(void *);
extern const f32 lbl_805DEA7C;
extern const f32 lbl_805DEB64;
extern const f32 lbl_805DEB94;
u32 TObjFish__sub_802ED254(u8 *arg0);
M2C_UNK TObjPlayer__sub_803D7B68(int, f32);
M2C_UNK TObjPlayer__sub_803D7CA4(int);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D97F0(void *);
M2C_UNK TObjPlayer__sub_803D9884(void *, void *);
M2C_UNK TObjPlayer__sub_803D9B78();
extern u8 lbl_8058D490[];
extern const f32 lbl_805DEA10;
extern const f32 lbl_805DEB24;
f32 TObjFish__sub_802ED3E4(u8 *arg0);
}

extern "C" {

s32 TBoss7Joint_get_shell_max_hp(void);
s32 is_all_parts_done__8TObjFishFPv(u8 *arg0);
void set_swim_direction__8TObjFishFPv(void *arg0);
void update_wobble_angle__8TObjFishFPv(void *arg0);
M2C_UNK TBoss2DeRolLe__sub_80035FCC(void *);
void *dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);

#pragma push
#pragma fp_contract on
u8 TObjFish__sub_802ED068(u8 *arg0) {
    s32 temp_r0;
    s32 var_r3;
    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x670);
    if (((s32)TBoss2DeRolLe__sub_80035FCC(arg0 + 0x650)) == 3) {
        M2C_FIELD(arg0, s32 *, 0x6CC) = 1;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x6C8);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DEB68;
        if (M2C_FIELD(arg0, f32 *, 0x688) > lbl_805DEA94) {
            M2C_FIELD(arg0, s32 *, 0x6C8) = 1;
        }
        break;
    case 1:
        if (((s32)TBoss2DeRolLe__sub_80035FCC(arg0 + 0x630)) == 3) {
            M2C_FIELD(arg0, s32 *, 0x6C8) = 2;
        }
        break;
    }
    if (M2C_FIELD(arg0, f32 *, 0x688) > lbl_805DEA94) {
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DEB64;
    }
    var_r3 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x6C8) == 2) && ((s32) M2C_FIELD(arg0, s32 *, 0x6CC) == 1)) {
        var_r3 = 1;
    }
    return (u8) var_r3;
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
u32 TObjFish__sub_802ED144(u8 *arg0) {
    s32 temp_r0;
    u8 var_r3;
    TBoss2DeRolLe__sub_80035FCC((void *) (arg0 + 0x630));
    if (((s32)TBoss2DeRolLe__sub_80035FCC((void *) (arg0 + 0x650))) == 3) {
        M2C_FIELD(arg0, s32 *, 0x6CC) = 1;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x6D0);
    switch (temp_r0) {
    case 0:
        if (M2C_FIELD(arg0, f32 *, 0x648) > lbl_805DEB8C) {
            M2C_FIELD(arg0, s32 *, 0x6D0) = 2;
        }
        break;
    case 2:
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DEB68;
        M2C_FIELD(arg0, s32 *, 0x6D0) = 3;
        break;
    case 3:
        if (((s32)TBoss2DeRolLe__sub_80035FCC((void *) (arg0 + 0x670))) == 3) {
            M2C_FIELD(arg0, s32 *, 0x6D0) = 4;
        }
        if (M2C_FIELD(arg0, f32 *, 0x688) > lbl_805DEB90) {
            M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (M2C_FIELD(arg0, f32 *, 0xC8) + lbl_805DEA7C);
            if (M2C_FIELD(arg0, f32 *, 0xC8) > lbl_805DEB64) {
                M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DEB64;
            }
        }
        break;
    }
    var_r3 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x6D0) == 4) && ((s32) M2C_FIELD(arg0, s32 *, 0x6CC) == 1)) {
        var_r3 = 1;
    }
    return var_r3;
}
#pragma pop

#pragma push
#pragma opt_common_subs off
u32 TObjFish__sub_802ED254(u8 *arg0) {
    s32 temp_r0;
    u8 var_r3;
    TBoss2DeRolLe__sub_80035FCC((void *) (arg0 + 0x670));
    if (((s32)TBoss2DeRolLe__sub_80035FCC((void *) (arg0 + 0x650))) == 3) {
        M2C_FIELD(arg0, s32 *, 0x6CC) = 1;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x6C8);
    switch (temp_r0) {
    case 0:
        if (M2C_FIELD(arg0, f32 *, 0x688) > lbl_805DEB94) {
            M2C_FIELD(arg0, s32 *, 0x6C8) = 1;
        }
        break;
    case 1:
        if (((s32)TBoss2DeRolLe__sub_80035FCC((void *) (arg0 + 0x630))) == 3) {
            M2C_FIELD(arg0, s32 *, 0x6C8) = 2;
        }
        break;
    }
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (M2C_FIELD(arg0, f32 *, 0xC8) + lbl_805DEA7C);
    if (M2C_FIELD(arg0, f32 *, 0xC8) > lbl_805DEB64) {
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DEB64;
    }
    var_r3 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x6C8) == 2) && ((s32) M2C_FIELD(arg0, s32 *, 0x6CC) == 1)) {
        var_r3 = 1;
    }
    return var_r3;
}
#pragma pop

s32 is_all_parts_done__8TObjFishFPv(u8 *arg0) {
    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x670);
    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x630);
    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x650);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x630) == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x650) == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x670) == 3)) {
        return 1;
    }
    return 0;
}

extern const f32 lbl_805DEA10;
extern f32 lbl_805DEB60;
extern f32 lbl_805DEB98;

void update_wobble_angle__8TObjFishFPv(void *arg0) {
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x6F0);
    if (temp_f2 > lbl_805DEB60) {
        M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) (temp_f2 - lbl_805DEB60);
        return;
    }
    if (temp_f2 < lbl_805DEB98) {
        M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) (temp_f2 + lbl_805DEB60);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) lbl_805DEA10;
}

extern const f32 lbl_805DEA50;
extern const f32 lbl_805DEA6C;
extern const f32 lbl_805DEA94;
extern const f32 lbl_805DEB9C;

f32 TObjFish__sub_802ED3E4(u8 *arg0) {
    Vec_802ED3E4 v;
    v.x = lbl_805DEA10;
    v.y = lbl_805DEA10;
    v.z = lbl_805DEA10;
    TObjPlayer__sub_803D97F0(lbl_8058D490);
    TOMonitorMachine01__sub_803D8B5C(0, lbl_805DEB24, lbl_805DEB24, lbl_805DEB24);
    TObjPlayer__sub_803D7B68(M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
    TObjPlayer__sub_803D7CA4(M2C_FIELD(arg0, s32 *, 0x34));
    TObjPlayer__sub_803D9884(&v, &v);
    TObjPlayer__sub_803D9B78();
    return v.y;
}

void set_swim_direction__8TObjFishFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C0) == 0) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DEB9C;
        M2C_FIELD(arg0, s32 *, 0x64) = 0x500;
    } else {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DEA94;
        M2C_FIELD(arg0, s32 *, 0x64) = -0x500;
    }
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805DEA50;
    M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) lbl_805DEA6C;
}

typedef char RecoveredGlobal_802ED4AC_lbl_80472D04_size[sizeof(RecoveredGlobal_802ED4AC_lbl_80472D04) == 0x78 ? 1 : -1];
void TObjFish__sub_802ED4AC(u8 *arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, (u8 *)&lbl_80472D04.value + (arg1 * 0xC));
    M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) (*(const f32 *)&lbl_805DEA10);
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
}

s32 TBoss7Joint_get_shell_max_hp(void) {
    return M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0xF), s32 *, 0x1C);
}

}
