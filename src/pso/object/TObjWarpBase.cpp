#include "types.h"
#include "pso/misc/TTecLuker.h"
#include "pso/object/TObjMotion.h"
#include "pso/object/TObjWarpBase.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct Base_8019DAC0 { s32 f0; u8 pad4[0x14]; };

struct Warp_8019DAC0 : Base_8019DAC0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *set);
    u8 pad1c[0x90];
    f32 fac;
    s32 fb0;
    void *fb4;
    u16 fb8;
};

extern "C" {
int check_flag_100__10TObjPlayerFPv(void *);
f32 xz_distance_squared(void *, void *);
u32 get_player_by_client_id(u16);
u8 *find_warp_player_in_range(s32 arg0, short arg1, f32 farg0);
void construct_collider_proxy__13TUnk_804AF8A0Fv(Warp_8019DAC0 *, void *, void *);
void *__nw__7TObjectFUl(u32);
extern s32 __vt__12TObjWarpBase[];
extern s32 TObjWarpBase__name;
extern const f32 lbl_805DBFEC;
Warp_8019DAC0 *TObjWarpBase__ct(Warp_8019DAC0 *self, void *parent, void *set);
struct Base_8019DA54_8019D964 { char pad[0x18]; };
struct VObj_8019DA54_8019D964 : Base_8019DA54_8019D964 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13();
};

void *__dt__12TObjWarpBaseFv(void *arg0, s16 arg1);
s32 TLobby__sub_8001FE7C(s32, s32);
s32 TLobby__sub_803DA16C(void*);
s32 TWindow__close(u32);
s32 __dl__7TObjectFPv(void *);
s32 fn_8019DD24(s32, s32);

void TObjWarpBase::vfunc_14() {
    u32 player;

    player = (u32) *(u32 *)((s8 *)this + 0xB0);
    if (player != 0U) {
        TWindow__close(player);
        *(u32 *)((s8 *)this + 0xB0) = 0U;
        player = get_player_by_client_id(*(u16 *)((s8 *)this + 0xB8));
        if (player != 0U) {
            fn_8019DD24(player + 0x550, 4);
        }
        *(u16 *)((s8 *)this + 0xB8) = 0xFFFFU;
    }
}

u8 *find_warp_player_in_range(s32 arg0, short arg1, f32 farg0) {
  u8 *temp_r3;
  temp_r3 = (u8 *) ((u8 *)get_player_by_client_id(arg1));
  if ((temp_r3 != 0) && (xz_distance_squared((void *) (arg0 + 0x38), (void *) (temp_r3 + 0x38)) < (farg0 * farg0)))
  {
    if (check_flag_100__10TObjPlayerFPv(temp_r3) == 1)
    {
      return 0;
    }
    return temp_r3;
  }
  return 0;
}

void *__dt__12TObjWarpBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        struct VObj_8019DA54_8019D964 *o = (struct VObj_8019DA54_8019D964 *)arg0;
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjWarpBase;
        o->m12();
        ((TUnk_804AF8A0 *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 forest_warp_bml_resource;
extern u32 forest_warp_texture_list;

Warp_8019DAC0 *TObjWarpBase__ct(Warp_8019DAC0 *self, void *parent, void *set) {
    void *o;
    construct_collider_proxy__13TUnk_804AF8A0Fv(self, parent, set);
    *(void **)((u8 *)self + 0x18) = ((u8 *)&__vt__12TObjWarpBase);
    self->f0 = TObjWarpBase__name;
    self->m5(set);
    self->fac = lbl_805DBFEC;
    self->fb0 = 0;
    o = __nw__7TObjectFUl(0xB4);
    if (o != 0) {
        o = ((TTecLuker *)o)->construct_field_collider((s32)((u8 *)self + 0x38), (s32)self, (s32)1);
    }
    self->fb4 = o;
    self->fb8 = 0xFFFF;
    return self;
}

void TObjWarpBase::free_globals() {
    if ((u32) forest_warp_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)forest_warp_texture_list);
        TAdSinglePlyChrSelectGC::safe_free(forest_warp_texture_list);
        forest_warp_texture_list = 0U;
    }
    TLobby__sub_8001FE7C(forest_warp_bml_resource, 1);
    forest_warp_bml_resource = 0;
}

}
