#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

struct RecoveredGlobal_800790F0_lbl_804F5800 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct Obj_8007A32C { s32 f0; f32 f4; s32 f8; u8 fc[4]; };

extern "C" {
void TObjPlayer__sub_8007A0E4(u8 *arg0, u8 *arg1);
extern RecoveredGlobal_800790F0_lbl_804F5800 lbl_804F5800;
s32 TAdEndText__sub_800790F0(u8 arg0);
void TObjPlayer__sub_80079108(void);
M2C_UNK TObjPlayer__sub_80079118(M2C_UNK *);
void TObjPlayer__sub_8007911C(void);
void TObjPlayer__sub_80079120(s32);
s32 TObjPlayer__sub_800791BC(s32, s32, u32 *);
u32 TObjPlayer__sub_80079C64(s32, u32 *, s32);
extern M2C_UNK lbl_804389CC[];
extern M2C_UNK lbl_80500140[];
M2C_UNK *csnVectorUnder(s32 arg0, u32 *arg1, s32 arg2);
void TObjPlayer__sub_80079108(void);
M2C_UNK TObjPlayer__sub_80079118(M2C_UNK * _w0);
void TObjPlayer__sub_8007911C(void);
void TObjPlayer__sub_80079120(s32 _w0);
s32 TObjPlayer__sub_800791BC(s32, s32, u32 *);
u32 TObjPlayer__sub_80079D20(s32, s32);
extern M2C_UNK lbl_80500140[];
extern u32 lbl_804FFD40[];
extern s32 lbl_804389E8[];
s32 *TBoss8Dragon__sub_8007A544(s32 arg0, s32 arg1);
void TObjPlayer__sub_8007911C(void);
M2C_UNK TObjPlayer__sub_80079118(M2C_UNK * _w0);
s32 TObjPlayer__sub_80079608(void *, void *);
extern s32 lbl_80500148[];
extern s32 lbl_80438988[];
void *TObjPlayer__sub_8007A2D0(void *self);
void TObjPlayer__sub_8007911C(void);
M2C_UNK TObjPlayer__sub_80079118(M2C_UNK * _w0);
s32 TObjPlayer__sub_80079608(void *, void *);
s32 TObjPlayer__sub_80079F58(void *, f32, s32);
extern s32 lbl_80500148[];
extern s32 lbl_804389A8[];
void *TObjPlayer__sub_8007A32C(Obj_8007A32C *self);
}

extern "C" {

void TObjPlayer__sub_80079108(void);
void TObjPlayer__sub_8007910C(void);
void TObjPlayer__sub_80079110(void);
void TObjPlayer__sub_80079114(void);
void TObjPlayer__sub_8007911C(void);
void TObjPlayer__sub_80079124(void);

typedef char RecoveredGlobal_800790F0_lbl_804F5800_size[sizeof(RecoveredGlobal_800790F0_lbl_804F5800) == 0x100 ? 1 : -1];
s32 TAdEndText__sub_800790F0(u8 arg0) {
    return M2C_FIELD(((u8 *)(&lbl_804F5800.value) + arg0), u8 *, 0) & 0xC0;
}

void TObjPlayer__sub_80079108(void) {  }
void TObjPlayer__sub_8007910C(void) {  }
void TObjPlayer__sub_80079110(void) {  }
void TObjPlayer__sub_80079114(void) {  }
M2C_UNK TObjPlayer__sub_80079118(M2C_UNK * _w0) {  }
void TObjPlayer__sub_8007911C(void) {  }
void TObjPlayer__sub_80079120(s32 _w0) {  }
void TObjPlayer__sub_80079124(void) {  }
void TObjPlayer__sub_8007A0E4(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, u16 *, 4) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg1, u16 *, 6);
    *(M2CCopy_C *)((s32) arg0 + 8) = *(const M2CCopy_C *)((s32) arg1 + 8);
    *(M2CCopy_C *)((s32) arg0 + 0x14) = *(const M2CCopy_C *)((s32) arg1 + 0x14);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
}

void *TObjPlayer__sub_8007A2D0(void *self) {
    void *r;
    TObjPlayer__sub_8007911C();
    r = lbl_80500148;
    if (TObjPlayer__sub_80079608(self, r) == 0) {
        r = 0;
    }
    TObjPlayer__sub_80079118((M2C_UNK *)(lbl_80438988));
    return r;
}

void *TObjPlayer__sub_8007A32C(Obj_8007A32C *self) {
    void *r;
    TObjPlayer__sub_8007911C();
    r = lbl_80500148;
    if (TObjPlayer__sub_80079F58(self->fc, self->f4, self->f8) == 0) {
        r = 0;
    } else if (TObjPlayer__sub_80079608(self, r) == 0) {
        r = 0;
    }
    TObjPlayer__sub_80079118((M2C_UNK *)(lbl_804389A8));
    return r;
}

M2C_UNK *csnVectorUnder(s32 arg0, u32 *arg1, s32 arg2) {
    M2C_UNK *var_r31;
    TObjPlayer__sub_80079108();
    TObjPlayer__sub_8007911C();
    TObjPlayer__sub_80079120((s32)(arg0));
    var_r31 = lbl_80500140;
    if ((u32) *arg1 == 0U) {
        if (TObjPlayer__sub_80079C64(arg0, arg1, arg2) == 0U) {
            var_r31 = NULL;
        } else if (TObjPlayer__sub_800791BC(arg0, arg2, arg1) == 0) {
            var_r31 = NULL;
        }
    } else {
        if (TObjPlayer__sub_800791BC(arg0, arg2, arg1) != 0) {
            goto done;
        }
        if (TObjPlayer__sub_80079C64(arg0, arg1, arg2) == 0U) {
            var_r31 = NULL;
        } else if (TObjPlayer__sub_800791BC(arg0, arg2, arg1) == 0) {
            var_r31 = NULL;
        }
    }
done:
    TObjPlayer__sub_80079118((M2C_UNK *)(lbl_804389CC));
    return var_r31;
}
s32 *TBoss8Dragon__sub_8007A544(s32 arg0, s32 arg1) {
    s32 *var_r31;
    TObjPlayer__sub_80079108();
    TObjPlayer__sub_8007911C();
    TObjPlayer__sub_80079120(arg0);
    var_r31 = ((s32 *)&lbl_80500140);
    if (TObjPlayer__sub_80079D20(arg0, arg1) == 0U) {
        var_r31 = 0;
    } else if (TObjPlayer__sub_800791BC(arg0, arg1, lbl_804FFD40) == 0) {
        var_r31 = 0;
    }
    TObjPlayer__sub_80079118((M2C_UNK *)(lbl_804389E8));
    return var_r31;
}

}
