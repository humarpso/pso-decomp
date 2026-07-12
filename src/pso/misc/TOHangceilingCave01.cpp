#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_geometry__19TOHangceilingCave01FPv(void *arg0);
int TOHangceilingCave01__sub_80168624(void);
f32 TOHangceilingCave01__sub_8016862C(void);
f32 TOHangceilingCave01__sub_80168634(void);
void TOHangceilingCave01__sub_8016863C(void);
void TOHangceilingCave01__sub_80168640(void);
M2C_UNK TOHangceilingCave01KeyQuick__sub_80168D34(void *, f32, f32);

extern const f32 lbl_805DB654;
extern const f32 lbl_805DB688;
extern const f32 lbl_805DB690;

struct VBase_80168588 { char pad[0x18]; };
struct VObj_80168588 : VBase_80168588 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67();
    virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
    virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75();
    virtual void v76(); virtual void v77();
};

void init_geometry__19TOHangceilingCave01FPv(void *arg0) {
    f32 temp_f2;
    VObj_80168588 *self = (VObj_80168588 *)arg0;

    M2C_FIELD(arg0, s32 *, 0x35C) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    M2C_FIELD(arg0, u32 *, 0x358) = (u32) M2C_FIELD(arg0, u32 *, 0x8C);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x358) >= 3U) {
        M2C_FIELD(arg0, u32 *, 0x358) = 2U;
    }
    temp_f2 = lbl_805DB690 + M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x350) = (f32) (temp_f2 - lbl_805DB654);
    TOHangceilingCave01KeyQuick__sub_80168D34(arg0, lbl_805DB688 + M2C_FIELD(arg0, f32 *, 0x70), temp_f2);
    self->v77();
    M2C_FIELD(arg0, f32 *, 0x354) = (f32) (lbl_805DB654 - M2C_FIELD(arg0, f32 *, 0x6C));
}

int TOHangceilingCave01__sub_80168624(void) { return 1; }

extern f32 lbl_805DB650;

f32 TOHangceilingCave01__sub_8016862C(void) {
    return lbl_805DB650;
}

extern f32 lbl_805DB650;

f32 TOHangceilingCave01__sub_80168634(void) {
    return lbl_805DB650;
}

void TOHangceilingCave01__sub_8016863C(void) {  }
void TOHangceilingCave01__sub_80168640(void) {  }

}
