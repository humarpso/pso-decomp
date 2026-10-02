#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_802ECBDC { char pad[0x18]; };

struct VObj_802ECBDC : VBase_802ECBDC {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
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
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
};

struct Fish_802ECBDC {
    u8 pad0[0x5F8];
    VObj_802ECBDC *kids[10];
};

struct VBase_802ECC44 { char pad[0x18]; };

struct VObj_802ECC44 : VBase_802ECC44 {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
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
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
};

struct Fish_802ECC44 {
    u8 pad0[0x5F8];
    VObj_802ECC44 *kids[10];
};

typedef s32 M2C_UNK;
extern "C" {
void set_effect_target_position__8TObjFishFPvPvPv(void *, void *, void *);
void TObjFish__sub_802ECB38(u8 *arg0);
void set_effect_target_position__8TObjFishFPvPvPv(void *, void *, void *);
extern const f32 lbl_805DEA14;
void TObjFish__sub_802ECB70(u8 *arg0, s32 arg1);
void TObjFish__sub_802ECBDC(Fish_802ECBDC *self);
void TObjFish__sub_802ECC44(Fish_802ECC44 *self);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
M2C_UNK enemy_clear_target(void *);
M2C_UNK TBoss2DeRolLe__sub_800B98D8(void *, void *);
s32 is_alive__9TObjEneDDFPv();
void TObjFish__sub_802ECCAC(u8 *self);
}

extern "C" {

void TObjFish__sub_802ECB38(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) | 0x88);
    set_effect_target_position__8TObjFishFPvPvPv(arg0, (void *)0x3A312, arg0 + 0x38);
}
void TObjFish__sub_802ECB70(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x6FC) - (s32) (lbl_805DEA14 * (f32) arg1));
    set_effect_target_position__8TObjFishFPvPvPv(arg0, (void *)0x3B213, arg0 + 0x38);
}
void TObjFish__sub_802ECBDC(Fish_802ECBDC *self) {
    s32 i;
    ((VObj_802ECBDC *)self)->v94();
    for (i = 0; i < 10; i++) {
        self->kids[i]->v94();
    }
}
void TObjFish__sub_802ECC44(Fish_802ECC44 *self) {
    s32 i;
    ((VObj_802ECC44 *)self)->v93();
    for (i = 0; i < 10; i++) {
        self->kids[i]->v93();
    }
}
void TObjFish__sub_802ECCAC(u8 *self) {
    s32 n;
    u8 *p;
    s32 idx;
    s32 i;
    n = get_game_mode__6TLobbyFv();
    if (n == 0) {
        enemy_clear_target(self);
        return;
    }
    if (n == 1) {
        p = get_player_data__10TObjPlayerFi(0);
        TBoss2DeRolLe__sub_800B98D8(self, p);
        return;
    }
    idx = (s32)get_random_float__21TObjEneMe3ShinowaRealFv((f32)n * calc_boss4_scale__10TObjPlayerFi(self));
    enemy_clear_target(self);
    for (i = 0; i < n; i++) {
        p = get_player_data__10TObjPlayerFi(idx);
        if (is_alive__9TObjEneDDFPv() != 0) {
            TBoss2DeRolLe__sub_800B98D8(self, p);
            return;
        }
        idx++;
        if (idx >= n) {
            idx = 0;
        }
    }
}

}
