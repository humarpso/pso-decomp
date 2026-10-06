#include "pso/TObjEZRopeBase.h"

extern "C" void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

extern "C" void TObjPlayer__sub_800FEE84();
extern "C" void TObjPlayer__sub_800FEEA4();
extern "C" void dt_ad_single_ply_chr_select__10TObjPlayerFPvs();
extern "C" void render_shadows__7TObjectFv();
f32 lbl_8049DCF0[12] = {
    0.5f, 1.0f, 1.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 lbl_8049DD20[3] = { 0.0f, -0.75f, 0.0f };
void *lbl_8049DD2C[6] = {
    (void *)0x0, (void *)0x0, (void *)&dt_ad_single_ply_chr_select__10TObjPlayerFPvs, (void *)&TObjPlayer__sub_800FEEA4,
    (void *)&TObjPlayer__sub_800FEE84, (void *)&render_shadows__7TObjectFv,
};

TObjEZRopeBase::~TObjEZRopeBase() {
    if (m_2c != nullptr) { safe_free__23TAdSinglePlyChrSelectGCFUi(m_2c); m_2c = nullptr; }
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEZRopeBase__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__14TObjEZRopeBase[];
extern void *lbl_805D2B50;

void *TObjEZRopeBase__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjEZRopeBase;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2B50;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    return arg0;
}

}
