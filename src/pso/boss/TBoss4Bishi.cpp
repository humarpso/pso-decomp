#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V_8005BB5C { f32 x, y, z; };

struct Obj_8005BB5C { u8 pad[0x38]; V_8005BB5C pos; V_8005BB5C prev; u8 pad50[0x37C - 0x50]; s32 f37c; };

typedef s32 M2C_UNK;
struct V_8005BF68 { f32 x, y, z; };

struct V2_8005BF68 { f32 x, z; };

struct Ctl_8005BF68 { u8 pad[0x18]; u32 flags; };

struct Obj_8005BF68 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    u16 pad1c;
    u16 f1c_unused;
    u8 pad20[0x18];
    V_8005BF68 pos;
    u8 pad44[0x374 - 0x44];
    s32 f374;
    u8 pad378[4];
    s32 f37c;
    u8 pad380[4];
    Ctl_8005BF68 *ctl;
    u8 pad388[4];
    V_8005BF68 vel;
    f32 f398;
    u8 pad39c[4];
    f32 f3a0;
};

struct V_8005C218 { f32 x, y, z; };

struct Obj_8005C218 {
    u8 pad0[0x1C];
    u16 f1c;
    u8 pad1e[0x1A];
    V_8005C218 pos;
    u8 pad44[0x388 - 0x44];
    s32 f388;
    V_8005C218 vel;
    f32 f398;
    u8 pad39c[4];
    f32 f3a0;
    u8 pad3a4[0x3C4 - 0x3A4];
    V_8005C218 home;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 lbl_805D8CBC;
extern const f32 lbl_805D8CC8;
extern const f32 lbl_805D8CE4;
void TBoss4Zako__vt6(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_particle_effect(void *, int);
extern const f32 lbl_805D8CB8;
extern const f32 lbl_805D8CBC;
extern const f32 lbl_805D8CC0;
void TBoss4Bishi__vt2(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_particle_effect(void *, int);
extern const f32 lbl_805D8CB8;
extern const f32 lbl_805D8CBC;
extern const f32 lbl_805D8CC0;
void TBoss4Zako__vt5(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
u16 find_nearest_visible_player(void *, M2C_UNK, f32);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_instance__14TBoss4DarkFalzFv();
s32 get_position_ptr__10TObjPlayerFPv(s32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 lbl_805D8CBC;
extern const f32 lbl_805D8CF4;
extern const f32 lbl_805D8CF8;
extern const f32 lbl_805D8CFC;
void TBoss4Zako__sub_8005C368(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void enter_state_3__11TBoss4BishiFPv(void* p);
void TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
extern const f32 lbl_805D8CBC;
extern const f32 lbl_805D8CC4;
void TBoss4Bishi__vt1(Obj_8005BB5C *self);
u16 find_nearest_visible_player(void *, M2C_UNK, f32);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss4Zako__ct(s32, s32, s32);
s32 get_player_by_client_id(u32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
void TBoss6Type1__sub_803D9370(void *, void *);
void TNpcPlayer__sub_803D97B4(void *);
extern V2_8005BF68 __vt__11TBoss4Bishi[];
extern M2C_UNK lbl_80487460[];
extern s32 lbl_805D27F0;
extern const f32 lbl_805D8CBC;
extern const f32 lbl_805D8CC0;
extern const f32 lbl_805D8CDC;
extern const f32 lbl_805D8CE0;
s32 TBoss4Bishi__ct(s32 arg0, s32 arg1, s32 arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss4Uro__sub_8005C6E4(void *);
s32 get_player_by_client_id(u32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
void TNpcPlayer__sub_803D97B4(void *);
extern const f32 lbl_805D8CBC;
extern const f32 lbl_805D8CE8;
extern const f32 lbl_805D8CEC;
extern const f32 lbl_805D8CF0;
void TBoss4Zako__sub_8005C218(void *p);
}

extern "C" {

struct VOff_8005C450_arg0_8005BABC { char pad_0[0x38]; char f_38[1]; };

void TBoss4Bishi__sub_8005BABC(void);
void TBoss4Bishi__sub_8005BAC0(void);
void TBoss4Bishi__sub_8005BAC4(void);
void TBoss4Bishi__sub_8005BAC8(void);
void TBoss4Bishi__sub_8005BACC(void);
void TBoss4Bishi__sub_8005BAD0(void);
void TBoss4Bishi__sub_8005BAD4(void);
void TBoss4Bishi__vt0(u8 *arg0);
void TBoss4Zako__vt4(void *arg0);
void *__dt_deleting__11TBoss4BishiFPvs(void *arg0, s16 arg1);
s32 create__11TBoss4BishiFi(s32 arg0);
void enter_state_3__11TBoss4BishiFPv(void* p);
void try_enter_state_3__11TBoss4BishiFPv(void* p);
int TBoss4Uro__sub_8005D6D4(void*);
void TBoss4Zako__sub_803D8910(void *, void *);
s32 TObjControl__ct(s32, s32);
int distribute_experience(void*);
void __dl__7TObjectFPv(void *);
void __dt__10TBoss4ZakoFPvs(void *, int);
s32 __nw__7TObjectFUl(M2C_UNK);

void TBoss4Bishi__sub_8005BABC(void) {  }
void TBoss4Bishi__sub_8005BAC0(void) {  }
void TBoss4Bishi__sub_8005BAC4(void) {  }
void TBoss4Bishi__sub_8005BAC8(void) {  }
void TBoss4Bishi__sub_8005BACC(void) {  }
void TBoss4Bishi__sub_8005BAD0(void) {  }
void TBoss4Bishi__sub_8005BAD4(void) {  }

extern const f32 lbl_805D8CC8;
extern const f32 lbl_805D8CCC;

void TBoss4Bishi__vt2(u8 *arg0) {
    f32 temp_f1;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805D8CB8);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    if ((temp_f1 < lbl_805D8CBC) && (temp_f1 >= lbl_805D8CB8)) {
        spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF3));
    }
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x5C) + 0x111);
    if (M2C_FIELD(arg0, f32 *, 0x3C) < lbl_805D8CC0) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

void TBoss4Bishi__vt1(Obj_8005BB5C *self) {
    VecCopy__FP3VecPC3Vec(&self->prev, &self->pos);
    TBoss4Zako__sub_803D8910(&self->pos, (u8 *)self + 0x38C);
    V_8005BB5C v = self->pos;
    v.y = lbl_805D8CBC;
    if (--self->f37c < 0 || TBoss6Kakusan__sub_803D8BD8(&v) > lbl_805D8CC4) {
        enter_state_3__11TBoss4BishiFPv((void*)(self));
    }
}

void TBoss4Bishi__vt0(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f2;

    VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x44), (void *)(arg0 + 0x38));
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f2 < lbl_805D8CC8) {
        temp_f0 = temp_f2 + lbl_805D8CCC;
        M2C_FIELD(arg0, f32 *, 0x3C) = temp_f0;
        if (temp_f0 > lbl_805D8CC8) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8CC8;
            M2C_FIELD(arg0, s32 *, 0x374) = 2;
        }
    }
}

void enter_state_3__11TBoss4BishiFPv(void* p) { if (*(int*)((char*)p + 0x374) != 3) { TBoss4Uro__sub_8005D6D4(*(void**)((char*)p + 0x378)); *(int*)((char*)p + 0x374) = 3; } }

void try_enter_state_3__11TBoss4BishiFPv(void* p) { if (*(int*)((char*)p + 0x374) != 3) { distribute_experience(p); enter_state_3__11TBoss4BishiFPv((void*)(p)); } }

extern M2C_UNK lbl_80487460[];

void *__dt_deleting__11TBoss4BishiFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80487460;
        __dt__10TBoss4ZakoFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 tl_04;

#pragma push
#pragma opt_common_subs off
s32 TBoss4Bishi__ct(s32 arg0, s32 arg1, s32 arg2) {
#define o ((Obj_8005BF68 *)arg0)
    s32 id;
    s32 pl;
    TBoss4Zako__ct(arg0, arg1, arg2);
    o->vt = lbl_80487460;
    o->f0 = lbl_805D27F0;
    if ((id = find_nearest_visible_player(o, 0, lbl_805D8CDC)) == 0xFFFF ||
        (pl = get_player_by_client_id(id)) == 0) {
        o->vel.x = o->vel.z = lbl_805D8CBC;
    } else {
        VecCopy__FP3VecPC3Vec(&o->vel, (void *)(pl + 0x38));
        id = o->pad1c & 3;
        o->vel.x += __vt__11TBoss4Bishi[id].x;
        o->vel.z += __vt__11TBoss4Bishi[id].z;
    }
    TBoss6Type1__sub_803D9370(&o->vel, &o->pos);
    o->vel.y = lbl_805D8CBC;
    if (lbl_805D8CBC == TBoss6Kakusan__sub_803D8BD8(&o->vel)) {
        o->vel.x = lbl_805D8CE0;
        o->vel.z = lbl_805D8CBC;
    } else {
        TNpcPlayer__sub_803D97B4(&o->vel);
    }
    o->f398 = o->f3a0;
    o->vel.x *= o->f398;
    o->vel.z *= o->f398;
    o->pos.y = lbl_805D8CC0;
    o->f37c = 0x96;
    o->f374 = 0;
    o->ctl->flags |= 1;
    return arg0;
#undef o
}
#pragma pop

s32 create__11TBoss4BishiFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3C4);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4Bishi__ct((s32)(var_r31), (s32)(var_r4), (s32)(arg0));
    }
    return var_r31;
}

void TBoss4Zako__vt6(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x390);
    M2C_FIELD(arg0, f32 *, 0x390) = (f32) (temp_f1 + lbl_805D8CE4);
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x44)), (void *)((void *) (arg0 + 0x38)));
    TBoss4Zako__sub_803D8910((void *) (arg0 + 0x38), (void *) (arg0 + 0x38C));
    if (M2C_FIELD(arg0, f32 *, 0x3C) < lbl_805D8CC8) {
        M2C_FIELD(arg0, f32 *, 0x390) = (f32) lbl_805D8CBC;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8CC8;
        M2C_FIELD(arg0, s32 *, 0x374) = 2;
    }
}

void TBoss4Zako__vt5(u8 *arg0) {
    f32 temp_f1;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805D8CB8);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    if ((temp_f1 < lbl_805D8CBC) && (temp_f1 >= lbl_805D8CB8)) {
        spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF3));
    }
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x5C) + 0x111);
    if (M2C_FIELD(arg0, f32 *, 0x3C) < lbl_805D8CC0) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
void TBoss4Zako__sub_8005C218(void *p) {
#define o ((Obj_8005C218 *)p)
    f32 tx;
    f32 tz;
    s32 ang;
    s32 pl;
    if (o->f388 != 0xFFFF) {
        pl = get_player_by_client_id(o->f388);
        if (pl != 0) {
            VecCopy__FP3VecPC3Vec(&o->home, (void *)(pl + 0x38));
        }
    }
    ang = o->f1c << 0xD;
    tx = lbl_805D8CE8 * TBoss8Dragon__sub_803D64C0(ang) + o->home.x;
    tz = lbl_805D8CE8 * TBoss8Dragon__sub_803D64DC(ang) + o->home.z;
    o->vel.y = lbl_805D8CBC;
    if (o->pos.x < tx) {
        o->vel.x += lbl_805D8CEC;
    } else {
        o->vel.x -= lbl_805D8CEC;
    }
    if (o->pos.z < tz) {
        o->vel.z += lbl_805D8CEC;
    } else {
        o->vel.z -= lbl_805D8CEC;
    }
    TBoss4Uro__sub_8005C6E4(o);
    o->f398 = TBoss6Kakusan__sub_803D8BD8(&o->vel);
    if (o->f398 > o->f3a0) {
        o->f398 += lbl_805D8CF0;
        TNpcPlayer__sub_803D97B4(&o->vel);
        o->vel.x *= o->f398;
        o->vel.z *= o->f398;
    }
#undef o
}
#pragma pop

#pragma push
#pragma fp_contract on
void TBoss4Zako__sub_8005C368(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r3;
    if (!(M2C_FIELD(arg0, s32 *, 0x3B8) & 0x7F)) {
        if (M2C_FIELD(arg0, s32 *, 0x388) == 0xFFFF) {
            M2C_FIELD(arg0, u32 *, 0x388) = (u32) find_nearest_visible_player(arg0, 0, lbl_805D8CF4);
            return;
        }
        M2C_FIELD(arg0, u32 *, 0x388) = 0xFFFFU;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x378) != 0U) {
            temp_r3 = get_instance__14TBoss4DarkFalzFv();
            if (temp_r3 != 0) {
                temp_r31 = (s32) (lbl_805D8CF8 * calc_boss4_scale__10TObjPlayerFi(arg0));
                VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x3C4), (void *)(get_position_ptr__10TObjPlayerFPv(temp_r3)));
                M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) lbl_805D8CBC;
                M2C_FIELD(arg0, f32 *, 0x3C4) = (f32) ((lbl_805D8CFC * TBoss8Dragon__sub_803D64C0(temp_r31)) + M2C_FIELD(arg0, f32 *, 0x3C4));
                M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) ((lbl_805D8CFC * TBoss8Dragon__sub_803D64DC(temp_r31)) + M2C_FIELD(arg0, f32 *, 0x3CC));
            }
        }
    }
}
#pragma pop

void TBoss4Zako__vt4(void *arg0) {
    struct VOff_8005C450_arg0_8005BABC *self = (struct VOff_8005C450_arg0_8005BABC *)arg0;
    TBoss4Zako__sub_8005C368((u8 *)(arg0));
    TBoss4Zako__sub_8005C218((void *)(arg0));
    VecCopy__FP3VecPC3Vec((void *)((void *)((char *)arg0 + 68)), (void *)(self->f_38));
    TBoss4Zako__sub_803D8910(self->f_38, (void *)((char *)arg0 + 908));
}

}
