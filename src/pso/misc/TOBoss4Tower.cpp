#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80159514___vt__12TOBoss4Tower {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
M2C_UNK TOBoss4__ct();
extern M2C_UNK __vt__12TOBoss4Tower[];
extern s32 lbl_805D2EB8;
extern s32 lbl_805D58A8;
extern const f32 lbl_805DB334;
u8 *TOBoss4Tower__ct(u8 *arg0, s32 arg1);
}

extern "C" {

struct Base_80159400 { char pad[0x18]; };
struct VObj_80159400 : Base_80159400 {
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

void *TOBoss4Tower__create(void *arg0);
void *__dt__12TOBoss4TowerFv(void *arg0, s16 arg1);
void render__12TOBoss4TowerFv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object(s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void __dt__7TOBoss4Fv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK set_global_param__8TObjFishFi(s32);

void *TOBoss4Tower__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = TOBoss4Tower__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

void render__12TOBoss4TowerFv(u8 *arg0) {
    if (((VObj_80159400 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0x90), M2C_FIELD(arg0, f32 *, 0x94)) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        draw_ginja_object(M2C_FIELD(arg0, s32 *, 0x34));
        pop_matrix();
    }
}

extern M2C_UNK __vt__12TOBoss4Tower[];

void *__dt__12TOBoss4TowerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOBoss4Tower;
        __dt__7TOBoss4Fv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80159514___vt__12TOBoss4Tower_size[sizeof(RecoveredGlobal_80159514___vt__12TOBoss4Tower) == 0x34 ? 1 : -1];
u8 *TOBoss4Tower__ct(u8 *arg0, s32 arg1) {
    TOBoss4__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80159514___vt__12TOBoss4Tower *)&__vt__12TOBoss4Tower).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2EB8;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((void *) (lbl_805D58A8), (int) (5));
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) lbl_805DB334;
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((void *) (lbl_805D58A8), (int) (5));
    return arg0;
}

}
