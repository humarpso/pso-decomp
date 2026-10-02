#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Hit_800E8AD0 { s32 kind; f32 dmg; };

struct Base_800E8AD0 { u8 pad[0x18]; };

struct Ent_800E8AD0 : Base_800E8AD0 {
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
    virtual f32 m21(s32, Hit_800E8AD0, s32, s32, s32);
    virtual void v22();
    virtual void m23(void *);
};

extern "C" {
u16 TObjPlayer__sub_800115C4(void *, s32, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjEneSlimeOne__sub_800EC3D0(void *, f32);
Ent_800E8AD0 *get_enemy_entity(u16);
f32 TObjPlayer__sub_80141CF8(void *, void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
extern Hit_800E8AD0 lbl_8043D260[];
extern const f32 lbl_805DA6A8;
extern const f32 lbl_805DA6B4;
s32 fn_800E8AD0(u8 *arg0);
}

extern "C" {

s32 fn_800E8AD0(u8 *arg0) {
    s32 hit;
    Ent_800E8AD0 *e;
    Ent_800E8AD0 *e2;
    Hit_800E8AD0 h = lbl_8043D260[0];
    u16 id;
    s32 id2;
    hit = 0;
    h.dmg = M2C_FIELD(arg0, f32 *, 0x390);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    id = TObjPlayer__sub_800115C4(arg0, 0, lbl_805DA6A8);
    if (id != 0xFFFF) {
        e = ((Ent_800E8AD0 *(*)(s32))TPlayerBattleCtrl4P__sub_801BA74C)(id);
        if (e != NULL && !(TObjPlayer__sub_80141CF8(arg0 + 0x2FC, (u8 *)e + 0x2FC) > lbl_805DA6A8)) {
            if (lbl_805DA6B4 != e->m21(M2C_FIELD(arg0, s32 *, 0x38C), h, 0, -1, -1)) {
                e->m23(arg0);
            }
            hit = 1;
        }
    }
    id2 = TObjEneSlimeOne__sub_800EC3D0(arg0, lbl_805DA6A8);
    if (id2 != 0xFFFF) {
        e2 = get_enemy_entity(id2);
        if (e2 != NULL && !(TObjPlayer__sub_80141CF8(arg0 + 0x2FC, (u8 *)e2 + 0x2FC) > lbl_805DA6A8)) {
            if (lbl_805DA6B4 != e2->m21(M2C_FIELD(arg0, s32 *, 0x38C), h, 0, -1, -1)) {
                e2->m23(arg0);
            }
            hit = 1;
        }
    }
    return hit;
}

}
