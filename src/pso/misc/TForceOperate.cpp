#include "types.h"
extern "C" {
__declspec(section ".sdata2") extern const f32 lbl_805DC320[1] = { 1.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DC324[1] = { 3.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DC328[1] = { -4.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DC32C[1] = { 0.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DC330[1] = { 0.1f };
}
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801C57D0 { char pad[0x18]; };
struct VObj_801C57D0 : Base_801C57D0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11(s32);
};

struct VBase_18_f1aa6a { char pad[0x18]; };

struct VObj_18_f1aa6a : VBase_18_f1aa6a {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63(s32, void *);
};

struct Actor_801C58CC : VObj_18_f1aa6a {
    u8 pad1C[0x20];
    f32 f3c;
};

typedef struct Out_801C58CC {
    u8 pad0[4];
    f32 v;
} Out_801C58CC;

extern "C" {
void calc_death_pose_height_offset(Out_801C58CC *arg0, Actor_801C58CC *arg1);
s32 obj_testFlags30(int, int);
s32 is_inactive__10TObjPlayerFPv();
M2C_UNK spawn_appearance_effect__10TObjPlayerFi(int);
s32 get_mode__11TCameraCtrlFv();
s32 is_on_current_floor__10TObjPlayerFi(int);
M2C_UNK refresh_equipment_slot__10TObjPlayerFv(int);
M2C_UNK activate_body_collision__10TObjPlayerFPv(int);
s32 check_flag_40000__10TObjPlayerFPv(int);
u8 *get_player_by_client_id(u16);
M2C_UNK set_flag_2000000_alt__10TObjPlayerFPv();
s32 check_flag_04000000__10TObjPlayerFPv(int);
void update_player_appear_fade(u8 *arg0);
}

extern "C" {

struct VOff_801C5870_arg0_801C57D0 { char pad_0[0x1C]; char f_1C[1]; };

void *TForceOperate__ct(void *arg0, void *arg1, void *arg2);
void calc_death_sink_offset(void *arg0);
void run_task__13TForceOperateFv(s32 arg0);
s32 has_action_palette_entry__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C6DAC(s32);
void *find_entity_by_id();
void __ct__7TObjectFP7TObject(void *);
void fn_8013E020(void *);
M2C_UNK get_id__11TMainCursorFPv(s32);
void *get_state__11TMainCursorFPv(s32);
s32 is_target_valid__10TObjPlayerFPv();
s32 obj_getField1c(void *);
M2C_UNK queue_destruction__7TObjectFv(s32);
void set_field_0__13TForceOperateFPvs(void *, void *);

void run_task__13TForceOperateFv(s32 arg0) {
    void *temp_r31;
    void *temp_r3;

    if (TObjPlayer__sub_801C6DAC(arg0 + 0x1C) != 0) {
        temp_r31 = get_state__11TMainCursorFPv(arg0 + 0x1C);
        if ((is_target_valid__10TObjPlayerFPv() != 0) && (has_action_palette_entry__10TObjPlayerFPv(temp_r31) != 0)) {
            get_id__11TMainCursorFPv(M2C_FIELD(temp_r31, s32 *, 0x424) + 0x4F8);
            temp_r3 = find_entity_by_id();
            if (temp_r3 != NULL) {
                ((VObj_801C57D0 *)temp_r3)->m11(obj_getField1c(temp_r31));
                queue_destruction__7TObjectFv(arg0);
            }
        }
    }
}

extern M2C_UNK __vt__13TForceOperate[];
extern void *lbl_805D3560;

void *TForceOperate__ct(void *arg0, void *arg1, void *arg2) {
    struct VOff_801C5870_arg0_801C57D0 *self = (struct VOff_801C5870_arg0_801C57D0 *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TForceOperate;
    fn_8013E020(self->f_1C);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3560;
    set_field_0__13TForceOperateFPvs(self->f_1C, arg2);
    return arg0;
}

#pragma push
#pragma opt_common_subs off
void calc_death_pose_height_offset(Out_801C58CC *arg0, Actor_801C58CC *arg1) {
    f32 sp[4];
    arg1->m63(1, sp);
    arg0->v = (lbl_805DC320[0] + arg1->f3c) - sp[1];
    if (arg0->v > lbl_805DC324[0]) {
        arg0->v = lbl_805DC324[0];
    }
    if (arg0->v < lbl_805DC328[0]) {
        arg0->v = lbl_805DC328[0];
    }
}
#pragma pop

void calc_death_sink_offset(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg0, f32 *, 8));
}
#pragma push
#pragma opt_common_subs off
void update_player_appear_fade(u8 *arg0) {
    f32 var_f31;
    s16 temp_r3_2;
    s32 temp_r0;
    u8 *temp_r3;
    temp_r3 = (u8 *)(get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0)));
    if (temp_r3 != NULL) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 4);
        switch (temp_r0) {
        case 2:
        default:
            break;
        case 0:
            if ((is_inactive__10TObjPlayerFPv() != 0) && (check_flag_40000__10TObjPlayerFPv((int) (temp_r3)) == 0) && (check_flag_04000000__10TObjPlayerFPv((int) (temp_r3)) != 0) && (is_on_current_floor__10TObjPlayerFi((int) (temp_r3)) != 0)) {
                if (--M2C_FIELD(arg0, s16 *, 2) < 0) {
                    if (get_mode__11TCameraCtrlFv() != 0) {
                        M2C_FIELD(temp_r3, f32 *, 0x624) = (f32) lbl_805DC320[0];
                        M2C_FIELD(arg0, s32 *, 4) = 2;
                        return;
                    }
                    M2C_FIELD(arg0, s32 *, 4) = 1;
                    activate_body_collision__10TObjPlayerFPv((int) (temp_r3));
                    if (obj_testFlags30((int) (temp_r3), (int) (0x800)) == 0) {
                        spawn_appearance_effect__10TObjPlayerFi((int) (M2C_FIELD(arg0, u16 *, 0)));
                    }
                    M2C_FIELD(temp_r3, f32 *, 0x624) = (f32) lbl_805DC32C[0];
                    refresh_equipment_slot__10TObjPlayerFv((int) (temp_r3));
                    return;
                }
            }
            break;
        case 1:
            var_f31 = M2C_FIELD(temp_r3, f32 *, 0x624);
            var_f31 += lbl_805DC330[0];
            if (var_f31 >= lbl_805DC320[0]) {
                var_f31 = lbl_805DC320[0];
                M2C_FIELD(arg0, s32 *, 4) = 2;
                set_flag_2000000_alt__10TObjPlayerFPv();
                activate_body_collision__10TObjPlayerFPv((int) (temp_r3));
            }
            M2C_FIELD(temp_r3, f32 *, 0x624) = var_f31;
            break;
        }
    }
}
#pragma pop

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801C5B68_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Obj_801C5C38 { u8 pad[4]; s32 n; };

extern "C" {
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
extern RecoveredGlobal_801C5B68_lbl_8058D4C0 model_material_color;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
void save_render_material_state(u8 *arg0);
s32 tick_battle_music_timer(Obj_801C5C38 *p);
}

extern "C" {

void reset_player_appearance_opacity(void* a0);
void clear_target_lock__10TObjPlayerFPv(void* p);
void enter_battle_state__10TObjPlayerFPv(void *arg0);
void reset_ring__10TObjPlayerFPv(void* p);
void set_vec4_const__10TObjPlayerFPv(void* a0);
void update_target_lock__10TObjPlayerFii(s32 arg0, s32 arg1);
void write_ids__10TObjPlayerFPv(void* p);
s32 get_current_floor();
M2C_UNK deactivate_body_collision__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801C6F90();
int set_chunk_material_color(void*);
int clear_flags__11TAdRicoRingFPvUi(void*, void*);
M2C_UNK clear_target_lock_flag__10TObjPlayerFPv(s32);
s32 fn_801C6F2C(void *);
s32 is_room_free_of_active_enemies(s32, s32);
s32 get_stat_by_key_state__10TObjPlayerFPv(s32);
int set_flags__10TObjPlayerFPvUi(void*, void*);
int set_chunk_material_override_pair(void*, void*);
s32 set_lock_flag__10TObjPlayerFPv(s32);
int set_lock_timer__10TObjPlayerFPvi(void*, void*);
int set_some_id__FUl(void*);
int set_target_id__6TLobbyFi(void*);

void enter_battle_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = ((s32 (*)(u16))get_player_by_client_id)(M2C_FIELD(arg0, u16 *, 0));
    if ((temp_r3 != 0) && (fn_801C6F2C(arg0) == 0)) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        deactivate_body_collision__10TObjPlayerFPv(temp_r3);
        M2C_FIELD(arg0, s16 *, 2) = 4;
    }
}

void reset_player_appearance_opacity(void* a0) { *(float*)((char*)a0 + 0x1c) = lbl_805DC320[0]; }

void write_ids__10TObjPlayerFPv(void* p) { set_some_id__FUl(*(void**)((char*)p + 0x0)); set_chunk_material_override_pair(*(void**)((char*)p + 0x4), *(void**)((char*)p + 0x8)); set_chunk_material_color((char*)p + 0xc); }

typedef char RecoveredGlobal_801C5B68_lbl_8058D4C0_size[sizeof(RecoveredGlobal_801C5B68_lbl_8058D4C0) == 0x10 ? 1 : -1];
void save_render_material_state(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) model_render_flags;
    M2C_FIELD(arg0, s32 *, 4) = (s32) chunk_polygon_flags_and_mask;
    M2C_FIELD(arg0, s32 *, 8) = (s32) chunk_polygon_flags_or_mask;
    copy_vec4__13TRaderMapCoreFPvPv((void *) (arg0 + 0xC), (void *) (&model_material_color.value));
}

void set_vec4_const__10TObjPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x1c) = lbl_805DC320[0]; *(float*)((char*)a0 + 0x20) = lbl_805DC320[0]; *(float*)((char*)a0 + 0x24) = lbl_805DC320[0]; *(float*)((char*)a0 + 0x28) = lbl_805DC320[0]; }

void reset_ring__10TObjPlayerFPv(void* p) { clear_flags__11TAdRicoRingFPvUi(p, (void*)1); set_lock_timer__10TObjPlayerFPvi((void*)(p), (void*)((void*)-1)); set_target_id__6TLobbyFi((void*)0); }

void clear_target_lock__10TObjPlayerFPv(void* p) { set_flags__10TObjPlayerFPvUi(p, (void*)1); set_target_id__6TLobbyFi((void*)1); }

s32 tick_battle_music_timer(Obj_801C5C38 *p) {
    if (p->n < 0) {
        return 1;
    }
    return --p->n < 0 ? 0 : 1;
}

void update_target_lock__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 temp_r31;

    if (TObjPlayer__sub_801C6F90() == 0) {
        temp_r31 = get_stat_by_key_state__10TObjPlayerFPv(arg1);
        if (is_room_free_of_active_enemies(get_current_floor(), temp_r31) != 0) {
            if (set_lock_flag__10TObjPlayerFPv(arg0) != 0) {
                clear_target_lock_flag__10TObjPlayerFPv(arg0);
                set_lock_timer__10TObjPlayerFPvi((void*)(arg0), (void*)(0x5A));
                return;
            }
            if (tick_battle_music_timer((Obj_801C5C38 *)(arg0)) == 0) {
                reset_ring__10TObjPlayerFPv((void*)(arg0));
            }
        } else if (set_lock_flag__10TObjPlayerFPv(arg0) == 0) {
            clear_target_lock__10TObjPlayerFPv((void*)(arg0));
        }
    }
}

}
