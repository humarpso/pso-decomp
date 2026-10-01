#include "pso/TChCrTagName.h"

TChCrTagName::~TChCrTagName() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802A28C0___vt__12TChCrTagName {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct Tag_802A265C {
    u8 pad[0x20];
    s32 f20;
    u8 pad24[0xC];
    f32 f30;
};

#include "pso/TMath.h"
struct VBase_802A2500 { char pad[0x18]; };

struct TChCrTagName_802A2500 : VBase_802A2500 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
    s32 f1c;
    s32 f20;
    f32 f24;
    u8 pad28[0x3C - 0x28];
    f32 f3c;
    f32 f40;
    u8 pad44[4];
    vec2f pos;
};

extern "C" {
u8 * __ct__8TChCrTagFv(void *, s32);
extern RecoveredGlobal_802A28C0___vt__12TChCrTagName __vt__12TChCrTagName;
extern s32 lbl_805D3DA0;
extern const f32 lbl_805DDE48;
extern const f32 lbl_805DDE8C;
extern const f32 lbl_805DDE90;
extern const f32 lbl_805DDE94;
extern const f32 lbl_805DDE98;
extern const f32 lbl_805DDE9C;
extern const f32 lbl_805DDEA0;
u8 *__ct__12TChCrTagNameFv(u8 *arg0, s32 arg1, s32 _w2);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 lbl_805DDE28;
extern const f32 lbl_805DDE70;
extern const f32 lbl_805DDE74;
extern const f32 lbl_805DDE78;
extern const f32 lbl_805DDE7C;
extern const f32 lbl_805DDE80;
extern const f32 lbl_805DDE84;
extern const f32 lbl_805DDE88;
void TChCrTagName__sub_802A26E0(u8 *arg0);
s32 get_selected_index__15TChCrCharSelectFv();
s32 get_selected_char__15TChCrCharSelectFv();
s32 get_instance__15TChCrCharSelectFv();
s32 TChCrTagName__vt4(u8 *arg0);
s32 get_selected_index__15TChCrCharSelectFv();
s32 get_selected_char__15TChCrCharSelectFv();
extern const f32 lbl_805DDE68;
extern const f32 lbl_805DDE6C;
f32 TChCrTagName__sub_802A265C(Tag_802A265C *arg0);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
f32 TChCrTagName__sub_802A265C(Tag_802A265C *arg0);
extern vec2f lbl_80466408[];
extern const f32 lbl_805DDE28;
extern const f32 lbl_805DDE34;
extern const f32 lbl_805DDE38;
extern const f32 lbl_805DDE3C;
extern const f32 lbl_805DDE50;
extern const f32 lbl_805DDE54;
extern const f32 lbl_805DDE64;
void TChCrTagName__sub_802A2500(TChCrTagName_802A2500 *self);
}

extern "C" {

void *create__12TChCrTagNameFPv(void *arg0);
void create_all__12TChCrTagNameFv(void);
void render__12TChCrTagNameFv(void* p);
void run_task__12TChCrTagNameFv(void *arg0);
int TChCrTagName__sub_802A208C(void*);
int TChCrTagName__sub_802A226C(void*);
M2C_UNK TChCrTag__sub_802A1A00();
void *__nw__7TObjectFUl(int);

#pragma push
#pragma fp_contract on
void draw_ui_sprite_shaded(s32 sprite_id, const vec2f *position, const vec2f *scale,
                           f32 depth, f32 alpha, f32 brightness);
void TChCrTagName__sub_802A2500(TChCrTagName_802A2500 *self) {
    f32 s;
    f32 depth;
    f32 t;
    vec2f pos;
    s32 id = self->f20 / 4 + 0x3C;
    vec2f scale = lbl_80466408[0];
    t = lbl_805DDE28;
    if (self->f24 < self->f40) {
        t = (self->f24 - self->f3c) / (self->f40 - self->f3c);
    }
    s = TChCrTagName__sub_802A265C((Tag_802A265C *)self);
    if (self->m4() != 0) {
        depth = lbl_805DDE54;
    } else {
        depth = lbl_805DDE34 * s + lbl_805DDE64;
    }
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&pos, &self->pos);
    pos.y += lbl_805DDE50;
    draw_ui_sprite_shaded(id, &pos, &scale, depth, t * t, lbl_805DDE3C * (s * s) + lbl_805DDE38);
}
#pragma pop

void render__12TChCrTagNameFv(void* p) { TChCrTagName__sub_802A2500((TChCrTagName_802A2500 *)(p)); TChCrTagName__sub_802A226C(p); TChCrTagName__sub_802A208C(p); }

#pragma fp_contract on

#pragma fp_contract on
f32 TChCrTagName__sub_802A265C(Tag_802A265C *arg0) {
    s32 r;
    switch (get_selected_index__15TChCrCharSelectFv()) {
    case 0:
        r = 0;
        break;
    default:
        if (arg0->f20 / 4 == get_selected_char__15TChCrCharSelectFv()) {
            r = 0;
        } else {
            r = 1;
        }
        break;
    }
    if (r != 0) {
        return arg0->f30;
    }
    return lbl_805DDE6C * arg0->f30 + lbl_805DDE68;
}
#pragma fp_contract reset

void TChCrTagName__sub_802A26E0(u8 *arg0) {
  f32 temp_f1;
  f32 temp_f2;
  f32 var_f4;
  f32 temp_f3;
  var_f4 = lbl_805DDE28;
  *((f32 *) (((s8 *) arg0) + 0x48)) = (f32) lbl_805DDE70;
  *((f32 *) (((s8 *) arg0) + 0x4C)) = (f32) ((lbl_805DDE78 * ((f32) (*((s32 *) (((s8 *) arg0) + 0x20))))) + lbl_805DDE74);
  temp_f2 = *((f32 *) (((s8 *) arg0) + 0x24));
  temp_f1 = *((f32 *) (((s8 *) arg0) + 0x40));
  if (temp_f2 < temp_f1)
  {
    if (1)
    {
      temp_f3 = *((f32 *) (((s8 *) arg0) + 0x3C));
      temp_f1 = (temp_f2 - temp_f3) / (temp_f1 - temp_f3);
      var_f4 = lbl_805DDE7C * (lbl_805DDE28 - TBoss8Dragon__sub_803D64DC((s32) (lbl_805DDE80 * temp_f1)));
    }
  }
  *((f32 *) (((s8 *) arg0) + 0x48)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x48))) + ((lbl_805DDE88 * var_f4) + lbl_805DDE84));
}

void run_task__12TChCrTagNameFv(void *arg0) {
    TChCrTag__sub_802A1A00();
    TChCrTagName__sub_802A26E0((u8 *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
}

extern void *tl_03;

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_802A28C0___vt__12TChCrTagName_size[sizeof(RecoveredGlobal_802A28C0___vt__12TChCrTagName) == 0x20 ? 1 : -1];

s32 TChCrTagName__vt4(u8 *arg0) {
    switch (get_selected_index__15TChCrCharSelectFv()) {
    case 0:
        if (*(s32 *)(arg0 + 0x20) / 4 == get_selected_char__15TChCrCharSelectFv()) {
            return 1;
        }
        break;
    case 1:
    case 2:
        if (*(s32 *)(arg0 + 0x20) == get_instance__15TChCrCharSelectFv()) {
            return 1;
        }
        break;
    }
    return 0;
}

u8 *__ct__12TChCrTagNameFv(u8 *arg0, s32 arg1, s32 _w2) {
    __ct__8TChCrTagFv(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__12TChCrTagName.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3DA0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DDE8C;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DDE90;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DDE94;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DDE98;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DDE48;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) -((lbl_805DDEA0 * (f32) (0xC - M2C_FIELD(arg0, s32 *, 0x20))) - lbl_805DDE9C);
    TChCrTagName__sub_802A26E0((u8 *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    return arg0;
}
#pragma pop

void *create__12TChCrTagNameFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = __ct__12TChCrTagNameFv((u8 *)(o), (s32)(tl_03), (s32)(arg0));
    }
    return o;
}

void create_all__12TChCrTagNameFv(void) { { int i; for (i = 0; i < 12; i++) { create__12TChCrTagNameFPv((void *)((void*)i)); } } }

}
