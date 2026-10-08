#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_4a4f5b { char pad[0x18]; };

struct VObj_18_4a4f5b : VBase_18_4a4f5b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
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
    virtual M2C_UNK m17();
};

struct RecoveredGlobal_801611CC_lbl_804B1248 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801611CC___vt__15TODoorAncient09 {
    M2C_UNK value;
    u8 remaining[0x50];
};

struct State_80161320 { s16 a; s16 b; };

struct Pkt_80161320 { s16 hdr; u16 id; s32 state; s32 kind; };

struct Obj_80161320 { u8 pad[4]; s16 kind; };

struct Self_80161320 { u8 pad[0x1C]; u16 id; u8 pad1e[0x80 - 0x1E]; Obj_80161320 *obj; };

struct Door_801615C4 {
    u8 pad0[0x80];
    void *obj;
    u8 pad84[0xC8 - 0x84];
    s32 base;
    s32 state;
    u32 flags;
    s32 count;
    s32 num;
};

extern "C" {
void TODoorCave01__vt4(u8 *arg0, s16 *arg1);
M2C_UNK set_indexed_flags(void *, int, int);
s32 is_any_player_within_radius_xz(f32);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DB494;
extern const f32 lbl_805DB498;
extern const f32 lbl_805DB49C;
extern const f32 lbl_805DB4A0;
void TODoorCave01__vt13(u8 *arg0);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_801611CC_lbl_804B1248 lbl_804B1248;
extern RecoveredGlobal_801611CC___vt__15TODoorAncient09 __vt__15TODoorAncient09;
extern s32 lbl_805D2F58;
extern u8 *lbl_805D5950;
extern s32 *TODoorAncient09__data_805D5954;
extern const f32 lbl_805DB480;
extern const f32 lbl_805DB484;
u8 *TODoorAncient09__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void copy_short_fields__6TLobbyFPvPv(void *, void *);
s32 access_object_saved_state(u8 *arg0, s32 arg1, s16 arg2);
void init__17TOBarrierEnergy01FPv(void *);
void update_and_send_60__6TLobbyFPv(void *);
void send_state__12TODoorCave01FPvPv(Self_80161320 *self, State_80161320 *src);
void play_door_sound(u8 *arg0);
u8 is_current_floor_switch_set(u16);
}

extern "C" {

void TODoorCave01__vt15(u8 *arg0);
s32 TODoorCave01__vt17(void *arg0);
void TODoorCave01__vt18(void);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
s32 is_any_player_within_radius_xz(f32);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();

typedef char RecoveredGlobal_801611CC_lbl_804B1248_size[sizeof(RecoveredGlobal_801611CC_lbl_804B1248) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_801611CC___vt__15TODoorAncient09_size[sizeof(RecoveredGlobal_801611CC___vt__15TODoorAncient09) == 0x54 ? 1 : -1];
u8 *TODoorAncient09__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    init_door_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__15TODoorAncient09.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2F58;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *TODoorAncient09__data_805D5954;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5950, u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, u8 **, 0xBC) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD(lbl_805D5950, u8 **, 0x430), void **, 4));
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - lbl_805DB484);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) (M2C_FIELD(arg0, f32 *, 0xB4) / lbl_805DB480);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B1248.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x84) = 0;
    } else if (temp_r0 > 0xFE) {
        M2C_FIELD(arg0, s32 *, 0x84) = 0xFE;
    }
    ((VObj_18_4a4f5b *)(arg0))->m17();
    M2C_FIELD(arg0, s16 *, 0xD4) = (s16) (M2C_FIELD(arg0, s32 *, 0x84) + 1);
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, s32 *, 0xE0) = 0;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    return arg0;
}

void TODoorCave01__vt18(void) {  }

void send_state__12TODoorCave01FPvPv(Self_80161320 *self, State_80161320 *src) {
    State_80161320 st;
    Obj_80161320 *obj;
    if (src != 0) {
        copy_short_fields__6TLobbyFPvPv(&st, src);
    } else {
        access_object_saved_state((u8 *)self, (s32)&st, 1);
    }
    obj = self->obj;
    if (obj != 0) {
        Pkt_80161320 pkt;
        init__17TOBarrierEnergy01FPv(&pkt);
        pkt.id = self->id;
        pkt.state = st.a;
        pkt.kind = obj->kind;
        update_and_send_60__6TLobbyFPv(&pkt);
    }
}

void TODoorCave01__vt4(u8 *arg0, s16 *arg1) {
    if ((s16) *arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 0xF0000 | 1);
    }
}

s32 TODoorCave01__vt17(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    if (temp_r0 > 0x100) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    } else if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 0) {
        if ((get_main_phase() == 0xF) || (is_not_split_screen__13TRaderMapCoreFv() == 1)) {
            M2C_FIELD(arg0, s32 *, 0xCC) = 3;
        } else {
            M2C_FIELD(arg0, s32 *, 0xCC) = 2;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xCC) = 2;
    }
    return M2C_FIELD(arg0, s32 *, 0xC8);
}

extern const f32 lbl_805DB490;

void TODoorCave01__vt15(u8 *arg0) {
    if (((u8) ((u32) __cntlzw(M2C_FIELD(arg0, s32 *, 0xD0) & 1) >> 5) == 1) || (is_any_player_within_radius_xz(lbl_805DB490) != 1)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
        play_sound_effect(0x42807, arg0 + 0x38, 0, 0);
    }
}
void TODoorCave01__vt13(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xD0) & 1) && (is_any_player_within_radius_xz((f32) (lbl_805DB494)) == 1)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        set_indexed_flags((void *) (arg0), (int) (0), (int) (8));
        play_sound_effect((M2C_UNK)((int) (0x42807)), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    }
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 0x100000) {
        M2C_FIELD(arg0, f32 *, 0xE0) = (f32) (M2C_FIELD(arg0, f32 *, 0xE0) + lbl_805DB498);
        if (lbl_805DB49C <= M2C_FIELD(arg0, f32 *, 0xE0)) {
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFEFFFFF);
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xE0) = (f32) (M2C_FIELD(arg0, f32 *, 0xE0) - lbl_805DB498);
        if (M2C_FIELD(arg0, f32 *, 0xE0) <= lbl_805DB4A0) {
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 0x100000);
        }
    }
}

void TODoorCave01__vt12(u8 *arg0) {
    Door_801615C4 *d = (Door_801615C4 *)arg0;
    State_80161320 st;
    s32 i;

    switch (d->state) {
    case 1:
        play_door_sound(arg0);
        d->flags |= 0xF0001;
        d->count = 4;
        break;
    case 2:
        d->flags &= 0xFFF0FFFF;
        d->count = 4 - d->num;
        for (i = 0; i < d->num; i++) {
            if (is_current_floor_switch_set(d->base + i) == 1) {
                d->count++;
            }
        }
        for (i = 0; i < d->count; i++) {
            d->flags |= 1 << (i + 0x10);
        }
        if (d->count == 4) {
            play_door_sound(arg0);
            d->flags |= 1;
        } else {
            d->flags &= ~1;
        }
        break;
    case 3:
        if (d->flags & 1) {
            d->flags |= 0xF0000;
            break;
        }
        d->flags &= 0xFFF0FFFF;
        d->count = 4 - d->num;
        for (i = 0; i < d->num; i++) {
            if (is_current_floor_switch_set(d->base + i) == 1) {
                d->count++;
            }
        }
        for (i = 0; i < d->count; i++) {
            d->flags |= 1 << (i + 0x10);
        }
        if (d->count == 4) {
            play_door_sound(arg0);
            d->flags |= 1;
            if (d->obj != NULL && ((s32 (*)(u8 *, void *, s16))access_object_saved_state)(arg0, &st, 1) != 0) {
                st.a = 1;
                send_state__12TODoorCave01FPvPv((Self_80161320 *)arg0, &st);
                ((s32 (*)(u8 *, void *, s16))access_object_saved_state)(arg0, &st, 0);
            }
        }
        break;
    default:
        d->flags &= 0xFFF0FFFE;
        break;
    }
}

}
