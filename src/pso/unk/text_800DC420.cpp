#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct D_800DC420 { u8 pad[0x18]; s32 arr[1]; };

struct E_800DC448 { s32 f0; s32 f4; s32 f8; s32 fc; };

struct D_800DC448 { u8 pad[0x42c]; E_800DC448 *entries; };

struct O_800DC448 { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

typedef struct Parm_800DC4B4 {
    s32 a;
    f32 b;
} Parm_800DC4B4;

struct Base_800DC4B4 {
    char pad[0x18];
};

struct Obj_800DC4B4 : Base_800DC4B4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(void *, Parm_800DC4B4, s32, s32, s32);
    u8 pad1C[0x30 - 0x1C];
    u32 flags;
    u8 pad34[0x2FC - 0x34];
    f32 pos[3];
};

typedef struct Src_800DC4B4 {
    u8 pad0[0xAC];
    f32 pos[3];
} Src_800DC4B4;

struct Vec_800DC648 { f32 x, y, z; };

struct Me_800DC648 {
    u8 pad0[0xAC];
    Vec_800DC648 pos;
    Vec_800DC648 vel;
    u8 padC4[0xDC - 0xC4];
    f32 timer;
    void *link0;
    void *link1;
    Vec_800DC648 prev;
    s32 trail;
    s32 cnt;
    u16 owner;
};

struct Vec_800DC83C { f32 x, y, z; };

struct Ang_800DC83C { s32 x, y, z; };

extern "C" {
s32 TObjPlayer__sub_800DC478(u8 *arg0, s32 arg1, f32 farg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *csnVecterUnder(s32, M2C_UNK);
s32 TObjPlayer__sub_800DC5F4(M2C_UNK arg0, s32 arg1);
extern s32 lbl_805D5254;
f32 TObjPlayer__sub_800DC434(M2C_UNK arg0, s32 arg1);
extern s32 lbl_805D5254;
s32 TObjPlayer__sub_800DC420(void *self, s32 i);
extern D_800DC448 *lbl_805D5258;
void TObjPlayer__sub_800DC448(O_800DC448 *self, s32 i);
u16 obj_getField1c(void *);
s32 is_split_screen();
s32 spawn_particle_effect(void *, int);
void trigger_hit_camera_shake__10TObjPlayerFPvUi(void *, void *);
void set_flag_20000__10TObjPlayerFPv(void *);
f32 xyz_distance_squared(void *, void *);
extern Parm_800DC4B4 lbl_8043C908[];
extern const f32 lbl_805D525C;
extern s32 lbl_805D526C;
extern s32 lbl_805D53A0;
void TObjPlayer__sub_800DC4B4(Src_800DC4B4 *arg0, Obj_800DC4B4 *obj, void *attacker);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
void *get_player_data__10TObjPlayerFi(s32);
void queue_destruction__7TObjectFv(void *);
u32 csnVector(void *, void *, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
void TObjPlayer__sub_800DC4B4(Src_800DC4B4 *arg0, Obj_800DC4B4 *obj, void *attacker);
s32 TObjPlayer__sub_800DC5F4(M2C_UNK arg0, s32 arg1);
void *find_entity_by_id(u16);
s32 is_valid_and_active__10TObjPlayerFUi();
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 lbl_805D525C;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 lbl_805DA478;
void TObjPlayer__sub_800DC648(Me_800DC648 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u16 obj_getField1c(void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 spawn_particle_effect_with_rotation(void *, void *, int, int);
s32 spawn_continuous_particle_effect_with_flags(void *, int, int);
s32 TObjPlayer__sub_800DC5F4(M2C_UNK arg0, s32 arg1);
f32 TObjPlayer__sub_8013153C(void *, void *);
M2C_UNK TObjPlayer__sub_801569F4(void *, int);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern const f64 lbl_8043C918[];
extern M2C_UNK lbl_80494E10[];
extern const f32 lbl_805D525C;
extern s32 tl_06;
extern const f32 lbl_805DA47C;
u8 *TObjPlayer__sub_800DC83C(u8 *arg0, Vec_800DC83C *arg1, Vec_800DC83C *arg2, s32 arg3, void *arg4);
}

extern "C" {

void TObjPlayer__sub_800DC444(void);
void *TObjPlayer__sub_800DC7B0(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

s32 TObjPlayer__sub_800DC420(void *self, s32 i) {
    return (*(D_800DC420 * *)&lbl_805D5254)->arr[i];
}

f32 TObjPlayer__sub_800DC434(M2C_UNK arg0, s32 arg1) {
    return M2C_FIELD((lbl_805D5254 + (arg1 * 4)), f32 *, 0);
}

void TObjPlayer__sub_800DC444(void) {  }

extern M2C_UNK lbl_80494E10[];

void TObjPlayer__sub_800DC448(O_800DC448 *self, s32 i) {
    self->f34 = lbl_805D5258->entries[i].f8;
    self->f24 = lbl_805D5258->entries[i].fc;
}

s32 TObjPlayer__sub_800DC478(u8 *arg0, s32 arg1, f32 farg0) {
    f32 temp_f2;
    if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == arg1) {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0xC0);
        if ((temp_f2 >= farg0) && (temp_f2 < (farg0 + M2C_FIELD(arg0, f32 *, 0xC8)))) {
            return 1;
        }
    }
    return 0;
}

void TObjPlayer__sub_800DC4B4(Src_800DC4B4 *arg0, Obj_800DC4B4 *obj, void *attacker) {
    if (obj == NULL) {
        return;
    }
    if ((void *)obj == attacker) {
        return;
    }
    if (obj->flags & 0x4000A00) {
        return;
    }
    if (xyz_distance_squared(arg0->pos, obj->pos) > lbl_805D525C * lbl_805D525C) {
        return;
    }
    Parm_800DC4B4 parm = lbl_8043C908[0];
    parm.b = lbl_805D526C;
    obj->v21(attacker, parm, 0, -1, -1);
    if (attacker != NULL) {
        if (obj->flags & 0x800) {
            set_flag_20000__10TObjPlayerFPv(attacker);
        }
        if (is_split_screen() == 0 && lbl_805D53A0 == obj_getField1c(obj)) {
            trigger_hit_camera_shake__10TObjPlayerFPvUi(attacker, obj);
        }
    }
    spawn_particle_effect(obj->pos, 0xFB);
    spawn_particle_effect(obj->pos, 0xFC);
}

s32 TObjPlayer__sub_800DC5F4(M2C_UNK arg0, s32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(csnVecterUnder(arg1, 0x16EF));
    if (temp_r3 == NULL) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg1), (int) (M2C_FIELD(temp_r3, s32 *, 4)));
    return 1;
}

void TObjPlayer__sub_800DC648(Me_800DC648 *arg0) {
    void *att;
    s32 i;
    void *pl;
    Vec_800DC648 old = arg0->pos;
    TBoss4Zako__sub_803D8910(&arg0->pos, &arg0->vel);
    if (arg0->link0 != NULL) {
        copy_pos__11TNowLoadingFPvPv(arg0->link0, &arg0->pos);
    }
    arg0->timer += lbl_805D525C;
    if (arg0->trail != 0) {
        VecCopy__FP3VecPC3Vec(&arg0->prev, (int)&arg0->pos);
        arg0->cnt++;
        if (arg0->cnt > 4) {
            arg0->cnt = 0;
            TObjPlayer__sub_800DC5F4((M2C_UNK)arg0, (s32)&arg0->prev);
        }
        if (arg0->link1 != NULL) {
            copy_pos__11TNowLoadingFPvPv(arg0->link1, &arg0->prev);
        }
    }
    if (arg0->timer >= lbl_805DA478) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if (csnVector(&old, &arg0->pos, -1) != 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    att = find_entity_by_id(arg0->owner);
    if (att != NULL) {
        for (i = 0; i < lbl_805D586C + lbl_805D5870; i++) {
            pl = get_player_data__10TObjPlayerFi(i);
            if (pl != NULL && is_valid_and_active__10TObjPlayerFUi() != 0) {
                TObjPlayer__sub_800DC4B4((Src_800DC4B4 *)arg0, (Obj_800DC4B4 *)pl, att);
            }
        }
    }
}

void *TObjPlayer__sub_800DC7B0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80494E10;
        if (M2C_FIELD(arg0, void **, 0xE0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xE0)); M2C_FIELD(arg0, M2C_UNK *, 0xE0) = 0; }
        if (M2C_FIELD(arg0, void **, 0xE4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xE4)); M2C_FIELD(arg0, M2C_UNK *, 0xE4) = 0; }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjPlayer__sub_800DC83C(u8 *arg0, Vec_800DC83C *arg1, Vec_800DC83C *arg2, s32 arg3, void *arg4) {
    Ang_800DC83C ang;
    f32 s;
    TObjPlayer__sub_801569F4(arg0, tl_06);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80494E10;
    M2C_FIELD(arg0, s32 *, 0xF4) = arg3;
    VecCopy__FP3VecPC3Vec(arg0 + 0xAC, (int)arg1);
    M2C_FIELD(arg0, f32 *, 0xDC) = lbl_805DA47C;
    VecCopy__FP3VecPC3Vec(arg0 + 0xB8, (int)arg2);
    TBoss6Type1__sub_803D9370(arg0 + 0xB8, arg1);
    s = lbl_805D525C / TBoss6Kakusan__sub_803D8BD8(arg0 + 0xB8);
    M2C_FIELD(arg0, f32 *, 0xB8) *= s;
    M2C_FIELD(arg0, f32 *, 0xBC) *= s;
    M2C_FIELD(arg0, f32 *, 0xC0) *= s;
    M2C_FIELD(arg0, s16 *, 0xFC) = obj_getField1c(arg4);
    ang.x = 0;
    ang.y = (s32)(lbl_8043C918[0] * get_ad_end_text_start__10TObjPlayerFv(arg2->x - arg1->x, arg2->z - arg1->z)) + 0x4000;
    ang.z = 0x4000 - (s32)(lbl_8043C918[0] * get_ad_end_text_start__10TObjPlayerFv(arg2->y - arg1->y, TObjPlayer__sub_8013153C(arg2, arg1)));
    M2C_FIELD(arg0, s32 *, 0xE0) = spawn_particle_effect_with_rotation(arg1, &ang, 0xF5, 2);
    if (M2C_FIELD(arg0, s32 *, 0xF4) != 0) {
        VecCopy__FP3VecPC3Vec(arg0 + 0xE8, (int)(arg0 + 0xAC));
        TObjPlayer__sub_800DC5F4((M2C_UNK)arg0, (s32)(arg0 + 0xE8));
        M2C_FIELD(arg0, s32 *, 0xE4) = spawn_continuous_particle_effect_with_flags(arg0 + 0xE8, 0xF9, 2);
        M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    }
    return arg0;
}

}
