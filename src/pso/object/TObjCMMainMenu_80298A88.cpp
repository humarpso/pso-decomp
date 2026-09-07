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

extern "C" {
s32 get_clamped_player_index__14TChCrEffCtrlPlFv(void);
extern RecoveredGlobal_80298F08_lbl_8050E3B8 lbl_8050E3B8;
s32 TObjCMProportion__sub_80298F08(void);
extern RecoveredGlobal_80298DD4_lbl_8051C07C lbl_8051C07C;
M2C_UNK *TObjCMMainMenu__sub_80298DD4(void);
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
void *TObjCMMainMenu__ct(void *, void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);

void *create__14TObjCMMainMenuFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x58);
    if (o != NULL) {
        o = TObjCMMainMenu__ct(o, arg0);
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
