#include "types.h"
#include "pso/item/TUnk_804A64E8.h"

extern "C" {

    extern const float lbl_805DAFB8;
void TObjPlayer__sub_8012F6CC(void* a0) { *(int*)((char*)a0 + 0x204) = 0; *(float*)((char*)a0 + 0x200) = lbl_805DAFB8; *(float*)((char*)a0 + 0x1fc) = lbl_805DAFB8; *(float*)((char*)a0 + 0x1f8) = lbl_805DAFB8; }

    extern const float lbl_805DAFBC;
void TUnk_804A64E8::update_attack() { *(int *)&this->m_204 = 10922; *(float*)((char*)this + 0x200) = lbl_805DAFBC; *(float *)&this->m_1fc = lbl_805DAFBC; *(float*)((char*)this + 0x1f8) = lbl_805DAFBC; }

}

#include "pso/misc/TTecSlicer.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

struct Owner_8012F704 { u8 pad[0x60]; s32 f60; };
struct Self_8012F704 { u8 pad0[0x24]; s32 f24; u8 pad28[0xF0 - 0x28]; Owner_8012F704 *owner; u8 padF4[0x188 - 0xF4]; s32 f188; };
struct Vec_8012F704 { f32 x, y, z; };
struct Tec_8012F704 {
    s16 id;
    u8 pad2[2];
    s32 f4;
    s32 f8;
    s32 fC;
    s16 f10;
    s16 f12;
    f32 f14;
    f32 f18;
    f32 f1C;
    f32 f20;
    f32 f24;
    s32 f28;
    u8 pad2C[4];
    Vec_8012F704 pos;
    Vec_8012F704 dir;
};

s16 obj_getField1c(void *);
f32 query_extended_state__10TObjPlayerFv(void *);
struct SlicerState_801295FC;
void init_slicer_launch_state(SlicerState_801295FC *s);
s16 get_validated_attack_stage(void *);
s16 TObjPlayer__sub_801D2F4C(void *);
extern const f32 lbl_805DAFB8;
extern const f32 lbl_805DAFC0;
extern const f32 lbl_805DAFC4;

void TUnk_804A64E8::emit_marker_effects() {
    Tec_8012F704 tec;

    init_slicer_launch_state((SlicerState_801295FC *)&tec);
    tec.id = obj_getField1c(((Self_8012F704 *)this)->owner);
    tec.fC = ((TObjPlayer *)((Self_8012F704 *)this))->get_field_d8();
    tec.f4 = ((Self_8012F704 *)this)->f24;
    tec.f8 = ((Self_8012F704 *)this)->f188;
    tec.f10 = TObjPlayer__sub_801D2F4C((u8 *)((Self_8012F704 *)this)->owner + 0x7CC);
    tec.f12 = get_validated_attack_stage((u8 *)((Self_8012F704 *)this)->owner + 0x7CC);
    tec.f14 = query_extended_state__10TObjPlayerFv(((Self_8012F704 *)this)->owner);
    tec.f18 = lbl_805DAFB8;
    tec.f1C = lbl_805DAFC0;
    tec.f20 = lbl_805DAFB8;
    tec.f24 = lbl_805DAFC4;
    tec.f28 = ((Self_8012F704 *)this)->owner->f60;
    ((TObjPlayer *)((Self_8012F704 *)this))->draw_icon((s32)5, (s32)(&tec.pos));
    ((TObjPlayer *)((Self_8012F704 *)this))->draw_icon((s32)4, (s32)(&tec.dir));
    TTecSlicer::create((u16*)(&tec));
}

}
