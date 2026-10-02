#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_800991E0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct Obj_80098FF4 {
    u8 pad0[0x38];
    u8 pos[0x2FC - 0x38];
    u8 field2FC[4];
};

struct Pair_800993E8 { s32 a; u32 flags; };

struct ChildBase_800993E8 { char pad[0x18]; };

struct Child_800993E8 : ChildBase_800993E8 {
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
    virtual void m15(Pair_800993E8 *, s32);
};

struct BringerBase_800993E8 { char pad[0x18]; };

struct Bringer_800993E8 : BringerBase_800993E8 {
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
    virtual void m95();
    virtual void m96();
    virtual s32 m97();
};

struct Vec_800993E8 { f32 x, y, z; };

struct Entry_800993E8 { u8 pad0[0xC]; Vec_800993E8 a; u8 pad18[0x24 - 0x18]; Vec_800993E8 b; };

struct Model_800993E8 { u8 pad0[0x2C]; Vec_800993E8 b; };

struct ChildFields_800993E8 {
    u8 pad0[0x38];
    Vec_800993E8 pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0xA4 - 0x64];
    Model_800993E8 *model;
};

struct Fields_800993E8 {
    u8 pad0[0x38];
    Vec_800993E8 pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0xC0 - 0x64];
    f32 frame;
    u8 padC4[0x498 - 0xC4];
    Child_800993E8 *child;
    s32 field49C;
};

struct Obj_80098EFC {
    u8 pad0[0x38];
    u8 pos[0x2FC - 0x38];
    u8 field2FC[0x474 - 0x2FC];
    u8 field474[4];
};

extern "C" {
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 lbl_805D9810;
void TObjEneDf2Bringer__sub_80099148(s32 arg0);
void TBoss2DeRolLe__sub_800B98D8(void *, u32);
s32 get_player_by_client_id(u32);
void TObjEneDf2Bringer__sub_80098DEC(u8 *arg0);
M2C_UNK TObjBoss2Tunnel__sub_8007E7D8(f32 *, f32 *, s32, f32, f32);
M2C_UNK spawn_particle_effect(f32 *, M2C_UNK);
M2C_UNK TBoss4Zako__sub_803D8910(f32 *, void *);
extern const f32 TObjEneDf2Bringer__data_805D97E0;
extern const f32 TObjEneDf2Bringer__data_805D9808;
extern const f32 lbl_805D9830;
void TObjEneDf2Bringer__sub_800991E0(u8 *arg0);
M2C_UNK spawn_particle_effect(f32 *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 TObjEneDf2Bringer__data_805D97E0;
extern const f32 lbl_805D97E8;
void TObjEneDf2Bringer__sub_80099188(u8 *arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TOTrapAncient01__sub_80226578(void *, void *, void *, int, int);
void TObjEneDf2Bringer__sub_80098EB4(s32 arg0);
Obj_80098FF4 *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
s32 get_game_mode__6TLobbyFv(void);
u32 csnLookAt(void *, void *);
void enemy_clear_target(void *);
void TBoss8Dragon__sub_800B9958(void *, u16);
s32 is_alive__9TObjEneDDFPv(void *);
f32 horizontal_distance_squared(void *, void *);
extern const f32 TObjEneDf2Bringer__data_805D97E0;
extern const f32 lbl_805D982C;
s32 TObjEneDf2Bringer__sub_80098FF4(Obj_80098FF4 *self);
void VecCopy__FP3VecPC3Vec(void *, const void *);
s32 check_v2_mode__9TObjEneDDFv(void);
Entry_800993E8 *lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
void TObjPlayer__sub_80154E3C(void *);
extern Pair_800993E8 lbl_8043A0CC[];
extern void *TObjEneDf2Bringer__data_805D4FC8;
extern const f32 lbl_805D980C;
extern const f32 lbl_805D9838;
extern const f32 lbl_805D983C;
void TObjEneDf2Bringer__sub_800993E8(Bringer_800993E8 *obj);
void check_can_act__10TObjPlayerFii(void *, s16);
s16 obj_getS16_32E(void *);
Obj_80098FF4 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv(void);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
u32 csnLookAt(void *, void *);
u8 *fn_8009A398(void *, void *, void *, void *);
s32 is_alive__9TObjEneDDFPv(void *);
f32 horizontal_distance_squared(void *, void *);
void *__nw__7TObjectFUl(int);
extern const f32 lbl_805D9828;
s32 TObjEneDf2Bringer__sub_80098EFC(Obj_80098EFC *self);
}

extern "C" {

struct Base_80098E4C_80098DB0 { char pad[0x18]; };
struct VObj_80098E4C_80098DB0 : Base_80098E4C_80098DB0 {
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
    virtual void m95();
    virtual void m96();
    virtual int m97();
};

void TObjEneDf2Bringer__vt102(void *arg0, f32 farg0);
s32 check_stage_advance__17TObjEneDf2BringerFPv(void *arg0);
void update_flag_0x3C0__17TObjEneDf2BringerFPv(void *arg0);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 enemy_validate_retained_target();
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(void *, f32);
M2C_UNK spawn_part__14TObjEneEpsilonFi(void *, f32);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);

s32 check_stage_advance__17TObjEneDf2BringerFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x494) >= 5) {
        transition_enemy_state(arg0, 8);
        return 1;
    }
    return 0;
}

void TObjEneDf2Bringer__sub_80098DEC(u8 *arg0) {
    s32 temp_r3_2;
    u16 temp_r3;
    temp_r3 = M2C_FIELD(arg0, u16 *, 0x2D4);
    if (temp_r3 < 0x1000U) {
        temp_r3_2 = get_player_by_client_id((u32) temp_r3);
        if (temp_r3_2 != 0) {
            TBoss2DeRolLe__sub_800B98D8(arg0, (u32) temp_r3_2);
        }
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 8);
    }
    M2C_FIELD(arg0, s32 *, 0x494) = (s32) (M2C_FIELD(arg0, s32 *, 0x494) + 1);
}

void TObjEneDf2Bringer__vt102(void *arg0, f32 farg0) {
    if (((VObj_80098E4C_80098DB0 *)arg0)->m97() != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(arg0, farg0);
        return;
    }
    spawn_part__14TObjEneEpsilonFi(arg0, farg0);
}

extern f32 TObjEneDf2Bringer__data_805D9820;

void TObjEneDf2Bringer__sub_80098EB4(s32 arg0) {
    TOTrapAncient01__sub_80226578((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003B708))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

s32 TObjEneDf2Bringer__sub_80098EFC(Obj_80098EFC *self) {
    s32 count;
    Obj_80098EFC *player;
    s32 total;
    s32 i;
    s32 dmg;
    void *o;
    count = get_game_mode__6TLobbyFv();
    total = 0;
    for (i = 0; i < count; i++) {
        player = ((Obj_80098EFC *)get_player_data__10TObjPlayerFi(i));
        if (is_alive__9TObjEneDDFPv(player) != 0) {
            horizontal_distance_squared(self->field2FC, player->pos);
            if (csnLookAt(self->field2FC, player->field2FC) == 0) {
                dmg = get_random_float__21TObjEneMe3ShinowaRealFv(lbl_805D9828 * (f32)obj_getS16_32E(player));
                check_can_act__10TObjPlayerFii(player, dmg);
                total += dmg;
                o = __nw__7TObjectFUl(0x54);
                if (o != 0) {
                    fn_8009A398(o, self, player->field2FC, self->field474);
                }
            }
        }
    }
    return total;
}

s32 TObjEneDf2Bringer__sub_80098FF4(Obj_80098FF4 *self) {
    s32 count;
    Obj_80098FF4 *player;
    u16 id;
    s32 i;
    f32 dist;
    f32 best;
    best = TObjEneDf2Bringer__data_805D97E0;
    id = 0xFFFF;
    count = get_game_mode__6TLobbyFv();
    for (i = 0; i < count; i++) {
        player = get_player_data__10TObjPlayerFi(i);
        if (is_alive__9TObjEneDDFPv(player) != 0) {
            dist = horizontal_distance_squared(self->field2FC, player->pos);
            if (dist < lbl_805D982C && dist > best &&
                csnLookAt(self->field2FC, player->field2FC) == 0) {
                id = obj_getField1c(player);
                best = dist;
            }
        }
    }
    if (id != 0xFFFF) {
        TBoss8Dragon__sub_800B9958(self, id);
        return 1;
    }
    enemy_clear_target(self);
    return 0;
}

void update_flag_0x3C0__17TObjEneDf2BringerFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 8)) {
        update_linked_position__14TObjEneEpsilonFPv(TObjEneDf2Bringer__data_805D9820);
        return;
    }
    if (enemy_validate_retained_target() == 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF7);
    }
}

void TObjEneDf2Bringer__sub_80099148(s32 arg0) {
    if (objInBand__FP7GameObjf((void *)arg0, (f32) (lbl_805D9810)) != 0) {
        TObjEneDf2Bringer__sub_800991E0((u8 *)((void *) (arg0)));
    }
}

void TObjEneDf2Bringer__sub_80099188(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, TObjEneDf2Bringer__data_805D97E0) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D97E8) != 0)) {
        spawn_particle_effect((f32 *)((s32) (arg0 + 0x38)), (M2C_UNK)(0xF0));
    }
}

void TObjEneDf2Bringer__sub_800991E0(u8 *arg0) {
    Stack_800991E0 stack;
    stack.sp8 = lbl_805D9830;
    stack.spC = TObjEneDf2Bringer__data_805D97E0;
    stack.sp10 = TObjEneDf2Bringer__data_805D9808;
    TObjBoss2Tunnel__sub_8007E7D8(&stack.sp8, &stack.sp10, M2C_FIELD(arg0, s32 *, 0x60), TObjEneDf2Bringer__data_805D97E0, lbl_805D9830);
    TBoss4Zako__sub_803D8910(&stack.sp8, arg0 + 0x38);
    spawn_particle_effect(&stack.sp8, 0xF3);
}
void TObjEneDf2Bringer__sub_800993E8(Bringer_800993E8 *obj) {
    Fields_800993E8 *self = (Fields_800993E8 *)obj;
    Entry_800993E8 *entry;
    f32 start;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        start = lbl_805D9838;
    } else {
        start = lbl_805D980C;
    }
    if (self->frame >= start && self->frame <= lbl_805D983C) {
        entry = lookup_entry_by_value__10TObjPlayerFPvf(TObjEneDf2Bringer__data_805D4FC8, self->frame);
        VecCopy__FP3VecPC3Vec(&((ChildFields_800993E8 *)self->child)->pos, &self->pos);
        ((ChildFields_800993E8 *)self->child)->angle = self->angle;
        VecCopy__FP3VecPC3Vec(((ChildFields_800993E8 *)self->child)->model, &entry->a);
        VecCopy__FP3VecPC3Vec(&((ChildFields_800993E8 *)self->child)->model->b, &entry->b);
        TObjPlayer__sub_80154E3C(self->child);
        Pair_800993E8 pair = lbl_8043A0CC[0];
        if (obj->m97() != 0) {
            pair.flags |= 2;
        }
        self->child->m15(&pair, self->field49C);
    }
}

}
