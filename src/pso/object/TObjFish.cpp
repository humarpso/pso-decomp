#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__8TObjFishFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__8TObjFish[];

void *__dt__8TObjFishFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TObjFish;
        if (M2C_FIELD(arg0, void **, 0xA0) != NULL) { safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0xA0)); M2C_FIELD(arg0, M2C_UNK *, 0xA0) = 0; }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8001973C
#include "types.h"

extern "C" {

f64 start__10TAdEndTextFv(void);
f64 TObjPlayer__sub_80019784(void);
int get_item_field_6__10TObjPlayerFPv(void* p);
u8 get_field_ed__10TObjPlayerFPv(void* p);
s32 get_type__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);

f32 get_random_float__8TObjFishFv(void) {
    return (f32) TObjPlayer__sub_80019784();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E2FD8
#include "types.h"

extern "C" {

int clear_render_callback__8TObjFishFv(void);
int set_global_state__16TObjEneRe7BeruraFi(void*);

int clear_render_callback__8TObjFishFv(void) { return set_global_state__16TObjEneRe7BeruraFi((void*)(0)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E3100
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_state_1__8TObjFishFPv(void *arg0);
M2C_UNK TObjFish__sub_800E3188(void *, M2C_UNK);

void init_state_1__8TObjFishFPv(void *arg0) {
    TObjFish__sub_800E3188(arg0, 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E3188
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjFish__sub_800E3188(s32 arg0, s16 arg1);
M2C_UNK __dl__FPv();

s32 TObjFish__sub_800E3188(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80141550
#include "types.h"

extern "C" {

int set_cull_none__8TObjFishFv(void);
int set_cull_mode_front__8TObjFishFv(void);
int set_cull_back__8TObjFishFv(void);
int GXSetCullMode(void*);

int set_cull_none__8TObjFishFv(void) { return GXSetCullMode((void*)(0)); }
int set_cull_mode_front__8TObjFishFv(void) { return GXSetCullMode((void*)(1)); }
int set_cull_back__8TObjFishFv(void) { return GXSetCullMode((void*)(2)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019F72C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjFish__sub_8019F72C(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 lbl_805D5C88;

void TObjFish__sub_8019F72C(void) {
    if ((u32) lbl_805D5C88 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5C88, 1);
        lbl_805D5C88 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029D504
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 update_state__8TObjFishFPv(void *arg0);
s32 is_lobby_event_active();

extern s32 TObjFish__data_805D65EC;

u8 update_state__8TObjFishFPv(void *arg0) {
    s16 temp_r0;

    if ((s32) TObjFish__data_805D65EC == 0) {
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x90);
        switch (temp_r0) {
        case 0:
            if (is_lobby_event_active() == 0) {
                M2C_FIELD(arg0, s16 *, 0x90) = 2;
                M2C_FIELD(arg0, s16 *, 0x92) = 0x28;
            }
            goto Lend;
        case 2:
            M2C_FIELD(arg0, s16 *, 0x92) = (s16) (M2C_FIELD(arg0, s16 *, 0x92) - 1);
            if (M2C_FIELD(arg0, s16 *, 0x92) <= 0) {
                M2C_FIELD(arg0, s16 *, 0x90) = 3;
            }
            goto Lend;
        case 3:
        default:
            if (is_lobby_event_active() != 0) {
                M2C_FIELD(arg0, s16 *, 0x90) = 0;
            }
        }
Lend:
        return (u8) (M2C_FIELD(arg0, s16 *, 0x90) == 3);
    }
    return 1U;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029E5B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resource__8TObjFishFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjFish__data_805D65E8;

void free_resource__8TObjFishFv(void) {
    if ((u32) TObjFish__data_805D65E8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjFish__data_805D65E8, 1);
        TObjFish__data_805D65E8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ABE20
#include "types.h"

extern "C" {

void reset_fish_globals__8TObjFishFv(void);

    extern int lbl_805D5660;
    extern int lbl_805D5664;
    extern int lbl_805D5668;
    extern int lbl_805D7780;
    extern int lbl_805D7784;
    extern int some_id_805c6f74;
void reset_fish_globals__8TObjFishFv(void) { lbl_805D7784 = lbl_805D5664; lbl_805D7780 = lbl_805D5668; some_id_805c6f74 = lbl_805D5660; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ACCB8
#include "types.h"

extern "C" {

s32 get_phase__8TObjFishFPv(void* p);

s32 get_phase__8TObjFishFPv(void* p) { return *(s32*)((char*)p + 0x378); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ACCC0
#include "types.h"

extern "C" {

int get_fish_count__8TObjFishFv(void);

    extern int lbl_805D66E8;
int get_fish_count__8TObjFishFv(void) {  return lbl_805D66E8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E787C
#include "types.h"

extern "C" {

void TObjFish__sub_802E787C(void);

    extern float lbl_805D6910;
    extern const float lbl_805DE9F0;
void TObjFish__sub_802E787C(void) { lbl_805D6910 = lbl_805DE9F0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E7970
#include "types.h"

extern "C" {

void destroy_child__8TObjFishFPv(void* p);
int queue_destruction__7TObjectFv(void*);

void destroy_child__8TObjFishFPv(void* p) { if (*(unsigned int*)((char*)p + 0x7b0) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x7b0)); *(int*)((char*)p + 0x7b0) = 0; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802EC2C4
#include "types.h"

extern "C" {

void spawn_via_trap__8TObjFishFiii(s32 arg0, s32 arg1, s32 arg2);
void set_effect_target_position__8TObjFishFPvPvPv(void* p, void* a1, void* a2);
void TObjFish__sub_802EC32C(void);
int TBoss3Volopt__sub_8022675C(void*, void*, void*, void*);
s32 TOTrapAncient01__sub_80226578(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0);

void spawn_via_trap__8TObjFishFiii(s32 arg0, s32 arg1, s32 arg2) {
    TOTrapAncient01__sub_80226578(arg1, arg0, arg2, 0, 0);
}
void set_effect_target_position__8TObjFishFPvPvPv(void* p, void* a1, void* a2) { TBoss3Volopt__sub_8022675C(a1, a2, (void*)0, (void*)0); }
void TObjFish__sub_802EC32C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802EC330
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_projectile_spawns__8TObjFishFPv(u8 *arg0);
M2C_UNK TBoss4Zako__sub_803D8910(int, void *);
M2C_UNK TObjEneDD__sub_800B9BEC(void *, void *, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(int, void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK spawn_via_trap__8TObjFishFiii(void *, int, void *);

extern const f32 lbl_805DEA14;
extern const f32 lbl_805DEA30;
extern const f32 lbl_805DEA58;
extern const f32 lbl_805DEB68;

void update_projectile_spawns__8TObjFishFPv(u8 *arg0) {
    u8 *temp_r31;

    TObjEneDD__sub_800B9BEC((void *) (arg0 + 0x38), (void *) (arg0 + 0x50C), (f32) (lbl_805DEB68));
    TObjEneDD__sub_800B9BEC((void *) (arg0 + 0x4C4), (void *) (arg0 + 0x518), (f32) (lbl_805DEB68));
    temp_r31 = arg0 + 0x524;
    VecCopy__FP3VecPC3Vec((int) (temp_r31), (void *) (arg0 + 0x518));
    TBoss4Zako__sub_803D8910((int) (temp_r31), (void *) (arg0 + 0x518));
    M2C_FIELD(temp_r31, f32 *, 0) = (f32) (M2C_FIELD(temp_r31, f32 *, 0) * lbl_805DEA14);
    M2C_FIELD(temp_r31, f32 *, 4) = (f32) (M2C_FIELD(temp_r31, f32 *, 4) * lbl_805DEA14);
    M2C_FIELD(temp_r31, f32 *, 8) = (f32) (M2C_FIELD(temp_r31, f32 *, 8) * lbl_805DEA14);
    if ((M2C_FIELD(arg0, s32 *, 0x628) & 0x100) && ((objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEA58)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEA30)) != 0))) {
        M2C_FIELD(arg0, s32 *, 0x6BC) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6BC) <= 0x10) {
        if (M2C_FIELD(arg0, s32 *, 0x628) & 0x400) {
            spawn_via_trap__8TObjFishFiii((void *) (arg0), (int) (0x39704), (void *) (arg0 + 0x524));
        } else {
            spawn_via_trap__8TObjFishFiii((void *) (arg0), (int) (0x3A303), (void *) (arg0 + 0x524));
        }
        M2C_FIELD(arg0, s32 *, 0x6BC) = (s32) (M2C_FIELD(arg0, s32 *, 0x6BC) + 1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x628) & 0x200) {
        spawn_via_trap__8TObjFishFiii((void *) (arg0), (int) (0x39F08), (void *) (arg0 + 0x50C));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802EC504
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_particle_201__8TObjFishFii(s32 arg1, s32 arg2);
M2C_UNK spawn_default_particle__8TObjFishFv(s32, M2C_UNK);

void spawn_particle_201__8TObjFishFii(s32 arg1, s32 arg2) {
    spawn_default_particle__8TObjFishFv(arg2, 0x201);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ED334
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_all_parts_done__8TObjFishFPv(u8 *arg0);
void update_wobble_angle__8TObjFishFPv(void *arg0);
M2C_UNK TBoss2DeRolLe__sub_80035FCC(void *);

s32 is_all_parts_done__8TObjFishFPv(u8 *arg0) {
    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x670);
    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x630);
    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x650);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x630) == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x650) == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x670) == 3)) {
        return 1;
    }
    return 0;
}

extern f32 lbl_805DEA10;
extern f32 lbl_805DEB60;
extern f32 lbl_805DEB98;

void update_wobble_angle__8TObjFishFPv(void *arg0) {
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x6F0);
    if (temp_f2 > lbl_805DEB60) {
        M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) (temp_f2 - lbl_805DEB60);
        return;
    }
    if (temp_f2 < lbl_805DEB98) {
        M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) (temp_f2 + lbl_805DEB60);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) lbl_805DEA10;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ED468
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_swim_direction__8TObjFishFPv(void *arg0);

extern const f32 lbl_805DEA50;
extern const f32 lbl_805DEA6C;
extern const f32 lbl_805DEA94;
extern const f32 lbl_805DEB9C;

void set_swim_direction__8TObjFishFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C0) == 0) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DEB9C;
        M2C_FIELD(arg0, s32 *, 0x64) = 0x500;
    } else {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DEA94;
        M2C_FIELD(arg0, s32 *, 0x64) = -0x500;
    }
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805DEA50;
    M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) lbl_805DEA6C;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ED6E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void flee_if_disturbed__8TObjFishFPv(u8 *arg0);
M2C_UNK TRaderMapCore__sub_801F99EC(void *, int, int, int, f32);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);

extern const f32 lbl_805DEA44;

void flee_if_disturbed__8TObjFishFPv(u8 *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 1) {
        set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
        TRaderMapCore__sub_801F99EC((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (1), (f32) (lbl_805DEA44));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ED828
#include "types.h"

extern "C" {

void sync_position_vectors__8TObjFishFi(s32 arg0);
void TObjFish__sub_802ED868(void);
s32 VecCopy__FP3VecPC3Vec(s32, s32);

void sync_position_vectors__8TObjFishFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void TObjFish__sub_802ED868(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ED920
#include "types.h"

extern "C" {

void TObjFish__sub_802ED920(void);
void TObjFish__sub_802ED924(void);

void TObjFish__sub_802ED920(void) {  }
void TObjFish__sub_802ED924(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F178C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_default_particle__8TObjFishFv(void);
M2C_UNK spawn_particle__8TObjFishFiif(f32);

extern const f32 lbl_805DEC90;

void spawn_default_particle__8TObjFishFv(void) {
    spawn_particle__8TObjFishFiif(lbl_805DEC90);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F17B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802F17B0 { char pad[0x18]; };
struct VObj_802F17B0 : Base_802F17B0 {
    virtual void m0();
    virtual void m1();
};

extern "C" {

void create_splash_particle__8TObjFishFiii(s32 arg0, s32 arg1, s32 arg2);
void *initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(void *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_802F190C(void *, s32);
s32 get_particle_by_index__13TParticleCtrlFi(s32);

void create_splash_particle__8TObjFishFiii(s32 arg0, s32 arg1, s32 arg2) {
    void *var_r31;

    var_r31 = __nw__7TObjectFUl(0x78);
    if (var_r31 != NULL) {
        var_r31 = initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(var_r31, arg0, get_particle_by_index__13TParticleCtrlFi(arg1), 1, 0, 0, 1, 0x40);
    }
    if (var_r31 != NULL) {
        ((VObj_802F17B0 *)var_r31)->m1();
        fn_802F190C(var_r31, arg2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F1848
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802F1848 { char pad[0x18]; };
struct VObj_802F1848 : Base_802F1848 {
    virtual void m0();
    virtual void m1();
};

extern "C" {

void spawn_particle__8TObjFishFiif(s32 arg0, s32 arg1, f32 farg0);
void *initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(void *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 get_particle_by_index__13TParticleCtrlFi(s32);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_802F1960(void *, f32);

void spawn_particle__8TObjFishFiif(s32 arg0, s32 arg1, f32 farg0) {
    void *var_r31;

    var_r31 = __nw__7TObjectFUl(0x78);
    if (var_r31 != NULL) {
        var_r31 = initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(var_r31, arg0, get_particle_by_index__13TParticleCtrlFi(arg1), 1, 0, 0, 1, 0x40);
    }
    if (var_r31 != NULL) {
        ((VObj_802F1848 *)var_r31)->m1();
        fn_802F1960(var_r31, farg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F18E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjFish__sub_802F18E8(void);
M2C_UNK fn_802F1960(f32);

extern const f32 lbl_805DEC90;

void TObjFish__sub_802F18E8(void) {
    fn_802F1960(lbl_805DEC90);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033CAB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TObjFish__sub_8033CAB0(u8 *arg0, s16 arg1);
M2C_UNK TBoss6PlotFalz__sub_802AC25C(void *);
M2C_UNK TBoss6PlotFalz__sub_802AC4D8();
M2C_UNK TCameraCtrl__sub_80069DA8();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, int);
M2C_UNK init_state_1__8TObjFishFPv(void *);
M2C_UNK request_destroy__11TBoss4Type2FUi(void *);

extern const M2C_UNK lbl_804EF9C0[];

u8 *TObjFish__sub_8033CAB0(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK*)&lbl_804EF9C0;
        TCameraCtrl__sub_80069DA8();
        TBoss6PlotFalz__sub_802AC4D8();
        TBoss6PlotFalz__sub_802AC25C(arg0 + 0x40);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
            init_state_1__8TObjFishFPv(M2C_FIELD(arg0, void **, 0x60));
            M2C_FIELD(arg0, u32 *, 0x60) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x64));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033CC80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_instance__8TObjFishFPv(void *arg0);
void *TObjFish__sub_8033CB4C(void *, void *);
void *__nw__7TObjectFUl(int);

void *create_instance__8TObjFishFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x68);
    if (o != NULL) {
        o = TObjFish__sub_8033CB4C(o, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033CDD8
#include "types.h"

extern "C" {

int TObjFish__sub_8033CDD8(void* p);
int TObjFish__sub_8033CCC8(void*);

int TObjFish__sub_8033CDD8(void* p) { return TObjFish__sub_8033CCC8(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033D11C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__8TObjFishFPvs(void *arg0, s16 arg1);
void TCameraCtrl__sub_80069DA8();
void init_state_1__8TObjFishFPv(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void request_destroy__11TBoss4Type2FUi(void *);

extern M2C_UNK lbl_804EF9EC[];

void *destroy__8TObjFishFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EF9EC;
        TCameraCtrl__sub_80069DA8();
        if (M2C_FIELD(arg0, void **, 0x88) != NULL) { init_state_1__8TObjFishFPv(M2C_FIELD(arg0, void **, 0x88)); M2C_FIELD(arg0, M2C_UNK *, 0x88) = 0; }
        if (M2C_FIELD(arg0, void **, 0x8C) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x8C)); M2C_FIELD(arg0, M2C_UNK *, 0x8C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033DC60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_variant__8TObjFishFPv(void *arg0);
void *TObjFish__sub_8033DA94(void *, void *);
void *__nw__7TObjectFUl(int);

void *create_variant__8TObjFishFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF0);
    if (o != NULL) {
        o = TObjFish__sub_8033DA94(o, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033DCD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_effect__8TObjFishFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(int, int, f32);
M2C_UNK TObjFish__sub_800E3074(int);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK clear_render_callback__8TObjFishFv(int);

void render_effect__8TObjFishFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x50) >= 0x1AC) {
        TObjPlayer__sub_803D9B2C();
        set_global_flag__10TObjPlayerFv();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x58));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x44)));
        TObjFish__sub_800E3074((int) (M2C_FIELD(arg0, s32 *, 0x9C)));
        TObjEneSlimeOne__sub_803E4AF4((int) (M2C_FIELD(arg0, s32 *, 0x40)), (int) (M2C_FIELD(arg0, s32 *, 0x48)), (f32) (M2C_FIELD(arg0, f32 *, 0x4C)));
        clear_render_callback__8TObjFishFv((int) (M2C_FIELD(arg0, s32 *, 0x9C)));
        clear_global_state__10TObjPlayerFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033E0AC
#include "types.h"

extern "C" {

void update__8TObjFishFPv(void* p);
int render_effect__8TObjFishFPv(void*);
int TObjFish__sub_8033DD4C(void*);
int TObjFish__sub_8033DE60(void*);
int TObjFish__sub_8033DFB4(void*);

void update__8TObjFishFPv(void* p) { TObjFish__sub_8033DFB4(p); TObjFish__sub_8033DE60(p); TObjFish__sub_8033DD4C(p); render_effect__8TObjFishFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033FF64
#include "types.h"

extern "C" {

void TObjFish__sub_8033FF64(void* p);

void TObjFish__sub_8033FF64(void* p) { *(s32*)((char*)p + 0x58) = 24576; *(s32*)((char*)p + 0x5c) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803403B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *alloc__8TObjFishFPv(void *arg0);
void *TObjFish__sub_8034029C(void *, void *);
void *__nw__7TObjectFUl(int);

void *alloc__8TObjFishFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x88);
    if (o != NULL) {
        o = TObjFish__sub_8034029C(o, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803DA798
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_global_param__8TObjFishFi(s32 arg0);

extern u8 *lbl_805D774C;

s32 set_global_param__8TObjFishFi(s32 arg0) {
    M2C_FIELD(lbl_805D774C, s32 *, 0x20) = arg0;
    return 1;
}

}
#endif
#endif
