#include "types.h"

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual s32 m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual s32 m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual s32 m100();
};

struct Pair_800C2E64 { s32 a, b; };
struct Obj_800C2E64;
struct Obj_800C2E64Base { u8 pad[0x18]; };
struct Obj_800C2E64 : Obj_800C2E64Base {
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
    virtual void hit(Obj_800C2E64 *src, Pair_800C2E64 *p, s32 a, s32 b, s32 c);
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
    virtual void s160();
    virtual void v87();
    virtual void v88();
    virtual void s16c();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void s180();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void s198(s32);
};

extern "C" {
u16 obj_getField1c(void *);
s32 is_alive__9TObjEneDDFPv(void *);
s32 is_player_entity_id(u16);
s32 get_flag_11__16TObjEneRe2FlowerFPv(void *);
u8 *find_target_in_range__16TObjEneRe2FlowerFPv(void *);
void *init_target_ref__10TObjPlayerFPvii(void *, void *, void *);
void send_6x2F_change_player_hp(s32, u16, s32);
void *__nw__7TObjectFUl(u32);
extern Pair_800C2E64 lbl_8043BA60[];
void TObjEneRe2Flower__sub_800C2E64(Obj_800C2E64 *self, s32 state);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
void clear_attack_receipts(void *);
s32 TBoss8Dragon__sub_800BB7D4(void *, int);
s32 transition_enemy_state(void *, s32);
s32 noop__9TObjEneDDFv(void *, s32);
s32 fn_800C3A60(void *, s32);
s32 clear_child_flags__16TObjEneRe2FlowerFPv(void *);
s32 advance_animation_playback();
s32 play_effect_if_v2__10TObjPlayerFi(s32);
s32 play_sound_effect(s32, void *, s32, s32);
extern const f32 lbl_805D9FD0;
void state_damaged__9TObjEneDDFPvi(u8 *arg0, s32 arg1);
}

extern "C" {

#define F(T, o) (*(T *)((s8 *)(arg0) + (o)))
void state_damaged__9TObjEneDDFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 4;
        ((VObj_18 *)(arg0))->m94();
        clear_child_flags__16TObjEneRe2FlowerFPv(arg0);
        F(s32, 0x3C4) &= ~8;
        TBoss8Dragon__sub_800BB7D4(arg0, 0xF2);
        play_sound_effect(fn_800C3A60(arg0, 0x4003AB13), arg0 + 0x38, 0, 0);
        play_effect_if_v2__10TObjPlayerFi(-0x200);
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            if (F(s32, 0x378) == 8) {
                transition_enemy_state(arg0, F(s32, 0x378));
            } else if (F(s16, 0x32C) < F(s16, 0x2B8) / 4) {
                transition_enemy_state(arg0, 8);
            } else if (calc_boss4_scale__10TObjPlayerFi(arg0) < lbl_805D9FD0) {
                transition_enemy_state(arg0, 6);
            } else {
                transition_enemy_state(arg0, F(s32, 0x378));
            }
        }
        break;
    case 0:
        advance_animation_playback();
        ((VObj_18 *)(arg0))->m100();
        ((VObj_18 *)(arg0))->m86();
        ((s32 (*)(void *))noop__9TObjEneDDFv)(arg0);
        break;
    case 5:
        F(s32, 0x30) &= ~0x200;
        F(s32, 0x3C4) &= ~2;
        clear_attack_receipts(arg0);
        break;
    }
}
#undef F

#define F(o, T, off) (*(T *)((u8 *)(o) + (off)))
void TObjEneRe2Flower__sub_800C2E64(Obj_800C2E64 *self, s32 state) {
    u8 *t;
    switch (state) {
    case 4:
        F(self, s16, 0xB8) = 1;
        self->s180();
        self->s16c();
        clear_child_flags__16TObjEneRe2FlowerFPv(self);
        F(self, u32, 0x3C4) &= ~8;
        F(self, s32, 0x410) = 0;
        F(self, s32, 0x414) = 0;
        break;
    case 3:
        if (F(self, s32, 0x410) >= 0x1E) {
            transition_enemy_state(self, 3);
        }
        break;
    case 0:
        ((void (*)(void *))advance_animation_playback)(self);
        if (F(self, s32, 0x410) == 6) {
            t = find_target_in_range__16TObjEneRe2FlowerFPv(self);
            if (t != NULL) {
                void *m = __nw__7TObjectFUl(0x28);
                if (m != NULL) {
                    init_target_ref__10TObjPlayerFPvii(m, self, t);
                }
                F(self, u8 *, 0x390) = t;
                F(self, s32, 0x414) = 1;
                play_sound_effect(fn_800C3A60(self, 0x4003A50F), (u8 *)self + 0x38, 0, 0);
                play_effect_if_v2__10TObjPlayerFi(-0x200);
            }
        } else if (F(self, s32, 0x410) == 0x19 && F(self, s32, 0x414) != 0 &&
                   is_alive__9TObjEneDDFPv(F(self, void *, 0x390)) != 0) {
            if (get_flag_11__16TObjEneRe2FlowerFPv(self) != 0) {
                if (is_player_entity_id(obj_getField1c(F(self, void *, 0x390))) != 0) {
                    send_6x2F_change_player_hp(F(self, u16, 0x1C), obj_getField1c(F(self, void *, 0x390)), 1);
                }
            } else {
                Pair_800C2E64 p = lbl_8043BA60[0];
                Obj_800C2E64 *o = F(self, Obj_800C2E64 *, 0x390);
                o->hit(self, &p, F(o, s32, 0xA4), -1, -1);
            }
        }
        self->s198(F(self, s32, 0x410)++);
        self->s160();
        ((void (*)(void *))noop__9TObjEneDDFv)(self);
        break;
    case 5:
        F(self, u32, 0x30) &= ~0x04000000;
        F(self, u32, 0x3C4) &= ~2;
        break;
    }
}
#undef F

}
