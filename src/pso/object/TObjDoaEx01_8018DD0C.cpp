#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct NjObj_8018DD0C {
    u32 evalflags;
    u32 model;
    f32 pos[3];
    s32 ang[3];
    f32 scl[3];
    NjObj_8018DD0C *child;
    NjObj_8018DD0C *sibling;
};

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D99F8(void *, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOSignCave03__sub_803DB510(int);
M2C_UNK set_chunk_material_color(void *);
extern u8 lbl_804A7418[];
extern s32 lbl_805D5660;
extern u8 *TObjDoaEx01__data_805D5BB4;
extern u8 *TObjDoaEx01__data_805D5BB8;
extern s32 some_id_805c6f74;
M2C_UNK TObjDoaEx01__sub_8018DD0C(void *arg0, s32 arg1);
s32 TObjFish__sub_8001ED9C(s32, M2C_UNK);
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK TObjDoaEx01__sub_8018DD0C(void *arg0, s32 arg1);
M2C_UNK free_children__12TObjDoorJungFPvPv(s32, M2C_UNK);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi();
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
extern s32 TObjDoaEx01__data_805D5BB0;
extern u8 *TObjDoaEx01__data_805D5BB4;
extern u8 *TObjDoaEx01__data_805D5BB8;
extern const f32 TObjDoaEx01__data_805DBDA0;
extern const f32 lbl_805DBDB4;
extern const f32 lbl_805DBDB8;
void TObjDoaEx01__sub_8018DEC8(u8 *arg0);
}

extern "C" {

void try_open__11TObjDoaEx01FPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK free_children__12TObjDoorJungFPvPv(s32, M2C_UNK);
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi();

struct TObjDoaEx01_base { char pad[0x18]; };
struct TObjDoaEx01_VObj : TObjDoaEx01_base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m8(f32, f32);
};
extern s32 TObjDoaEx01__data_805D5BB0;
extern u8 *TObjDoaEx01__data_805D5BB4;
extern u8 *TObjDoaEx01__data_805D5BB8;
extern const f32 lbl_805DBDB4;
extern const f32 lbl_805DBDB8;

M2C_UNK TObjDoaEx01__sub_8018DD0C(void *arg0, s32 arg1) {
    NjObj_8018DD0C *obj = (NjObj_8018DD0C *)arg1;
    u32 flags = obj->evalflags;
    TObjPlayer__sub_803D9B2C();
    if (!(flags & 1)) {
        TOHangerMachine01__sub_803D9C00(obj->pos);
    }
    if (!(flags & 2)) {
        TObjPlayer__sub_803D99F8(obj->ang, flags & 0x20);
    }
    if (!(flags & 4)) {
        TBoss7Tentacle__sub_803D9BA0(obj->scl);
    }
    if (!(flags & 8) && obj->model != 0) {
        if ((u8 *)obj == TObjDoaEx01__data_805D5BB4 || (u8 *)obj == TObjDoaEx01__data_805D5BB8) {
            begin_effect_render__13TParticleCtrlFv();
            lbl_805D5660 = some_id_805c6f74;
            some_id_805c6f74 = some_id_805c6f74 | 0x10;
            set_chunk_material_color((u8 *)arg0 + 0xD4);
            TOSignCave03__sub_803DB510(obj->model);
            set_chunk_material_color(lbl_804A7418);
            some_id_805c6f74 = lbl_805D5660;
            end_effect_render__13TParticleCtrlFv();
        } else {
            TOSignCave03__sub_803DB510(obj->model);
        }
    }
    if (obj->child != 0) {
        TObjDoaEx01__sub_8018DD0C(arg0, (s32)obj->child);
    }
    TObjPlayer__sub_803D9B78();
    if (obj->sibling != 0) {
        TObjDoaEx01__sub_8018DD0C(arg0, (s32)obj->sibling);
    }
}

void try_open__11TObjDoaEx01FPv(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = TObjFish__sub_8001EDC4(TObjDoaEx01__data_805D5BB0, 0);
    if (((TObjDoaEx01_VObj*)arg0)->m8(lbl_805DBDB4, lbl_805DBDB8) != 0) {
        free_children__12TObjDoorJungFPvPv(M2C_FIELD(TObjDoaEx01__data_805D5BB4, s32 *, 4), 1);
        free_children__12TObjDoorJungFPvPv(M2C_FIELD(TObjDoaEx01__data_805D5BB8, s32 *, 4), 1);
        TObjFish__sub_8001EDB0(TObjDoaEx01__data_805D5BB0, 0);
        set_global_param__8TObjFishFi();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjDoaEx01__sub_8018DD0C((void *)(arg0), (s32)(temp_r31));
        TObjPlayer__sub_803D9B78();
    }
}
void TObjDoaEx01__sub_8018DEC8(u8 *arg0) {
    f32 temp_f31;
    s32 temp_r31;
    s32 temp_r31_2;
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBDB4, lbl_805DBDB8) != 0) {
        free_children__12TObjDoorJungFPvPv((M2C_FIELD(TObjDoaEx01__data_805D5BB4, s32 *, 4)), (0));
        free_children__12TObjDoorJungFPvPv((M2C_FIELD(TObjDoaEx01__data_805D5BB8, s32 *, 4)), (0));
        temp_r31 = TObjFish__sub_8001EDC4((TObjDoaEx01__data_805D5BB0), (0));
        TObjFish__sub_8001EDB0((TObjDoaEx01__data_805D5BB0), (0));
        set_global_param__8TObjFishFi();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((0), (M2C_FIELD(arg0, s32 *, 0x60)));
        temp_f31 = M2C_FIELD(arg0, f32 *, 0xB0);
        if (temp_f31 > TObjDoaEx01__data_805DBDA0) {
            temp_r31 = TObjFish__sub_8001ED9C((TObjDoaEx01__data_805D5BB0), (0));
            TObjDoor__sub_803DC894(TObjFish__sub_8001EDC4((TObjDoaEx01__data_805D5BB0), (0)), temp_r31, temp_f31);
        } else {
            TObjDoaEx01__sub_8018DD0C(arg0, (temp_r31));
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
