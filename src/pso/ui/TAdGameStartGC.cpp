#include "pso/TAdGameStartGC.h"

TAdGameStartGC::~TAdGameStartGC() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 queue_destruction__7TObjectFv(int);
u32 __nw__7TObjectFUl(int);
u32 __ct__18TAdGameStartBackGCFv(int, void *);
u32 __ct__20TAdGameStartShadowGCFv(int, void *);
u32 __ct__18TAdGameStartLineGCFv(int, void *);
u32 __ct__19TAdGameStartShineGCFv(int, void *);
void TAdGameStartGC__sub_802E644C(u8 *arg0);
}

extern "C" {

void TAdGameStartGC__sub_802E6368(void* p);
int TAdGameStartGC__sub_802E6380(void);
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

int TAdGameStartGC__sub_802E6380(void) { return 0; }
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

}
