#include "types.h"
struct Vec_80181F10 { f32 x, y, z; };

struct VBase_80181F10 { u8 pad[0x18]; };

struct Obj_80181F10 : VBase_80181F10 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(s32);
    u8 pad1c[0x38 - 0x1C];
    Vec_80181F10 pos;
    u8 pad44[0x90 - 0x44];
    void *x90;
    Vec_80181F10 pos94;
    f32 xa0;
    s32 xa4;
    s32 xa8;
    void *xac;
    s32 xb0;
    void *xb4;
    u8 bufb8[0x1D8 - 0xB8];
    u8 buf1d8[0x250 - 0x1D8];
    s32 x250;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_80181F10 *, const Vec_80181F10 *);
u32 get_map_count__10TObjMapCsnFv();
void register_slot(u32, void *);
void TObjPlayer__sub_80181BAC(void *);
s32 is_phase_e__9TObjEneDDFPv(void *);
void TPhotonMagicSquare__sub_801A2640(void *, void *);
extern s32 lbl_804B5A00[];
extern s32 lbl_805D3260;
extern const f32 lbl_805DBBF0;
Obj_80181F10 *TObjCityDoor_Lobby__ct(Obj_80181F10 *self, void *arg1, s32 arg2);
}

extern "C" {

Obj_80181F10 *TObjCityDoor_Lobby__ct(Obj_80181F10 *self, void *arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640(self, arg1);
    *(void **)((u8 *)self + 0x18) = lbl_804B5A00;
    *(s32 *)self = lbl_805D3260;
    self->m5(arg2);
    self->x90 = &self->xa8;
    VecCopy__FP3VecPC3Vec(&self->pos94, &self->pos);
    self->xa0 = lbl_805DBBF0;
    self->xa4 = 0xDE0;
    self->xb0 = 8;
    self->xb4 = self->bufb8;
    self->xa8 = 0xA;
    self->xac = self->buf1d8;
    self->x250 = 0;
    if (is_phase_e__9TObjEneDDFPv(self) != 0) {
        TObjPlayer__sub_80181BAC(self);
        if (get_map_count__10TObjMapCsnFv() != 0) {
            register_slot(get_map_count__10TObjMapCsnFv(), &self->x90);
            self->x250 = 1;
        }
    }
    return self;
}

}
