#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80298AD0_80298A88 { char pad[0x18]; };
struct VObj_80298AD0_80298A88 : Base_80298AD0_80298A88 { virtual void m0(int); };

struct RecoveredGlobal_80298F08_lbl_8050E3B8 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80298DD4_lbl_8051C07C {
    M2C_UNK value;
    u8 remaining[0x14];
};

typedef s32 M2C_UNK;
struct Chara_80298B70 {
    char name[0xC];
    s8 fC;
    u8 padD[0x1C - 0xD];
    s8 f1C;
    u8 pad1D[0x30 - 0x1D];
    s8 f30;
    s8 f31;
    s8 f32;
    u8 pad33;
    u32 f34;
};

struct Pair_80298B70 {
    s32 a;
    s32 *b;
};

struct Menu_80298B70 {
    const char *name;
    u8 pad4[0x18 - 0x4];
    void *vt;
    Chara_80298B70 *chara;
    s32 mode;
    s32 *list;
    s32 f28;
    s32 f2C;
    u8 pad30[0x38 - 0x30];
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
    f32 f48;
    s32 f4C;
    void *f50;
    f32 f54;
};

extern "C" {
s32 get_clamped_player_index__14TChCrEffCtrlPlFv(void);
extern RecoveredGlobal_80298F08_lbl_8050E3B8 lbl_8050E3B8;
s32 TObjCMProportion__sub_80298F08(void);
extern RecoveredGlobal_80298DD4_lbl_8051C07C lbl_8051C07C;
M2C_UNK *TObjCMMainMenu__sub_80298DD4(void);
void *__ct__7TObjectFP7TObject(void *, void *);
void *__nw__7TObjectFUl(int);
Chara_80298B70 *TObjCMMainMenu__sub_8028D9A8(void);
void copy_player_visual_record(void *, void *);
M2C_UNK *TObjCMMainMenu__sub_80298DD4(void);
char *strncpy(char *, const char *, u32);
void fn_802993F0(void);
void set_speed__14TObjCMMainMenuFf(f32 farg0);
void fn_802947A8(void);
void fn_8029945C(void *);
void TObjCMMainMenu__sub_802972C4(void *);
extern M2C_UNK lbl_804DBDA8[];
extern const char *lbl_805D3CD0;
extern Chara_80298B70 *lbl_805D6520;
extern Pair_80298B70 __vt__14TObjCMMainMenu[];
extern int TObjCMMainMenu__data_805D659C;
extern s32 lbl_805D6598;
extern const f32 lbl_805DDA90;
extern const f32 lbl_805DDB00;
extern u8 lbl_80464F50[];
void *TObjCMMainMenu__ct(void *arg0, void *parent);
}

extern "C" {

void TObjCMMainMenu__sub_80298DA0(int a0);
u8 TObjCMMainMenu__sub_80298DC4(void);
void clear_task_state__14TObjCMMainMenuFv(void);
void *create__14TObjCMMainMenuFPv(void *arg0);
void *destroy__14TObjCMMainMenuFPvs(void *arg0, s16 arg1);
f32 get_proportion__14TObjCMMainMenuFv(void);
f32 get_scale__14TObjCMMainMenuFv(void);
void set_selection__14TObjCMMainMenuFi(int a0);
void set_speed__14TObjCMMainMenuFf(f32 farg0);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);

void *create__14TObjCMMainMenuFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x58);
    if (o != NULL) {
        o = TObjCMMainMenu__ct((void *)(o), (void *)(arg0));
    }
    return o;
}

extern M2C_UNK lbl_804DBDA8[];

void *destroy__14TObjCMMainMenuFPvs(void *arg0, s16 arg1) {
    void *temp_r3;
    void *temp_r5;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DBDA8;
        temp_r3 = M2C_FIELD(arg0, void **, 0x50);
        if (temp_r3 != NULL) {
            if (temp_r3 != NULL) {
                ((VObj_80298AD0_80298A88 *)temp_r3)->m0(1);
            }
            M2C_FIELD(arg0, void **, 0x50) = NULL;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x18) = -1;
        temp_r5 = M2C_FIELD(arg0, void **, 0x1C);
        M2C_FIELD(temp_r5, s8 *, 0x33) = 2;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern int TObjCMMainMenu__data_805D659C;

void *TObjCMMainMenu__ct(void *arg0, void *parent) {
#define self ((Menu_80298B70 *)arg0)
    void *o;
    __ct__7TObjectFP7TObject(arg0, parent);
    self->vt = ((u8 *)&lbl_804DBDA8);
    self->name = lbl_805D3CD0;
    self->chara = lbl_805D6520;
    if (!(self->chara->f32 & 0xA) && self->chara->f31 == TObjCMMainMenu__sub_8028D9A8()->f31) {
        copy_player_visual_record(self->chara, TObjCMMainMenu__sub_8028D9A8());
    }
    strncpy(self->chara->name, (const char *)TObjCMMainMenu__sub_80298DD4(), 0xC);
    self->chara->fC = 0;
    self->chara->f1C = 0;
    self->chara->f32 &= ~0xA;
    if (self->chara->f30 == -1) {
        if (self->chara->f32 & 0xA) {
            self->mode = 2;
        } else if (!(self->chara->f34 & 0x10)) {
            self->mode = 0;
        } else {
            self->mode = 1;
        }
    } else if (self->chara->f32 & 0xA) {
        self->mode = 5;
    } else if (!(self->chara->f34 & 0x10)) {
        self->mode = 3;
    } else {
        self->mode = 4;
    }
    self->f28 = __vt__14TObjCMMainMenu[self->mode].a;
    self->list = __vt__14TObjCMMainMenu[self->mode].b;
    TObjCMMainMenu__data_805D659C = 0;
    self->f2C = 0;
    lbl_805D6598 = self->list[self->f2C];
    fn_802993F0();
    self->f38 = lbl_805DDA90;
    self->f3C = lbl_805DDA90;
    self->f40 = lbl_805DDA90;
    self->f44 = lbl_805DDA90;
    self->f48 = lbl_805DDA90;
    self->f4C = 0;
    self->f54 = lbl_805DDA90;
    set_speed__14TObjCMMainMenuFf(lbl_805DDB00);
    o = __nw__7TObjectFUl(0x1C);
    if (o != 0) {
        o = __ct__7TObjectFP7TObject(o, 0);
    }
    self->f50 = o;
    fn_802947A8();
    fn_8029945C(lbl_80464F50);
    TObjCMMainMenu__sub_802972C4(arg0);
    return arg0;
#undef self
}

void clear_task_state__14TObjCMMainMenuFv(void) { TObjCMMainMenu__data_805D659C = 0; }

extern f32 lbl_805D3C98;

f32 get_scale__14TObjCMMainMenuFv(void) {
    return lbl_805D3C98;
}

extern f32 lbl_805D3CA0;

f32 get_proportion__14TObjCMMainMenuFv(void) {
    return lbl_805D3CA0;
}

    extern int lbl_805D6570;
void set_selection__14TObjCMMainMenuFi(int a0) { lbl_805D6570 = a0; }

    extern int lbl_805D6538;
void TObjCMMainMenu__sub_80298DA0(int a0) { lbl_805D6538 = (lbl_805D6538 + a0); }

extern void *lbl_805D653C;

void set_speed__14TObjCMMainMenuFf(f32 farg0) {
    if ((void *) lbl_805D653C != NULL) {
        M2C_FIELD(lbl_805D653C, f32 *, 0x38) = farg0;
    }
}

extern s32 lbl_805D652C;

u8 TObjCMMainMenu__sub_80298DC4(void) {
    return (u8) (lbl_805D652C == 0);
}
typedef char RecoveredGlobal_80298F08_lbl_8050E3B8_size[sizeof(RecoveredGlobal_80298F08_lbl_8050E3B8) == 0x1B0 ? 1 : -1];

typedef char RecoveredGlobal_80298DD4_lbl_8051C07C_size[sizeof(RecoveredGlobal_80298DD4_lbl_8051C07C) == 0x18 ? 1 : -1];
M2C_UNK *TObjCMMainMenu__sub_80298DD4(void) {
    return &lbl_8051C07C.value;
}

s32 TObjCMProportion__sub_80298F08(void) {
    return M2C_FIELD(&lbl_8050E3B8.value, M2C_UNK *, (get_clamped_player_index__14TChCrEffCtrlPlFv() * 4));
}

}
