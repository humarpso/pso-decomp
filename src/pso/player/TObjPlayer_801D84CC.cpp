#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_50 { u8 bytes[0x50]; };

struct RecoveredGlobal_801D8ADC_lbl_8044929C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801D8ADC_lbl_804492AC {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801D8ADC_lbl_804492BC {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801D8ADC_lbl_804492CC {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_801D8B8C_lbl_8044925C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801D8B8C_lbl_8044926C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801D8B8C_lbl_8044927C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801D8B8C_lbl_8044928C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801D8C6C_lbl_8044923C {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801D8D8C_lbl_804C49B0 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_801D8E60_lbl_804C4980 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801D9328_lbl_80447430 {
    M2C_UNK value;
    u8 remaining[0x17C];
};

extern "C" {
s8 TObjPlayer__sub_801AFDBC(s8);
s32 clamp_index_to_max__10TObjPlayerFi(s32);
extern int lbl_805D5E10;
s32 TObjPlayer__sub_801D9250(s8 arg0, s32 arg1);
s32 get_current_state_field__10TObjPlayerFv(s8 _w0, s32 _w1);
s8 TObjPlayer__sub_801AFDB0(s32);
s8 TObjPlayer__sub_801AFDB0(s32 _w0);
s32 TObjPlayer__sub_801D921C(s32 arg0, s32 arg1);
s16 get_tech_level__10TObjPlayerFPv(void *);
s16 get_handle_value__10TObjPlayerFPv(void *);
s32 get_move_mode__10TObjPlayerFPv(void *);
f32 TObjPlayer__sub_801D90DC(s32, s16, s16, s32);
s32 get_falz_phase__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D9078(u8 *arg0);
s32 get_main_phase();
s32 obj_isState3_324(int);
extern RecoveredGlobal_801D8ADC_lbl_8044929C lbl_8044929C;
extern RecoveredGlobal_801D8ADC_lbl_804492AC lbl_804492AC;
extern RecoveredGlobal_801D8ADC_lbl_804492BC lbl_804492BC;
extern RecoveredGlobal_801D8ADC_lbl_804492CC lbl_804492CC;
extern s32 lbl_805D5550;
M2C_UNK *TObjPlayer__sub_801D8ADC(M2C_UNK *arg0);
s32 get_main_phase();
s32 obj_isState3_324(int);
extern RecoveredGlobal_801D8B8C_lbl_8044925C lbl_8044925C;
extern RecoveredGlobal_801D8B8C_lbl_8044926C lbl_8044926C;
extern RecoveredGlobal_801D8B8C_lbl_8044927C lbl_8044927C;
extern RecoveredGlobal_801D8B8C_lbl_8044928C lbl_8044928C;
extern s32 lbl_805D5550;
M2C_UNK *TObjPlayer__sub_801D8B8C(M2C_UNK *arg0);
s32 get_instance__6TLobbyFv(void);
extern RecoveredGlobal_801D8C6C_lbl_8044923C lbl_8044923C;
u8 *TObjPlayer__sub_801D8C6C(void);
s8 TObjPlayer__sub_801AFDBC(s8);
extern RecoveredGlobal_801D8D8C_lbl_804C49B0 lbl_804C49B0;
s32 TObjPlayer__sub_801D8D8C(s8 arg0);
s32 get_clamped_index__10TObjPlayerFPv(void *);
extern RecoveredGlobal_801D8E60_lbl_804C4980 lbl_804C4980;
s32 TObjPlayer__sub_801D8E60(u8 *arg0);
s8 TObjPlayer__sub_801AFDB0(s32 _w0);
extern RecoveredGlobal_801D9328_lbl_80447430 lbl_80447430;
u8 *TObjPlayer__sub_801D9328(u8 *arg0);
}

extern "C" {

s32 TBoss4DarkFalz__sub_801D94C0(void* p);
void *TObjPlayer__sub_801D89E0(void *arg0, s16 arg1);
void TObjPlayer__sub_801D8A38(void* a0);
void TObjPlayer__sub_801D92A4(void);
int TObjPlayer__sub_801D9470(void* p);
void create_player_ending_motion(void);
s32 get_current_state_field__10TObjPlayerFv(s8 _w0, s32 _w1);
s32 get_falz_phase__10TObjPlayerFPv(void* p);
int get_instance_count__14TBoss4DarkFalzFv(void);
void* init_inventory__10TObjPlayerFPv(void* p);
s32 init_inventory_items__10TObjPlayerFi(s32 arg0);
void load_ply_level_tbl(void);
int TLobby__sub_800F957C(void*);
int TObjPlayer__sub_801BDFC4(void);
int TObjPlayer__sub_801BFF80(void*);
int TObjPlayer__sub_801C6E40(void*);
void __dl__7TObjectFPv(void *);
void __dt__10TObjPlayerFv(void *, int);
int create_named_object(void*);
int fn_800F9990(void*);
M2C_UNK init__17TPlyInventoryItemFv(s32);

    extern unsigned char lbl_80447190[];
    extern int lbl_805D5E08;
void create_player_ending_motion(void) { TObjPlayer__sub_801BDFC4(); lbl_805D5E08 = create_named_object(lbl_80447190); }

extern M2C_UNK lbl_804C4540[];

void *TObjPlayer__sub_801D89E0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4540;
        __dt__10TObjPlayerFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern const float lbl_805DC3F8;
void TObjPlayer__sub_801D8A38(void* a0) { *(short*)((char*)a0 + 0x0) = 1; *(float*)((char*)a0 + 0x4) = lbl_805DC3F8; }

void* init_inventory__10TObjPlayerFPv(void* p) { init_inventory_items__10TObjPlayerFi((s32)((s32)((char*)p + 0x50))); TObjPlayer__sub_801BFF80((char*)p + 0xac); TObjPlayer__sub_801D8A38((void*)((void*)((char*)p + 0xc0))); return p; }

s32 init_inventory_items__10TObjPlayerFi(s32 arg0) {
    s32 var_r30;
    s32 var_r31;

    var_r31 = 0;
    var_r30 = 0;
    do {
        init__17TPlyInventoryItemFv(arg0 + var_r30);
        var_r31 += 1;
        var_r30 += 0x1C;
    } while (var_r31 < 2);
    return arg0;
}

typedef char RecoveredGlobal_801D8ADC_lbl_8044929C_size[sizeof(RecoveredGlobal_801D8ADC_lbl_8044929C) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801D8ADC_lbl_804492AC_size[sizeof(RecoveredGlobal_801D8ADC_lbl_804492AC) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801D8ADC_lbl_804492BC_size[sizeof(RecoveredGlobal_801D8ADC_lbl_804492BC) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801D8ADC_lbl_804492CC_size[sizeof(RecoveredGlobal_801D8ADC_lbl_804492CC) == 0x14 ? 1 : -1];
M2C_UNK *TObjPlayer__sub_801D8ADC(M2C_UNK *arg0) {
    M2C_UNK *var_r31;
    M2C_UNK *var_r3;
    var_r31 = (M2C_UNK *)(arg0);
    if (get_main_phase() == 0xF) {
        var_r3 = (M2C_UNK *)(var_r31);
        if (obj_isState3_324((int) (var_r3)) != 0) {
            var_r3 = (M2C_UNK *)(&lbl_804492CC.value);
            var_r3 = (M2C_UNK *)(&lbl_804492CC.value);
            var_r3 = (M2C_UNK *)(M2C_FIELD(&lbl_804492CC.value, M2C_UNK *, (lbl_805D5550 * 4)));
            return var_r3;
        }
        var_r3 = (M2C_UNK *)(&lbl_804492BC.value);
        var_r3 = (M2C_UNK *)(&lbl_804492BC.value);
        var_r3 = (M2C_UNK *)(M2C_FIELD(&lbl_804492BC.value, M2C_UNK *, (lbl_805D5550 * 4)));
        return var_r3;
    }
    var_r3 = (M2C_UNK *)(var_r31);
    if (obj_isState3_324((int) (var_r3)) != 0) {
        var_r3 = (M2C_UNK *)(&lbl_804492AC.value);
        var_r3 = (M2C_UNK *)(&lbl_804492AC.value);
        var_r3 = (M2C_UNK *)(M2C_FIELD(&lbl_804492AC.value, M2C_UNK *, (lbl_805D5550 * 4)));
        return var_r3;
    }
    var_r3 = (M2C_UNK *)(&lbl_8044929C.value);
    var_r3 = (M2C_UNK *)(&lbl_8044929C.value);
    var_r3 = (M2C_UNK *)(M2C_FIELD(&lbl_8044929C.value, M2C_UNK *, (lbl_805D5550 * 4)));
    return var_r3;
}

typedef char RecoveredGlobal_801D8B8C_lbl_8044925C_size[sizeof(RecoveredGlobal_801D8B8C_lbl_8044925C) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801D8B8C_lbl_8044926C_size[sizeof(RecoveredGlobal_801D8B8C_lbl_8044926C) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801D8B8C_lbl_8044927C_size[sizeof(RecoveredGlobal_801D8B8C_lbl_8044927C) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801D8B8C_lbl_8044928C_size[sizeof(RecoveredGlobal_801D8B8C_lbl_8044928C) == 0x10 ? 1 : -1];
M2C_UNK *TObjPlayer__sub_801D8B8C(M2C_UNK *arg0) {
    M2C_UNK *var_r31;
    M2C_UNK *var_r3;
    var_r31 = (M2C_UNK *)(arg0);
    if (get_main_phase() == 0xF) {
        var_r3 = (M2C_UNK *)(var_r31);
        if (obj_isState3_324((int) (var_r3)) != 0) {
            var_r3 = (M2C_UNK *)(&lbl_8044928C.value);
            var_r3 = (M2C_UNK *)(&lbl_8044928C.value);
            var_r3 = (M2C_UNK *)(M2C_FIELD(&lbl_8044928C.value, M2C_UNK *, (lbl_805D5550 * 4)));
            return var_r3;
        }
        var_r3 = (M2C_UNK *)(&lbl_8044927C.value);
        var_r3 = (M2C_UNK *)(&lbl_8044927C.value);
        var_r3 = (M2C_UNK *)(M2C_FIELD(&lbl_8044927C.value, M2C_UNK *, (lbl_805D5550 * 4)));
        return var_r3;
    }
    var_r3 = (M2C_UNK *)(var_r31);
    if (obj_isState3_324((int) (var_r3)) != 0) {
        var_r3 = (M2C_UNK *)(&lbl_8044926C.value);
        var_r3 = (M2C_UNK *)(&lbl_8044926C.value);
        var_r3 = (M2C_UNK *)(M2C_FIELD(&lbl_8044926C.value, M2C_UNK *, (lbl_805D5550 * 4)));
        return var_r3;
    }
    var_r3 = (M2C_UNK *)(&lbl_8044925C.value);
    var_r3 = (M2C_UNK *)(&lbl_8044925C.value);
    var_r3 = (M2C_UNK *)(M2C_FIELD(&lbl_8044925C.value, M2C_UNK *, (lbl_805D5550 * 4)));
    return var_r3;
}

typedef char RecoveredGlobal_801D8C6C_lbl_8044923C_size[sizeof(RecoveredGlobal_801D8C6C_lbl_8044923C) == 0x18 ? 1 : -1];
u8 *TObjPlayer__sub_801D8C6C(void) {
    return (u8 *)&lbl_8044923C.value + (get_instance__6TLobbyFv() * 0xC);
}

typedef char RecoveredGlobal_801D8D8C_lbl_804C49B0_size[sizeof(RecoveredGlobal_801D8D8C_lbl_804C49B0) == 0x30 ? 1 : -1];
s32 TObjPlayer__sub_801D8D8C(s8 arg0) {
    TObjPlayer__sub_801AFDBC(arg0);
    return M2C_FIELD(&lbl_804C49B0.value, M2C_UNK *, (arg0 * 4));
}

typedef char RecoveredGlobal_801D8E60_lbl_804C4980_size[sizeof(RecoveredGlobal_801D8E60_lbl_804C4980) == 0xC ? 1 : -1];
s32 TObjPlayer__sub_801D8E60(u8 *arg0) {
    return M2C_FIELD(&lbl_804C4980.value, M2C_UNK *, (get_clamped_index__10TObjPlayerFPv(arg0) * 4));
}

#pragma push
#pragma scheduling off
void TObjPlayer__sub_801D9078(u8 *arg0) {
  s16 temp_r30;
  s16 temp_r31;
  s16 new_var;
  s32 temp_r29;
  temp_r29 = get_move_mode__10TObjPlayerFPv(arg0);
  new_var = get_tech_level__10TObjPlayerFPv(arg0 + 0x7CC);
  temp_r30 = new_var;
  temp_r31 = get_falz_phase__10TObjPlayerFPv((void*)(arg0));
  TObjPlayer__sub_801D90DC((s32) get_handle_value__10TObjPlayerFPv(arg0), temp_r31, temp_r30, temp_r29);
}

#pragma pop

s32 get_current_state_field__10TObjPlayerFv(s8 _w0, s32 _w1) {
    return M2C_FIELD(TObjPlayer__sub_801D9250(_w0, (s32)(_w1)), s32 *, 8);
}

    extern int lbl_805D5E10;

s32 TObjPlayer__sub_801D921C(s32 arg0, s32 arg1) { return get_current_state_field__10TObjPlayerFv(TObjPlayer__sub_801AFDB0(arg0), arg1); }

s32 TObjPlayer__sub_801D9250(s8 arg0, s32 arg1) {
  s32 temp_r30;
  s32 temp_r31;
  temp_r30 = *(*(s32 * *)&lbl_805D5E10);
  ;
  return (*((M2C_UNK *) (((s8 *) temp_r30) + (TObjPlayer__sub_801AFDBC(arg0) * 4)))) + (clamp_index_to_max__10TObjPlayerFi(arg1) * 0xC);
}

void TObjPlayer__sub_801D92A4(void) { TLobby__sub_800F957C((void*)(lbl_805D5E10)); }

    extern unsigned char lbl_804492E8[];
    extern int lbl_805D5E10;
void load_ply_level_tbl(void) { lbl_805D5E10 = fn_800F9990(lbl_804492E8); }

typedef char RecoveredGlobal_801D9328_lbl_80447430_size[sizeof(RecoveredGlobal_801D9328_lbl_80447430) == 0x180 ? 1 : -1];
u8 *TObjPlayer__sub_801D9328(u8 *arg0) {
    return (u8 *)&lbl_80447430.value + (TObjPlayer__sub_801AFDB0((s32)(arg0)) << 5);
}

int TObjPlayer__sub_801D9470(void* p) { return TObjPlayer__sub_801C6E40((char*)p + 0x360); }
s32 get_falz_phase__10TObjPlayerFPv(void* p) { return TBoss4DarkFalz__sub_801D94C0((void*)((char*)p + 0x7cc)); }

    extern int lbl_805D4D68;
int get_instance_count__14TBoss4DarkFalzFv(void) {  return lbl_805D4D68; }

s32 TBoss4DarkFalz__sub_801D94C0(void* p) { return *(s32*)((char*)p + 0x14); }

}
