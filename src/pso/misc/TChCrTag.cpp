#include "pso/TChCrTag.h"

TChCrTag::~TChCrTag() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_c1c33b { char pad[0x18]; };

struct VObj_18_c1c33b : VBase_18_c1c33b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_selected_index__15TChCrCharSelectFv();
extern const f32 lbl_805DDE00;
extern const f32 lbl_805DDE04;
void TChCrTag__sub_802A1A00(u8 *arg0);
}

extern "C" {

int TChCrTag__vt4(void);
void *__ct__8TChCrTagFv(void *arg0, void *arg1, void *arg2);
void render__8TChCrTagFv(void);
void __ct__7TObjectFP7TObject(void *);

int TChCrTag__vt4(void) { return 0; }
void render__8TChCrTagFv(void) {  }

extern M2C_UNK __vt__8TChCrTag[];
extern const f32 lbl_805DDE04;
extern const f32 lbl_805DDE08;
extern void *lbl_805D3D90;
extern const f32 lbl_805DDE0C;

#pragma push
#pragma opt_common_subs off
void TChCrTag__sub_802A1A00(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s32 temp_r0;
    if (((VObj_18_c1c33b *)(arg0))->m4() != 0) {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x30);
        if (temp_f2 < lbl_805DDE00) {
            M2C_FIELD(arg0, f32 *, 0x30) = (f32) (temp_f2 + M2C_FIELD(arg0, f32 *, 0x34));
            if (M2C_FIELD(arg0, f32 *, 0x30) > lbl_805DDE00) {
                M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805DDE00;
            }
        }
    } else {
        temp_f2_2 = M2C_FIELD(arg0, f32 *, 0x30);
        if (temp_f2_2 > lbl_805DDE04) {
            M2C_FIELD(arg0, f32 *, 0x30) = (f32) (temp_f2_2 + M2C_FIELD(arg0, f32 *, 0x38));
            if (M2C_FIELD(arg0, f32 *, 0x30) < lbl_805DDE04) {
                M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805DDE04;
            }
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        temp_f2_3 = M2C_FIELD(arg0, f32 *, 0x24);
        if (temp_f2_3 < lbl_805DDE00) {
            M2C_FIELD(arg0, f32 *, 0x24) = (f32) (temp_f2_3 + M2C_FIELD(arg0, f32 *, 0x28));
            if (M2C_FIELD(arg0, f32 *, 0x24) > lbl_805DDE00) {
                M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DDE00;
            }
        }
        if (get_selected_index__15TChCrCharSelectFv() == 2) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
            break;
        }
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + M2C_FIELD(arg0, f32 *, 0x2C));
        if (M2C_FIELD(arg0, f32 *, 0x24) <= lbl_805DDE04) {
            M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DDE04;
            queue_destruction__7TObjectFv((void *) (arg0));
        }
        break;
    }
}
#pragma pop

void *__ct__8TChCrTagFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TChCrTag;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D90;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x24) = lbl_805DDE04;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805DDE04;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DDE08;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_805DDE08;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DDE0C;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DDE0C;
    return arg0;
}

}
