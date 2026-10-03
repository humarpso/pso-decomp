#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801336E0_TObjLight__data_80506320 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_801337A0_TObjLight__data_80506320 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_801337A0_TObjLight__data_8058D528 {
    M2C_UNK value;
    u8 remaining[0x13C];
};

struct RecoveredGlobal_801338EC_TObjLight__data_80506320 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_80133924_TObjLight__data_80506320 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_80133924_TObjLight__data_8058D528 {
    M2C_UNK value;
    u8 remaining[0x13C];
};

struct RecoveredGlobal_80133980_lbl_804A6F90 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80133980_TObjLight__data_80506320 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_801339EC_TObjLight__data_80506320 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_80133F6C_TObjLight__data_80506320 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_80133F6C_TObjLight__data_8058D528 {
    M2C_UNK value;
    u8 remaining[0x13C];
};

struct RecoveredGlobal_80134098_TObjLight__data_80506320 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_80134098_TObjLight__data_8058D528 {
    M2C_UNK value;
    u8 remaining[0x13C];
};

struct RecoveredGlobal_80134724_TObjLight__data_8050637C {
    M2C_UNK value;
    u8 remaining[0x57C];
};

#include <stddef.h>
struct Stack_80133A04 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_80133A04_TObjLight__data_80506320 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct Stack_80133B10 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_80133B10_TObjLight__data_80506320 { M2C_UNK value; u8 remaining[0x4C]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_40 { u8 bytes[0x40]; };

struct M2CCopy_44 { u8 bytes[0x44]; };

struct RecoveredGlobal_80133D78_lbl_804A6F34 {
    M2C_UNK value;
    u8 remaining[0x40];
};

struct LightEntry_801344A4 { f32 dir[3]; f32 color[4]; u8 pad[0xC]; u32 id; };

struct LightDefault_801344A4 { u8 pad0[0xC]; f32 dir[3]; u8 pad18[0xC]; f32 color[4]; u8 rest[0x5C - 0x34]; };

struct Vec_80133800 { f32 x, y, z; };

struct Light_80133800 {
    Vec_80133800 pos;
    Vec_80133800 dir;
    u8 rest[0x50 - 0x18];
};

struct Light_801347A4 {
    f32 dir[3];
    f32 color[4];
    f32 f1C;
    f32 f20;
    s32 f24;
    u32 id;
};

extern "C" {
M2C_UNK TObjLight__sub_803DF268(f32, f32, f32);
extern RecoveredGlobal_801336E0_TObjLight__data_80506320 TObjLight__data_80506320;
void TObjLight__sub_801336E0(void);
M2C_UNK GXInitLightDir(M2C_UNK *, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF464(M2C_UNK, f32, f32, f32);
extern RecoveredGlobal_801336E0_TObjLight__data_80506320 TObjLight__data_80506320;
extern M2C_UNK TObjLight__data_8058D528[];
void TObjLight__sub_801337A0(void);
M2C_UNK TObjLight__sub_803DF394(M2C_UNK, f32, f32, f32);
extern RecoveredGlobal_801336E0_TObjLight__data_80506320 TObjLight__data_80506320;
M2C_UNK GXInitLightDir(M2C_UNK *, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF464(M2C_UNK, f32, f32, f32);
extern RecoveredGlobal_801336E0_TObjLight__data_80506320 TObjLight__data_80506320;
extern M2C_UNK TObjLight__data_8058D528[];
void *init_object__9TObjLightFPv(void *arg0);
void set_scene_light_diffuse(void *);
void TObjLight__sub_80133924(void *);
void TObjLight__sub_8013397C(void *);
M2C_UNK rotate_vector_by_matrix(int, void *, void *);
extern M2C_UNK lbl_804A6F90[];
extern RecoveredGlobal_801336E0_TObjLight__data_80506320 TObjLight__data_80506320;
extern u8 *lbl_805D5558;
extern RecoveredGlobal_801336E0_TObjLight__data_80506320 TObjLight__data_80506320;
void TObjBoss2Tunnel__sub_801339EC(f32 farg0, f32 farg1, f32 farg2);
M2C_UNK GXInitLightDir(M2C_UNK *, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF268(f32, f32, f32);
M2C_UNK TObjLight__sub_803DF394(M2C_UNK, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF464(M2C_UNK, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF528(M2C_UNK);
extern RecoveredGlobal_801336E0_TObjLight__data_80506320 TObjLight__data_80506320;
extern M2C_UNK TObjLight__data_8058D528[];
void TObjLight__sub_80133F6C(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
M2C_UNK GXInitLightDir(M2C_UNK *, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF268(f32, f32, f32);
M2C_UNK TObjLight__sub_803DF394(M2C_UNK, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF464(M2C_UNK, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF528(M2C_UNK);
extern RecoveredGlobal_801336E0_TObjLight__data_80506320 TObjLight__data_80506320;
extern M2C_UNK TObjLight__data_8058D528[];
void TObjLight__sub_80134098(void);
s32 VecCopy__FP3VecPC3Vec(int, void *);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
extern RecoveredGlobal_80134724_TObjLight__data_8050637C TObjLight__data_8050637C;
extern s32 TObjLight__data_805D556C;
void TObjLight__sub_80134724(s32 arg0, s32 arg1);
u8 * TObjLight__sub_80133980(u8 *arg0, int);
void * init__9TObjLightFPv(void *arg0, int);
u32 __nw__7TObjectFUl(int);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
f32 TNpcPlayer__sub_803D97B4(void *);
extern RecoveredGlobal_801336E0_TObjLight__data_80506320 TObjLight__data_80506320;
extern s32 tl_02;
extern const float TObjLight__data_805DB088;
void TObjLight__sub_80133A04(u8 *arg0);
s32 TObjLight__sub_80133718(int, int);
u8 *TObjLight__sub_80133980(u8 *arg0, int _w1);
void *init__9TObjLightFPv(void *arg0, int _w1);
u32 __nw__7TObjectFUl(int);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
f32 TNpcPlayer__sub_803D97B4(void *);
extern RecoveredGlobal_801336E0_TObjLight__data_80506320 TObjLight__data_80506320;
extern s32 tl_02;
extern const float TObjLight__data_805DB088;
void init_map_lights(u8 *arg0);
void init_map_lights(u8 *arg0);
void bswap_data__9TObjLightFPv(void* p);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 is_online_ready__6TLobbyFv();
extern RecoveredGlobal_80133D78_lbl_804A6F34 lbl_804A6F34;
extern u32 TObjLight__data_805D5574;
extern const f32 lbl_805DB0A4;
void init_area_lights(void);
extern void *TObjLight__data_80506370[3];
extern s32 TObjLight__data_805D5568;
void __dl__FPv(void *);
void TObjLight__sub_801335F0(void *p);
extern u32 TObjLight__data_805D5574;
extern s32 lbl_805D5578;
extern char lbl_8043ED80[];
s32 update_lobby_scene__6TSceneFPv(void *);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 read_disc_file(void *, u32);
void TObjLight__sub_80133E7C(void);
s32 VecCopy__FP3VecPC3Vec(int, void *);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
extern RecoveredGlobal_801336E0_TObjLight__data_80506320 TObjLight__data_80506320;
extern RecoveredGlobal_80134724_TObjLight__data_8050637C TObjLight__data_8050637C;
extern s32 TObjLight__data_805D556C;
void TObjLight__sub_801344A4(f32 *dir, f32 *color, u32 id);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
void* init_light__9TObjLightFPvi(void* a0, int a1);
extern void *TObjLight__data_80506370[3];
extern s32 TObjLight__data_805D5568;
u32 TObjLight__sub_80133650(void);
void set_scene_light_diffuse(void * _w0);
void TObjLight__sub_80133924(void * _w0);
void TObjLight__sub_8013397C(void * _w0);
void GXInitLightSpot(void *, s32, f32);
void GXInitLightDistAttn(void *, s32, f32, f32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK rotate_vector_by_matrix(int, void *, void *);
f32 TNpcPlayer__sub_803D97B4(void *);
void TObjLight__sub_803DF31C(s32, s32);
M2C_UNK TObjLight__sub_803DF528(M2C_UNK);
extern RecoveredGlobal_801336E0_TObjLight__data_80506320 TObjLight__data_80506320;
extern M2C_UNK TObjLight__data_8058D528[];
extern const float TObjLight__data_805DB088;
extern const f32 lbl_805DB098;
extern const f32 lbl_805DB09C;
extern const f32 lbl_805DB0A0;
void apply_environment_light(s32 arg0);
extern RecoveredGlobal_80134724_TObjLight__data_8050637C TObjLight__data_8050637C;
extern Light_801347A4 TObjLight__data_805068FC[];
extern s32 TObjLight__data_805D556C;
extern s32 TObjLight__data_805D5570;
extern const float TObjLight__data_805DB088;
void TObjLight__sub_801347A4(void);
}

extern "C" {

void *TLobby__sub_801349C8(void *arg0, s16 arg1);
int TLobby__sub_80134A20(void* p);
void TObjLight__sub_801335EC(void);
void TObjLight__sub_801336DC(void);
void TObjLight__sub_80133714(void);
void TObjLight__sub_8013379C(void);
void TObjLight__sub_801337F8(void);
void TObjLight__sub_801337FC(void);
void *TObjLight__sub_8013486C(void *arg0, s16 arg1);
void *TObjLight__sub_801348C4(void *arg0, s16 arg1);
void bswap_data__9TObjLightFPv(void* p);
void *dt2__9TObjLightFPvs(void *arg0, s16 arg1);
void *dt__9TObjLightFPvs(void *arg0, s16 arg1);
void free_shared_data__9TObjLightFv(void);
void* init_light__9TObjLightFPvi(void* a0, int a1);
void *init_object__9TObjLightFPv(void *arg0);
void set_light__9TObjLightFPvPvf(void *arg0, void *arg1, f32 farg0);
int TAdSinglePlyChrSelectGC__sub_801334E4(void*);
int TAdSinglePlyChrSelectGC__sub_80133544(void*);
int TAdSinglePlyChrSelectGC__sub_80133548(void);
M2C_UNK GXInitLightDir(M2C_UNK *, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF268(f32, f32, f32);
M2C_UNK TObjLight__sub_803DF394(M2C_UNK, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF464(M2C_UNK, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF528(M2C_UNK);
int TQuestThread__sub_801F5C50(void*);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int bswap_32__FPUl(void*);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

    extern int lbl_804A6F28[];
    extern const float TObjLight__data_805DB088;
    extern const float lbl_805DB08C;
    extern const float lbl_805DB090;
    extern const float lbl_805DB094;
void* init_light__9TObjLightFPvi(void* a0, int a1) { *(int*)((char*)a0 + 0x0) = lbl_804A6F28[a1]; *(float*)((char*)a0 + 0x10) = TObjLight__data_805DB088; *(float*)((char*)a0 + 0xc) = TObjLight__data_805DB088; *(float*)((char*)a0 + 0x8) = TObjLight__data_805DB088; TAdSinglePlyChrSelectGC__sub_80133548(); *(float*)((char*)a0 + 0x14) = lbl_805DB08C; *(float*)((char*)a0 + 0x18) = lbl_805DB090; TAdSinglePlyChrSelectGC__sub_80133544(a0); *(float*)((char*)a0 + 0x20) = lbl_805DB094; *(float*)((char*)a0 + 0x24) = lbl_805DB094; *(float*)((char*)a0 + 0x28) = lbl_805DB094; TAdSinglePlyChrSelectGC__sub_801334E4(a0); return a0; }

void TObjLight__sub_801335EC(void) {  }

void TObjLight__sub_801335F0(void *p) {
    s32 i;
    void **q = TObjLight__data_80506370;
    for (i = 0; i < 3; i++) {
        if (*q == p) {
            *q = 0;
            TObjLight__data_805D5568--;
            break;
        }
        q++;
    }
    __dl__FPv(p);
}

u32 TObjLight__sub_80133650(void) {
    s32 i;
    u32 *p;
    void *r;
    p = ((u32 *)&TObjLight__data_80506370);
    for (i = 0; i < 3; p++, i++) {
        if (*p == 0) {
            r = alloc__23TAdSinglePlyChrSelectGCFPv(0x2C);
            if (r != 0) {
                r = ((void *)init_light__9TObjLightFPvi((void*)(r), (int)(i)));
            }
            *p = (u32)r;
            TObjLight__data_805D5568++;
            return *p;
        }
    }
    return 0;
}

void TObjLight__sub_801336DC(void) {  }

typedef char RecoveredGlobal_801336E0_TObjLight__data_80506320_size[sizeof(RecoveredGlobal_801336E0_TObjLight__data_80506320) == 0x50 ? 1 : -1];
void TObjLight__sub_801336E0(void) {
    TObjLight__sub_803DF268(M2C_FIELD(&TObjLight__data_80506320.value, f32 *, 0x38), M2C_FIELD(&TObjLight__data_80506320.value, f32 *, 0x3C), M2C_FIELD(&TObjLight__data_80506320.value, f32 *, 0x40));
}

void TObjLight__sub_80133714(void) {  }

void TObjLight__sub_8013379C(void) {  }

typedef char RecoveredGlobal_801337A0_TObjLight__data_80506320_size[sizeof(RecoveredGlobal_801337A0_TObjLight__data_80506320) == 0x50 ? 1 : -1];
typedef char RecoveredGlobal_801337A0_TObjLight__data_8058D528_size[sizeof(RecoveredGlobal_801337A0_TObjLight__data_8058D528) == 0x140 ? 1 : -1];
void TObjLight__sub_801337A0(void) {
    TObjLight__sub_803DF464((M2C_UNK)(0), M2C_FIELD(&(*(RecoveredGlobal_801337A0_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0xC), M2C_FIELD(&(*(RecoveredGlobal_801337A0_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x10), M2C_FIELD(&(*(RecoveredGlobal_801337A0_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x14));
    GXInitLightDir((M2C_UNK *)(&(*(RecoveredGlobal_801337A0_TObjLight__data_8058D528 *)&TObjLight__data_8058D528).value), M2C_FIELD(&(*(RecoveredGlobal_801337A0_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0xC), M2C_FIELD(&(*(RecoveredGlobal_801337A0_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x10), M2C_FIELD(&(*(RecoveredGlobal_801337A0_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x14));
}

void TObjLight__sub_801337F8(void) {  }
void TObjLight__sub_801337FC(void) {  }

typedef char RecoveredGlobal_801338EC_TObjLight__data_80506320_size[sizeof(RecoveredGlobal_801338EC_TObjLight__data_80506320) == 0x50 ? 1 : -1];

#define G_80133800 (*(Light_80133800 *)&TObjLight__data_80506320)
void apply_environment_light(s32 arg0) {
    Vec_80133800 v;
    rotate_vector_by_matrix(0, &G_80133800, &G_80133800.dir);
    v.x = G_80133800.dir.x;
    v.y = G_80133800.dir.y;
    v.z = G_80133800.dir.z;
    f32 m = TBoss6Kakusan__sub_803D8BD8(&v);
    if (m != (*(const f32 *)&TObjLight__data_805DB088)) {
        TNpcPlayer__sub_803D97B4(&v);
    }
    G_80133800.dir.x = v.x;
    G_80133800.dir.y = v.y;
    G_80133800.dir.z = v.z;
    TObjLight__sub_803DF31C(0, 1);
    TObjLight__sub_80133924((void *)arg0);
    set_scene_light_diffuse((void *)arg0);
    TObjLight__sub_8013397C((void *)arg0);
    GXInitLightSpot(((s32 *)&TObjLight__data_8058D528), 1, lbl_805DB098);
    GXInitLightDistAttn(((s32 *)&TObjLight__data_8058D528), 0, lbl_805DB09C, lbl_805DB0A0);
    TObjLight__sub_803DF528((M2C_UNK)(0));
}

void set_scene_light_diffuse(void * _w0) {
    TObjLight__sub_803DF394((M2C_UNK)((int) (0)), (f32) (M2C_FIELD(&(*(RecoveredGlobal_801338EC_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x28)), (f32) (M2C_FIELD(&(*(RecoveredGlobal_801338EC_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x2C)), (f32) (M2C_FIELD(&(*(RecoveredGlobal_801338EC_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x30)));
}

typedef char RecoveredGlobal_80133924_TObjLight__data_80506320_size[sizeof(RecoveredGlobal_80133924_TObjLight__data_80506320) == 0x50 ? 1 : -1];
typedef char RecoveredGlobal_80133924_TObjLight__data_8058D528_size[sizeof(RecoveredGlobal_80133924_TObjLight__data_8058D528) == 0x140 ? 1 : -1];
void TObjLight__sub_80133924(void * _w0) {
    TObjLight__sub_803DF464((M2C_UNK)(0), M2C_FIELD(&(*(RecoveredGlobal_80133924_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0xC), M2C_FIELD(&(*(RecoveredGlobal_80133924_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x10), M2C_FIELD(&(*(RecoveredGlobal_80133924_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x14));
    GXInitLightDir((M2C_UNK *)(&(*(RecoveredGlobal_80133924_TObjLight__data_8058D528 *)&TObjLight__data_8058D528).value), M2C_FIELD(&(*(RecoveredGlobal_80133924_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0xC), M2C_FIELD(&(*(RecoveredGlobal_80133924_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x10), M2C_FIELD(&(*(RecoveredGlobal_80133924_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x14));
}

void TObjLight__sub_8013397C(void * _w0) {  }

extern M2C_UNK lbl_804A6FA8[];

typedef char RecoveredGlobal_80133980_lbl_804A6F90_size[sizeof(RecoveredGlobal_80133980_lbl_804A6F90) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_80133980_TObjLight__data_80506320_size[sizeof(RecoveredGlobal_80133980_TObjLight__data_80506320) == 0x50 ? 1 : -1];
u8 *TObjLight__sub_80133980(u8 *arg0, int _w1) {
    init_object__9TObjLightFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80133980_lbl_804A6F90 *)&lbl_804A6F90).value;
    rotate_vector_by_matrix((int) (0), (void *) (&(*(RecoveredGlobal_80133980_TObjLight__data_80506320 *)&TObjLight__data_80506320).value), (void *) ((u8 *)&(*(RecoveredGlobal_80133980_TObjLight__data_80506320 *)&TObjLight__data_80506320).value + 0xC));
    TObjLight__sub_8013397C((void *)((void *) (arg0)));
    TObjLight__sub_80133924((void *)((void *) (arg0)));
    set_scene_light_diffuse((void *)((void *) (arg0)));
    lbl_805D5558 = arg0;
    return arg0;
}

typedef char RecoveredGlobal_801339EC_TObjLight__data_80506320_size[sizeof(RecoveredGlobal_801339EC_TObjLight__data_80506320) == 0x50 ? 1 : -1];
void TObjBoss2Tunnel__sub_801339EC(f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(&(*(RecoveredGlobal_801339EC_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x28) = farg0;
    M2C_FIELD(&(*(RecoveredGlobal_801339EC_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x2C) = farg1;
    M2C_FIELD(&(*(RecoveredGlobal_801339EC_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x30) = farg2;
}

typedef char RecoveredGlobal_80133A04_TObjLight__data_80506320_size[sizeof(RecoveredGlobal_80133A04_TObjLight__data_80506320) == 0x50 ? 1 : -1];
void TObjLight__sub_80133A04(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80133A04, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80133A04, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80133A04, sp10) == 0x8) ? 1 : -1];
    Stack_80133A04 stack;
    u32 temp_r3;
    u32 temp_r3_2;
    stack.sp8 = M2C_FIELD(arg0, f32 *, 0);
    stack.spC = M2C_FIELD(arg0, f32 *, 4);
    stack.sp10 = M2C_FIELD(arg0, f32 *, 8);
    if ((*(const f32 *)&TObjLight__data_805DB088) != TBoss6Kakusan__sub_803D8BD8((void *) (&stack.sp8))) {
        TNpcPlayer__sub_803D97B4((void *) (&stack.sp8));
    }
    M2C_FIELD(&(*(RecoveredGlobal_80133A04_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0) = stack.sp8;
    M2C_FIELD(&(*(RecoveredGlobal_80133A04_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 4) = stack.spC;
    M2C_FIELD(&(*(RecoveredGlobal_80133A04_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 8) = stack.sp10;
    M2C_FIELD(&(*(RecoveredGlobal_80133A04_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(&(*(RecoveredGlobal_80133A04_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(&(*(RecoveredGlobal_80133A04_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(&(*(RecoveredGlobal_80133A04_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
    M2C_FIELD(&(*(RecoveredGlobal_80133A04_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
    M2C_FIELD(&(*(RecoveredGlobal_80133A04_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(&(*(RecoveredGlobal_80133A04_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(&(*(RecoveredGlobal_80133A04_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(&(*(RecoveredGlobal_80133A04_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    M2C_FIELD(&(*(RecoveredGlobal_80133A04_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(&(*(RecoveredGlobal_80133A04_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(&(*(RecoveredGlobal_80133A04_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    temp_r3 = __nw__7TObjectFUl((int) (0x1C));
    if (temp_r3 != 0U) {
        TObjLight__sub_80133980((u8 *)((int) (temp_r3)), (int)((int) (tl_02)));
    }
    temp_r3_2 = __nw__7TObjectFUl((int) (0x1C));
    if (temp_r3_2 != 0U) {
        init__9TObjLightFPv((void *)((int) (temp_r3_2)), (int)((int) (tl_02)));
    }
}

void init_map_lights(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80133B10, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80133B10, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80133B10, sp10) == 0x8) ? 1 : -1];
    Stack_80133B10 stack;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    stack.sp8 = M2C_FIELD(arg0, f32 *, 0);
    stack.spC = M2C_FIELD(arg0, f32 *, 4);
    stack.sp10 = M2C_FIELD(arg0, f32 *, 8);
    if ((*(const f32 *)&TObjLight__data_805DB088) != TBoss6Kakusan__sub_803D8BD8((void *) (&stack.sp8))) {
        TNpcPlayer__sub_803D97B4((void *) (&stack.sp8));
    }
    M2C_FIELD(&(*(RecoveredGlobal_80133B10_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0) = stack.sp8;
    M2C_FIELD(&(*(RecoveredGlobal_80133B10_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 4) = stack.spC;
    M2C_FIELD(&(*(RecoveredGlobal_80133B10_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 8) = stack.sp10;
    M2C_FIELD(&(*(RecoveredGlobal_80133B10_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(&(*(RecoveredGlobal_80133B10_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(&(*(RecoveredGlobal_80133B10_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(&(*(RecoveredGlobal_80133B10_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
    M2C_FIELD(&(*(RecoveredGlobal_80133B10_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
    M2C_FIELD(&(*(RecoveredGlobal_80133B10_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(&(*(RecoveredGlobal_80133B10_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(&(*(RecoveredGlobal_80133B10_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(&(*(RecoveredGlobal_80133B10_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    TObjLight__sub_801347A4();
    temp_r3 = __nw__7TObjectFUl((int) (0x1C));
    if (temp_r3 != 0U) {
        TObjLight__sub_80133980((u8 *)((int) (temp_r3)), (int)((int) (tl_02)));
    }
    temp_r3_2 = __nw__7TObjectFUl((int) (0x1C));
    if (temp_r3_2 != 0U) {
        init__9TObjLightFPv((void *)((int) (temp_r3_2)), (int)((int) (tl_02)));
    }
    temp_r3_3 = __nw__7TObjectFUl((int) (0x1C));
    if (temp_r3_3 != 0U) {
        TObjLight__sub_80133718((int) (temp_r3_3), (int) (tl_02));
    }
}

void *dt__9TObjLightFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6FA8;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A6FA8[];

void *init__9TObjLightFPv(void *arg0, int _w1) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6FA8;
    return arg0;
}

extern u32 TObjLight__data_805D5574;

typedef char RecoveredGlobal_80133D78_lbl_804A6F34_size[sizeof(RecoveredGlobal_80133D78_lbl_804A6F34) == 0x44 ? 1 : -1];
void init_area_lights(void) {
    struct CopyStack_80133D78 { u8 bytes[0x44]; };
    CopyStack_80133D78 copy_storage_80133D78;
    s32 temp_r4;
    s32 var_r31;
    if ((u32) TObjLight__data_805D5574 != 0U) {
        var_r31 = get_global_state__14TOKeyMachine01Fv();
        if (is_online_ready__6TLobbyFv() != 0) {
            var_r31 = (s32) ((f32) var_r31 + lbl_805DB0A4);
        }
        temp_r4 = (TObjLight__data_805D5574 + (var_r31 * 0x44)) - 4;
        *(M2CCopy_44 *)(copy_storage_80133D78.bytes) = *(const M2CCopy_44 *)(temp_r4 + 4);
        bswap_data__9TObjLightFPv((void*)((void *) ((copy_storage_80133D78.bytes))));
        init_map_lights((u8 *)((void *) ((copy_storage_80133D78.bytes))));
        return;
    }
    init_map_lights((u8 *)((void *) (&lbl_804A6F34.value)));
}

void free_shared_data__9TObjLightFv(void) {
    if ((u32) TObjLight__data_805D5574 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TObjLight__data_805D5574);
        TObjLight__data_805D5574 = 0U;
    }
}

extern M2C_UNK lbl_804A6FC0[];

void TObjLight__sub_80133E7C(void) {
    TObjLight__data_805D5574 = 0;
    lbl_805D5578 = update_lobby_scene__6TSceneFPv(lbl_8043ED80);
    if (lbl_805D5578 > 0) {
        TObjLight__data_805D5574 = alloc__22TQuestVmDownLoadServerFPv(lbl_805D5578);
        if (TObjLight__data_805D5574) {
            read_disc_file(lbl_8043ED80, TObjLight__data_805D5574);
        }
    }
}

void *dt2__9TObjLightFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6FC0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A6FC0[];

void *init_object__9TObjLightFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6FC0;
    return arg0;
}

extern M2C_UNK TObjLight__data_8058D528[];

typedef char RecoveredGlobal_80133F6C_TObjLight__data_80506320_size[sizeof(RecoveredGlobal_80133F6C_TObjLight__data_80506320) == 0x50 ? 1 : -1];
typedef char RecoveredGlobal_80133F6C_TObjLight__data_8058D528_size[sizeof(RecoveredGlobal_80133F6C_TObjLight__data_8058D528) == 0x140 ? 1 : -1];
void TObjLight__sub_80133F6C(void) {
    TObjLight__sub_803DF268(M2C_FIELD(&(*(RecoveredGlobal_80133F6C_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x20), M2C_FIELD(&(*(RecoveredGlobal_80133F6C_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x20), M2C_FIELD(&(*(RecoveredGlobal_80133F6C_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x20));
    TObjLight__sub_803DF464((M2C_UNK)(0), M2C_FIELD(&(*(RecoveredGlobal_80133F6C_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0xC), M2C_FIELD(&(*(RecoveredGlobal_80133F6C_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x10), M2C_FIELD(&(*(RecoveredGlobal_80133F6C_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x14));
    GXInitLightDir((M2C_UNK *)(&(*(RecoveredGlobal_80133F6C_TObjLight__data_8058D528 *)&TObjLight__data_8058D528).value), M2C_FIELD(&(*(RecoveredGlobal_80133F6C_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0xC), M2C_FIELD(&(*(RecoveredGlobal_80133F6C_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x10), M2C_FIELD(&(*(RecoveredGlobal_80133F6C_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x14));
    TObjLight__sub_803DF394((M2C_UNK)(0), M2C_FIELD(&(*(RecoveredGlobal_80133F6C_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x28), M2C_FIELD(&(*(RecoveredGlobal_80133F6C_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x2C), M2C_FIELD(&(*(RecoveredGlobal_80133F6C_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x30));
    TObjLight__sub_803DF528((M2C_UNK)(0));
}

void set_light__9TObjLightFPvPvf(void *arg0, void *arg1, f32 farg0) {
    TObjLight__sub_803DF464(0, M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, f32 *, 8));
    GXInitLightDir(TObjLight__data_8058D528, M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, f32 *, 8));
    TObjLight__sub_803DF394(0, M2C_FIELD(arg1, f32 *, 4), M2C_FIELD(arg1, f32 *, 8), M2C_FIELD(arg1, f32 *, 0xC));
    TObjLight__sub_803DF268(farg0, farg0, farg0);
    TObjLight__sub_803DF528(0);
}

extern M2C_UNK lbl_804A6F78[];

typedef char RecoveredGlobal_80134098_TObjLight__data_80506320_size[sizeof(RecoveredGlobal_80134098_TObjLight__data_80506320) == 0x50 ? 1 : -1];
typedef char RecoveredGlobal_80134098_TObjLight__data_8058D528_size[sizeof(RecoveredGlobal_80134098_TObjLight__data_8058D528) == 0x140 ? 1 : -1];
void TObjLight__sub_80134098(void) {
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        TObjLight__sub_803DF464((M2C_UNK)(0), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0xC), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x10), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x14));
        GXInitLightDir((M2C_UNK *)(&(*(RecoveredGlobal_80134098_TObjLight__data_8058D528 *)&TObjLight__data_8058D528).value), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0xC), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x10), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x14));
        TObjLight__sub_803DF394((M2C_UNK)(0), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x28), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x2C), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x30));
        TObjLight__sub_803DF528((M2C_UNK)(0));
    } else {
        TObjLight__sub_803DF464((M2C_UNK)(0), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0xC), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x10), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x14));
        GXInitLightDir((M2C_UNK *)(&(*(RecoveredGlobal_80134098_TObjLight__data_8058D528 *)&TObjLight__data_8058D528).value), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0xC), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x10), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x14));
        TObjLight__sub_803DF394((M2C_UNK)(0), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x28), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x2C), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x30));
        TObjLight__sub_803DF528((M2C_UNK)(0));
    }
    TObjLight__sub_803DF268(M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x20), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x20), M2C_FIELD(&(*(RecoveredGlobal_80134098_TObjLight__data_80506320 *)&TObjLight__data_80506320).value, f32 *, 0x20));
}

typedef char RecoveredGlobal_80134724_TObjLight__data_8050637C_size[sizeof(RecoveredGlobal_80134724_TObjLight__data_8050637C) == 0x580 ? 1 : -1];

void TObjLight__sub_801344A4(f32 *dir, f32 *color, u32 id) {
    s32 i;
    for (i = 0; i < TObjLight__data_805D556C; i++) {
        LightEntry_801344A4 *e = &((LightEntry_801344A4 *)&TObjLight__data_8050637C)[i];
        if (id == e->id) {
            VecCopy__FP3VecPC3Vec((int)dir, e->dir);
            copy_vec4__13TRaderMapCoreFPvPv(color, e->color);
            return;
        }
    }
    copy_vec4__13TRaderMapCoreFPvPv(color, (*(LightDefault_801344A4 *)&TObjLight__data_80506320).color);
    VecCopy__FP3VecPC3Vec((int)dir, (*(LightDefault_801344A4 *)&TObjLight__data_80506320).dir);
}

void publish_actor_light_scalars(u32 arg0, f32 farg0, f32 farg1) {
    s32 cnt = TObjLight__data_805D5570;
    s32 found;
    s32 n;
    Light_801347A4 *q;
    found = 1;
    if (cnt < 8) {
        for (n = 0; n < 8; n++) {
            if (arg0 == TObjLight__data_805068FC[n].id) {
                found = 0;
                TObjLight__data_805068FC[n].id = arg0;
                TObjLight__data_805068FC[n].f1C = farg0;
                TObjLight__data_805068FC[n].f20 = farg1;
                TObjLight__data_805068FC[n].f24 |= 1;
                break;
            }
            if (TObjLight__data_805068FC[n].id == 0xFFFF) {
                break;
            }
        }
        if (found != 0) {
            q = &TObjLight__data_805068FC[cnt];
            q->id = arg0;
            q->f1C = farg0;
            q->f20 = farg1;
            q->f24 |= 1;
            TObjLight__data_805D5570++;
        }
    }
}

void TObjLight__sub_80134724(s32 arg0, s32 arg1) {
    u8 *temp_r5;
    if ((s32) TObjLight__data_805D556C < 0x20) {
        temp_r5 = (u8 *)&TObjLight__data_8050637C.value + (TObjLight__data_805D556C * 0x2C);
        M2C_FIELD(temp_r5, s32 *, 0x28) = arg0;
        VecCopy__FP3VecPC3Vec((int) (temp_r5), (void *) (arg1 + 0xE4));
        copy_vec4__13TRaderMapCoreFPvPv((void *) ((u8 *)&TObjLight__data_8050637C.value + (TObjLight__data_805D556C * 0x2C) + 0xC), (void *) (arg1 + 0xF0));
        TObjLight__data_805D556C += 1;
    }
}

void TObjLight__sub_801347A4(void) {
    s32 i;
    s32 j;
    for (i = 0; i < 0x20; i++) {
        ((Light_801347A4 *)&TObjLight__data_8050637C)[i].id = 0xFFFF;
        ((Light_801347A4 *)&TObjLight__data_8050637C)[i].dir[0] = TObjLight__data_805DB088;
        ((Light_801347A4 *)&TObjLight__data_8050637C)[i].dir[1] = TObjLight__data_805DB088;
        ((Light_801347A4 *)&TObjLight__data_8050637C)[i].dir[2] = TObjLight__data_805DB088;
        ((Light_801347A4 *)&TObjLight__data_8050637C)[i].color[0] = TObjLight__data_805DB088;
        ((Light_801347A4 *)&TObjLight__data_8050637C)[i].color[1] = TObjLight__data_805DB088;
        ((Light_801347A4 *)&TObjLight__data_8050637C)[i].color[2] = TObjLight__data_805DB088;
        ((Light_801347A4 *)&TObjLight__data_8050637C)[i].color[3] = TObjLight__data_805DB088;
        ((Light_801347A4 *)&TObjLight__data_8050637C)[i].f20 = TObjLight__data_805DB088;
        ((Light_801347A4 *)&TObjLight__data_8050637C)[i].f1C = TObjLight__data_805DB088;
        ((Light_801347A4 *)&TObjLight__data_8050637C)[i].f24 = 0;
    }
    TObjLight__data_805D556C = 0;
    for (j = 0; j < 8; j++) {
        TObjLight__data_805068FC[j].id = 0xFFFF;
        TObjLight__data_805068FC[j].dir[0] = TObjLight__data_805DB088;
        TObjLight__data_805068FC[j].dir[1] = TObjLight__data_805DB088;
        TObjLight__data_805068FC[j].dir[2] = TObjLight__data_805DB088;
        TObjLight__data_805068FC[j].color[0] = TObjLight__data_805DB088;
        TObjLight__data_805068FC[j].color[1] = TObjLight__data_805DB088;
        TObjLight__data_805068FC[j].color[2] = TObjLight__data_805DB088;
        TObjLight__data_805068FC[j].color[3] = TObjLight__data_805DB088;
        TObjLight__data_805068FC[j].f20 = TObjLight__data_805DB088;
        TObjLight__data_805068FC[j].f1C = TObjLight__data_805DB088;
        TObjLight__data_805068FC[j].f24 = 0;
    }
    TObjLight__data_805D5570 = 0;
}

void *TObjLight__sub_8013486C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6F78;
        dt2__9TObjLightFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A6F90[];

void *TObjLight__sub_801348C4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6F90;
        dt2__9TObjLightFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void bswap_data__9TObjLightFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_32__FPUl((char*)p + 0x18); bswap_32__FPUl((char*)p + 0x1c); bswap_32__FPUl((char*)p + 0x20); bswap_32__FPUl((char*)p + 0x24); bswap_32__FPUl((char*)p + 0x28); bswap_32__FPUl((char*)p + 0x2c); bswap_32__FPUl((char*)p + 0x30); bswap_32__FPUl((char*)p + 0x34); bswap_32__FPUl((char*)p + 0x38); bswap_32__FPUl((char*)p + 0x3c); bswap_32__FPUl((char*)p + 0x40); }

extern M2C_UNK lbl_804A7008[];

void *TLobby__sub_801349C8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A7008;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int TLobby__sub_80134A20(void* p) { return TQuestThread__sub_801F5C50(p); }

}
