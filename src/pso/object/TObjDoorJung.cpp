#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_4a4f5b { char pad[0x18]; };

struct VObj_18_4a4f5b : VBase_18_4a4f5b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
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
    virtual M2C_UNK m17();
};

struct RecoveredGlobal_8018F9CC_lbl_804B788C {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8018F9CC___vt__12TObjDoorJung {
    M2C_UNK value;
    u8 remaining[0x54];
};

struct VBase_8018F644 { char pad[0x18]; };
struct VObj_8018F644 : VBase_8018F644 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Jung_8018F808 { u8 pad0[0xC8]; s32 fC8; u8 padCC[4]; u32 fD0; s32 fD4; };

extern "C" {
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base(void *);
void clamp_state__12TObjDoorJungFPv(void *arg0);
extern RecoveredGlobal_8018F9CC_lbl_804B788C TObjDoorJung__collision_desc;
extern M2C_UNK __vt__12TObjDoorJung[];
extern s32 lbl_805D333C;
u8 *TObjDoorJung__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(M2C_UNK, M2C_UNK, M2C_UNK);
void set_indexed_flags(void *, int, int);
u8 is_current_floor_switch_set(int);
void TObjDoorJung__vt12(Jung_8018F808 *arg0);
struct Node_8018F4AC;
Node_8018F4AC *get_bml_model(void *, int);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(s32, u16);
void offset_position__6TSceneFPvii(void *, int, int);
void PPCSync();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK draw_ginja_object(void *);
extern s32 TObjDoorJung__child_table[];
extern s32 lbl_805D53A4;
extern void *TObjDoorJung__data_805D5BD0;
extern s32 lbl_805D5BD4;
extern s32 lbl_805D5BD8;
extern s32 lbl_805D5BDC;
extern void *TObjDoorJung__data_805D5BE0;
extern s32 lbl_805D5BE4;
extern s32 lbl_805D5BE8;
extern s32 lbl_805D5BEC;
extern s32 lbl_805D5BF0;
extern const f32 lbl_805DBDF8;
extern const f32 lbl_805DBDFC;

}

extern "C" {

struct Base_8018F458 { char pad[0x18]; };
struct VObj_8018F458 : Base_8018F458 {
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
};

void *__dt__12TObjDoorJungFv(void *arg0, s16 arg1);
void clamp_state__12TObjDoorJungFPv(void *arg0);
void free_buffers__12TObjDoorJungFv(void);
void run_task__12TObjDoorJungFv(u8 *arg0);
M2C_UNK TLobby__sub_8001FE7C(void *, s16);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK minimap_render_gate(void *, M2C_UNK, u16, M2C_UNK, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
M2C_UNK destroy_buffers__6TSceneFPvs(void *, s16);

extern void *TObjDoorJung__data_805D5BD0;
extern void *TObjDoorJung__data_805D5BE0;

void free_buffers__12TObjDoorJungFv(void) {
    if (TObjDoorJung__data_805D5BE0 != NULL) {
        destroy_buffers__6TSceneFPvs(TObjDoorJung__data_805D5BE0, 1);
        TObjDoorJung__data_805D5BE0 = NULL;
    }
    if (TObjDoorJung__data_805D5BD0 != NULL) {
        TLobby__sub_8001FE7C(TObjDoorJung__data_805D5BD0, 1);
        TObjDoorJung__data_805D5BD0 = NULL;
    }
}

void clamp_state__12TObjDoorJungFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) < 0) {
        M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) > 4) {
        M2C_FIELD(arg0, s32 *, 0xD4) = 4;
    }
}

void render__12TObjDoorJungFv(u8 *arg0) {
    s32 i;
    s32 j;

    if (((VObj_8018F644 *)arg0)->m8(lbl_805DBDF8, lbl_805DBDFC) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
            if (lbl_805D5BF0 >= 0) {
                free_children__12TObjDoorJungFPvPv(lbl_805D5BD8, lbl_805D5BF0);
            }
        } else if (lbl_805D5BEC >= 0) {
            free_children__12TObjDoorJungFPvPv(lbl_805D5BD8, lbl_805D5BEC);
        }
        if (lbl_805D53A4 != lbl_805D5BDC) {
            if (TObjDoorJung__data_805D5BE0 != NULL) {
                offset_position__6TSceneFPvii(TObjDoorJung__data_805D5BE0, 0, -0xA);
            }
            lbl_805D5BDC = lbl_805D53A4;
            PPCSync();
        }
        for (i = 0; i < M2C_FIELD(arg0, s32 *, 0xD4); i++) {
            if (is_current_floor_switch_set((u16)(M2C_FIELD(arg0, s32 *, 0xC8) + i)) == 1) {
                if (lbl_805D5BE8 >= 0) {
                    free_children__12TObjDoorJungFPvPv(TObjDoorJung__child_table[i], lbl_805D5BE8);
                }
            } else if (lbl_805D5BE4 >= 0) {
                free_children__12TObjDoorJungFPvPv(TObjDoorJung__child_table[i], lbl_805D5BE4);
            }
        }
        for (j = M2C_FIELD(arg0, s32 *, 0xD4); j < 4; j++) {
            if (lbl_805D5BE8 >= 0) {
                free_children__12TObjDoorJungFPvPv(TObjDoorJung__child_table[j], lbl_805D5BE8);
            }
        }
        set_global_param__8TObjFishFi((void *)lbl_805D5BD4);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        draw_ginja_object(get_bml_model(TObjDoorJung__data_805D5BD0, 0));
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_object(get_bml_model(TObjDoorJung__data_805D5BD0, 1));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

extern s32 lbl_805D58F8;

void TObjDoorJung__vt12(Jung_8018F808 *arg0) {
    s32 ok = 1;
    s32 i = 0;
    while (i < arg0->fD4) {
        s32 t = is_current_floor_switch_set((u16)(arg0->fC8 + i)) - 1;
        i++;
        ok = (t == 0) ? (ok & 1) : 0;
    }
    if (ok != 0) {
        arg0->fD0 |= 1;
        set_indexed_flags(arg0, 0, 8);
        return;
    }
    arg0->fD0 &= ~1;
    clear_player_status_flag__10TObjPlayerFPviUi((M2C_UNK)(arg0), (M2C_UNK)(0), (M2C_UNK)(8));
}

void run_task__12TObjDoorJungFv(u8 *arg0) {
    if ((s32) lbl_805D58F8 != 0) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFFFFFFE);
        clear_player_status_flag__10TObjPlayerFPviUi((M2C_UNK)arg0, 0, 8);
    } else {
        ((VObj_8018F458 *)arg0)->m12();
    }
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
        minimap_render_gate(arg0 + 0x38, 0xFF00FF00, (u16) M2C_FIELD(arg0, s32 *, 0x60), 0, 0);
        return;
    }
    minimap_render_gate(arg0 + 0x38, 0xFFFF0000, (u16) M2C_FIELD(arg0, s32 *, 0x60), 0, 0);
}

extern M2C_UNK __vt__12TObjDoorJung[];

void *__dt__12TObjDoorJungFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjDoorJung;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8018F9CC_lbl_804B788C_size[sizeof(RecoveredGlobal_8018F9CC_lbl_804B788C) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8018F9CC___vt__12TObjDoorJung_size[sizeof(RecoveredGlobal_8018F9CC___vt__12TObjDoorJung) == 0x58 ? 1 : -1];
u8 *TObjDoorJung__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8018F9CC___vt__12TObjDoorJung *)&__vt__12TObjDoorJung).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D333C;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    init_collision_body_parts((void *) (arg0), (void *) (&TObjDoorJung__collision_desc.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    ((VObj_18_4a4f5b *)(arg0))->m17();
    clamp_state__12TObjDoorJungFPv((void *) (arg0));
    return arg0;
}

}
