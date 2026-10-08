#include "types.h"

typedef struct Owner_8022CDE8 {
    u8 pad0[0x424];
    u32 f424;
    u8 slots[0x10];
} Owner_8022CDE8;

typedef struct Cursor_8022CDE8 {
    u8 pad0[0x9C];
    u8 list[0x10];
} Cursor_8022CDE8;

struct Vec_8022D27C { f32 x, y, z; };

struct Target_8022D27C { u16 id; s16 part; };

struct Entry_8022D27C { u16 id; s16 part; f32 c; };

struct List_8022D27C { s32 count; Entry_8022D27C e[11]; };

struct Coll_8022D27C { u8 pad0[0x1C]; Vec_8022D27C pos; u8 pad28[0x2C - 0x28]; };

struct Ent_8022D27C { u8 pad0[0xA4]; Coll_8022D27C *colls; };

struct Player_8022D27C {
    u8 pad0[0x38];
    Vec_8022D27C pos;
    u8 pad44[0x60 - 0x44];
    s32 rotY;
    u8 pad64[0x428 - 0x64];
    u8 tech[1];
};

typedef struct Col_8022C738 { s32 w[4]; } Col_8022C738;

typedef struct Vec_8022C738 { f32 x, y, z; } Vec_8022C738;

typedef struct Params_8022C738 { u8 pad0[0x12]; s16 f12; u8 pad14[0x20 - 0x14]; s16 f20; } Params_8022C738;

typedef struct LightData_8022C738 { u8 pad0[0x1C]; f32 f1C; u8 pad20[4]; } LightData_8022C738;

extern "C" {
void reset_slots__10TObjPlayerFPv(void *);
Cursor_8022CDE8 *find_by_pos__11TMainCursorFiss(u32, int, s16);
void *TObjPlayer__sub_80116620(void *, int);
u16 get_type_id__10TObjPlayerFPv(void *);
s32 get_obj_id__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D9AD0(void *, int, u16, s32);
void set_tech_level__10TObjPlayerFPvs(void *, s16);
s32 get_target__13TLockOnCursorFPv(void *);
void capture_technique_targets__10TObjPlayerFv(int kind, Owner_8022CDE8 *owner);
void VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
s32 is_split_screen();
void TObjPlayer__sub_8004433C(void *);
Ent_8022D27C *find_entity_by_id(u16);
void get_hand_joint_position__10TObjPlayerFPvi(void *, void *);
Target_8022D27C *get_technique_data__10TObjPlayerFPv(void *);
s16 get_section_clamped__10TObjPlayerFPv(void *);
u8 get_cast_technique_level(void *, int);
s32 get_global_state__14TOKeyMachine01Fv();
void create__8TTecAntiFPvPvPvPv(void *, void *, void *, int);
void create__9TTecBartaFPvPvPvPv(void *, void *, void *, int);
void create_ex__9TTecBartaFPvPvPvPv(void *, void *, int, int);
void create__10TTecDebandFiiii(void *, void *, void *, int);
void create_ex__8TTecFoieFPvPvPvPv(void *, void *, void *, int);
void create__8TTecFoieFPvPvPvPv(void *, void *, int, int);
void create__11TTecGiBartaFPvPvPvPv(void *, void *, void *, int);
void create_ex__11TTecGiBartaFPvPvPvPv(void *, void *, int, int);
void create__10TTecGiFoieFPvPvPv(void *, void *, int);
void create__11TTecGiZondeFPvPvPvPv(void *, void *, void *, int);
void create__10TTecGrantsFPvPvPvPv(void *, void *, void *, int);
void create_tec_jelin__10TObjPlayerFPvPvPvPv(void *, void *, void *, int);
void create__9TTecLukerFPvPvPvPv(void *, void *, void *, int);
void create__9TTecMegidFiiii(void *, void *, void *, int);
void create_ex__9TTecMegidFiiii(void *, void *, int, int);
void create__11TTecRaBartaFPvPvPv(void *, void *, int);
void create_ex__10TTecRaFoieFPvPvPvPv(void *, void *, void *, int);
void create__11TTecRaZondeFPvPvPv(void *, void *, int);
void create__9TTecRestaFPvPvPvPv(void *, void *, void *, int);
void create__12TTecReverserFPvPvPvPv(void *, void *, void *, int);
void create_instance__9TTecSiftaFPvPvPvPv(void *, void *, void *, int);
void create_tec_zarua__10TObjPlayerFPvPvPvPv(void *, void *, void *, int);
void create_tec_zonde__10TObjPlayerFPvPvPvPv(void *, void *, void *, int);
void matrix_mult_vec(int, void *, void *);
void rotate_matrix_y(int, int);
void push_matrix_from(void *);
void pop_matrices(int);
extern u8 lbl_8058D490[];
extern s32 lbl_805D53A0;
extern const f32 lbl_805DC7D8;
extern const f32 lbl_805DC7E4;
void launch_technique__10TObjPlayerFv(s32 tech, s32 unused, Player_8022D27C *pl);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
void *__nw__7TObjectFUl(u32);
Params_8022C738 *get_technique_base_params(void);
void *TObjLight__sub_80235E9C(void *, Col_8022C738 *, Vec_8022C738 *, s32, void *, s32, f32, f32, f32);
void *initialize__9TObjLightFPvii(void *, void *, s32);
void *init__9TObjLightFPvii(void *, void *, s32);
void *init_from_owner__10TTecSlicerFPvii(void *, void *, s32);
void *construct_resta_charge_sound(void *, void *, s32);
void *init_6e6c__9TObjLightFPvii(void *, void *, s32);
void *init_from_source__9TObjLightFPvii(void *, void *, s32);
extern Col_8022C738 lbl_8044CF7C;
extern Vec_8022C738 lbl_8044CF8C;
extern Col_8022C738 lbl_8044CF98;
extern Vec_8022C738 lbl_8044CFA8;
extern Col_8022C738 lbl_8044CFB4;
extern Vec_8022C738 lbl_8044CFC4;
extern Col_8022C738 lbl_8044CFD0;
extern Vec_8022C738 lbl_8044CFE0;
extern Col_8022C738 lbl_8044CFEC;
extern Vec_8022C738 lbl_8044CFFC;
extern Col_8022C738 lbl_8044D008;
extern Vec_8022C738 lbl_8044D018;
extern Col_8022C738 lbl_8044D024;
extern Vec_8022C738 lbl_8044D034;
extern Col_8022C738 lbl_8044D040;
extern Vec_8022C738 lbl_8044D050;
extern Col_8022C738 lbl_8044D05C;
extern Vec_8022C738 lbl_8044D06C;
extern LightData_8022C738 TObjLight__data_80506320;
extern s32 tl_07;
extern const f32 lbl_805DC7DC;
extern const f32 lbl_805DC7E0;
void create_technique_charge_light(u32 kind, void *owner);
}

extern "C" {

s32 get_level_tier__10TObjPlayerFi(s32 arg0);

s32 get_level_tier__10TObjPlayerFi(s32 arg0) {
    s32 temp_r0;

    temp_r0 = arg0 / 5;
    switch (temp_r0) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    case 4:
        return 4;
    case 5:
        return 5;
    default:
        return 0;
    }
}
#define ONE_SLOT()                                                                       \
    if (get_type_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, 0)) != 0xFFFF) { \
        TObjPlayer__sub_801D9AD0(slots, 0,                                                \
            get_type_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, 0)),           \
            get_obj_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, 0)));           \
        set_tech_level__10TObjPlayerFPvs(slots, 1);                                      \
    }

#pragma push
#pragma opt_propagation off
#define CHARGE_LIGHT_8022C738(COL, VEC, INIT)                                                    \
    {                                                                                            \
        Col_8022C738 c = COL;                                                                    \
        Vec_8022C738 v = VEC;                                                                    \
        void *o = __nw__7TObjectFUl(100);                                                        \
        if (o != NULL) {                                                                         \
            ((void *(*)(f32, f32, f32, void *, Col_8022C738 *, Vec_8022C738 *, s32, void *, s32)) \
                 TObjLight__sub_80235E9C)(lbl_805DC7DC, lbl_805DC7E0, TObjLight__data_80506320.f1C, \
                                          o, &c, &v, base, owner, tl_07);                        \
        }                                                                                        \
        if (is_locally_controlled__10TObjPlayerFPv(owner) != 0) {                                \
            o = __nw__7TObjectFUl(0x34);                                                         \
            if (o != NULL) {                                                                     \
                INIT(o, owner, tl_07);                                                           \
            }                                                                                    \
        }                                                                                        \
    }
void create_technique_charge_light(u32 kind, void *owner) {
    Params_8022C738 *p = get_technique_base_params();
    s32 base = p->f12 + p->f20 + 50;
    switch (kind) {
    case 1:
        CHARGE_LIGHT_8022C738(lbl_8044CF7C, lbl_8044CF8C, initialize__9TObjLightFPvii)
        break;
    case 0:
    case 2:
        CHARGE_LIGHT_8022C738(lbl_8044CF98, lbl_8044CFA8, initialize__9TObjLightFPvii)
        break;
    case 3:
    case 4:
        CHARGE_LIGHT_8022C738(lbl_8044CFB4, lbl_8044CFC4, init__9TObjLightFPvii)
        break;
    case 5:
        CHARGE_LIGHT_8022C738(lbl_8044CFD0, lbl_8044CFE0, init__9TObjLightFPvii)
        break;
    case 6:
    case 7:
    case 8:
        CHARGE_LIGHT_8022C738(lbl_8044CFEC, lbl_8044CFFC, init_from_owner__10TTecSlicerFPvii)
        break;
    case 9:
    case 15:
    case 16:
    case 17:
        CHARGE_LIGHT_8022C738(lbl_8044D008, lbl_8044D018, construct_resta_charge_sound)
        break;
    case 10:
    case 11:
    case 12:
    case 14:
        CHARGE_LIGHT_8022C738(lbl_8044D024, lbl_8044D034, init_6e6c__9TObjLightFPvii)
        break;
    case 13:
        CHARGE_LIGHT_8022C738(lbl_8044D040, lbl_8044D050, init_6e6c__9TObjLightFPvii)
        break;
    case 18:
        CHARGE_LIGHT_8022C738(lbl_8044D05C, lbl_8044D06C, init_from_source__9TObjLightFPvii)
        break;
    }
}
#pragma pop

void capture_technique_targets__10TObjPlayerFv(int kind, Owner_8022CDE8 *owner) {
    Cursor_8022CDE8 *c;
    void *slots;
    if (owner == NULL) {
        return;
    }
    if (owner->f424 == 0) {
        return;
    }
    slots = owner->slots;
    if (slots == NULL) {
        return;
    }
    reset_slots__10TObjPlayerFPv(owner->slots);
    c = find_by_pos__11TMainCursorFiss(owner->f424, 3, kind);
    if (c == NULL) {
        return;
    }
    switch (kind) {
    case 0:
        ONE_SLOT();
        break;
    case 2:
        ONE_SLOT();
        break;
    case 3:
        ONE_SLOT();
        break;
    case 4:
        ONE_SLOT();
        break;
    case 6:
        ONE_SLOT();
        break;
    case 7: {
        int n = 0;
        int i;
        for (i = 0; i < get_target__13TLockOnCursorFPv(c->list); i++) {
            if (get_type_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, n)) != 0xFFFF) {
                TObjPlayer__sub_801D9AD0(slots, n,
                    get_type_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, n)),
                    get_obj_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, n)));
                n++;
            }
        }
        set_tech_level__10TObjPlayerFPvs(slots, n);
        break;
    }
    case 9:
        ONE_SLOT();
        break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 15:
    case 16: {
        int i;
        int n = 0;
        for (i = 0; i < get_target__13TLockOnCursorFPv(c->list); i++) {
            TObjPlayer__sub_801D9AD0(slots, n,
                get_type_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, n)),
                get_obj_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, n)));
            n++;
        }
        set_tech_level__10TObjPlayerFPvs(slots, n);
        break;
    }
    case 17:
        ONE_SLOT();
        break;
    case 18:
        ONE_SLOT();
        break;
    }
}
#define COLLECT_8022D27C()                                              \
    list.count = 0;                                                     \
    for (i = 0; i < n; i++) {                                           \
        if (targets == NULL || targets->id == 0xFFFF) {                 \
            break;                                                      \
        }                                                               \
        list.e[i].id = targets->id;                                     \
        list.e[i].part = targets->part;                                 \
        targets++;                                                      \
    }                                                                   \
    list.count = n;
#define AIM_8022D27C()                                                  \
    if (targets->id == 0xFFFF) {                                        \
        return;                                                         \
    }                                                                   \
    ent = find_entity_by_id(targets->id);                               \
    if (ent == NULL) {                                                  \
        return;                                                         \
    }                                                                   \
    if (ent->colls == NULL) {                                           \
        return;                                                         \
    }                                                                   \
    VecCopy__FP3VecPC3Vec(&aim, &ent->colls[targets->part].pos);
void launch_technique__10TObjPlayerFv(s32 tech, s32 unused, Player_8022D27C *pl) {
    Vec_8022D27C aim;
    Vec_8022D27C hand;
    Vec_8022D27C ofs;
    List_8022D27C list;
    void *td;
    s32 n;
    Target_8022D27C *targets;
    s32 i;
    Ent_8022D27C *ent;
    TObjPlayer__sub_8004433C(&list);
    ofs.x = lbl_805DC7D8;
    ofs.y = lbl_805DC7D8;
    ofs.z = lbl_805DC7E4;
    if (pl == NULL) {
        return;
    }
    if (get_global_state__14TOKeyMachine01Fv() == 0 || get_global_state__14TOKeyMachine01Fv() == 18 ||
        get_global_state__14TOKeyMachine01Fv() == 15) {
        switch (tech) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 18:
            return;
        }
    }
    td = pl->tech;
    targets = get_technique_data__10TObjPlayerFPv(td);
    if (targets == NULL) {
        return;
    }
    n = get_section_clamped__10TObjPlayerFPv(td);
    push_matrix_from(lbl_8058D490);
    rotate_matrix_y(0, pl->rotY);
    matrix_mult_vec(0, &ofs, &ofs);
    pop_matrices(1);
    ofs.x += pl->pos.x;
    ofs.y += pl->pos.y;
    ofs.z += pl->pos.z;
    get_hand_joint_position__10TObjPlayerFPvi(pl, &hand);
    switch (tech) {
    case 0:
        if (n != 0) {
            AIM_8022D27C()
            create_ex__8TTecFoieFPvPvPvPv(pl, &hand, &aim, get_cast_technique_level(td, 0));
        } else {
            create__8TTecFoieFPvPvPvPv(pl, &hand, pl->rotY, get_cast_technique_level(td, 0));
        }
        break;
    case 1:
        create__10TTecGiFoieFPvPvPv(pl, &hand, get_cast_technique_level(td, 1));
        break;
    case 2:
        COLLECT_8022D27C()
        if (n == 0) {
            return;
        }
        create_ex__10TTecRaFoieFPvPvPvPv(pl, &hand, &list, get_cast_technique_level(td, 2));
        break;
    case 3:
        if (n != 0) {
            AIM_8022D27C()
            create__9TTecBartaFPvPvPvPv(pl, &pl->pos, &aim, get_cast_technique_level(td, 3));
        } else {
            create_ex__9TTecBartaFPvPvPvPv(pl, &pl->pos, pl->rotY, get_cast_technique_level(td, 3));
        }
        break;
    case 4:
        if (n != 0) {
            AIM_8022D27C()
            create__11TTecGiBartaFPvPvPvPv(pl, &hand, &aim, get_cast_technique_level(td, 4));
        } else {
            create_ex__11TTecGiBartaFPvPvPvPv(pl, &hand, pl->rotY, get_cast_technique_level(td, 4));
        }
        break;
    case 5:
        create__11TTecRaBartaFPvPvPv(pl, &hand, get_cast_technique_level(td, 5));
        break;
    case 6:
        COLLECT_8022D27C()
        if (n == 0) {
            return;
        }
        create_tec_zonde__10TObjPlayerFPvPvPvPv(pl, &hand, &list, get_cast_technique_level(td, 6));
        break;
    case 7:
        COLLECT_8022D27C()
        if (n == 0) {
            return;
        }
        create__11TTecGiZondeFPvPvPvPv(pl, &hand, &list, get_cast_technique_level(td, 7));
        break;
    case 8:
        create__11TTecRaZondeFPvPvPv(pl, &hand, get_cast_technique_level(td, 8));
        break;
    case 9:
        COLLECT_8022D27C()
        if (n == 0) {
            return;
        }
        create__10TTecGrantsFPvPvPvPv(pl, &hand, &list, get_cast_technique_level(td, 9));
        break;
    case 10:
        COLLECT_8022D27C()
        create__10TTecDebandFiiii(pl, &hand, &list, get_cast_technique_level(td, 10));
        break;
    case 11:
        COLLECT_8022D27C()
        create_tec_jelin__10TObjPlayerFPvPvPvPv(pl, &hand, &list, get_cast_technique_level(td, 11));
        break;
    case 12:
        COLLECT_8022D27C()
        create_tec_zarua__10TObjPlayerFPvPvPvPv(pl, &hand, &list, get_cast_technique_level(td, 12));
        break;
    case 13:
        COLLECT_8022D27C()
        create_instance__9TTecSiftaFPvPvPvPv(pl, &hand, &list, get_cast_technique_level(td, 13));
        break;
    case 14:
        if (is_split_screen() != 0) {
            create__9TTecLukerFPvPvPvPv(pl, &hand, &ofs, 0);
        } else if (lbl_805D53A0 == obj_getField1c(pl)) {
            create__9TTecLukerFPvPvPvPv(pl, &hand, &ofs, 0);
        }
        break;
    case 15:
        COLLECT_8022D27C()
        create__9TTecRestaFPvPvPvPv(pl, &hand, &list, get_cast_technique_level(td, 15));
        break;
    case 16:
        COLLECT_8022D27C()
        create__8TTecAntiFPvPvPvPv(pl, &hand, &list, get_cast_technique_level(td, 16));
        break;
    case 17:
        COLLECT_8022D27C()
        if (n == 0) {
            return;
        }
        create__12TTecReverserFPvPvPvPv(pl, &hand, &list, get_cast_technique_level(td, 17));
        break;
    case 18:
        if (n != 0) {
            AIM_8022D27C()
            create__9TTecMegidFiiii(pl, &hand, &aim, get_cast_technique_level(td, 18));
        } else {
            create_ex__9TTecMegidFiiii(pl, &hand, pl->rotY, get_cast_technique_level(td, 18));
        }
        break;
    }
}

}
