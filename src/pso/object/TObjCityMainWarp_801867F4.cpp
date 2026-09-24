#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80186AF4_lbl_804FF800 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct Bits_80186A3C { s32 v[36]; };

extern "C" {
s32 TObjPlayer__sub_800196EC();
s32 get_field_3e4__10TObjPlayerFPv(s32);
f32 fn_8013157C(s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s32 lbl_805D53A0;
s32 TObjCityMainWarp__sub_80186BBC(s32 arg0, f32 farg0);
s32 get_main_phase();
extern s32 lbl_805D55C0;
s32 TObjCityMainWarp__sub_80186B00(void);
extern RecoveredGlobal_80186AF4_lbl_804FF800 lbl_804FF800;
M2C_UNK *TObjCityMainWarp__sub_80186AF4(void);
extern const Bits_80186A3C lbl_804448CC;
s32 get_player_floor__6TLobbyFi(s32);
s32 fn_802033DC(s32);
s32 TObjCityMainWarp__sub_80186A3C(s32 floor);
}

extern "C" {

void TObjCityMainWarp__sub_80186AB8(void);
void reset__16TObjCityMainWarpFv(void);
void set_active_bit__16TObjCityMainWarpFv(s32 _w0);
void set_flag70_bit10__16TObjCityMainWarpFPv(void* p);
void update_unlock_flags__16TObjCityMainWarpFv(void);
s32 TODoorVoShip__sub_801F44BC(M2C_UNK);
int TObjCityMainWarp__sub_80186634(void);
int TObjCityMainWarp__sub_801868A8(int);
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
    if (TODoorVoShip__sub_801F44BC(var_r3) != 0) {
        TObjCityMainWarp__data_805D5B54 |= 4;
    }
    if (TODoorVoShip__sub_801F44BC(var_r31) != 0) {
        TObjCityMainWarp__data_805D5B54 |= 0x10;
    }
    if (TODoorVoShip__sub_801F44BC(var_r30) != 0) {
        TObjCityMainWarp__data_805D5B54 |= 0x200;
    }
}

extern s32 TObjCityMainWarp__data_805D5B50;

void set_active_bit__16TObjCityMainWarpFv(s32 _w0) {
    s32 temp_r3;

    temp_r3 = TObjCityMainWarp__sub_80186A3C((s32)(_w0));
    if (temp_r3 >= 0) {
        TObjCityMainWarp__data_805D5B50 |= 1 << temp_r3;
    }
}

s32 TObjCityMainWarp__sub_80186A3C(s32 floor) {
    s32 bit = -1;
    Bits_80186A3C bits = lbl_804448CC;
    if (fn_802033DC(get_player_floor__6TLobbyFi(floor)) == 0) {
        bit = bits.v[floor];
    }
    return bit;
}

void TObjCityMainWarp__sub_80186AB8(void) {  }
void reset__16TObjCityMainWarpFv(void) { TObjCityMainWarp__sub_80186634(); TObjCityMainWarp__sub_801868A8(0); }
void set_flag70_bit10__16TObjCityMainWarpFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }

typedef char RecoveredGlobal_80186AF4_lbl_804FF800_size[sizeof(RecoveredGlobal_80186AF4_lbl_804FF800) == 0x20 ? 1 : -1];
M2C_UNK *TObjCityMainWarp__sub_80186AF4(void) {
    return &lbl_804FF800.value;
}

s32 TObjCityMainWarp__sub_80186B00(void) {
    return ((get_main_phase() - 0xF) == 0) ? lbl_805D55C0 : 0;
}

#pragma push
#pragma fp_contract on
s32 TObjCityMainWarp__sub_80186BBC(s32 arg0, f32 farg0) {
    s32 temp_r3;
    s32 temp_r31;
    s32 temp_r3b;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0) {
        temp_r31 = TObjPlayer__sub_800196EC();
        temp_r3b = get_field_3e4__10TObjPlayerFPv(temp_r3);
        if ((temp_r3b == temp_r31) && (fn_8013157C(arg0 + 0x38, temp_r3 + 0x38) < (farg0 * farg0))) {
            return temp_r3;
        }
    }
    return 0;
}
#pragma pop

}
