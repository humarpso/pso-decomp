#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_373ea7 { char pad[0x18]; };

struct VObj_18_373ea7 : VBase_18_373ea7 {
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
    virtual M2C_UNK m13();
    virtual M2C_UNK m14();
};

struct RecoveredGlobal_802C8910_lbl_804E0CC0 {
    M2C_UNK value;
    u8 remaining[0xDC];
};

extern "C" {
void set_damage__20TOTrapChainSawDamageFPvi(void *, void *);
M2C_UNK play_persistent_sound(M2C_UNK, void *, void *, int, int);
M2C_UNK TOTrapChainSawKey__sub_802C8F68(void *, int);
M2C_UNK TOTrapChainSawDamage__sub_802C9C00(void *, int);
void TOTrapChainSawDamage__vt25(u8 *arg0);
M2C_UNK TOTrapChainSaw__ct();
M2C_UNK init_collision_body_parts(void *, int, int);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
extern M2C_UNK __vt__17TOTrapChainSawKey[];
extern RecoveredGlobal_802C8910_lbl_804E0CC0 lbl_804E0CC0;
extern s32 lbl_805D3F08;
u8 *TOTrapChainSawKey__ct(u8 *arg0, void * _w1, void * _w2);
void TOTrapChainSaw__sub_802C9090(void);
void set_global_count__12TObjNpcEnemyFi(s32);
void TObjEneBm5GibonU__sub_803D853C(int, void *, ...);
extern u8 lbl_80471F88[];
extern u8 lbl_80471FA8[];
void TOTrapChainSawDamage__vt12(void);
}

extern "C" {

void TOTrapChainSawDamage__vt23(void *arg0);
void TOTrapChainSawDamage__vt24(void* p);
int TOTrapChainSawKey__vt13(void* p);
void *__dt__17TOTrapChainSawKeyFv(void *arg0, s16 arg1);
void *create__17TOTrapChainSawKeyFPv(void *arg0);
void post_translate_matrix(void *);
void draw_ginja_model_with_motion(void *, void *, f32);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
void rotate_matrix_y(int, void *);
void push_matrix(void);
void pop_matrix(void);
void __dl__7TObjectFPv(void *);
void __dt__14TOTrapChainSawFv(void *, int);
void *__nw__7TObjectFUl(int);
int decode_params__14TOTrapChainSawFPv(void*);
void set_global_param__8TObjFishFi(void *);

int TOTrapChainSawKey__vt13(void* p) { return decode_params__14TOTrapChainSawFPv(p); }

extern void *tl_05;

void *create__17TOTrapChainSawKeyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TOTrapChainSawKey__ct((u8 *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__17TOTrapChainSawKey[];

void *__dt__17TOTrapChainSawKeyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOTrapChainSawKey;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        __dt__14TOTrapChainSawFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_802C8910_lbl_804E0CC0_size[sizeof(RecoveredGlobal_802C8910_lbl_804E0CC0) == 0xE0 ? 1 : -1];
u8 *TOTrapChainSawKey__ct(u8 *arg0, void * _w1, void * _w2) {
    TOTrapChainSaw__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOTrapChainSawKey;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3F08;
    ((VObj_18_373ea7 *)(arg0))->m13();
    ((VObj_18_373ea7 *)(arg0))->m14();
    init_collision_body_parts((void *) (arg0), (int) ((u8 *)(&lbl_804E0CC0.value) + (M2C_FIELD(arg0, s32 *, 0xF8) * 0x58)), (int) (2));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

void TOTrapChainSawDamage__vt26(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x104) != NULL) {
        set_damage__20TOTrapChainSawDamageFPvi(M2C_FIELD(arg0, void **, 0x104), M2C_FIELD(arg0, void **, 0xD4));
    }
    if (M2C_FIELD(arg0, void **, 0x108) != NULL) {
        set_damage__20TOTrapChainSawDamageFPvi(M2C_FIELD(arg0, void **, 0x108), M2C_FIELD(arg0, void **, 0xD4));
    }
}

#pragma push
#pragma fp_contract on
void TOTrapChainSawDamage__vt25(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x100) = (s32) (M2C_FIELD(arg0, s32 *, 0x100) + 1);
    void *p;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x100) == 5) && ((p = M2C_FIELD(arg0, void **, 0x104)) != NULL)) {
        TOTrapChainSawDamage__sub_802C9C00(p, (int) (1));
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x100) == 0xA) && ((p = M2C_FIELD(arg0, void **, 0x108)) != NULL)) {
        TOTrapChainSawDamage__sub_802C9C00(p, (int) (1));
    }
    play_persistent_sound(TOTrapChainSawKey__sub_802C8F68((void *) (arg0), (int) (0)), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}
#pragma pop

void TOTrapChainSawDamage__vt24(void* p) { *(s32*)((char*)p + 0x100) = 0; }

void TOTrapChainSawDamage__vt12(void) {
    TOTrapChainSaw__sub_802C9090();
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    TObjEneBm5GibonU__sub_803D853C(0x13001D, lbl_80471FA8);
    TObjEneBm5GibonU__sub_803D853C(0x13001E, lbl_80471F88);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void TOTrapChainSawDamage__vt23(void *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, void **, 0x24));
    push_matrix();
    post_translate_matrix((void *)((char *)arg0 + 56));
    push_matrix();
    rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0x60));
    rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0xD4));
    draw_ginja_model_with_motion(M2C_FIELD(arg0, void **, 0xC8), M2C_FIELD(arg0, void **, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4));
    pop_matrix();
    pop_matrix();
}

}
