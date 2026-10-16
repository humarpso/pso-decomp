#include "types.h"

struct RecoveredGlobal_8034F754_lbl_804F0A00 {
    s32 value;
    u8 remaining[0xF4];
};

typedef struct SlicerLaunchData_8012D9C8 {
    u16 player; u16 pad;
    void *textures; void *model; u32 weapon;
    s16 kind, stage; f32 multiplier; f32 color[4];
    s32 facing, spin; f32 first[3], second[3];
} SlicerLaunchData_8012D9C8;

struct Info_8034F4FC {
    u8 pad0[0x10];
    s32 f10;
    u8 pad14[0x80 - 0x14];
};

extern "C" {
extern s32 tl_05;
s32 VecCopy__FP3VecPC3Vec(void *, s32);
s32 fill_status_info__10TObjPlayerFPv(u32, void *);
s32 construct_explosion_collider__13TUnk_804A2548Fv(void *, s32, void *);
void *__nw__7TObjectFUl(u32);
s32 create_fire_explosion_effect(void *, void *, s32, s32, f32);
s32 TObjPlayer__sub_802E449C(void *);
extern s32 tl_particle;
extern const f32 lbl_805DF0B8;
s32 spawn_fire_explosion_at(u32 a0, s32 a1);
}

extern "C" {

s32 spawn_fire_explosion_at(u32 a0, s32 a1) {
    Info_8034F4FC info;
    void *o;
    TObjPlayer__sub_802E449C(&info);
    fill_status_info__10TObjPlayerFPv(a0, &info);
    VecCopy__FP3VecPC3Vec(&info, a1);
    info.f10 = 0xA;
    o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        construct_explosion_collider__13TUnk_804A2548Fv(o, tl_05, &info);
    }
    o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        ((s32 (*)(f32, void *, void *, s32, s32))create_fire_explosion_effect)(lbl_805DF0B8, o, &info, 0, tl_particle);
    }
}
typedef char RecoveredGlobal_8034F754_lbl_804F0A00_size[sizeof(RecoveredGlobal_8034F754_lbl_804F0A00) == 0xF8 ? 1 : -1];
#include "types.h"

#include "types.h"

}
