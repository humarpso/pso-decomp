#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_67c185 { char pad[0x18]; };

struct VObj_18_67c185 : VBase_18_67c185 {
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
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual M2C_UNK m95();
    virtual M2C_UNK m96();
};

typedef s32 M2C_UNK;
typedef struct Cand_800B1684 {
    u16 id;
    u16 pad;
    f32 dist;
} Cand_800B1684;

typedef struct Fly_800B1684 {
    u8 pad0[0x38C];
    u16 f38C;
    u8 pad38E[0x418 - 0x38E];
    u16 nest;
    u8 pad41A[0x454 - 0x41A];
    s32 f454;
} Fly_800B1684;

extern "C" {
extern f32 TObjEneBm3Fly__data_805D9C90;
void TObjEneBm3Fly__vt86(u8 *arg0);
M2C_UNK get_field_0c__10TObjPlayerFPv(int);
f32 get_pos_x__10TObjPlayerFPv(int);
f32 get_random_float__8TObjFishFv(f32);
f32 TBoss8Dragon__sub_803D64DC();
f32 TObjPlayer__sub_803D89C0(void *, void *);
extern s32 TObjEneBm3Fly__data_805D50E4;
extern f32 TObjEneBm3Fly__data_805D9C88;
extern f32 TObjEneBm3Fly__data_805D9CC8;
s32 TObjEneBm3Fly__sub_800B177C(u8 *arg0);
s32 get_random_scaled__9TObjEneDDFv(void *);
f32 calc_elapsed_scaled__9TObjEneDDFv(void *);
extern const f32 TObjEneBm3Fly__data_805D9C94;
extern const f32 lbl_805D9CD8;
void TObjEneBm3Fly__sub_800B1634(u8 *arg0);
s32 has_free_attack_slot__17TObjEneBm3FlyNestFPvUs(void *, u16);
M2C_UNK TBoss8Dragon__sub_800B9958(void *, u16);
s32 TObjEneDD__sub_800BB484(void *, Cand_800B1684 *, f32);
M2C_UNK transition_enemy_state(void *, int);
void *find_entity_by_id(u16);
extern const f32 lbl_805D9CDC;
void TObjEneBm3Fly__sub_800B1684(Fly_800B1684 *s);
}

extern "C" {

void TObjEneBm3Fly__vt87(void* p);
f32 approach_value__13TObjEneBm3FlyFff(f32 farg0, f32 farg1);
u16 get_active_id__13TObjEneBm3FlyFPv(void *arg0);
int TObjEneBm3Fly__sub_800B1978(void*);
int TObjEneDD__vt86(void*);
f32 get_random_float__8TObjFishFv(f32);

u16 get_active_id__13TObjEneBm3FlyFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x454) != 0) {
        return M2C_FIELD(arg0, u16 *, 0x38C);
    }
    return 0xFFFFU;
}

extern const f32 TObjEneBm3Fly__data_805D9C78;
extern const f32 lbl_805D9CE0;
extern const f32 lbl_805D9CE4;
extern const f32 lbl_805D9CE8;

#pragma push
#pragma fp_contract on
void TObjEneBm3Fly__sub_800B1634(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x444) = (f32) ((TObjEneBm3Fly__data_805D9C94 * calc_elapsed_scaled__9TObjEneDDFv((void *) (arg0))) + (lbl_805D9CD8 + M2C_FIELD(arg0, f32 *, 0x420)));
    M2C_FIELD(arg0, s32 *, 0x448) = get_random_scaled__9TObjEneDDFv((void *) (arg0));
}
#pragma pop

void TObjEneBm3Fly__sub_800B1684(Fly_800B1684 *s) {
    Cand_800B1684 players[4];
    void *nest;
    s32 count;
    u16 id;
    s32 i;
    nest = find_entity_by_id(s->nest);
    if (nest == NULL) {
        transition_enemy_state(s, 4);
        s->f454 = 0;
    }
    if (has_free_attack_slot__17TObjEneBm3FlyNestFPvUs(nest, s->f38C) != 0) {
        transition_enemy_state(s, 3);
        return;
    }
    count = TObjEneDD__sub_800BB484(s, players, lbl_805D9CDC);
    for (i = 0; i < count; i++) {
        id = players[i].id;
        if (id != s->f38C && has_free_attack_slot__17TObjEneBm3FlyNestFPvUs(nest, id) != 0) {
            TBoss8Dragon__sub_800B9958(s, id);
            transition_enemy_state(s, 3);
            return;
        }
    }
    transition_enemy_state(s, 4);
    s->f454 = 0;
}

s32 TObjEneBm3Fly__sub_800B177C(u8 *arg0) {
    f32 temp_f31;
    if ((M2C_FIELD(arg0, f32 *, 0x3AC) < (TObjEneBm3Fly__data_805D9CC8 + get_pos_x__10TObjPlayerFPv((int) (TObjEneBm3Fly__data_805D50E4)))) && (get_random_float__8TObjFishFv((f32) (M2C_FIELD(arg0, f32 *, 0x42C) - M2C_FIELD(arg0, f32 *, 0x398))) < TObjEneBm3Fly__data_805D9C88)) {
        temp_f31 = TObjPlayer__sub_803D89C0((void *) (arg0 + 0x430), (void *) (arg0 + 0x3A0));
        get_field_0c__10TObjPlayerFPv((int) (M2C_FIELD(arg0, s32 *, 0x318)));
        if (temp_f31 >= TBoss8Dragon__sub_803D64DC()) {
            return 1;
        }
    }
    return 0;
}

f32 approach_value__13TObjEneBm3FlyFff(f32 farg0, f32 farg1) {
    f32 temp_f31;
    f32 var_f1;
    f32 cap;

    temp_f31 = farg1 - farg0;
    if (get_random_float__8TObjFishFv(temp_f31) < lbl_805D9CE0) {
        return farg1;
    }
    var_f1 = TObjEneBm3Fly__data_805D9C78;
    var_f1 = temp_f31 * var_f1;
    if (var_f1 > lbl_805D9CE4) {
        var_f1 = lbl_805D9CE4;
    } else if (var_f1 < lbl_805D9CE8) {
        var_f1 = lbl_805D9CE8;
    }
    return farg0 + var_f1;
}

void TObjEneBm3Fly__vt86(u8 *arg0) {
    f32 temp_f31;
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x42C) - M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f31 >= TObjEneBm3Fly__data_805D9C90) {
        ((VObj_18_67c185 *)(arg0))->m95();
    } else {
        ((VObj_18_67c185 *)(arg0))->m96();
    }
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 4) = temp_f31;
}

void TObjEneBm3Fly__vt87(void* p) { TObjEneDD__vt86(p); TObjEneBm3Fly__sub_800B1978(p); }

}
