#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_80058D70 { u8 pad[0x398]; s32 f398; u8 pad2[0x1c]; u16 f3b8; };

struct Obj_80059010 { u8 pad[0x398]; s32 f398; u8 pad39c[0x1C]; u16 f3b8; u16 f3ba; };

struct Obj_80059390 { u8 pad[0x30]; u32 flags; u8 pad34[0x384]; u16 f3b8; u16 f3ba; };

struct Obj_80058E64 { u8 pad[0x32C]; s16 f32c; u8 pad2[0x6A]; s32 f398; u8 pad3[0x1C]; u16 f3b8; u16 f3ba; u8 pad4[0x24]; s32 f3e0; };

typedef s32 M2C_UNK;
struct Vec_80058848 { f32 x, y, z; };

struct O_80058848 {
    u8 pad0[0x38];
    Vec_80058848 pos;
    u8 pad44[0x398 - 0x44];
    s32 f398;
};

struct Grant_80058A48 { s32 f0; u16 f4; s16 f6; u8 pad[0x58]; };

struct O_80058BA0 {
    u8 pad0[0x38];
    u8 f38[0x398 - 0x38];
    s32 f398;
    u8 pad39c[0x3B8 - 0x39C];
    u16 f3b8;
    u8 pad3ba[0x424 - 0x3BA];
    void *f424;
    void *f428;
    u8 pad42c[0x450 - 0x42C];
    u8 f450[0xC];
    u8 f45c[0x52C - 0x45C];
    s32 f52c;
};

struct Vec_800590F4
{
  f32 x;
  f32 y;
  f32 z;
};

struct VBase_800590F4
{
  char pad[0x18];
};

struct VObj_800590F4 : VBase_800590F4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(Vec_800590F4 *, Vec_800590F4 *);
};

struct O_800590F4
{
  u8 pad0[0x38];
  u8 f38[0x28];
  s32 f60;
  u8 pad64[0x374 - 0x64];
  s32 f374;
  u8 pad378[0x398 - 0x378];
  s32 f398;
  f32 f39c;
  u8 pad3a0[0x3A8 - 0x3A0];
  s32 f3a8;
  u8 pad3ac[0x3F4 - 0x3AC];
  f32 f3f4;
  u8 pad3f8[0x51C - 0x3F8];
  s32 f51c[2];
  VObj_800590F4 *f524[2];
};

extern "C" {
void TBoss4Type3__vt2(void *arg0);
M2C_UNK TBoss4Type3__sub_8005A398(void *, M2C_UNK);
extern f32 lbl_805D8BB0;
extern f32 TBoss4Type2__data_805D8BAC;
extern f32 TBoss4Type2__data_805D8BAC;
extern f32 TBoss4Type2__data_805D8BAC;
extern f32 TBoss4Type2__data_805D8BAC;
void TBoss4Type3__vt2(void *arg0);
M2C_UNK TBoss4Type3__sub_8005A678(void *, int);
M2C_UNK reset_timer__11TBoss4Type3FPv(int);
void TBoss4Type3__vt7(u8 *arg0);
M2C_UNK TBoss4Type3__sub_8005A398(void *, M2C_UNK);
void TBoss4Type3__vt6(u8 *arg0);
s32 get_random_scaled__11TBoss4Type3Fv(void);
M2C_UNK spawn_random_effect__11TBoss4Type3Fi(void *);
void TBoss4Type3__sub_80059F04(void *, s32, s32, s32);
void TBoss4Type3__vt8(u8 *arg0);
f32 TBoss4Type3__sub_800524E8(f32);
void TBoss4Type3__sub_80059C20(void *);
M2C_UNK TBoss4Type3__sub_8005A398(void *, M2C_UNK);
extern const f32 TBoss4Type3__data_805D8C34;
extern const f32 lbl_805D8C50;
void TBoss4Type3__vt27(u8 *arg0);
f32 TBoss4Type3__sub_800524E8(f32);
void TBoss4Type3__sub_80059C20(void *);
M2C_UNK TBoss4Type3__sub_8005A398(void *, M2C_UNK);
extern const f32 TBoss4Type3__data_805D8C34;
extern const f32 lbl_805D8C50;
void TBoss4Type3__vt24(u8 *arg0);
int TBoss4Type3__sub_80059F64(void*, void*);
void TBoss4Type3__vt29(O_80058D70 *self);
int TBoss4Type3__sub_80059F64(void*, void*);
void TBoss4Type3__sub_80059EA8(void *, s32, s32);
s32 TBoss4Type3__sub_8004AE60(void);
void TBoss4Type3__vt23(Obj_80059010 *self);
int TBoss4Type3__sub_80059F64(void*, void*);
void TBoss4Type3__vt3(Obj_80059390 *self);
s32 TBoss4Type3__sub_8004AE60(void);
int TBoss4Type3__sub_800599F4(void*, void*, void*);
void TBoss4Type3__sub_80059EA8(void *, s32, s32);
int TBoss4Type3__sub_80059F64(void*, void*);
void TBoss4Type3__vt26(Obj_80058E64 *self);
u8 *dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
s32 get_game_mode__6TLobbyFv();
s32 TBoss4Type3__sub_8005254C(u16);
M2C_UNK TBoss4Type3__sub_8005A398(void *, M2C_UNK);
s32 get_player_by_client_id(s32);
M2C_UNK create__9TTecMegidFiiii(void *, Vec_80058848 *, u8 *, s32);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(s32, s32);
s32 rand();
M2C_UNK vec3_add_to(Vec_80058848 *, u8 *);
f32 vector_length(Vec_80058848 *);
M2C_UNK subtract_vector(Vec_80058848 *, u8 *);
M2C_UNK normalize_vector(Vec_80058848 *);
extern const f32 TBoss4Type3__data_805D8C34;
extern const f32 TBoss4Type3__data_805D8C40;
extern const f32 lbl_805D8C44;
extern const f32 lbl_805D8C48;
extern const f32 lbl_805D8C4C;
void TBoss4Type3__vt36(O_80058848 *o);
u8 *dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
M2C_UNK fn_80044330(void *);
M2C_UNK TObjPlayer__sub_8004433C(void *);
s32 TBoss4Type3__sub_8005254C(u16);
M2C_UNK TBoss4Type3__sub_8005A398(void *, M2C_UNK);
M2C_UNK TBoss4Type3__sub_8005A678(void *, int);
void *spawn_particle_effect(void *, int);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
M2C_UNK create__10TTecGrantsFPvPvPvPv(void *, void *, void *, s32);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(s32, s32);
void TBoss4Type3__vt33(u8 *arg0);
M2C_UNK TBoss4Type3__sub_8005A398(void *, M2C_UNK);
void TBoss4Type3__sub_80059ABC(void *, u16);
M2C_UNK TBoss4Type3__sub_8005A678(void *, int);
void *create_particle_emitter(void *, int);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
void request_destroy__11TBoss4Type2FUi(void *);
u8 *dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
void create_horming__11TBoss4Type3FPvPvPv(void *, void *, u16);
M2C_UNK play_sound_effect(int, void *, int, int);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void TBoss4Type3__vt30(O_80058BA0 *o);
void TBoss4Type3__sub_80059C20(void *);
M2C_UNK TBoss4Type3__sub_8005A398(void *, M2C_UNK);
M2C_UNK create__13TObjBs4CutAtkFPvPvPv(void *, s32, s32);
u8 *lookup_entry_by_value__10TObjPlayerFPvf(s32);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK matrix_mult_vec(int, void *, void *);
M2C_UNK TObjPlayer__sub_803D8CD4(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
extern const f32 TBoss4Type3__data_805D8C34;
extern const f32 lbl_805D8C54;
extern const f32 lbl_805D8C58;
extern const f32 lbl_805D8C5C;
void TBoss4Type3__vt9(O_800590F4 *o);
}

extern "C" {

void TBoss4Type3__vt22(u8 *arg0);
void TBoss4Type3__vt25(u8 *arg0);
void TBoss4Type3__vt28(void *arg0);
void TBoss4Type3__vt31(void *arg0);
void TBoss4Type3__vt32(void* p);
void TBoss4Type3__vt34(void *arg0);
void TBoss4Type3__vt35(void* p);
void TBoss4Type3__vt37(void *arg0);
void TBoss4Type3__vt38(void *arg0);
void TBoss4Type3__vt4(void *arg0);
void TBoss4Type3__vt5(void);
M2C_UNK play_sound_effect(int, void *, int, int);
s32 TBoss4Type3__sub_8005254C(u16);
int TBoss4Type3__sub_800599F4(void*, void*, void*);
int TBoss4Type3__sub_80059F64(void*, void*);
void TBoss4Type3__vt0(void* p);
void TBoss4Type3__vt1(void* p);
M2C_UNK spawn_random_effect__11TBoss4Type3Fi(void *);

void TBoss4Type3__vt38(void *arg0) {
    if (TBoss4Type3__sub_8005254C(M2C_FIELD(arg0, u16 *, 0x3B8)) == 0) {
        M2C_FIELD(arg0, u16 *, 0x3B8) = 0xFFFFU;
        M2C_FIELD(arg0, u16 *, 0x3BA) = 0xFFFFU;
        TBoss4Type3__sub_800599F4((void*)(arg0), (void*)(0), (void*)(2));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        M2C_FIELD(arg0, u16 *, 0x3BA) = (u16) M2C_FIELD(arg0, u16 *, 0x3B8);
        M2C_FIELD(arg0, u16 *, 0x3B8) = 0xFFFFU;
        play_sound_effect((int)(0x4003C12C), (void *)(0), (int)(0), (int)(0));
        M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
        spawn_random_effect__11TBoss4Type3Fi(arg0);
    }
}

void TBoss4Type3__vt37(void *arg0) {
    play_sound_effect((int)(0x4003C12B), (void *)(0), (int)(0), (int)(0));
    M2C_FIELD(arg0, s32 *, 0x52C) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x62;
}

#pragma push
#pragma fp_contract on
#pragma opt_propagation off
void TBoss4Type3__vt36(O_80058848 *o) {
    s32 r30;
    s32 i;
    s32 p;
    f32 s;
    if (o->f398 == 0x46) {
        r30 = *(s32 *)(dispatch_shared_handler_a__6TLobbyFPv(0x38) + 0x1C);
        for (i = 0; i < get_game_mode__6TLobbyFv(); i++) {
            p = get_player_by_client_id(i);
            if (TBoss4Type3__sub_8005254C(i) != 0) {
                Vec_80058848 v = o->pos;
                p += 0x2FC;
                subtract_vector(&v, (u8 *)p);
                if (TBoss4Type3__data_805D8C40 == vector_length(&v)) {
                    v.y = TBoss4Type3__data_805D8C34;
                } else {
                    normalize_vector(&v);
                }
                s = lbl_805D8C48 * (lbl_805D8C4C * (f32)rand()) + lbl_805D8C44;
                v.x *= s;
                v.y *= s;
                v.z *= s;
                vec3_add_to(&v, (u8 *)p);
                create__9TTecMegidFiiii(o, &v, (u8 *)p, r30);
            }
        }
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
    }
    if (--o->f398 < 0) {
        TBoss4Type3__sub_8005A398(o, 1);
    }
}
#pragma pop

void TBoss4Type3__vt35(void* p) { if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type3__sub_80059F64(p, (void*)12); } }

void TBoss4Type3__vt34(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    play_sound_effect((int)(0x4003B238), (void *)(0), (int)(0), (int)(0));
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x62;
}

void TBoss4Type3__vt33(u8 *arg0) {
    Grant_80058A48 g;
    s32 r29;
    u8 *sub;
    s32 i;
    void *p;
    sub = arg0 + 0x474;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0x62) {
        TBoss4Type3__sub_8005A678(arg0, 7);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0x49) {
        p = spawn_particle_effect(sub, 0x133);
        if (p != 0) {
            set_flags__11TBoss4Type2FPvUi(p, 0x40);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0x45) {
        r29 = *(s32 *)(dispatch_shared_handler_a__6TLobbyFPv(0x38) + 0x18);
        for (i = 0; i < 4; i++) {
            if (TBoss4Type3__sub_8005254C(i) != 0) {
                TObjPlayer__sub_8004433C(&g);
                fn_80044330(&g);
                g.f0 = 1;
                g.f4 = i;
                g.f6 = 0;
                create__10TTecGrantsFPvPvPvPv(arg0, sub, &g, r29);
            }
        }
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
    }
    if (--M2C_FIELD(arg0, s32 *, 0x398) < 0) {
        TBoss4Type3__sub_8005A398(arg0, 1);
    }
}

void TBoss4Type3__vt32(void* p) { if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type3__sub_80059F64(p, (void*)10); } }

void TBoss4Type3__vt31(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x93;
}

void TBoss4Type3__vt30(O_80058BA0 *o) {
    u8 *a;
    u8 *b;
    s32 n;
    s32 step;
    s32 v;
    s32 i;
    u16 id;
    a = o->f450;
    b = o->f45c;
    id = o->f3b8;
    if (id == 0xFFFF) {
        TBoss4Type3__sub_8005A398(o, 1);
        return;
    }
    if (o->f398 > 0x93) {
        TBoss4Type3__sub_80059ABC(o, id);
    } else if (o->f398 == 0x93) {
        if ((o->f424 = create_particle_emitter(a, 0xF7)) != 0) {
            set_flags__11TBoss4Type2FPvUi(o->f424, 0x40);
        }
        if ((o->f428 = create_particle_emitter(b, 0xF7)) != 0) {
            set_flags__11TBoss4Type2FPvUi(o->f428, 0x40);
        }
        TBoss4Type3__sub_8005A678(o, 6);
    } else if (o->f398 == 0x75) {
        if (o->f424 != 0) {
            request_destroy__11TBoss4Type2FUi(o->f424);
            o->f424 = 0;
        }
        if (o->f428 != 0) {
            request_destroy__11TBoss4Type2FUi(o->f428);
            o->f428 = 0;
        }
        o->f52c = 0;
    }
    n = *(s32 *)(dispatch_shared_handler_a__6TLobbyFPv(0x38) + 0x20);
    if (n < 1 || n > 8) {
        n = 4;
    }
    step = 0x42 / n;
    if (step < 1) {
        step = 1;
    }
    v = 0x75;
    for (i = 0; i < n; i++) {
        if (o->f398 == v) {
            create_horming__11TBoss4Type3FPvPvPv(o, a, o->f3b8);
            create_horming__11TBoss4Type3FPvPvPv(o, b, o->f3b8);
            play_sound_effect(0x4003B229, o->f38, 0, 1);
            break;
        }
        v += step;
    }
    if (o->f424 != 0) {
        copy_pos__11TNowLoadingFPvPv(o->f424, a);
    }
    if (o->f428 != 0) {
        copy_pos__11TNowLoadingFPvPv(o->f428, b);
    }
    if (--o->f398 < 0) {
        TBoss4Type3__sub_8005A398(o, 1);
    }
}

void TBoss4Type3__vt29(O_80058D70 *self) {
    if (self->f398 == 0) {
        self->f3b8 = 0xFFFF;
        TBoss4Type3__sub_80059F64((void*)(self), (void*)(0xc));
    }
}

void TBoss4Type3__vt28(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0xC4;
}

void TBoss4Type3__vt27(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) (TBoss4Type3__data_805D8C34 - ((f32) M2C_FIELD(arg0, s32 *, 0x398) / lbl_805D8C50));
    M2C_FIELD(arg0, f32 *, 0x39C) = TBoss4Type3__sub_800524E8(M2C_FIELD(arg0, f32 *, 0x39C));
    TBoss4Type3__sub_80059C20(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type3__sub_8005A398((void *)(arg0), (M2C_UNK)(1));
    }
}

void TBoss4Type3__vt26(Obj_80058E64 *self) {
    s32 t;
    if (self->f398 == 0) {
        if (self->f3ba != 0xFFFF) {
            TBoss4Type3__sub_80059F64(self, (void*)16);
            return;
        }
        t = TBoss4Type3__sub_8004AE60();
        if (self->f32c <= self->f3e0 && (u16)t != 0xFFFF) {
            TBoss4Type3__sub_80059EA8(self, 14, t);
            return;
        }
        TBoss4Type3__sub_800599F4(self, (void*)0, (void*)2);
    }
}

void TBoss4Type3__vt25(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x10;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    play_sound_effect((int)(0x4003B032), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    if ((u16) M2C_FIELD(arg0, u16 *, 0x3BA) == (u16)-1) {
        play_sound_effect((int)(0x4003C62D), (void *)(0), (int)(0), (int)(0));
    }
    M2C_FIELD(arg0, s32 *, 0x52C) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

void TBoss4Type3__vt24(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) (TBoss4Type3__data_805D8C34 - ((f32) M2C_FIELD(arg0, s32 *, 0x398) / lbl_805D8C50));
    M2C_FIELD(arg0, f32 *, 0x39C) = TBoss4Type3__sub_800524E8(M2C_FIELD(arg0, f32 *, 0x39C));
    TBoss4Type3__sub_80059C20(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type3__sub_8005A398((void *)(arg0), (M2C_UNK)(1));
    }
}

void TBoss4Type3__vt23(Obj_80059010 *self) {
    s32 id;
    if (self->f398 == 0) {
        if (self->f3ba != 0xFFFF) {
            TBoss4Type3__sub_80059F64((void*)(self), (void*)((void *)0xD));
        } else {
            id = TBoss4Type3__sub_8004AE60();
            if ((u16)id != 0xFFFF) {
                TBoss4Type3__sub_80059EA8(self, 0xB, id);
            } else {
                TBoss4Type3__sub_80059F64((void*)(self), (void*)((void *)0xC));
            }
        }
    }
}

void TBoss4Type3__vt22(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A4) = (s32) M2C_FIELD(arg0, s32 *, 0x3A0);
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    play_sound_effect((int)(0x4003B031), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

typedef struct O_800590F4 O_800590F4;
typedef struct VBase_800590F4 VBase_800590F4;
typedef struct VObj_800590F4 VObj_800590F4;
typedef struct Vec_800590F4 Vec_800590F4;
void TBoss4Type3__vt9(O_800590F4 *o) {
  s32 pb;
  Vec_800590F4 b;
  Vec_800590F4 a;
  if (o->f398 > 0x2A)
  {
    o->f39c = TBoss4Type3__data_805D8C34 - (((f32) (o->f398 - 0x2A)) / lbl_805D8C54);
  }
  else
  {
    o->f39c = TBoss4Type3__data_805D8C34;
  }
  TBoss4Type3__sub_80059C20(o);
  if (o->f398 == 0x28)
  {
    create__13TObjBs4CutAtkFPvPvPv(o, o->f3a8, (o->f374 - 4) & 1);
    play_sound_effect(0x4003B228, o->f38, 0, 1);
  }
  if ((o->f3f4 >= lbl_805D8C58) && (o->f3f4 <= lbl_805D8C5C))
  {
    s32 idx = (o->f374 - 4) & 1;
    u8 *e = lookup_entry_by_value__10TObjPlayerFPvf(o->f51c[idx]);
    if (e != 0)
    {
      push_matrix();
      TObjPlayer__sub_803D8CD4(0);
      post_translate_matrix(o->f38);
      rotate_matrix_y(0, o->f60);
      matrix_mult_vec(0, e, &a);
      pb = (0, (s32) (&b));
      matrix_mult_vec(0, e + 0xC, (void *) pb);
      pop_matrix();
      o->f524[idx]->m4(&a, (Vec_800590F4 *) pb);
    }
  }
  if ((--o->f398) < 0)
  {
    TBoss4Type3__sub_8005A398(o, 1);
  }
}

void TBoss4Type3__vt8(u8 *arg0) {
    s32 temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 4) {
            M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
            spawn_random_effect__11TBoss4Type3Fi((void *)((s32) arg0));
            return;
        }
        temp_r3 = get_random_scaled__11TBoss4Type3Fv();
        TBoss4Type3__sub_80059F04(arg0, M2C_FIELD(arg0, s32 *, 0x374) - 1, temp_r3, temp_r3);
    }
}

void TBoss4Type3__vt7(u8 *arg0) {
    reset_timer__11TBoss4Type3FPv((int) (M2C_FIELD(arg0, s32 *, 0x524)));
    reset_timer__11TBoss4Type3FPv((int) (M2C_FIELD(arg0, s32 *, 0x528)));
    TBoss4Type3__sub_8005A678((void *) (arg0), (int) (((M2C_FIELD(arg0, s32 *, 0x374) - 4) & 1) + 3));
    M2C_FIELD(arg0, s32 *, 0x52C) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

void TBoss4Type3__vt6(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type3__sub_8005A398((void *)((void *)(arg0)), (M2C_UNK)((int) (2)));
    }
}

void TBoss4Type3__vt5(void) {  }

extern f32 lbl_805D8C60;

void TBoss4Type3__vt4(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) lbl_805D8C60;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

void TBoss4Type3__vt3(Obj_80059390 *self) {
    if (self->flags & 0x800) {
        TBoss4Type3__sub_80059F64((void*)(self), (void*)((void *)2));
    } else {
        self->f3b8 = 0xFFFF;
        self->f3ba = 0xFFFF;
        TBoss4Type3__sub_80059F64((void*)(self), (void*)((void *)10));
    }
}

void TBoss4Type3__vt2(void *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type3__sub_8005A398(arg0, 1);
    }
}

}
