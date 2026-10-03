#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80186AF4_lbl_804FF800 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct Obj_80186B34 { u8 pad[0x38]; u8 pos[0xAC - 0x38]; f32 range; };
struct Bits_80186A3C { s32 v[36]; };

extern "C" {
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(s32);
f32 xz_distance_squared(s32, s32);
s32 get_player_by_client_id(s32);
extern s32 lbl_805D53A0;
s32 TObjCityMainWarp__sub_80186BBC(s32 arg0, f32 farg0);
s32 get_main_phase();
extern s32 lbl_805D55C0;
s32 TObjCityMainWarp__sub_80186B00(void);
s32 TObjCityMainWarp__sub_80186B34(Obj_80186B34 *arg0);
extern RecoveredGlobal_80186AF4_lbl_804FF800 lbl_804FF800;
M2C_UNK *TObjCityMainWarp__sub_80186AF4(void);
extern const Bits_80186A3C lbl_804448CC;
s32 get_player_floor__6TLobbyFi(s32);
s32 is_warp_excluded_area(s32);
s32 get_floor_warp_bit__16TObjCityMainWarpFi(s32 floor);
s32 is_split_screen();
s32 get_instance__6TLobbyFv();
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK TObjCityMainWarp__sub_8018667C();
M2C_UNK TObjCityMainWarp__sub_80186748();
void update_unlock_flags__16TObjCityMainWarpFv(void);
s32 get_story_flag(M2C_UNK);
extern s32 TObjCityMainWarp__data_805D5B50;
extern s32 TObjCityMainWarp__data_805D5B54;
void update_main_warp_visible_mask(s32 arg0);
}

extern "C" {

void TObjCityMainWarp__sub_80186AB8(void);
void reset__16TObjCityMainWarpFv(void);
void set_active_bit__16TObjCityMainWarpFv(s32 _w0);
void set_flag70_bit10__16TObjCityMainWarpFPv(void* p);
void update_unlock_flags__16TObjCityMainWarpFv(void);
s32 get_story_flag(M2C_UNK);
int TObjCityMainWarp__sub_80186634(void);
s32 is_main_phase_15__9TObjEneDDFv();
s32 is_split_screen();

extern s32 TObjCityMainWarp__data_805D5B54;

void update_unlock_flags__16TObjCityMainWarpFv(void) {
    M2C_UNK var_r31;
    M2C_UNK var_r30;
    M2C_UNK var_r3;

    TObjCityMainWarp__data_805D5B54 |= 1;
    if ((is_main_phase_15__9TObjEneDDFv() != 0) || (is_split_screen() != 0)) {
        var_r3 = 0x4C;
        var_r31 = 0x4F;
        var_r30 = 0x52;
    } else {
        var_r3 = 0x4D;
        var_r31 = 0x50;
        var_r30 = 0x53;
    }
    if (get_story_flag(var_r3) != 0) {
        TObjCityMainWarp__data_805D5B54 |= 4;
    }
    if (get_story_flag(var_r31) != 0) {
        TObjCityMainWarp__data_805D5B54 |= 0x10;
    }
    if (get_story_flag(var_r30) != 0) {
        TObjCityMainWarp__data_805D5B54 |= 0x200;
    }
}

extern s32 TObjCityMainWarp__data_805D5B50;

void update_main_warp_visible_mask(s32 arg0) {
    s32 b;
    s32 c;
    s32 a;
    s32 i;
    TObjCityMainWarp__data_805D5B54 = TObjCityMainWarp__data_805D5B50;
    if (get_instance__6TLobbyFv() == 0) {
        TObjCityMainWarp__data_805D5B54 |= 1;
        if ((is_main_phase_15__9TObjEneDDFv() != 0) || (is_split_screen() != 0)) {
            a = 0x17;
            b = 0x20;
            c = 0x2A;
        } else {
            a = 0x18;
            b = 0x21;
            c = 0x30;
        }
        if (get_story_flag(a) != 0) {
            TObjCityMainWarp__data_805D5B54 |= 4;
        }
        if (get_story_flag(b) != 0) {
            TObjCityMainWarp__data_805D5B54 |= 0x20;
        }
        if (get_story_flag(c) != 0) {
            TObjCityMainWarp__data_805D5B54 |= 0x80;
        }
        for (i = 10; i < 17; i++) {
            TObjCityMainWarp__data_805D5B54 &= ~(1 << i);
        }
        return;
    }
    switch (arg0) {
    case 0:
        update_unlock_flags__16TObjCityMainWarpFv();
        break;
    case 1:
        TObjCityMainWarp__sub_80186748();
        break;
    case 2:
        TObjCityMainWarp__sub_8018667C();
        break;
    }
    for (i = 11; i < 15; i++) {
        TObjCityMainWarp__data_805D5B54 &= ~(1 << i);
    }
}

void set_active_bit__16TObjCityMainWarpFv(s32 _w0) {
    s32 temp_r3;

    temp_r3 = get_floor_warp_bit__16TObjCityMainWarpFi((s32)(_w0));
    if (temp_r3 >= 0) {
        TObjCityMainWarp__data_805D5B50 |= 1 << temp_r3;
    }
}

s32 get_floor_warp_bit__16TObjCityMainWarpFi(s32 floor) {
    s32 bit = -1;
    Bits_80186A3C bits = lbl_804448CC;
    if (is_warp_excluded_area(get_player_floor__6TLobbyFi(floor)) == 0) {
        bit = bits.v[floor];
    }
    return bit;
}

void TObjCityMainWarp__sub_80186AB8(void) {  }
void reset__16TObjCityMainWarpFv(void) { TObjCityMainWarp__sub_80186634(); update_main_warp_visible_mask((s32)(0)); }
void set_flag70_bit10__16TObjCityMainWarpFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }

typedef char RecoveredGlobal_80186AF4_lbl_804FF800_size[sizeof(RecoveredGlobal_80186AF4_lbl_804FF800) == 0x20 ? 1 : -1];
M2C_UNK *TObjCityMainWarp__sub_80186AF4(void) {
    return &lbl_804FF800.value;
}

s32 TObjCityMainWarp__sub_80186B00(void) {
    return ((get_main_phase() - 0xF) == 0) ? lbl_805D55C0 : 0;
}

s32 TObjCityMainWarp__sub_80186B34(Obj_80186B34 *arg0) {
    s32 r;
    s32 i;
    u8 *p;
    r = 1;
    for (i = 0; i < 4; i++) {
        p = (u8 *)get_player_by_client_id(i);
        if (p != 0) {
            if (((s32 (*)(void *))get_field_3e4__10TObjPlayerFPv)(p) != get_current_floor() || ((f32 (*)(void *, void *))xz_distance_squared)(p + 0x38, arg0->pos) > arg0->range * arg0->range) {
                r = 0;
            }
        }
    }
    return r;
}

#pragma push
#pragma fp_contract on
s32 TObjCityMainWarp__sub_80186BBC(s32 arg0, f32 farg0) {
    s32 temp_r3;
    s32 temp_r31;
    s32 temp_r3b;
    temp_r3 = get_player_by_client_id(lbl_805D53A0);
    if (temp_r3 != 0) {
        temp_r31 = get_current_floor();
        temp_r3b = get_field_3e4__10TObjPlayerFPv(temp_r3);
        if ((temp_r3b == temp_r31) && (xz_distance_squared(arg0 + 0x38, temp_r3 + 0x38) < (farg0 * farg0))) {
            return temp_r3;
        }
    }
    return 0;
}
#pragma pop

}
