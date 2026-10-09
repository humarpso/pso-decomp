#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Obj_8010A1D0 {
    u8 pad0[0x18];
    void *vt;
    s32 f_1C;
    s32 f_20;
    s32 f_24;
    s16 f_28;
    u8 f_2A;
    u8 pad2B;
    u32 f_2C;
};

struct Base_8010A26C { char pad[0x18]; };
struct VObj_8010A26C : Base_8010A26C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual M2C_UNK m63(M2C_UNK, M2C_UNK *);
};

extern "C" {
u32 get_item_ctrl__10TObjPlayerFv();
void __ct__7TObjectFP7TObject(void *, void *);
extern const s32 lbl_8043E280[];
extern const s32 lbl_8043E2A0[];
extern M2C_UNK lbl_8049F130[];
Obj_8010A1D0 *TObjPlayer__sub_8010A1D0(Obj_8010A1D0 *self, void *parent, s16 a, u8 b);
}

extern "C" {

s32 get_entity_id__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_8010A058(void* p);
void update_dropped_item__10TObjPlayerFPv(void *arg0);
void *TObjPlayer__sub_8010A178(void *arg0, s16 arg1);
M2C_UNK get_field_3e0__12TBoss3VoloptFPv();
M2C_UNK create_timed_particle_emitter(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK spawn_particle_effect(s32, s32);
u32 get_item_ctrl__10TObjPlayerFv();
s32 is_item_area_enabled();
VObj_8010A26C *get_player_by_client_id(u16);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s16 count_nearby_players_with_shield__10TObjPlayerFUsPv(u16, s8 *);
M2C_UNK init__9TItemDataFv(s8 *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void update_indicator_particle__10TObjPlayerFPv(void *arg0);
u32 create_particle_emitter(M2C_UNK *, M2C_UNK);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
u32 get_item_field_6__10TObjPlayerFPv(void *);
u8 get_field_ed__10TObjPlayerFPv();
s32 reset_key_machine_state__10TObjPlayerFv();
M2C_UNK clear_active_flag__13TParticleCtrlFPv(u32);
M2C_UNK enable__13TParticleCtrlFPv(u32);
M2C_UNK copy_pos__11TNowLoadingFPvPv(u32, M2C_UNK *);

s32 get_entity_id__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x24); }
s32 TObjPlayer__sub_8010A058(void* p) { return *(s32*)((char*)p + 0xf4); }

extern const f64 lbl_8043E2C0;
extern const f32 lbl_805DAB58;

struct TItemData8_8010a060 { s8 a; s8 b; u8 c; s8 pad[21]; };

void update_dropped_item__10TObjPlayerFPv(void *arg0) {
    struct TItemData8_8010a060 sp8;
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != get_item_ctrl__10TObjPlayerFv()) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if (lbl_805DAB58 == (f32) M2C_FIELD(arg0, s32 *, 0x1C)) {
        init__9TItemDataFv(&sp8.a);
        sp8.a = 1;
        sp8.b = 2;
        sp8.c = M2C_FIELD(arg0, u8 *, 0x2A);
        if ((count_nearby_players_with_shield__10TObjPlayerFUsPv(M2C_FIELD(arg0, u16 *, 0x28), &sp8.a) > 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x20) != -1)) {
            temp_r3 = (s32)get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x28));
            if (temp_r3 != 0) {
                get_field_3e0__12TBoss3VoloptFPv();
                if (is_item_area_enabled() == 1) {
                    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
                        create_timed_particle_emitter(temp_r3 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x20), 0, 0xA);
                    } else {
                        spawn_particle_effect(temp_r3 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x20));
                    }
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
}

extern M2C_UNK lbl_8049F130[];

void *TObjPlayer__sub_8010A178(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F130;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Obj_8010A1D0 *TObjPlayer__sub_8010A1D0(Obj_8010A1D0 *self, void *parent, s16 a, u8 b) {
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = lbl_8049F130;
    self->f_1C = 0;
    self->f_20 = lbl_8043E2A0[(b - 0x53) % 8];
    self->f_24 = lbl_8043E280[(b - 0x53) % 8];
    self->f_28 = a;
    self->f_2A = b;
    self->f_2C = get_item_ctrl__10TObjPlayerFv();
    return self;
}

void update_indicator_particle__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8[6];
    s32 temp_r3_2;
    u32 temp_r3_3;
    VObj_8010A26C *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != get_item_ctrl__10TObjPlayerFv()) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x24));
    if (temp_r3 != NULL) {
        temp_r3->m63(0x24, sp8);
        temp_r3_2 = get_current_floor();
        if (temp_r3_2 != (s32) M2C_FIELD(arg0, s32 *, 0x20)) {
            M2C_FIELD(arg0, s32 *, 0x20) = temp_r3_2;
            if ((reset_key_machine_state__10TObjPlayerFv() != 0) && (temp_r3_2 == get_field_3e4__10TObjPlayerFPv(temp_r3))) {
                M2C_FIELD(arg0, u32 *, 0x1C) = create_particle_emitter(sp8, 0x101);
            } else {
                M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
            }
        }
        temp_r3_3 = get_item_field_6__10TObjPlayerFPv(temp_r3);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
            s32 var_r30 = 0;
            if ((temp_r3_3 != 0U) && (get_field_ed__10TObjPlayerFPv() == 0x1A)) {
                var_r30 = 1;
            }
            if (var_r30 != 0) {
                clear_active_flag__13TParticleCtrlFPv(M2C_FIELD(arg0, u32 *, 0x1C));
            } else {
                enable__13TParticleCtrlFPv(M2C_FIELD(arg0, u32 *, 0x1C));
            }
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, u32 *, 0x1C), sp8);
        }
    } else {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
