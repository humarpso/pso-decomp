#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_8 { u8 bytes[0x8]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_2C { u8 bytes[0x2C]; };

struct RecoveredGlobal_801D2CF4_lbl_804C43CC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801D2CF4_lbl_804C43D8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
s16 TObjPlayer__sub_801D2F0C(void *arg0);
s16 TObjPlayer__sub_801D2F0C(void *arg0);
void TObjPlayer__sub_801D2860(u8 *arg0);
void TObjPlayer__sub_801D2A88(u8 *arg0);
void TObjPlayer__sub_801D2CAC(u8 *arg0);
void TObjPlayer__sub_801D2D94(u8 *arg0);
s32 TObjPlayer__sub_801D2EE8(s16 arg0);
s16 TObjPlayer__sub_801D2F4C(s16 *arg0);
s32 TObjPlayer__sub_801D2F8C(s16 arg0);
u8 *TObjPlayer__sub_801D2910(u8 *arg0, u8 *arg1);
s32 check_hit_by_id__10TObjPlayerFiii(s32, s32, s32);
void TObjPlayer__sub_801D2DDC(s32 arg0, s32 arg1);
void TObjPlayer__sub_801D2DDC(s32 arg0, s32 arg1);
void TObjPlayer__sub_801D2DB4(u16 *arg0);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
void TObjPlayer__sub_801D3424(void* p, s16 v);
extern const f32 lbl_805DC3B8;
void TObjPlayer__sub_801D31A8(u8 *arg0, M2C_UNK arg1, s16 arg2, s32 arg3);
int TFontSmallLobby__sub_801C0228(void*);
s32 TObjPlayer__sub_801D2BB8(s32 arg0, s32 arg1);
s16 TObjPlayer__sub_801D2EA8(u8 *arg0);
extern RecoveredGlobal_801D2CF4_lbl_804C43CC lbl_804C43CC;
extern RecoveredGlobal_801D2CF4_lbl_804C43D8 lbl_804C43D8;
f32 TObjPlayer__sub_801D2CF4(M2C_UNK arg0, s32 arg1);
}

extern "C" {

s16 TObjPlayer__sub_801D2824(void* p);
s16 TObjPlayer__sub_801D282C(void* p);
f32 TObjPlayer__sub_801D2858(void* p);
s32 TObjPlayer__sub_801D2870(void* p);
s32 TObjPlayer__sub_801D2878(void* p);
void* TObjPlayer__sub_801D28A0(void* p, void* a1);
void TObjPlayer__sub_801D28DC(void* p);
int TObjPlayer__sub_801D2964(void);
int TObjPlayer__sub_801D2A50(void* p);
void TObjPlayer__sub_801D2A78(void* p, f32 v);
s32 TObjPlayer__sub_801D2A80(void* p);
f32 TObjPlayer__sub_801D2A98(void* p);
int TObjPlayer__sub_801D2AB0(void);
int TObjPlayer__sub_801D2B08(void* p);
int TObjPlayer__sub_801D2B2C(void);
int TObjPlayer__sub_801D2C18(void);
void TObjPlayer__sub_801D2CC4(void* p, f32 v);
f32 TObjPlayer__sub_801D2CDC(void* p);
int TObjPlayer__sub_801D2E20(void *, void *, f32, f32);
void TObjPlayer__sub_801D3424(void* p, s16 v);
int TObjPlayer__sub_801D345C(void* p);
void advance_and_clamp_state__10TObjPlayerFPv(void *arg0);
void apply_anim_action__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
int bswap_field_u32__10TObjPlayerFPv(void* p);
void bswap_u16_pair__10TObjPlayerFPv(void* p);
int check_flag_clear__10TObjPlayerFPv(void* p);
int check_photon_blast_flag__10TObjPlayerFPv(void* p);
int check_status_flag_128__10TObjPlayerFPv(void* p);
int clear_photon_blast_state__10TObjPlayerFPv(void* p);
void* get_anim_field_c__10TObjPlayerFPv(void* p);
f32 get_dist__10TObjPlayerFPv(void* p);
void* get_element__10TObjPlayerFPvi(void* a0, int a1);
s32 get_field_1c__10TObjPlayerFPv(void* p);
int get_field_340__10TObjPlayerFPv(void* p);
s32 get_field_4__10TObjPlayerFPv(void* p);
f32 get_float_14__10TObjPlayerFPv(void* p);
s16 get_obj_id__10TObjPlayerFPv(void* p);
void* get_technique_data__10TObjPlayerFPv(void* p);
void handle_6x54(void);
void handle_6x64(void);
void handle_6x65(void);
void handle_6x8B(void);
void handle_6x8C(void);
int is_flag32_clear__10TObjPlayerFPv(void* p);
int on_attack_finished__10TObjPlayerFPv(void* p);
void reset_movement_state__10TObjPlayerFPv(u8 *arg0);
void set_action_type__10TObjPlayerFPvi(void* p, s32 v);
void set_attack_target__10TObjPlayerFPvs(void* p, s16 v);
void set_field8__10TObjPlayerFPvi(void* p, s32 v);
void set_field_0c__10TObjPlayerFPvf(void* p, f32 v);
void set_field_3c__10TObjPlayerFPvf(void* p, f32 v);
int set_flag_1_at_c__10TObjPlayerFPv(void* p);
void set_tech_override__10TObjPlayerFPvUc(void* p, u8 v);
void set_technique_id__10TObjPlayerFPvUc(void* p, u8 v);
void set_technique_state__10TObjPlayerFPvi(void* p, s32 v);
int start_photon_blast_action__10TObjPlayerFPv(void* p);
int test_bit1_at_10__10TObjPlayerFPv(void* p);
s32 tick_countdown_timer__10TObjPlayerFPv(u8 *arg0);
int trigger_photon_blast__10TObjPlayerFPv(void* p);
s32 update_if_flag8_set__10TObjPlayerFi(s32 arg0);
int TObjPlayer__sub_8001BEF8(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int TObjPlayer__sub_80121248(void*, int);
int TObjPlayer__sub_8012ADD4(void*);
f32 TObjPlayer__sub_801D9004(void *);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int fn_801D7BF4(void*);
int set_action_palette_mode__10TObjPlayerFPv(void*);
int set_flags__10TObjPlayerFPvUi(void*, int);

s32 get_field_4__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x4); }
s16 TObjPlayer__sub_801D2824(void* p) { return *(s16*)((char*)p + 0x8); }
s16 TObjPlayer__sub_801D282C(void* p) { return *(s16*)((char*)p + 0x0); }

f32 TObjPlayer__sub_801D2858(void* p) { return *(f32*)((char*)p + 0x8); }

void TObjPlayer__sub_801D2860(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
}

s32 TObjPlayer__sub_801D2870(void* p) { return *(s32*)((char*)p + 0x4); }
s32 TObjPlayer__sub_801D2878(void* p) { return *(s32*)((char*)p + 0xc); }
int bswap_field_u32__10TObjPlayerFPv(void* p) { return bswap_32__FPUl(p); }
void* TObjPlayer__sub_801D28A0(void* p, void* a1) { TFontSmallLobby__sub_801C0228((void*)(p)); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); return p; }
void TObjPlayer__sub_801D28DC(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); }

u8 *TObjPlayer__sub_801D2910(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228((void*)((void*)(arg0)));
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    *(M2CCopy_8 *)((s32) arg0 + 8) = *(const M2CCopy_8 *)((s32) arg1 + 8);
    return arg0;
}

int TObjPlayer__sub_801D2964(void) { return 0; }

int clear_photon_blast_state__10TObjPlayerFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x40, 62); }
int trigger_photon_blast__10TObjPlayerFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x40, 4); }
int check_photon_blast_flag__10TObjPlayerFPv(void* p) { return set_flags__10TObjPlayerFPvUi((void*)((char*)p + 0x40), (int)(8)); }
int check_flag_clear__10TObjPlayerFPv(void* p) { return (TObjPlayer__sub_8001BEF8((void*)((char*)p + 0x40), (int)(1))) == 0; }
int TObjPlayer__sub_801D2A50(void* p) { return TObjPlayer__sub_8001BEF8((void*)((char*)p + 0x40), (int)(8)); }
void TObjPlayer__sub_801D2A78(void* p, f32 v) { *(f32*)((char*)p + 0x10) = v; }
s32 TObjPlayer__sub_801D2A80(void* p) { return *(s32*)((char*)p + 0x8); }

void TObjPlayer__sub_801D2A88(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
}

f32 TObjPlayer__sub_801D2A98(void* p) { return *(f32*)((char*)p + 0xc); }
void set_field_0c__10TObjPlayerFPvf(void* p, f32 v) { *(f32*)((char*)p + 0xc) = v; }
void set_field8__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }

int TObjPlayer__sub_801D2AB0(void) { return 0; }

void set_field_3c__10TObjPlayerFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x3c) = v; }
int start_photon_blast_action__10TObjPlayerFPv(void* p) { return set_flags__10TObjPlayerFPvUi((void*)((char*)p + 0x40), (int)(4)); }
f32 get_dist__10TObjPlayerFPv(void* p) { return *(f32*)((char*)p + 0x10); }
void* get_element__10TObjPlayerFPvi(void* a0, int a1) {  return (char*)a0 + a1 * 24; }

int TObjPlayer__sub_801D2B08(void* p) { return fn_801D7BF4((char*)p + 0x24); }

int TObjPlayer__sub_801D2B2C(void) { return 0; }

void bswap_u16_pair__10TObjPlayerFPv(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); }

#pragma push
#pragma fp_contract on
s32 TObjPlayer__sub_801D2BB8(s32 arg0, s32 arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    *(M2CCopy_2C *)(arg0 + 4) = *(const M2CCopy_2C *)(arg1 + 4);
    return arg0;
}
#pragma pop

int TObjPlayer__sub_801D2C18(void) { return 0; }

void set_technique_state__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }
void set_technique_id__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x0) = v; }
int test_bit1_at_10__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BEF8((void*)((char*)p + 0x10), (int)(2)); }

void TObjPlayer__sub_801D2CAC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - 1);
}

f32 get_float_14__10TObjPlayerFPv(void* p) { return *(f32*)((char*)p + 0x14); }
void TObjPlayer__sub_801D2CC4(void* p, f32 v) { *(f32*)((char*)p + 0x14) = v; }
void* get_technique_data__10TObjPlayerFPv(void* p) { return (char*)p + 0x20; }
void set_tech_override__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x1) = v; }
f32 TObjPlayer__sub_801D2CDC(void* p) { return *(f32*)((char*)p + 0x4); }
void set_attack_target__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void* get_anim_field_c__10TObjPlayerFPv(void* p) { return (char*)p + 0xc; }

typedef char RecoveredGlobal_801D2CF4_lbl_804C43CC_size[sizeof(RecoveredGlobal_801D2CF4_lbl_804C43CC) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_801D2CF4_lbl_804C43D8_size[sizeof(RecoveredGlobal_801D2CF4_lbl_804C43D8) == 0x10 ? 1 : -1];
f32 TObjPlayer__sub_801D2CF4(M2C_UNK arg0, s32 arg1) {
    return M2C_FIELD(((u8 *)(&lbl_804C43CC.value) + (arg1 * 4)), f32 *, 0) * M2C_FIELD(((u8 *)(&lbl_804C43D8.value) + (TObjPlayer__sub_801D2EA8((u8 *)(arg0)) * 4)), f32 *, 0);
}

int on_attack_finished__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8012ADD4((char*)p + 0x30); }
int set_flag_1_at_c__10TObjPlayerFPv(void* p) { return set_flags__10TObjPlayerFPvUi((void*)((char*)p + 0xc), (int)(1)); }

void TObjPlayer__sub_801D2D94(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, s16 *, 0x12) + 1);
}

void set_action_type__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x1c) = v; }
s32 get_field_1c__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x1c); }

void TObjPlayer__sub_801D2DB4(u16 *arg0) {
    TObjPlayer__sub_801D2DDC((s32)((s8 *)arg0 + 4), (s32)(*arg0));
}

void TObjPlayer__sub_801D2DDC(s32 arg0, s32 arg1) {
    check_hit_by_id__10TObjPlayerFiii(arg0, arg1, 0xBB);
    check_hit_by_id__10TObjPlayerFiii(arg0, arg1, 0x1B7);
}

int TObjPlayer__sub_801D2E20(void *, void *, f32, f32) { return 0; }

void advance_and_clamp_state__10TObjPlayerFPv(void *arg0) {
    if ((M2C_FIELD(arg0, s16 *, 0x10) = M2C_FIELD(arg0, s16 *, 0x10) + 1) > 2) {
        TObjPlayer__sub_801D3424((void*)(arg0), (s16)(2));
    }
}

s16 TObjPlayer__sub_801D2EA8(u8 *arg0) {
    s16 var_r31;
    var_r31 = M2C_FIELD(arg0, s16 *, 0x10);
    if (TObjPlayer__sub_801D2EE8((s16)((void*)((int) (var_r31)))) == 0) {
        var_r31 = 0;
    }
    return var_r31;
}

s32 TObjPlayer__sub_801D2EE8(s16 arg0) {
    if ((arg0 < 0) || (arg0 >= 3)) {
        return 0;
    }
    return 1;
}

s16 TObjPlayer__sub_801D2F0C(void *arg0) {
    s16 var_r31;
    var_r31 = M2C_FIELD(arg0, s16 *, 2);
    if (TObjPlayer__sub_801D2F8C((s16)(var_r31)) == 0) {
        var_r31 = 0;
    }
    return var_r31;
}

s16 TObjPlayer__sub_801D2F4C(s16 *arg0) {
    s16 var_r31;
    var_r31 = *arg0;
    if (TObjPlayer__sub_801D2F8C((s16)((s16)((int) (var_r31)))) == 0) {
        var_r31 = 0;
    }
    return var_r31;
}

s32 TObjPlayer__sub_801D2F8C(s16 arg0) {
    if ((arg0 < 0) || (arg0 >= 3)) {
        return 0;
    }
    return 1;
}

s32 update_if_flag8_set__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8001BEF8((void*)(arg0 + 0xC), (int)(8)) != 0) {
        return tick_countdown_timer__10TObjPlayerFPv((u8 *)((u8 *)(arg0)));
    }
    return 0;
}

s32 tick_countdown_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) - 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    if (temp_r0 < 0) {
        set_flags__10TObjPlayerFPvUi((void*)(arg0 + 0xC), (int)(1));
        return 1;
    }
    return 0;
}

void apply_anim_action__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    set_flags__10TObjPlayerFPvUi((void*)((void *) (arg0 + 0xC)), (int)((int) (2)));
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) TObjPlayer__sub_801D9004((void *) (arg1));
    check_status_flag_128__10TObjPlayerFPv((void*)((void *) (arg1)));
}

extern const f32 lbl_805DC3BC;
extern const f32 lbl_805DC3C0;
extern const f32 lbl_805DC3C4;

void TObjPlayer__sub_801D31A8(u8 *arg0, M2C_UNK arg1, s16 arg2, s32 arg3) {
  s8 *new_var;
  TObjPlayer__sub_801D3424((void*)((void *) arg0), (s16)((void *) arg2));
  *((s32 *) (((s8 *) arg0) + 0x14)) = arg3;
  *((s16 *) (((s8 *) arg0) + 0x12)) = 0;
  new_var = (s8 *) arg0;
  *((s32 *) (((s8 *) arg0) + 0x18)) = 0;
  clear_flags__11TAdRicoRingFPvUi((void*)((void *) (arg0 + 0xC)), (int)((int) 0x1F));
  *((s32 *) (new_var + 0x1C)) = 6;
  *((f32 *) (new_var + 4)) = (f32) (*((f32 *) (((s8 *) arg0) + 8)));
  if ((s16) (*((s16 *) (((s8 *) arg0) + 0))))
  {
    *((f32 *) (((s8 *) arg0) + 4)) = (f32) ((*((f32 *) (new_var + 4))) * lbl_805DC3B8);
  }
}

void reset_movement_state__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_805DC3BC;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805DC3C0;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DC3BC;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DC3BC;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DC3C4;
    TObjPlayer__sub_801D2E20((void *)(arg0 + 0x30), (void *)(arg0), lbl_805DC3C0, lbl_805DC3BC);
}

s16 get_obj_id__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2); }
void TObjPlayer__sub_801D3424(void* p, s16 v) { *(s16*)((char*)p + 0x10) = v; }
int is_flag32_clear__10TObjPlayerFPv(void* p) { return (TObjPlayer__sub_8001BEF8((void*)((char*)p + 0xc), (int)(32))) == 0; }
int TObjPlayer__sub_801D345C(void* p) { return TObjPlayer__sub_80121248((char*)p + 0x30, 0); }
int get_field_340__10TObjPlayerFPv(void* p) { return set_action_palette_mode__10TObjPlayerFPv((char*)p + 0x340); }
int check_status_flag_128__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8011E204(p, 128); }
void handle_6x54(void) {  }
void handle_6x8C(void) {  }
void handle_6x65(void) {  }
void handle_6x8B(void) {  }
void handle_6x64(void) {  }

}
