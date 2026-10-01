#include "pso/TAdGameStartGC.h"

TAdGameStartGC::~TAdGameStartGC() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef s32 M2C_UNK;
struct Ent_802E6750 { s32 idx; f32 x; f32 y; s32 c; };

struct Obj_802E6750 {
    s32 g; u8 pad0[0x14]; void *vt; Ent_802E6750 e[8];
    s32 f9C; s32 fA0; s32 z[8]; s32 fC4; s32 fC8; s32 fCC; s32 fD0;
};

struct Obj_802E6380 {
    u8 pad0[0x9C];
    s32 f9C;
    s32 fA0;
    void *list[8];
    void *fC4;
    void *fC8;
    void *fCC;
    void *fD0;
};

extern "C" {
s32 queue_destruction__7TObjectFv(int);
u32 __nw__7TObjectFUl(int);
u32 __ct__18TAdGameStartBackGCFv(int, void *);
u32 __ct__20TAdGameStartShadowGCFv(int, void *);
u32 __ct__18TAdGameStartLineGCFv(int, void *);
u32 __ct__19TAdGameStartShineGCFv(int, void *);
void TAdGameStartGC__sub_802E644C(u8 *arg0);
M2C_UNK __ct__7TObjectFP7TObject(void *);
extern M2C_UNK __vt__14TAdGameStartGC[];
extern s32 lbl_805D3FA8;
extern const f32 lbl_805DE990;
extern const f32 lbl_805DE994;
Obj_802E6750 *__ct__14TAdGameStartGCFv(Obj_802E6750 *arg0);
s32 queue_destruction__7TObjectFv(int);
void TAdGameStartGC__sub_802E6380(Obj_802E6380 *o);
}

extern "C" {

void TAdGameStartGC__sub_802E6368(void* p);
void bswap_6x92__14TAdGameStartGCFPv(void* p);
void render__14TAdGameStartGCFv(void);
void send_6x92__14TAdGameStartGCFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

void bswap_6x92__14TAdGameStartGCFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }
void send_6x92__14TAdGameStartGCFPv(void* p) { bswap_6x92__14TAdGameStartGCFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TAdGameStartGC__sub_802E6368(void* p) { *(u8*)((char*)p + 0x0) = 146; *(u8*)((char*)p + 0x1) = 3; }

void render__14TAdGameStartGCFv(void) {  }

void TAdGameStartGC__sub_802E6380(Obj_802E6380 *o) {
    u32 i;
    if (o->fC4 != NULL) {
        queue_destruction__7TObjectFv((int)o->fC4);
        o->fC4 = NULL;
    }
    if (o->fC8 != NULL) {
        queue_destruction__7TObjectFv((int)o->fC8);
        o->fC8 = NULL;
    }
    if (o->fCC != NULL) {
        queue_destruction__7TObjectFv((int)o->fCC);
        o->fCC = NULL;
    }
    if (o->fD0 != NULL) {
        queue_destruction__7TObjectFv((int)o->fD0);
        o->fD0 = NULL;
    }
    for (i = 0; i < 8; i++) {
        if (o->list[i] != NULL) {
            queue_destruction__7TObjectFv((int)o->list[i]);
            o->list[i] = NULL;
        }
    }
    o->fA0 = 0;
    o->f9C = -1;
}

void TAdGameStartGC__sub_802E644C(u8 *arg0) {
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    u32 temp_r3_5;
    u32 temp_r3_6;
    u32 temp_r3_7;
    u32 temp_r3_8;
    u32 var_r0;
    u32 var_r0_2;
    u32 var_r0_3;
    u32 var_r0_4;
    M2C_FIELD(arg0, s32 *, 0xA0) = 1;
    temp_r3 = M2C_FIELD(arg0, u32 *, 0xC4);
    if (temp_r3 != 0U) {
        queue_destruction__7TObjectFv((int) (temp_r3));
        M2C_FIELD(arg0, u32 *, 0xC4) = 0U;
    }
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0xC8);
    if (temp_r3_2 != 0U) {
        queue_destruction__7TObjectFv((int) (temp_r3_2));
        M2C_FIELD(arg0, u32 *, 0xC8) = 0U;
    }
    temp_r3_3 = M2C_FIELD(arg0, u32 *, 0xCC);
    if (temp_r3_3 != 0U) {
        queue_destruction__7TObjectFv((int) (temp_r3_3));
        M2C_FIELD(arg0, u32 *, 0xCC) = 0U;
    }
    temp_r3_4 = M2C_FIELD(arg0, u32 *, 0xD0);
    if (temp_r3_4 != 0U) {
        queue_destruction__7TObjectFv((int) (temp_r3_4));
        M2C_FIELD(arg0, u32 *, 0xD0) = 0U;
    }
    temp_r3_5 = __nw__7TObjectFUl((int) (0xC8));
    var_r0 = temp_r3_5;
    if (var_r0 != 0U) {
        var_r0 = __ct__20TAdGameStartShadowGCFv((int) (temp_r3_5), (void *) (arg0));
    }
    M2C_FIELD(arg0, u32 *, 0xC4) = var_r0;
    temp_r3_6 = __nw__7TObjectFUl((int) (0x80));
    var_r0_2 = temp_r3_6;
    if (var_r0_2 != 0U) {
        var_r0_2 = __ct__18TAdGameStartBackGCFv((int) (temp_r3_6), (void *) (arg0));
    }
    M2C_FIELD(arg0, u32 *, 0xC8) = var_r0_2;
    temp_r3_7 = __nw__7TObjectFUl((int) (0x160));
    var_r0_3 = temp_r3_7;
    if (var_r0_3 != 0U) {
        var_r0_3 = __ct__18TAdGameStartLineGCFv((int) (temp_r3_7), (void *) (arg0));
    }
    M2C_FIELD(arg0, u32 *, 0xCC) = var_r0_3;
    temp_r3_8 = __nw__7TObjectFUl((int) (0x80));
    var_r0_4 = temp_r3_8;
    if (var_r0_4 != 0U) {
        var_r0_4 = __ct__19TAdGameStartShineGCFv((int) (temp_r3_8), (void *) (arg0));
    }
    M2C_FIELD(arg0, u32 *, 0xD0) = var_r0_4;
}
Obj_802E6750 *__ct__14TAdGameStartGCFv(Obj_802E6750 *arg0) {
    s32 i;
    __ct__7TObjectFP7TObject(arg0);
    arg0->vt = __vt__14TAdGameStartGC;
    arg0->g = lbl_805D3FA8;
    arg0->f9C = -1;
    arg0->fA0 = 0;
    arg0->fC4 = 0;
    arg0->fC8 = 0;
    arg0->fCC = 0;
    arg0->fD0 = 0;
    for (i = 0; i < 8; i++) {
        arg0->e[i].idx = i;
        arg0->e[i].x = lbl_805DE990;
        arg0->e[i].y = lbl_805DE994;
        arg0->e[i].c = -1;
        arg0->z[i] = 0;
    }
    return arg0;
}

}
