#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK;
struct Vec_80158DCC { f32 x, y, z; };

struct Rot_80158DCC { s32 x, y, z; };

struct VBase_80158DCC { char pad[0x18]; };

struct VObj_80158DCC : VBase_80158DCC {
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

struct Rock_80158DCC : VObj_80158DCC {
    u8 pad1C[0x38 - 0x1C];
    Vec_80158DCC pos;
    u8 pad44[0x90 - 0x44];
    f32 f90;
    f32 f94;
    u8 pad98[4];
    s32 count;
    s32 *models;
    s32 *params;
    Vec_80158DCC *positions;
    u8 padAC[4];
    Rot_80158DCC *rots;
};

extern "C" {
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
void render__11TOBoss4RockFv(Rock_80158DCC *self);
}

extern "C" {

void *create__11TOBoss4RockFPv(void *arg0);
void *__dt__11TOBoss4RockFv(void *arg0, s16 arg1);
void *TOBoss4Rock__ct(void *, void *);
void free__11TOBoss4RockFUi(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TOBoss4Fv(void *, int);
void *__nw__7TObjectFUl(int);

void render__11TOBoss4RockFv(Rock_80158DCC *self) {
    s32 i;
    if (self->m8(self->f90, self->f94) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(&self->pos);
        for (i = 0; i < self->count; i++) {
            set_global_param__8TObjFishFi(self->params[i]);
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(&self->positions[i]);
            TObjBoss2Tunnel__sub_803D929C(0, self->rots[i].z);
            rotate_matrix_x(0, self->rots[i].x);
            rotate_matrix_y(0, self->rots[i].y);
            TObjBoss2Tunnel__sub_803DB470(self->models[i]);
            TObjPlayer__sub_803D9B78();
        }
        TObjPlayer__sub_803D9B78();
    }
}

void *create__11TOBoss4RockFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TOBoss4Rock__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__11TOBoss4Rock[];

void *__dt__11TOBoss4RockFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TOBoss4Rock;
        if (M2C_FIELD(arg0, void **, 0xA0) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xA0)); }
        if (M2C_FIELD(arg0, void **, 0xA4) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xA4)); }
        if (M2C_FIELD(arg0, void **, 0xA8) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xA8)); }
        if (M2C_FIELD(arg0, void **, 0xAC) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xAC)); }
        if (M2C_FIELD(arg0, void **, 0xB0) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xB0)); }
        if (M2C_FIELD(arg0, void **, 0xB4) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xB4)); }
        __dt__7TOBoss4Fv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
