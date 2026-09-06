#include "pso/effect/TEffect.h"

extern "C" {
extern TObject* tl_particle;
extern const char* lbl_805D2908;
extern const f32 lbl_805D93B8;
extern const f32 lbl_805D93BC;
}

TEffect::~TEffect() {
    field_1c = 0;
}

TEffect::TEffect() : TObject(tl_particle) {
    m_name = lbl_805D2908;
    position.x = lbl_805D93B8;
    position.y = lbl_805D93B8;
    position.z = lbl_805D93B8;
    field_2c[0] = lbl_805D93B8;
    field_2c[1] = lbl_805D93B8;
    field_2c[2] = lbl_805D93B8;
    field_2c[3] = lbl_805D93B8;
    scale.x = lbl_805D93BC;
    scale.y = lbl_805D93BC;
    scale.z = lbl_805D93BC;
    field_48[0] = lbl_805D93B8;
    field_48[1] = lbl_805D93B8;
    field_48[2] = lbl_805D93B8;
    field_54[0] = 0;
    field_54[1] = 0;
    field_54[2] = 0;
    field_60[0] = lbl_805D93B8;
    field_60[1] = lbl_805D93B8;
    age = 0;
    field_6c = 0;
    field_1c = 0;
}

extern "C" void TObjPlayer__sub_80082CBC(void* effect) {
    *(reinterpret_cast<u8*>(effect) + 0x1C) |= 0x4;
}

extern "C" void TObjPlayer__sub_80082CCC(void* effect) {
    *(reinterpret_cast<u8*>(effect) + 0x1C) &= ~0x4;
}
