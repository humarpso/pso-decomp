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
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK create__9TTecMegidFiiii(void *, Vec_80058848 *, u8 *, s32);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(s32, s32);
s32 rand();
M2C_UNK TBoss4Zako__sub_803D8910(Vec_80058848 *, u8 *);
f32 TBoss6Kakusan__sub_803D8BD8(Vec_80058848 *);
M2C_UNK TBoss6Type1__sub_803D9370(Vec_80058848 *, u8 *);
M2C_UNK TNpcPlayer__sub_803D97B4(Vec_80058848 *);
extern const f32 TBoss4Type3__data_805D8C34;
extern const f32 TBoss4Type3__data_805D8C40;
extern const f32 lbl_805D8C44;
extern const f32 lbl_805D8C48;
extern const f32 lbl_805D8C4C;
void TBoss4Type3__vt36(O_80058848 *o);
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
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
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
        TBoss3Volopt__sub_8022675C((int)(0x4003C12C), (void *)(0), (int)(0), (int)(0));
        M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
        spawn_random_effect__11TBoss4Type3Fi(arg0);
    }
}

void TBoss4Type3__vt37(void *arg0) {
    TBoss3Volopt__sub_8022675C((int)(0x4003C12B), (void *)(0), (int)(0), (int)(0));
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
            p = TPlayerBattleCtrl4P__sub_801BA74C(i);
            if (TBoss4Type3__sub_8005254C(i) != 0) {
                Vec_80058848 v = o->pos;
                p += 0x2FC;
                TBoss6Type1__sub_803D9370(&v, (u8 *)p);
                if (TBoss4Type3__data_805D8C40 == TBoss6Kakusan__sub_803D8BD8(&v)) {
                    v.y = TBoss4Type3__data_805D8C34;
                } else {
                    TNpcPlayer__sub_803D97B4(&v);
                }
                s = lbl_805D8C48 * (lbl_805D8C4C * (f32)rand()) + lbl_805D8C44;
                v.x *= s;
                v.y *= s;
                v.z *= s;
                TBoss4Zako__sub_803D8910(&v, (u8 *)p);
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
    TBoss3Volopt__sub_8022675C((int)(0x4003B238), (void *)(0), (int)(0), (int)(0));
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x62;
}

void TBoss4Type3__vt32(void* p) { if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type3__sub_80059F64(p, (void*)10); } }

void TBoss4Type3__vt31(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x93;
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
    TBoss3Volopt__sub_8022675C((int)(0x4003B032), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    if ((u16) M2C_FIELD(arg0, u16 *, 0x3BA) == (u16)-1) {
        TBoss3Volopt__sub_8022675C((int)(0x4003C62D), (void *)(0), (int)(0), (int)(0));
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
    TBoss3Volopt__sub_8022675C((int)(0x4003B031), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
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
