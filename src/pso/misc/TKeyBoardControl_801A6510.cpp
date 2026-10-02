#include "types.h"

struct Kb_801A6910 {
    u32 f0;
    u8 pad4[4];
    u32 f8;
    u8 padC[0x48 - 0xC];
    u32 f48;
    u32 f4C;
};

struct Sub_801A67A4
{
  u32 w[7];
};

struct Rec_801A67A4
{
  s32 f0;
  s32 f4;
  s32 f8;
  s32 fC;
  u16 f10;
  u16 f12;
  s16 f14;
  s16 f16;
  s16 f18;
  s16 f1A;
  s32 f1C;
  s32 f20;
  f32 f24;
  f32 f28;
  Sub_801A67A4 f2C;
  s32 f48;
  s32 f4C;
};

struct Src_801A66B8 {
    u8 pad0[8];
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    u16 f18;
    u16 f1A;
    s16 f1C;
    s16 f1E;
    s16 f20;
    s16 f22;
};

struct Pad_801A66B8 {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    u16 f10;
    u16 f12;
    s16 f14;
    s16 f16;
    s16 f18;
    s16 f1A;
    s32 f1C;
    u8 pad20[4];
    f32 f24;
    u8 pad28[4];
    s16 f2C[14];
    s32 f48;
    s32 f4C;
};

extern "C" {
s32 TKeyBoardControl__sub_803DEB74(int);
extern s32 lbl_8050E208[];
extern s32 lbl_8050E568[];
extern s32 lbl_805D34C8;
extern s8 lbl_805D5D08;
extern s8 lbl_805D5D09;
extern s8 lbl_805D5D0A;
extern s8 lbl_805D5D0C[4];
void TKeyBoardControl__sub_801A6854(void);
s32 TKeyBoardControl__sub_8013239C(void *, u8);
u8 get_key_state_2__16TKeyBoardControlFPv(void *);
s32 read_input__16TKeyBoardControlFi(u8);
void fn_801A69E4(u8, u32 *);
extern u32 lbl_804C233C[];
extern u32 lbl_804C2354[];
extern u8 TKeyBoardControl__data_80506270[];
s32 TKeyBoardControl__sub_801A6910(Kb_801A6910 *self);
void TKeyBoardControl__sub_801A67A4(Rec_801A67A4 *arg0, Rec_801A67A4 *arg1);
void reset__16TKeyBoardControlFv();
extern Src_801A66B8 lbl_804C2308[];
extern const f32 lbl_805DC0C0;
}

extern "C" {

void TKeyBoardControl__sub_801A66B8(void) {
    s32 i;
    s32 j;
    Pad_801A66B8 *p;

    p = (Pad_801A66B8 *)((u8 *)lbl_8050E208 + 0x20);
    for (i = 0; i < 4; i++) {
        p->f0 = lbl_804C2308[0].f8;
        p->f4 = lbl_804C2308[0].fC;
        p->f8 = lbl_804C2308[0].f10;
        p->fC = lbl_804C2308[0].f14;
        p->f12 = lbl_804C2308[0].f1A;
        p->f10 = lbl_804C2308[0].f18;
        p->f14 = lbl_804C2308[0].f1C;
        p->f16 = lbl_804C2308[0].f1E;
        p->f18 = lbl_804C2308[0].f20;
        p->f1A = lbl_804C2308[0].f22;
        p->f1C = 0;
        p->f24 = lbl_805DC0C0;
        for (j = 0; j < 14; j++) {
            p->f2C[j] = 0;
        }
        p->f48 = 0;
        p->f4C = 0;
        p++;
    }
    TKeyBoardControl__sub_801A67A4((Rec_801A67A4 *)&lbl_8050E208[0x58], (Rec_801A67A4 *)((u8 *)lbl_8050E208 + 0x20));
    reset__16TKeyBoardControlFv();
}

typedef struct Rec_801A67A4 Rec_801A67A4;
typedef struct Sub_801A67A4 Sub_801A67A4;
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TKeyBoardControl__sub_801A67A4(Rec_801A67A4 *arg0, Rec_801A67A4 *arg1) {
  Rec_801A67A4 *new_var;
  Rec_801A67A4 *new_var2;
  Sub_801A67A4 *s;
  Sub_801A67A4 *d;
  arg0->f0 = arg1->f0;
  arg0->f4 = arg1->f4;
  arg0->f8 = arg1->f8;
  arg0->fC = arg1->fC;
  arg0->f10 = arg1->f10;
  arg0->f12 = arg1->f12;
  arg0->f14 = arg1->f14;
  new_var = (new_var2 = arg0);
  new_var2->f16 = arg1->f16;
  arg0->f18 = arg1->f18;
  new_var2->f1A = arg1->f1A;
  new_var->f1C = arg1->f1C;
  new_var2->f20 = arg1->f20;
  arg0->f24 = arg1->f24;
  arg0->f28 = arg1->f28;
  s = &arg1->f2C;
  d = &(new_var = new_var2)->f2C;
  *d = *s;
  arg0->f48 = arg1->f48;
  new_var->f4C = arg1->f4C;
}

void TKeyBoardControl__sub_801A6854(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        lbl_8050E568[i] = 0;
    }
    lbl_8050E208[0] = TKeyBoardControl__sub_803DEB74(0);
    lbl_8050E208[1] = TKeyBoardControl__sub_803DEB74(6);
    lbl_8050E208[2] = TKeyBoardControl__sub_803DEB74(0xC);
    lbl_8050E208[3] = TKeyBoardControl__sub_803DEB74(0x12);
    lbl_805D5D08 = 0;
    lbl_805D5D09 = 0;
    lbl_805D5D0A = 0;
    for (i = 0; i < 4; i++) {
        lbl_805D5D0C[i] = 0;
    }
    lbl_805D34C8 = 1;
}
s32 TKeyBoardControl__sub_801A6910(Kb_801A6910 *self) {
    s32 i;
    u8 n;
    s32 j;
    self->f0 = 0;
    self->f8 = 0;
    for (i = 0; i < 6; i++) {
        if (read_input__16TKeyBoardControlFi(lbl_804C2354[i]) != 0) {
            self->f0 |= lbl_804C233C[i];
        }
    }
    n = get_key_state_2__16TKeyBoardControlFPv(TKeyBoardControl__data_80506270);
    for (j = 0; j < n; j++) {
        fn_801A69E4(TKeyBoardControl__sub_8013239C(TKeyBoardControl__data_80506270, j), &self->f8);
    }
    self->f48 = self->f0;
    self->f4C = self->f8;
    return 0;
}

}
