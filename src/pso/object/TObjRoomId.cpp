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

struct RecoveredGlobal_801A1CD8___vt__10TObjRoomId {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct Obj_801A1888 { u8 pad[0x38]; f32 pos[3]; };

struct Vec_801A18EC { f32 x, y, z; };

struct Color_801A18EC { f32 r, g, b, a; };

struct RoomId_801A18EC {
    u8 pad0[0x38];
    Vec_801A18EC pos;
    u8 pad44[0x24];
    f32 radius;
    u8 pad6c[0x24];
    Vec_801A18EC dir;
};

extern "C" {
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK __vt__10TObjRoomId[];
extern s32 lbl_805D34B0;
extern const f32 lbl_805DC094;
u8 *TObjRoomId__ct(u8 *arg0, s32 arg1, s32 arg2);
u16 TObjRoomId__sub_801A1DB8(u16 x);
Obj_801A1888 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
f32 TObjPlayer__sub_80141CF8(f32 *a, f32 *b);
s32 TObjRoomId__sub_801A1888(Obj_801A1888 *self, u16 id, f32 range);
s32 check_demo_mode__10TObjPlayerFv();
void draw_debug_line__10TObjRoomIdFUiiii(void *, int, int, void *);
void TObjMapWarp__sub_80141CB0(Vec_801A18EC *, Vec_801A18EC *, u32, u32);
void fn_80141CBC(Vec_801A18EC *, Color_801A18EC *, f32);
void TObjRoomId__sub_80141CF4(Vec_801A18EC *, Color_801A18EC *, f32);
extern u8 lbl_804468B8[];
extern u8 lbl_804468C4[];
extern u8 lbl_804468D0[];
extern u8 lbl_804468DC[];
extern const f32 lbl_805DC088;
extern const f32 lbl_805DC08C;
void render__10TObjRoomIdFv(RoomId_801A18EC *self);
}

extern "C" {

void TObjRoomId__sub_801A1D94(void *arg0);
int TObjRoomId__sub_801A1E2C(void);
void *__dt__10TObjRoomIdFv(void *arg0, s16 arg1);
void *create__10TObjRoomIdFPv(void *arg0);
u8 is_current_room__10TObjRoomIdFPv(void *arg0);
void set__10TObjRoomIdFPvs(void *arg0, s16 arg1);
s32 TContainerAncient01__sub_8020335C(void);
void TLobby__sub_801A1FD8(void);
u16 TLobby__sub_801A2078(s32);
u16 TLobby__sub_801A20C8(s32);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
u16 fn_801A210C(s32);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 is_split_screen();
void set_state__9TTecLukerFPvi(void* p, s32 v);
M2C_UNK set_state_flags__10TObjPlayerFPvUi(void *, M2C_UNK);

extern M2C_UNK __vt__10TObjRoomId[];

s32 TObjRoomId__sub_801A1888(Obj_801A1888 *self, u16 id, f32 range) {
    Obj_801A1888 *p = TPlayerBattleCtrl4P__sub_801BA74C(id);
    if (p == 0) {
        return 0;
    }
    return TObjPlayer__sub_80141CF8(p->pos, self->pos) < range;
}

#pragma push
#pragma fp_contract on
void render__10TObjRoomIdFv(RoomId_801A18EC *self) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        Color_801A18EC c1 = { 0.5f, 1.0f, 1.0f, 0.0f };
        Color_801A18EC c2 = { 0.5f, 0.0f, 1.0f, 1.0f };
        Vec_801A18EC end;
        TObjRoomId__sub_80141CF4(&self->pos, &c2, lbl_805DC088 * (lbl_805DC08C * self->radius));
        fn_80141CBC(&self->pos, &c1, lbl_805DC08C * self->radius);
        end.x = lbl_805DC08C * self->dir.x + self->pos.x;
        end.y = lbl_805DC08C * self->dir.y + self->pos.y;
        end.z = lbl_805DC08C * self->dir.z + self->pos.z;
        TObjMapWarp__sub_80141CB0(&self->pos, &end, 0xFFFF0000, 0xFFFF0000);
        TObjRoomId__sub_80141CF4(&end, &c2, lbl_805DC088);
        draw_debug_line__10TObjRoomIdFUiiii(self, 0x13, 0x1C, lbl_804468B8);
        draw_debug_line__10TObjRoomIdFUiiii(self, 0x13, 0x1D, lbl_804468C4);
        draw_debug_line__10TObjRoomIdFUiiii(self, 0x13, 0x1E, lbl_804468D0);
        draw_debug_line__10TObjRoomIdFUiiii(self, 0x13, 0x22, lbl_804468DC);
    }
}
#pragma pop

void *__dt__10TObjRoomIdFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjRoomId;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_801A1CD8___vt__10TObjRoomId_size[sizeof(RecoveredGlobal_801A1CD8___vt__10TObjRoomId) == 0x38 ? 1 : -1];
u8 *TObjRoomId__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801A1CD8___vt__10TObjRoomId *)&__vt__10TObjRoomId).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D34B0;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) lbl_805DC094;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) lbl_805DC094;
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) lbl_805DC094;
    return arg0;
}

void *create__10TObjRoomIdFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x9C);
    if (o != NULL) {
        o = TObjRoomId__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

void TObjRoomId__sub_801A1D94(void *arg0) {
    set_state_flags__10TObjPlayerFPvUi(arg0, 0x02000000);
}

extern s32 lbl_805D53A0;

u16 TObjRoomId__sub_801A1DB8(u16 x) {
    u16 r;
    if (x == 0xFFFF) {
        r = 0xFFFF;
    } else {
        r = x & 0x5000;
    }
    return r;
}

u8 is_current_room__10TObjRoomIdFPv(void *arg0) {
    if (is_split_screen() != 0) {
        return 1U;
    }
    return (u8) (M2C_FIELD(arg0, u16 *, 0x1C) == lbl_805D53A0);
}

int TObjRoomId__sub_801A1E2C(void) { return 0; }
void set__10TObjRoomIdFPvs(void *arg0, s16 arg1) {
    u32 temp_r3;

    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) < 0x1000U) {
        temp_r3 = get_global_state__14TOKeyMachine01Fv();
        if ((temp_r3 <= 2U) || ((s32) temp_r3 == 0x12) || (TContainerAncient01__sub_8020335C() != 0) || ((s32) temp_r3 == 0xC) || ((s32) temp_r3 == 0x20)) {
            M2C_FIELD(arg0, s16 *, 0x2E) = arg1;
        }
        M2C_FIELD(arg0, s16 *, 0x28) = arg1;
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x28) = arg1;
}

}
