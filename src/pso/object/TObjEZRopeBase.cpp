#include "pso/TObjEZRopeBase.h"

extern "C" void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

extern "C" void TObjPlayer__sub_800FEE84();
extern "C" void update_bone_attach_points__10TObjPlayerFPv();
extern "C" void __dt__21TObjHMS_EZRope_PlayerFv();
extern "C" void render_shadows__7TObjectFv();
f32 ezrope_chunk_material_color_table[12] = {
    0.5f, 1.0f, 1.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 TObjEZBoneRotPlayer__chain_gravity[3] = { 0.0f, -0.75f, 0.0f };
#pragma push
#pragma force_active on
void *__vt__21TObjHMS_EZRope_Player[6] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__21TObjHMS_EZRope_PlayerFv, (void *)&update_bone_attach_points__10TObjPlayerFPv,
    (void *)&TObjPlayer__sub_800FEE84, (void *)&render_shadows__7TObjectFv,
};
#pragma pop

TObjEZRopeBase::~TObjEZRopeBase() {
    if (m_2c != nullptr) { safe_free__23TAdSinglePlyChrSelectGCFUi(m_2c); m_2c = nullptr; }
}

#include "types.h"

extern "C" {

void *TObjEZRopeBase__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__14TObjEZRopeBase[];
extern void *TObjEZRopeBase__name;

void *TObjEZRopeBase__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TObjEZRopeBase;
    *(void **)((s8 *)arg0 + 0x0) = TObjEZRopeBase__name;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    *(u32 *)((s8 *)arg0 + 0x28) = 0;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    return arg0;
}

}

extern "C" {
extern char lbl_8043DF18[];
void *TObjEZRopeBase__name = lbl_8043DF18;
}
