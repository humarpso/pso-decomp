#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
extern "C" {
s16 get_model_field_m25__10TObjPlayerFPv(void *);
s16 get_action_animation__10TObjPlayerFPv(void *);
s16 call_model_m24__10TObjPlayerFPv(void *);
s16 get_weapon_stat_c__10TObjPlayerFPv(void *);
s16 call_obj_vt26__10TObjPlayerFPv(void *);
s16 query_child_state__10TObjPlayerFPv(void *);
s16 query_equip__10TObjPlayerFPv(void *);
s16 get_status__10TObjPlayerFPv(void *);
s16 get_model_state__10TObjPlayerFPv(void *);
s16 get_state__10TObjPlayerFPv(void *);
s16 call_subobject_m15__10TObjPlayerFPv(void *);
s16 get_vobj_state_28__10TObjPlayerFPv(void *);
s16 TObjPlayer__sub_801CFBFC(void *);
s16 get_idle_animation__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801B18C0(s32 arg0, u32 arg1);
extern M2C_UNK lbl_8050EA10[];
void TObjPlayer__sub_801B1A84(void (*arg0)(void *));
}

extern "C" {

void* draw_font__10TObjPlayerFPv(void* p);
void foreach_player__10TObjPlayerFv(M2C_UNK (*arg0)(u32));
int get_field_828__10TObjPlayerFPv(void* p);
void notify_field1c__10TObjPlayerFi(s32 arg0);
void play_phase_transition_sound__10TObjPlayerFi(s32 arg0);
void reset_volopt_state__10TObjPlayerFv(void);
void unequip_by_field326__10TObjPlayerFPv(void *arg0);
s32 TFontSmallLobby__sub_801AFEE0();
int TFontSmallLobby__sub_801C0228(void*);
s32 draw_chunk_object(s32);
s32 is_locally_controlled__10TObjPlayerFPv(u32);
int is_item_area_enabled(void);
M2C_UNK fn_801C05A0(M2C_UNK *);
M2C_UNK fn_801C05B4(M2C_UNK *);
int get_field_3e0__12TBoss3VoloptFPv(void);
s32 get_main_phase();
int get_type__10TObjPlayerFPv(void*);
s16 obj_getField1c(s32);
s32 obj_isState2_324();

void* draw_font__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void notify_field1c__10TObjPlayerFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        fn_801C05A0((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        fn_801C05B4((M2C_UNK *)&sp8);
    }
}
int get_field_828__10TObjPlayerFPv(void* p) { return get_type__10TObjPlayerFPv((char*)p + 0x828); }

void TObjPlayer__sub_801B18C0(s32 arg0, u32 arg1) {
    switch (arg1) {
    default:
        get_idle_animation__10TObjPlayerFPv((void *) (arg0));
        return;
    case 2:
    case 3:
        TObjPlayer__sub_801CFBFC((void *) (arg0));
        return;
    case 4:
        get_vobj_state_28__10TObjPlayerFPv((void *) (arg0));
        return;
    case 5:
        call_subobject_m15__10TObjPlayerFPv((void *) (arg0));
        return;
    case 6:
        get_state__10TObjPlayerFPv((void *) (arg0));
        return;
    case 7:
        get_model_state__10TObjPlayerFPv((void *) (arg0));
        return;
    case 8:
        get_status__10TObjPlayerFPv((void *) (arg0));
        return;
    case 9:
        query_equip__10TObjPlayerFPv((void *) (arg0));
        return;
    case 10:
        query_child_state__10TObjPlayerFPv((void *) (arg0));
        return;
    case 11:
        call_obj_vt26__10TObjPlayerFPv((void *) (arg0));
        return;
    case 12:
        get_weapon_stat_c__10TObjPlayerFPv((void *) (arg0));
        return;
    case 13:
        call_model_m24__10TObjPlayerFPv((void *) (arg0));
        return;
    case 14:
        get_action_animation__10TObjPlayerFPv((void *) (arg0));
        return;
    case 15:
        get_model_field_m25__10TObjPlayerFPv((void *) (arg0));
        return;
    }
}

void unequip_by_field326__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_801B18C0((s32)(arg0), (u32)(M2C_FIELD(arg0, s16 *, 0x326)));
}
void play_phase_transition_sound__10TObjPlayerFi(s32 arg0) {
    if (((get_main_phase() == 0xE) || (get_main_phase() == 0xF)) && (TFontSmallLobby__sub_801AFEE0() != 0)) {
        draw_chunk_object(arg0);
        return;
    }
    draw_chunk_object(arg0);
}
void reset_volopt_state__10TObjPlayerFv(void) { get_field_3e0__12TBoss3VoloptFPv(); is_item_area_enabled(); }

extern M2C_UNK lbl_8050EA10[];

void foreach_player__10TObjPlayerFv(M2C_UNK (*arg0)(u32)) {
    M2C_UNK (*var_r27)(u32);
    s32 var_r29;
    M2C_UNK *var_r30;
    s32 var_r31;
    u32 temp_r28;

    var_r27 = arg0;
    var_r29 = 0;
    var_r30 = lbl_8050EA10;
    var_r31 = 0;
    do {
        temp_r28 = var_r30[var_r31];
        if ((temp_r28 != 0U) && (is_locally_controlled__10TObjPlayerFPv(temp_r28) != 0)) {
            var_r27(temp_r28);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 < 0xC);
}
void TObjPlayer__sub_801B1A84(void (*arg0)(void *)) {
    s32 i;
    void **p;
    p = (void **)lbl_8050EA10;
    for (i = 0; i < 12; i++, p++) {
        if (*p != NULL) {
            arg0(*p);
        }
    }
}

}
