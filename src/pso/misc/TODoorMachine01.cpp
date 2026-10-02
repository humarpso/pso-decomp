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

struct RecoveredGlobal_80163158_lbl_804B1608 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80163158___vt__15TODoorMachine01 {
    M2C_UNK value;
    u8 remaining[0x50];
};

typedef struct Door_80162A70 {
    u8 pad0[0xC8];
    s32 fC8;
    s32 fCC;
    u32 fD0;
    s32 fD4;
    s32 fD8;
} Door_80162A70;

extern "C" {
M2C_UNK set_indexed_flags(void *, int, int);
s32 TODragonfly__sub_80158360(f32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DB4F4;
extern const f32 lbl_805DB4F8;
extern const f32 lbl_805DB4FC;
extern const f32 lbl_805DB500;
void TODoorMachine01__vt13(u8 *arg0);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_80154E3C(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_80163158_lbl_804B1608 lbl_804B1608;
extern M2C_UNK __vt__15TODoorMachine01[];
extern s32 lbl_805D2F78;
extern u32 lbl_805D5970;
extern const f32 lbl_805DB4FC;
extern const f32 lbl_805DB508;
u8 *TODoorMachine01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void fn_8015D5D4(void *);
u8 TODoorAncient08__sub_80229220(u16);
void TODoorMachine01__vt12(Door_80162A70 *self);
}

extern "C" {

void TODoorMachine01__vt15(u8 *arg0);
void TODoorMachine01__vt18(void);
void *__dt__15TODoorMachine01Fv(void *arg0, s16 arg1);
void *create__15TODoorMachine01FPv(void *arg0);
void free_resources__15TODoorMachine01Fv(void);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
s32 TODragonfly__sub_80158360(f32);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

void TODoorMachine01__vt18(void) {  }

extern const f32 lbl_805DB4F0;

void TODoorMachine01__vt15(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xD0) & 1) || (TODragonfly__sub_80158360(lbl_805DB4F0) != 1)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
        TBoss3Volopt__sub_8022675C(0x4004BC01, arg0 + 0x38, 0, 0);
    }
}

extern void *tl_05;

void TODoorMachine01__vt13(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xD0) & 1) && (TODragonfly__sub_80158360((f32) (lbl_805DB4F4)) == 1)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        set_indexed_flags((void *) (arg0), (int) (0), (int) (8));
        TBoss3Volopt__sub_8022675C((M2C_UNK)((int) (0x4004BC01)), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    }
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 0x100000) {
        M2C_FIELD(arg0, f32 *, 0xE0) = (f32) (M2C_FIELD(arg0, f32 *, 0xE0) + lbl_805DB4F8);
        if (lbl_805DB4FC <= M2C_FIELD(arg0, f32 *, 0xE0)) {
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFEFFFFF);
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xE0) = (f32) (M2C_FIELD(arg0, f32 *, 0xE0) - lbl_805DB4F8);
        if (M2C_FIELD(arg0, f32 *, 0xE0) <= lbl_805DB500) {
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 0x100000);
        }
    }
}

void TODoorMachine01__vt12(Door_80162A70 *self) {
    s32 i;
    s32 j;
    s32 k;
    switch (self->fCC) {
    case 1:
        fn_8015D5D4(self);
        self->fD0 |= 0xF0001;
        self->fD4 = 4;
        break;
    case 2:
        self->fD0 &= ~0xF0000;
        if (self->fD8 == 1) {
            if (TODoorAncient08__sub_80229220(self->fC8) == 1) {
                self->fD4 = 4;
                self->fD0 |= 0xF0000;
            } else {
                self->fD4 = 0;
            }
        } else {
            self->fD4 = 4 - self->fD8;
            for (i = 0; i < self->fD8; i++) {
                if (TODoorAncient08__sub_80229220(self->fC8 + i) == 1) {
                    self->fD4++;
                }
            }
            for (j = 0; j < self->fD4; j++) {
                self->fD0 |= 1 << (j + 16);
            }
        }
        if (self->fD4 == 4) {
            fn_8015D5D4(self);
            self->fD0 |= 1;
        } else {
            self->fD0 &= ~1;
        }
        break;
    case 3:
        if (self->fD8 == 1) {
            if (TODoorAncient08__sub_80229220(self->fC8) == 1) {
                self->fD4 = 4;
                self->fD0 |= 0xF0000;
            } else {
                self->fD4 = 0;
            }
        } else {
            self->fD4 = 4 - self->fD8;
            for (k = 0; k < self->fD8; k++) {
                if (TODoorAncient08__sub_80229220(self->fC8 + k) == 1) {
                    self->fD4++;
                    self->fD0 |= 1 << (k + 16);
                }
            }
        }
        if (self->fD4 == 4) {
            fn_8015D5D4(self);
            self->fD0 |= 1;
        }
        break;
    default:
        self->fD0 &= ~0xF0001;
        break;
    }
}

void *create__15TODoorMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xEC);
    if (o != NULL) {
        o = TODoorMachine01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 lbl_805D5970;
extern s32 *lbl_805D5974;

void free_resources__15TODoorMachine01Fv(void) {
    if ((s32 *) lbl_805D5974 != NULL) {
        free_if_valid__10TObjPlayerFi(*lbl_805D5974);
        if ((s32 *) lbl_805D5974 != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D5974);
            lbl_805D5974 = NULL;
        }
    }
    if ((u32) lbl_805D5970 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5970, 1);
        lbl_805D5970 = 0U;
    }
}

extern M2C_UNK __vt__15TODoorMachine01[];

void *__dt__15TODoorMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TODoorMachine01;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80163158_lbl_804B1608_size[sizeof(RecoveredGlobal_80163158_lbl_804B1608) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80163158___vt__15TODoorMachine01_size[sizeof(RecoveredGlobal_80163158___vt__15TODoorMachine01) == 0x54 ? 1 : -1];
u8 *TODoorMachine01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    init_door_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80163158___vt__15TODoorMachine01 *)&__vt__15TODoorMachine01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2F78;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5970), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5970), u8 **, 0x42C), s32 *, 0xC);
    M2C_FIELD(arg0, u8 **, 0xBC) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5970), u8 **, 0x430), void **, 4));
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - lbl_805DB4FC);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DB508;
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_804B1608.value), (int) (1));
    TObjPlayer__sub_80154E3C((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    ((VObj_18_4a4f5b *)(arg0))->m17();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x88);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
    } else if (temp_r0 > 4) {
        M2C_FIELD(arg0, s32 *, 0x88) = 4;
    }
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    M2C_FIELD(arg0, s32 *, 0xD8) = (s32) (4 - M2C_FIELD(arg0, s32 *, 0xD4));
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_805DB4FC;
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) lbl_805DB4FC;
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) lbl_805DB4FC;
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) lbl_805DB4FC;
    return arg0;
}

}
