#ifndef PSO_CLASS_PACKAGE
#include "pso/TParticleCtrl.h"

TParticleCtrl::~TParticleCtrl() {}

extern "C" {

struct ParticleVec {
    s32 x;
    s32 y;
    s32 z;
};

struct ParticleCtrlData {
    s32 descriptor;
    u8 pad04[0x14];
    void *vtable;
    f32 field1C;
    s32 field20;
    f32 field24;
    s32 particle_index;
    u16 flags;
    u16 field2E;
    s32 field30;
    s32 field34;
    s32 field38;
    s32 field3C;
    f32 field40;
    f32 field44;
    s32 field48;
    s32 field4C;
    s32 field50;
    s32 field54;
    void *owner;
    u8 pad5C[4];
    ParticleVec position;
    ParticleVec direction;
};

void __ct__7TObjectFP7TObject(void *, void *);
void VecCopy__FP3VecPC3Vec(void *, const void *);

extern void *__vt__13TParticleCtrl[];
extern s32 TParticleCtrl__data_805D2938;
extern void *tl_07;
extern void *tl_clipout;
extern const f32 TParticleCtrl__data_805D94E0;
extern const f32 TParticleCtrl__data_805D94E4;

#define COPY_PARTICLE_DIRECTION(particle, direction) do {                      \
    s32 component;                                                             \
    component = direction->x;                                                  \
    particle->direction.x = component;                                         \
    component = direction->z;                                                  \
    particle->direction.z = component;                                         \
    component = direction->y;                                                  \
    particle->direction.y = component;                                         \
} while (0)
#define CLEAR_PARTICLE_DIRECTION(particle, unused) do {                        \
    particle->direction.x = 0;                                                 \
    particle->direction.y = 0;                                                 \
    particle->direction.z = 0;                                                 \
} while (0)

#define INITIALIZE_PARTICLE(particle, position, particle_index, field30,       \
                            field34, field38, use_self, particle_flags,        \
                            direction_action, direction_source) do {           \
    __ct__7TObjectFP7TObject(particle, tl_07);                                 \
    particle->vtable = __vt__13TParticleCtrl;                                  \
    particle->descriptor = TParticleCtrl__data_805D2938;                       \
    particle->field4C = 0;                                                     \
    particle->field50 = 0;                                                     \
    particle->field54 = 0;                                                     \
    particle->field48 = 0;                                                     \
    particle->field40 = TParticleCtrl__data_805D94E4;                          \
    particle->field44 = TParticleCtrl__data_805D94E4;                          \
    particle->field1C = TParticleCtrl__data_805D94E0;                          \
    particle->field20 = 0;                                                     \
    particle->field24 = TParticleCtrl__data_805D94E4;                          \
    particle->particle_index = particle_index;                                 \
    VecCopy__FP3VecPC3Vec(&particle->position, position);                      \
    particle->flags = particle_flags;                                          \
    particle->field2E = 0xFFFF;                                                \
    direction_action(particle, direction_source);                              \
    particle->field30 = field30;                                               \
    particle->field34 = field34;                                               \
    particle->field38 = field38;                                               \
    particle->field3C = 0;                                                     \
    if (use_self != 0) {                                                       \
        particle->owner = particle;                                            \
    } else if (particle->flags & 0x800) {                                      \
        if (particle->flags & 0x4000) {                                        \
            particle->owner = tl_clipout;                                      \
        } else {                                                               \
            particle->owner = tl_07;                                           \
        }                                                                      \
    } else {                                                                   \
        particle->owner = tl_07;                                               \
    }                                                                          \
} while (0)

void *__ct__13TParticleCtrlFv(
    ParticleCtrlData *particle,
    const void *position,
    const ParticleVec *direction,
    s32 particle_index,
    s32 field30,
    s32 field34,
    s32 field38,
    s32 use_self,
    u16 flags)
{
    INITIALIZE_PARTICLE(particle, position, particle_index, field30, field34,
                        field38, use_self, flags, COPY_PARTICLE_DIRECTION,
                        direction);
    return particle;
}

void *initialize_with_direction__13TParticleCtrlFPvPvPviiiii(
    ParticleCtrlData *particle,
    const void *position,
    const ParticleVec *direction,
    s32 particle_index,
    s32 field30,
    s32 field34,
    s32 field38,
    s32 use_self)
{
    INITIALIZE_PARTICLE(particle, position, particle_index, field30, field34,
                        field38, use_self, 0, COPY_PARTICLE_DIRECTION,
                        direction);
    return particle;
}

void *initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(
    ParticleCtrlData *particle,
    const void *position,
    s32 particle_index,
    s32 field30,
    s32 field34,
    s32 field38,
    s32 use_self,
    u16 flags)
{
    INITIALIZE_PARTICLE(particle, position, particle_index, field30, field34,
                        field38, use_self, flags, CLEAR_PARTICLE_DIRECTION,
                        position);
    return particle;
}

void *initialize__13TParticleCtrlFPvPviiiii(
    ParticleCtrlData *particle,
    const void *position,
    s32 particle_index,
    s32 field30,
    s32 field34,
    s32 field38,
    s32 use_self)
{
    INITIALIZE_PARTICLE(particle, position, particle_index, field30, field34,
                        field38, use_self, 0, CLEAR_PARTICLE_DIRECTION,
                        position);
    return particle;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80083550
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void disable_if_single_screen__13TParticleCtrlFv(void);
M2C_UNK TObjPlayer__sub_803DC83C(M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC850(M2C_UNK);
s32 is_split_screen();

extern s32 some_id_805c6f74;

void disable_if_single_screen__13TParticleCtrlFv(void) {
    if (is_split_screen() == 0) {
        TObjPlayer__sub_803DC850(0);
        TObjPlayer__sub_803DC83C(0);
        some_id_805c6f74 &= 0xFFF7FFFF;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80085804
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_player_proximity__13TParticleCtrlFPv(u8 *arg0);
f32 TObjPlayer__sub_80141CF8(void *, void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(void *);

extern s32 lbl_805D2930;
extern s32 lbl_805D53A0;
extern const f32 lbl_805D947C;
extern const f32 lbl_805D9480;

void check_player_proximity__13TParticleCtrlFPv(u8 *arg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((void *) (lbl_805D53A0));
    if ((temp_r3 != 0U) && (TObjPlayer__sub_80141CF8((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38)) < lbl_805D947C)) {
        if (M2C_FIELD(arg0, f32 *, 0x68) > lbl_805D9480) {
            lbl_805D2930 = 1;
            return;
        }
        lbl_805D2930 = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80085878
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TParticleCtrl__sub_80085878(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK lbl_8048E6A8[];

void *TParticleCtrl__sub_80085878(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E6A8;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80085E20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TParticleCtrl__sub_80085E20(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK lbl_8048E6DC[];

void *TParticleCtrl__sub_80085E20(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E6DC;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800866F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_from_heap__13TParticleCtrlFPv(u8 *arg0);
int heap_free__5THeapFPv(void *, void *);

extern s32 TParticleCtrl__data_805D4EF0;
extern s32 alt_heap;

void free_from_heap__13TParticleCtrlFPv(u8 *arg0) {
    if (arg0) {
        if (arg0[0xAC] != 0) {
            heap_free__5THeapFPv((void *)TParticleCtrl__data_805D4EF0, arg0);
            return;
        }
        heap_free__5THeapFPv((void *)alt_heap, arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800867AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_heap__13TParticleCtrlFv(void);
void __dt__5THeapFv(void*, int);

extern u32 TParticleCtrl__data_805D4EF0;

void free_heap__13TParticleCtrlFv(void) {
    if ((u32) TParticleCtrl__data_805D4EF0 != 0U) {
        __dt__5THeapFv((void*)TParticleCtrl__data_805D4EF0, 1);
        TParticleCtrl__data_805D4EF0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800867E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void init_heap__13TParticleCtrlFPv(void *arg0);
void *__ct__5THeapFUli(void *, void *, int);
void *__nw__5THeapFUl(int);

extern void *TParticleCtrl__data_805D4EF0;

void init_heap__13TParticleCtrlFPv(void *arg0) {
    void *o;
    if (TParticleCtrl__data_805D4EF0 == NULL) {
        o = __nw__5THeapFUl(0x14);
        if (o != NULL) {
            o = __ct__5THeapFUli(o, arg0, 16);
        }
        TParticleCtrl__data_805D4EF0 = o;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800868BC
#include "types.h"

extern "C" {

int get_instance__13TParticleCtrlFv(void);

    extern int TParticleCtrl__data_805D4F04;
int get_instance__13TParticleCtrlFv(void) {  return TParticleCtrl__data_805D4F04; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80088000
#include "types.h"

extern "C" {

void clear_active_flag__13TParticleCtrlFPv(void* p);
void enable__13TParticleCtrlFPv(void* p);

void clear_active_flag__13TParticleCtrlFPv(void* p) { *(u16*)((char*)p + 0x2c) &= 0xfffe; }
void enable__13TParticleCtrlFPv(void* p) { *(u16*)((char*)p + 0x2c) |= 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800884F0
#include "types.h"

extern "C" {

int TParticleCtrl__sub_800884F0(void* p);
void TParticleCtrl__sub_8008857C(void* p, f32 a, f32 b);
int copy_xyz__10TObjPlayerFPvPv(void*);

int TParticleCtrl__sub_800884F0(void* p) { return copy_xyz__10TObjPlayerFPvPv((char*)p + 0x98); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008857C
#include "types.h"

extern "C" {

int TParticleCtrl__sub_800884F0(void* p);
void TParticleCtrl__sub_8008857C(void* p, f32 a, f32 b);
int copy_xyz__10TObjPlayerFPvPv(void*);

void TParticleCtrl__sub_8008857C(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0xa4) = a; *(f32*)((char*)p + 0xa8) = b; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80088588
#include "types.h"

extern "C" {

void free_system__13TParticleCtrlFv(void);
int free__11TOBoss4RockFUi(void*);

    extern int lbl_805D4EF8;
void free_system__13TParticleCtrlFv(void) { free__11TOBoss4RockFUi((void*)(lbl_805D4EF8)); lbl_805D4EF8 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800885B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_all__13TParticleCtrlFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK free__11TOBoss4RockFUi(s32);

extern s32 lbl_805D4EFC;
extern u32 TParticleCtrl__data_805D4F00;
extern u32 TParticleCtrl__data_805D4F04;

void free_all__13TParticleCtrlFv(void) {
    free__11TOBoss4RockFUi(lbl_805D4EFC);
    lbl_805D4EFC = 0;
    if ((u32) TParticleCtrl__data_805D4F00 != 0U) {
        TLobby__sub_8001FE7C((void*)TParticleCtrl__data_805D4F00, 1);
        TParticleCtrl__data_805D4F00 = 0U;
    }
    if ((u32) TParticleCtrl__data_805D4F04 != 0U) {
        TLobby__sub_803DA16C((void*)TParticleCtrl__data_805D4F04);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TParticleCtrl__data_805D4F04);
        TParticleCtrl__data_805D4F04 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008861C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_particle_buffer__13TParticleCtrlFv(void);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
s32 TLobby__sub_800F9DF4(s32, s32);

extern s32 lbl_805D2944;
extern u32 lbl_805D2948;
extern s32 lbl_805D4EF8;

void init_particle_buffer__13TParticleCtrlFv(void) {
    s32 temp_r3;

    temp_r3 = TLobby__sub_800F9DF4(lbl_805D2944, (lbl_805D4EF8 = alloc_buffer__11TOBoss4RockFPv(0x13000)));
    lbl_805D2948 = 0;
    if (temp_r3 >= 0) {
        lbl_805D2948 = (u32) temp_r3 / 152U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80088670
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_particle_by_index__13TParticleCtrlFi(s32 arg0);

extern s32 lbl_805D4EF8;
extern s32 lbl_805D4EFC;

s32 get_particle_by_index__13TParticleCtrlFi(s32 arg0) {
    if (arg0 >= 0x200) {
        return lbl_805D4EFC + ((arg0 - 0x200) * 0x98);
    }
    return lbl_805D4EF8 + (arg0 * 0x98);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008968C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TParticleCtrl__sub_8008968C(void *arg0, s16 arg1);
void TParticleCtrl__sub_8008655C(void *, int);
void free_from_heap__13TParticleCtrlFPv(void *);

extern M2C_UNK TParticleCtrl__data_8048E778[];

void *TParticleCtrl__sub_8008968C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = TParticleCtrl__data_8048E778;
        TParticleCtrl__sub_8008655C(arg0, 0);
        if (arg1 > 0) {
            free_from_heap__13TParticleCtrlFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008ABCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TParticleCtrl__sub_8008ABCC(void *arg0, s16 arg1);
void TParticleCtrl__sub_8008655C(void *, int);
void free_from_heap__13TParticleCtrlFPv(void *);

extern M2C_UNK TParticleCtrl__data_8048E790[];

void *TParticleCtrl__sub_8008ABCC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = TParticleCtrl__data_8048E790;
        TParticleCtrl__sub_8008655C(arg0, 0);
        if (arg1 > 0) {
            free_from_heap__13TParticleCtrlFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008BF00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TParticleCtrl__sub_8008BF00(void *arg0, s16 arg1);
void TParticleCtrl__sub_8008655C(void *, int);
void free_from_heap__13TParticleCtrlFPv(void *);

extern M2C_UNK TParticleCtrl__data_8048E7A8[];

void *TParticleCtrl__sub_8008BF00(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = TParticleCtrl__data_8048E7A8;
        TParticleCtrl__sub_8008655C(arg0, 0);
        if (arg1 > 0) {
            free_from_heap__13TParticleCtrlFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A2124
#include "types.h"

extern "C" {

void* TParticleCtrl__sub_801A2124(void* p);

void* TParticleCtrl__sub_801A2124(void* p) { return (char*)p + 0x74; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A25B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy_particle__13TParticleCtrlFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK fn_8020C430(void *, M2C_UNK);

extern M2C_UNK lbl_804B9870[];

void *destroy_particle__13TParticleCtrlFPvs(void *arg0, s16 arg1) {
    void *obj = arg0;
    u16 temp_r0;

    if (obj != NULL) {
        M2C_FIELD(obj, M2C_UNK **, 0x18) = lbl_804B9870;
        if ((u32) M2C_FIELD(obj, u32 *, 0x80) != 0U) {
            temp_r0 = M2C_FIELD(obj, u16 *, 0x1C);
            if ((temp_r0 >= 0x4000U) && (temp_r0 < 0xFFFFU)) {
                fn_8020C430(obj, -3);
                M2C_FIELD(obj, u32 *, 0x80) = 0U;
            }
        }
        __dt__7TObjectFv(obj, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(obj);
        }
    }
    return obj;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C6650
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 free_handle__13TParticleCtrlFPv(void *arg0);
s32 check_value_equals__13TQuestColCtrlFPvi(s32, s32);

extern s32 TParticleCtrl__data_805D2938;

u32 free_handle__13TParticleCtrlFPv(void *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) && (check_value_equals__13TQuestColCtrlFPvi(M2C_FIELD(arg0, s32 *, 0x20), TParticleCtrl__data_805D2938) == 0)) {
        M2C_FIELD(arg0, u32 *, 0x20) = 0U;
    }
    return M2C_FIELD(arg0, u32 *, 0x20);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C66A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *dt__13TParticleCtrlFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
u32 free_handle__13TParticleCtrlFPv(void *);
M2C_UNK queue_destruction__7TObjectFv();

extern M2C_UNK lbl_804C3FF0[];

void *dt__13TParticleCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3FF0;
        if (free_handle__13TParticleCtrlFPv(arg0) != 0U) {
            queue_destruction__7TObjectFv();
        }
        __dt__7TObjectFv(arg0, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D6B3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 validate_ctrl__13TParticleCtrlFPv(void *arg0);
s32 check_value_equals__13TQuestColCtrlFPvi(s32, s32);

extern s32 TParticleCtrl__data_805D2938;

u32 validate_ctrl__13TParticleCtrlFPv(void *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 4) != 0U) && (check_value_equals__13TQuestColCtrlFPvi(M2C_FIELD(arg0, s32 *, 4), TParticleCtrl__data_805D2938) == 0)) {
        M2C_FIELD(arg0, u32 *, 4) = 0U;
    }
    return M2C_FIELD(arg0, u32 *, 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D6B8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void destroy_particle__13TParticleCtrlFPv(void *arg0);
void queue_destruction__7TObjectFv(void *);
void *validate_ctrl__13TParticleCtrlFPv(void *);

void destroy_particle__13TParticleCtrlFPv(void *arg0) {
    void *x;
    x = validate_ctrl__13TParticleCtrlFPv(arg0);
    if (x != NULL) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E2EFC
#include "types.h"

extern "C" {

void begin_effect_render__13TParticleCtrlFv(void);
void end_effect_render__13TParticleCtrlFv(void);
int set_effect_active__10TObjPlayerFv(void);
int reset_particle_counter__10TObjPlayerFv(void);
int TParticleCtrl__sub_803E2010(void);

void begin_effect_render__13TParticleCtrlFv(void) { reset_particle_counter__10TObjPlayerFv(); TParticleCtrl__sub_803E2010(); }

void end_effect_render__13TParticleCtrlFv(void) { set_effect_active__10TObjPlayerFv(); TParticleCtrl__sub_803E2010(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80327EC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_lifetime__13TParticleCtrlFPv(void *arg0);
M2C_UNK queue_destruction__7TObjectFv();

void update_lifetime__13TParticleCtrlFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) == 0U) {
        queue_destruction__7TObjectFv();
        return;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_r4 != 0) {
        temp_r0 = temp_r4 - 1;
        M2C_FIELD(arg0, s32 *, 0x3C) = temp_r0;
        if (temp_r0 == 0) {
            queue_destruction__7TObjectFv();
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80327F0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TParticleCtrlFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804ED598[];

void *__dt__13TParticleCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED598;
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x40)); M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0; }
        M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80328048
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 play_particle_at_active_slot__10TObjPlayerFiiiiii(u8, u8, s32, s32, s32, s32);
int get_object__13TParticleCtrlFPv(void* p);
void reset_ind_tev_stages__13TParticleCtrlFv(void);
int GXSetNumIndStages(int);
int GXSetTevDirect(int);
int fn_802A8260(void*);
int TObjPlayer__sub_803DC83C(int);

void set_tev_direct__13TParticleCtrlFi(s32 arg0) {
    if (arg0 != 0) {
        GXSetTevDirect(1);
    } else {
        GXSetTevDirect(0);
    }
    GXSetNumIndStages(0);
    TObjPlayer__sub_803DC83C(0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803280C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 play_particle_at_active_slot__10TObjPlayerFiiiiii(u8, u8, s32, s32, s32, s32);
int get_object__13TParticleCtrlFPv(void* p);
void reset_ind_tev_stages__13TParticleCtrlFv(void);
int GXSetNumIndStages(int);
int GXSetTevDirect(int);
int fn_802A8260(void*);
int TObjPlayer__sub_803DC83C(int);

int get_object__13TParticleCtrlFPv(void* p) { return fn_802A8260(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803280E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_ind_tev_stages__13TParticleCtrlFv(void);
void play_particle__13TParticleCtrlFPvis(void *arg0, s32 arg1, s16 arg2);
void *TParticleCtrl__sub_80328160(void *arg0, s16 arg1);
int GXSetNumIndStages(int);
int GXSetTevDirect(int);
int TObjPlayer__sub_803DC83C(int);
int get_object__13TParticleCtrlFPv(void* p);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int fn_802A8260(void*);
s32 play_particle_at_active_slot__10TObjPlayerFiiiiii(u8, u8, s32, s32, s32, s32);

void reset_ind_tev_stages__13TParticleCtrlFv(void) { GXSetTevDirect(1); GXSetNumIndStages(0); TObjPlayer__sub_803DC83C(0); }
void play_particle__13TParticleCtrlFPvis(void *arg0, s32 arg1, s16 arg2) {
    if (arg2 < 0) {
        arg2 = (s16) M2C_FIELD(arg0, u8 *, 0x1C);
    }
    play_particle_at_active_slot__10TObjPlayerFiiiiii((u8) arg2, M2C_FIELD(arg0, u8 *, 0x1D), 0, 0, 0, 1);
}

extern M2C_UNK lbl_804ED5B0[];

void *TParticleCtrl__sub_80328160(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED5B0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803E2008
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TParticleCtrl__sub_803E2008(s32 arg0);

extern s32 lbl_805D77B8;

void TParticleCtrl__sub_803E2008(s32 arg0) {
    lbl_805D77B8 = arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803E29FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_particles__13TParticleCtrlFv(void);
M2C_UNK TObjPlayer__sub_803E2248();

void reset_particles__13TParticleCtrlFv(void) {
    TObjPlayer__sub_803E2248();
}

}
#endif
#endif
