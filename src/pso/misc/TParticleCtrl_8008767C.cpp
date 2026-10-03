#include "pso/TParticleCtrl.h"

TParticleCtrl::~TParticleCtrl() {}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "types.h"
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

struct Stack_80088844 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

struct RecoveredGlobal_8008C21C_TParticleCtrl__data_8048E7A8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_8008BF58_TParticleCtrl__data_8048E7A8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8008BF58_TParticleCtrl__data_80511F70 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct Vec_8008A92C { f32 x, y, z; };

extern "C" {
void TParticleCtrl__sub_80088514(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, void *, void *);
void set_particle_tint_color(u8 *arg0, void *arg1);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
int free__11TOBoss4RockFUi(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
extern s32 lbl_805D4EFC;
extern u32 TParticleCtrl__data_805D4F00;
extern u32 TParticleCtrl__data_805D4F04;
void free_all__13TParticleCtrlFv(void);
s32 read_disc_file(s32, s32);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
extern s32 lbl_805D2944;
extern u32 lbl_805D2948;
extern int lbl_805D4EF8;
void init_particle_buffer__13TParticleCtrlFv(void);
extern s32 lbl_805D4EFC;
extern int lbl_805D4EF8;
s32 get_particle_by_index__13TParticleCtrlFi(s32 arg0);
void *alloc_particle_memory(int);
u8 * TParticleCtrl__sub_800896E4(void *, void *, void *, void *, s32, u16, s16);
u8 *create_ballistic_particle(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u16 arg4, s16 arg5);
void *alloc_particle_memory(int);
void *TParticleCtrl__sub_80089B50(void *, void *, void *, void *);
void * TParticleCtrl__sub_800887EC(void *arg0, void *arg1, void *arg2);
int queue_destruction__7TObjectFv(void *);
f32 TCameraCtrl__sub_803D8D00(void *);
extern const f32 TParticleCtrl__data_805D94F8;
extern const f32 TParticleCtrl__data_805D94FC;
void TParticleCtrl__sub_80088844(u8 *arg0);
void TParticleCtrl__sub_8008655C(void *, int);
void free_from_heap__13TParticleCtrlFPv(void *);
extern M2C_UNK TParticleCtrl__data_8048E778[];
void *TParticleCtrl__sub_8008968C(void *arg0, s16 arg1);
void *alloc_particle_memory(int);
u8 * TParticleCtrl__sub_8008AC24(void *, void *, void *, void *, s32, u16, s16);
u8 *create_orbit_particle(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u16 arg4, s16 arg5);
void *alloc_particle_memory(int);
void *TParticleCtrl__sub_8008B060(void *, void *, void *, void *, void *);
void *TParticleCtrl__sub_8008B060(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void * TParticleCtrl__sub_80089FEC(void *arg0, void *arg1, void *arg2, void *arg3);
extern const f32 TParticleCtrl__data_805D9528;
int queue_destruction__7TObjectFv(void *);
void TParticleCtrl__sub_8008A04C(u8 *arg0);
void TParticleCtrl__sub_8008655C(void *, int);
void free_from_heap__13TParticleCtrlFPv(void *);
extern M2C_UNK TParticleCtrl__data_8048E790[];
void *TParticleCtrl__sub_8008ABCC(void *arg0, s16 arg1);
void *alloc_particle_memory(int);
u8 *create_radial_particle(u8 *arg0, u8 *arg1, s32 arg2, u16 arg3, s16 arg4);
void *alloc_particle_memory(int);
void * TParticleCtrl__sub_8008B4E0(void *arg0, void *arg1, void *arg2);
int queue_destruction__7TObjectFv(void *);
extern const f32 TParticleCtrl__data_805D9558;
extern const f32 TParticleCtrl__data_805D955C;
f32 TCameraCtrl__sub_803D8D00(void *);
void TParticleCtrl__sub_8008B538(u8 *arg0);
void TParticleCtrl__sub_8008655C(void *, int);
void free_from_heap__13TParticleCtrlFPv(void *);
extern M2C_UNK TParticleCtrl__data_8048E7A8[];
void *TParticleCtrl__sub_8008BF00(void *arg0, s16 arg1);
int queue_destruction__7TObjectFv(void *);
int TKeyBoardControl__sub_8000F91C(int);
int TKeyBoardControl__sub_8000F9CC(int);
int TLobby__sub_80227248(void);
int TLobby__sub_8022743C(void);
void destroy_keyboard_objects(void * _w0);
u8 * TParticleCtrl__sub_800865BC(void *, void *, s32);
int get_object__13TParticleCtrlFPv(void *);
s32 rand(void);
extern M2C_UNK TParticleCtrl__data_8048E7A8[];
extern RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
extern const f32 TParticleCtrl__data_805D9558;
extern const f32 TParticleCtrl__data_805D955C;
extern const f32 lbl_805D9568;
extern const f32 lbl_805D956C;
u8 *TParticleCtrl__sub_8008C21C(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3);
u8 * TParticleCtrl__sub_800865BC(void *, void *, s32);
int get_object__13TParticleCtrlFPv(void *);
s32 rand(void);
extern M2C_UNK TParticleCtrl__data_8048E7A8[];
extern RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
extern const f32 TParticleCtrl__data_805D9558;
extern const f32 TParticleCtrl__data_805D955C;
extern const f32 lbl_805D9568;
extern const f32 lbl_805D956C;
u8 *construct_radial_particle(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u16 arg4, s16 arg5);
void *TLobby__sub_80020004(void *, int, void *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 read_disc_file(s32, s32);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
u32 load_gvm_texture_file(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
int sprintf(char *, const char *, ...);
char *strcpy(char *, const char *);
void *memset(void *, int, u32);
extern char lbl_80439494[];
extern char lbl_804394A4[];
extern char lbl_804394BC[];
extern char lbl_804394D4[];
extern u8 lbl_8048E768[];
extern s32 lbl_805D4EFC;
extern u32 TParticleCtrl__data_805D4F00;
extern u32 TParticleCtrl__data_805D4F04;
void TParticleCtrl__sub_8008869C(void);
s32 is_split_screen();
M2C_UNK disable_if_single_screen__13TParticleCtrlFv();
M2C_UNK setup_particle_tev(M2C_UNK);
M2C_UNK load_projected_texture_matrix(f32);
s32 TParticleCtrl__sub_800861F4(void *, s32);
M2C_UNK TParticleCtrl__sub_80086248(void *);
M2C_UNK apply_particle_model_fade_color(void *, M2C_UNK);
M2C_UNK set_depth_buffer_settings_id__FUl(M2C_UNK);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TParticleCtrl__sub_801E4E7C(s32, void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
f32 TBoss8Dragon__sub_803D64DC(s32);
M2C_UNK scale_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C(f32);
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(u32);
M2C_UNK draw_ginja_object(u32);
M2C_UNK draw_ginja_model_with_motion(u32, u32, f32);
extern RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
extern u8 *lbl_805D4DF0;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 TParticleCtrl__data_805D9528;
extern const f32 lbl_805D9540;
void draw_orbit_particle_sprite(u8 *arg0);
}

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
    ParticleVec *direction,
    s32 particle_index,
    s32 field30,
    s32 field34,
    s32 field38,
    s32 use_self,
    u16 flags)
{
    __ct__7TObjectFP7TObject(particle, tl_07);
    particle->vtable = __vt__13TParticleCtrl;
    particle->descriptor = TParticleCtrl__data_805D2938;
    particle->field4C = 0;
    particle->field50 = 0;
    particle->field54 = 0;
    particle->field48 = 0;
    particle->field40 = TParticleCtrl__data_805D94E4;
    particle->field44 = TParticleCtrl__data_805D94E4;
    particle->field1C = TParticleCtrl__data_805D94E0;
    particle->field20 = 0;
    particle->field24 = TParticleCtrl__data_805D94E4;
    particle->particle_index = particle_index;
    VecCopy__FP3VecPC3Vec(&particle->position, position);
    particle->flags = flags;
    particle->field2E = 0xFFFF;
    {
        s32 component;
        component = direction->x;
        particle->direction.x = component;
        component = direction->z;
        particle->direction.z = component;
        component = direction->y;
        particle->direction.y = component;
    }
    particle->field30 = field30;
    particle->field34 = field34;
    particle->field38 = field38;
    particle->field3C = 0;
    if (use_self != 0) {
        particle->owner = particle;
    } else if (particle->flags & 0x800) {
        if (particle->flags & 0x4000) {
            particle->owner = tl_clipout;
        } else {
            particle->owner = tl_07;
        }
    } else {
        particle->owner = tl_07;
    }
    return particle;
}

void *initialize_with_direction__13TParticleCtrlFPvPvPviiiii(
    ParticleCtrlData *particle,
    const void *position,
    ParticleVec *direction,
    s32 particle_index,
    s32 field30,
    s32 field34,
    s32 field38,
    s32 use_self)
{
    __ct__7TObjectFP7TObject(particle, tl_07);
    particle->vtable = __vt__13TParticleCtrl;
    particle->descriptor = TParticleCtrl__data_805D2938;
    particle->field4C = 0;
    particle->field50 = 0;
    particle->field54 = 0;
    particle->field48 = 0;
    particle->field40 = TParticleCtrl__data_805D94E4;
    particle->field44 = TParticleCtrl__data_805D94E4;
    particle->field1C = TParticleCtrl__data_805D94E0;
    particle->field20 = 0;
    particle->field24 = TParticleCtrl__data_805D94E4;
    particle->particle_index = particle_index;
    VecCopy__FP3VecPC3Vec(&particle->position, position);
    particle->flags = 0;
    particle->field2E = 0xFFFF;
    {
        s32 component;
        component = direction->x;
        particle->direction.x = component;
        component = direction->z;
        particle->direction.z = component;
        component = direction->y;
        particle->direction.y = component;
    }
    particle->field30 = field30;
    particle->field34 = field34;
    particle->field38 = field38;
    particle->field3C = 0;
    if (use_self != 0) {
        particle->owner = particle;
    } else if (particle->flags & 0x800) {
        if (particle->flags & 0x4000) {
            particle->owner = tl_clipout;
        } else {
            particle->owner = tl_07;
        }
    } else {
        particle->owner = tl_07;
    }
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

#include "types.h"

extern "C" {

int TParticleCtrl__sub_800884F0(void* p);
void TParticleCtrl__sub_8008857C(void* p, f32 a, f32 b);
void clear_active_flag__13TParticleCtrlFPv(void* p);
void enable__13TParticleCtrlFPv(void* p);
void free_system__13TParticleCtrlFv(void);
int copy_xyz__10TObjPlayerFPvPv(void*);
int free__11TOBoss4RockFUi(void*);

void clear_active_flag__13TParticleCtrlFPv(void* p) { *(u16*)((char*)p + 0x2c) &= 0xfffe; }
void enable__13TParticleCtrlFPv(void* p) { *(u16*)((char*)p + 0x2c) |= 0x1; }

int TParticleCtrl__sub_800884F0(void* p) { return copy_xyz__10TObjPlayerFPvPv((char*)p + 0x98); }

void TParticleCtrl__sub_80088514(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0xB0) = arg1;
    M2C_FIELD(arg0, s32 *, 0xB4) = arg2;
    M2C_FIELD(arg0, s32 *, 0xB8) = arg3;
    M2C_FIELD(arg0, f32 *, 0xC0) = farg0;
    if (arg4 != 0) {
        M2C_FIELD(arg0, u16 *, 0x24) = (u16) (M2C_FIELD(arg0, u16 *, 0x24) | 0x400);
    }
    M2C_FIELD(arg0, u16 *, 0x24) = (u16) (M2C_FIELD(arg0, u16 *, 0x24) | 0x200);
}

void set_particle_tint_color(u8 *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 0x24) = (u16) (M2C_FIELD(arg0, u16 *, 0x24) | 0x100);
    copy_vec4__13TRaderMapCoreFPvPv((void *) (arg0 + 0x48), arg1, (void *) (arg0));
}

void TParticleCtrl__sub_8008857C(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0xa4) = a; *(f32*)((char*)p + 0xa8) = b; }

    extern int lbl_805D4EF8;
void free_system__13TParticleCtrlFv(void) { free__11TOBoss4RockFUi((void*)(lbl_805D4EF8)); lbl_805D4EF8 = 0; }
void free_all__13TParticleCtrlFv(void) {
    free__11TOBoss4RockFUi((void*)(lbl_805D4EFC));
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
void init_particle_buffer__13TParticleCtrlFv(void) {
    s32 temp_r3;
    temp_r3 = read_disc_file(lbl_805D2944, ((*(s32 *)&lbl_805D4EF8) = alloc_buffer__11TOBoss4RockFPv(0x13000)));
    lbl_805D2948 = 0;
    if (temp_r3 >= 0) {
        lbl_805D2948 = (u32) temp_r3 / 152U;
    }
}
s32 get_particle_by_index__13TParticleCtrlFi(s32 arg0) {
    if (arg0 >= 0x200) {
        return lbl_805D4EFC + ((arg0 - 0x200) * 0x98);
    }
    return (*(s32 *)&lbl_805D4EF8) + (arg0 * 0x98);
}

void TParticleCtrl__sub_8008869C(void) {
    char name[0x20];
    s32 state;
    void *p;
    memset(name, 0, 0x20);
    strcpy(name, lbl_80439494);
    state = get_global_state__14TOKeyMachine01Fv();
    if (state < 10) {
        if (state < 0) {
            return;
        }
        sprintf(name, lbl_804394A4, state);
    } else {
        sprintf(name, lbl_804394BC, state);
    }
    read_disc_file((s32)name, lbl_805D4EFC = alloc_buffer__11TOBoss4RockFPv((M2C_UNK)(0x2600)));
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (p != 0) {
        p = TLobby__sub_80020004(p, 1, lbl_8048E768, 0, 0, 0);
    }
    TParticleCtrl__data_805D4F00 = (u32)p;
    TParticleCtrl__data_805D4F04 = load_gvm_texture_file(lbl_804394D4);
}

u8 *create_ballistic_particle(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u16 arg4, s16 arg5) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(((u8 *)alloc_particle_memory((int)(0xD0))));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TParticleCtrl__sub_800896E4(temp_r3, arg0, arg1, arg2, arg3, arg4, arg5));
    }
    return var_r0;
}
void * TParticleCtrl__sub_800887EC(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = alloc_particle_memory(0xd0);
    if (o != NULL) {
        o = TParticleCtrl__sub_80089B50(o, arg0, arg1, arg2);
    }
    return o;
}
void TParticleCtrl__sub_80088844(u8 *arg0) {
    Stack_80088844 stack;
    f32 temp_f1;
    if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x20), u8 *, 0x88) & 8) {
        stack.sp8 = M2C_FIELD(arg0, f32 *, 0x70) - M2C_FIELD(arg0, f32 *, 0x30);
        stack.spC = M2C_FIELD(arg0, f32 *, 0x74) - M2C_FIELD(arg0, f32 *, 0x34);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x78);
        stack.sp10 = temp_f1 - M2C_FIELD(arg0, f32 *, 0x38);
        if (TParticleCtrl__data_805D94F8 == TCameraCtrl__sub_803D8D00((void *)((void *) (&stack.sp8)))) {
            queue_destruction__7TObjectFv((void *) (arg0));
            return;
        }
    }
    if (M2C_FIELD(arg0, f32 *, 0x58) >= TParticleCtrl__data_805D94FC) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
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
u8 *create_orbit_particle(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u16 arg4, s16 arg5) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(((u8 *)alloc_particle_memory((int)(0xE0))));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TParticleCtrl__sub_8008AC24(temp_r3, arg0, arg1, arg2, arg3, arg4, arg5));
    }
    return var_r0;
}
void * TParticleCtrl__sub_80089FEC(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = alloc_particle_memory(0xe0);
    if (o != NULL) {
        o = TParticleCtrl__sub_8008B060(o, arg0, arg1, arg2, arg3);
    }
    return o;
}
void TParticleCtrl__sub_8008A04C(u8 *arg0) {
    if (M2C_FIELD(arg0, f32 *, 0x58) >= TParticleCtrl__data_805D9528) {
        queue_destruction__7TObjectFv((void *)(arg0));
    }
}

void draw_orbit_particle_sprite(u8 *arg0) {
    Vec_8008A92C sp8;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f3;
    s32 temp_r4;
    u16 temp_r3;
    if (all_parents_unqueued_for_destruction__7TObjectFv() != 0) {
        temp_f3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), f32 *, 0x70) * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0xDC));
        M2C_FIELD(arg0, f32 *, 0x88) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * (TParticleCtrl__data_805D9528 + temp_f3));
        M2C_FIELD(arg0, f32 *, 0x8C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) * (TParticleCtrl__data_805D9528 - temp_f3));
        M2C_FIELD(arg0, f32 *, 0x88) = (f32) (M2C_FIELD(arg0, f32 *, 0x88) * M2C_FIELD(arg0, f32 *, 0xA4));
        M2C_FIELD(arg0, f32 *, 0x8C) = (f32) (M2C_FIELD(arg0, f32 *, 0x8C) * M2C_FIELD(arg0, f32 *, 0xA8));
        temp_r3 = M2C_FIELD(arg0, u16 *, 0x24);
        if (temp_r3 & 0x200) {
            if (((is_split_screen() == 0) || !(M2C_FIELD(arg0, u16 *, 0x24) & 0x400)) && ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U)) {
                sp8.x = M2C_FIELD(arg0, f32 *, 0x70) + M2C_FIELD(arg0, f32 *, 0x7C);
                sp8.y = M2C_FIELD(arg0, f32 *, 0x74) + M2C_FIELD(arg0, f32 *, 0x80);
                sp8.z = M2C_FIELD(arg0, f32 *, 0x78) + M2C_FIELD(arg0, f32 *, 0x84);
                TObjPlayer__sub_803D9B2C(M2C_FIELD(arg0, f32 *, 0x78));
                TOHangerMachine01__sub_803D9C00(&sp8);
                temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x88);
                scale_matrix(0, temp_f1_2, temp_f1_2, temp_f1_2);
                rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0xA0));
                rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x98));
                rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x9C));
                lbl_805D5660 = some_id_805c6f74;
                if (M2C_FIELD(arg0, u16 *, 0x24) & 0x400) {
                    begin_effect_render__13TParticleCtrlFv();
                    load_projected_texture_matrix(lbl_805D9540);
                }
                rotate_matrix_y(0, (s32) M2C_FIELD(arg0, s16 *, 0x96));
                if ((M2C_FIELD(arg0, u16 *, 0x24) & 0x1000) && ((void *) lbl_805D4DF0 != NULL)) {
                    rotate_matrix_y(0, M2C_FIELD(lbl_805D4DF0, s32 *, 0x194));
                }
                end_effect_render__13TParticleCtrlFv();
                if (M2C_FIELD(arg0, u16 *, 0x24) & 0x400) {
                    setup_particle_tev(0);
                } else {
                    temp_r4 = some_id_805c6f74;
                    lbl_805D5660 = temp_r4;
                    some_id_805c6f74 = temp_r4 | 0x8021;
                    if (TParticleCtrl__sub_800861F4(arg0, temp_r4) != 0) {
                        apply_particle_model_fade_color(arg0, 1);
                    } else {
                        apply_particle_model_fade_color(arg0, 0);
                    }
                }
                set_global_param__8TObjFishFi(M2C_FIELD(arg0, u32 *, 0xB4));
                set_depth_buffer_settings_id__FUl(3);
                if ((u32) M2C_FIELD(arg0, u32 *, 0xB8) != 0U) {
                    draw_ginja_model_with_motion(M2C_FIELD(arg0, u32 *, 0xB0), M2C_FIELD(arg0, u32 *, 0xB8), M2C_FIELD(arg0, f32 *, 0xBC));
                } else {
                    draw_ginja_object(M2C_FIELD(arg0, u32 *, 0xB0));
                }
                if (M2C_FIELD(arg0, u16 *, 0x24) & 0x400) {
                    disable_if_single_screen__13TParticleCtrlFv();
                }
                some_id_805c6f74 = lbl_805D5660;
                end_effect_render__13TParticleCtrlFv();
                pop_matrix();
            }
        } else {
            if (temp_r3 & 0x2000) {
                TParticleCtrl__sub_80086248(arg0);
                return;
            }
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), u8 *, 0x88) & 0x20) {
                TParticleCtrl__sub_801E4E7C(((s32 *)((u8 *)&TParticleCtrl__data_80511F70 + 0xD8))[M2C_FIELD(arg0, u16 *, 0x1C)], arg0 + 0x6C);
                return;
            }
            TParticleCtrl__sub_801E4E7C(((s32 *)&TParticleCtrl__data_80511F70)[M2C_FIELD(arg0, u16 *, 0x1C)], arg0 + 0x6C);
        }
    }
}

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
u8 *create_radial_particle(u8 *arg0, u8 *arg1, s32 arg2, u16 arg3, s16 arg4) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(((u8 *)alloc_particle_memory((int)(0xC4))));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(construct_radial_particle((u8 *)(temp_r3), (u8 *)(arg0), (u8 *)(arg1), (s32)(arg2), arg3, arg4));
    }
    return var_r0;
}
void * TParticleCtrl__sub_8008B4E0(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = alloc_particle_memory(0xc4);
    if (o != NULL) {
        o = TParticleCtrl__sub_8008C21C((u8 *)(o), (u8 *)(arg0), (u8 *)(arg1), (s32)(arg2));
    }
    return o;
}
void TParticleCtrl__sub_8008B538(u8 *arg0) {
    if ((M2C_FIELD(arg0, f32 *, 0x58) >= TParticleCtrl__data_805D9558) || (TParticleCtrl__data_805D955C == TCameraCtrl__sub_803D8D00((void *) (arg0 + 0x3C)))) {
        queue_destruction__7TObjectFv((void *)(arg0));
    }
}
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

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8008C21C_TParticleCtrl__data_8048E7A8_size[sizeof(RecoveredGlobal_8008C21C_TParticleCtrl__data_8048E7A8) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70_size[sizeof(RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70) == 0x1B0 ? 1 : -1];

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8008BF58_TParticleCtrl__data_8048E7A8_size[sizeof(RecoveredGlobal_8008BF58_TParticleCtrl__data_8048E7A8) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8008BF58_TParticleCtrl__data_80511F70_size[sizeof(RecoveredGlobal_8008BF58_TParticleCtrl__data_80511F70) == 0x1B0 ? 1 : -1];
u8 *construct_radial_particle(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u16 arg4, s16 arg5) {
    struct Fields_arg0 { u8 pad_0[24]; M2C_UNK * field_18; u16 field_1C; u8 pad_1E[6]; u16 field_24; s16 field_26; f32 field_28; f32 field_2C; f32 field_30; f32 field_34; f32 field_38; f32 field_3C; f32 field_40; f32 field_44; u8 pad_48[20]; f32 field_5C; u8 pad_60[8]; f32 field_68; u8 pad_6C[4]; f32 field_70; f32 field_74; f32 field_78; u8 pad_7C[25]; s8 field_95; };
    struct Fields_arg1 { u8 pad_0[24]; f32 field_18; f32 field_1C; f32 field_20; f32 field_24; f32 field_28; u8 pad_2C[4]; f32 field_30; u8 pad_34[4]; f32 field_38; u8 pad_3C[12]; s32 field_48; s32 field_4C; u8 pad_50[56]; u8 field_88; };
    struct Fields_arg2 { f32 field_0; f32 field_4; f32 field_8; };
    s32 temp_r0;
    TParticleCtrl__sub_800865BC(arg0, arg1, arg3);
    ((Fields_arg0*)arg0)->field_18 = &(*(RecoveredGlobal_8008BF58_TParticleCtrl__data_8048E7A8 *)&TParticleCtrl__data_8048E7A8).value;
    ((Fields_arg0*)arg0)->field_70 = (f32) ((((Fields_arg1*)arg1)->field_18 * ((lbl_805D9568 * (f32) rand()) - lbl_805D956C)) + ((Fields_arg2*)arg2)->field_0);
    ((Fields_arg0*)arg0)->field_74 = (f32) ((((Fields_arg1*)arg1)->field_1C * ((lbl_805D9568 * (f32) rand()) - lbl_805D956C)) + ((Fields_arg2*)arg2)->field_4);
    ((Fields_arg0*)arg0)->field_78 = (f32) ((((Fields_arg1*)arg1)->field_20 * ((lbl_805D9568 * (f32) rand()) - lbl_805D956C)) + ((Fields_arg2*)arg2)->field_8);
    ((Fields_arg0*)arg0)->field_24 = arg4;
    if (((Fields_arg0*)arg0)->field_24 & 0x80) {
        ((Fields_arg0*)arg0)->field_95 = 1;
    }
    ((Fields_arg0*)arg0)->field_26 = arg5;
    ((Fields_arg0*)arg0)->field_30 = (f32) ((Fields_arg2*)arg2)->field_0;
    ((Fields_arg0*)arg0)->field_34 = (f32) ((Fields_arg2*)arg2)->field_4;
    ((Fields_arg0*)arg0)->field_38 = (f32) ((Fields_arg2*)arg2)->field_8;
    ((Fields_arg0*)arg0)->field_28 = (f32) ((((Fields_arg1*)arg1)->field_28 * (lbl_805D9568 * (f32) rand())) + ((Fields_arg1*)arg1)->field_24);
    ((Fields_arg0*)arg0)->field_2C = (f32) ((Fields_arg0*)arg0)->field_28;
    temp_r0 = (s32) (((f32) ((Fields_arg1*)arg1)->field_4C * (lbl_805D9568 * (f32) rand())) + (f32) ((Fields_arg1*)arg1)->field_48);
    if (((Fields_arg1*)arg1)->field_88 & 1) {
        ((Fields_arg0*)arg0)->field_5C = (f32) (TParticleCtrl__data_805D9558 / (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(&(*(RecoveredGlobal_8008BF58_TParticleCtrl__data_80511F70 *)&TParticleCtrl__data_80511F70).value, M2C_UNK *, (((Fields_arg0*)arg0)->field_1C * 4)), void **, 0x28), s32 *, 0xC));
    } else {
        ((Fields_arg0*)arg0)->field_5C = (f32) (TParticleCtrl__data_805D9558 / (f32) temp_r0);
    }
    ((Fields_arg0*)arg0)->field_68 = (f32) ((((Fields_arg1*)arg1)->field_38 * (lbl_805D9568 * (f32) rand())) + ((Fields_arg1*)arg1)->field_30);
    ((Fields_arg0*)arg0)->field_3C = (f32) TParticleCtrl__data_805D955C;
    ((Fields_arg0*)arg0)->field_40 = (f32) TParticleCtrl__data_805D955C;
    ((Fields_arg0*)arg0)->field_44 = (f32) TParticleCtrl__data_805D955C;
    if (((Fields_arg0*)arg0)->field_24 & 0x2000) {
        get_object__13TParticleCtrlFPv((void *)0x1F);
    }
    return arg0;
}
#pragma pop

u8 *TParticleCtrl__sub_8008C21C(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3) {
    struct Fields_arg0 { u8 pad_0[24]; M2C_UNK * field_18; u16 field_1C; u8 pad_1E[6]; u16 field_24; u8 pad_26[2]; f32 field_28; f32 field_2C; f32 field_30; f32 field_34; f32 field_38; f32 field_3C; f32 field_40; f32 field_44; u8 pad_48[20]; f32 field_5C; u8 pad_60[8]; f32 field_68; u8 pad_6C[4]; f32 field_70; f32 field_74; f32 field_78; };
    struct Fields_arg1 { u8 pad_0[24]; f32 field_18; f32 field_1C; f32 field_20; f32 field_24; f32 field_28; u8 pad_2C[4]; f32 field_30; u8 pad_34[4]; f32 field_38; u8 pad_3C[12]; s32 field_48; s32 field_4C; u8 pad_50[56]; u8 field_88; };
    struct Fields_arg2 { f32 field_0; f32 field_4; f32 field_8; };
    s32 temp_r0;
    TParticleCtrl__sub_800865BC(arg0, arg1, arg3);
    ((Fields_arg0*)arg0)->field_18 = &(*(RecoveredGlobal_8008C21C_TParticleCtrl__data_8048E7A8 *)&TParticleCtrl__data_8048E7A8).value;
    ((Fields_arg0*)arg0)->field_70 = (f32) ((((Fields_arg1*)arg1)->field_18 * ((lbl_805D9568 * (f32) rand()) - lbl_805D956C)) + ((Fields_arg2*)arg2)->field_0);
    ((Fields_arg0*)arg0)->field_74 = (f32) ((((Fields_arg1*)arg1)->field_1C * ((lbl_805D9568 * (f32) rand()) - lbl_805D956C)) + ((Fields_arg2*)arg2)->field_4);
    ((Fields_arg0*)arg0)->field_78 = (f32) ((((Fields_arg1*)arg1)->field_20 * ((lbl_805D9568 * (f32) rand()) - lbl_805D956C)) + ((Fields_arg2*)arg2)->field_8);
    ((Fields_arg0*)arg0)->field_30 = (f32) ((Fields_arg2*)arg2)->field_0;
    ((Fields_arg0*)arg0)->field_34 = (f32) ((Fields_arg2*)arg2)->field_4;
    ((Fields_arg0*)arg0)->field_38 = (f32) ((Fields_arg2*)arg2)->field_8;
    ((Fields_arg0*)arg0)->field_28 = (f32) ((((Fields_arg1*)arg1)->field_28 * (lbl_805D9568 * (f32) rand())) + ((Fields_arg1*)arg1)->field_24);
    ((Fields_arg0*)arg0)->field_2C = (f32) ((Fields_arg0*)arg0)->field_28;
    temp_r0 = (s32) (((f32) ((Fields_arg1*)arg1)->field_4C * (lbl_805D9568 * (f32) rand())) + (f32) ((Fields_arg1*)arg1)->field_48);
    if (((Fields_arg1*)arg1)->field_88 & 1) {
        ((Fields_arg0*)arg0)->field_5C = (f32) (TParticleCtrl__data_805D9558 / (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(&TParticleCtrl__data_80511F70.value, M2C_UNK *, (((Fields_arg0*)arg0)->field_1C * 4)), void **, 0x28), s32 *, 0xC));
    } else {
        ((Fields_arg0*)arg0)->field_5C = (f32) (TParticleCtrl__data_805D9558 / (f32) temp_r0);
    }
    ((Fields_arg0*)arg0)->field_68 = (f32) ((((Fields_arg1*)arg1)->field_38 * (lbl_805D9568 * (f32) rand())) + ((Fields_arg1*)arg1)->field_30);
    ((Fields_arg0*)arg0)->field_3C = (f32) TParticleCtrl__data_805D955C;
    ((Fields_arg0*)arg0)->field_40 = (f32) TParticleCtrl__data_805D955C;
    ((Fields_arg0*)arg0)->field_44 = (f32) TParticleCtrl__data_805D955C;
    if (((Fields_arg0*)arg0)->field_24 & 0x2000) {
        get_object__13TParticleCtrlFPv((void *)0x1F);
    }
    return arg0;
}
#pragma pop

void destroy_keyboard_objects(void * _w0) { queue_destruction__7TObjectFv((void *)(_w0)); TKeyBoardControl__sub_8000F91C(2); TKeyBoardControl__sub_8000F9CC(18); TLobby__sub_8022743C(); TLobby__sub_80227248(); }

}
