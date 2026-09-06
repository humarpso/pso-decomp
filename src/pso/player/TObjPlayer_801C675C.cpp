#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 fn_801C6F2C(u8 *arg0);
s32 TObjPlayer__sub_801BF3E8(void *);
int set_action_flag16__10TObjPlayerFPv(void* p);
int test_flag_8__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801C7098(void* p);
s32 TObjPlayer__sub_801C6E40(s32 arg0);
}

extern "C" {

u8 TObjPlayer__sub_801C6BEC(void *arg0);
void TObjPlayer__sub_801C6D30(void *arg0);
int TObjPlayer__sub_801C6F90(void* p);
void TObjPlayer__sub_801C6FB4(void* p, s32 v);
void TObjPlayer__sub_801C6FBC(void* p, s16 v);
void TObjPlayer__sub_801C6FCC(void* p, f32 v);
void TObjPlayer__sub_801C6FDC(void);
void TObjPlayer__sub_801C6FE0(void* p, f32 a, f32 b, f32 c);
void *__dt__13TForceOperateFv(void *arg0, s16 arg1);
int clear_target_lock_flag__10TObjPlayerFPv(void* p);
void free__10TObjPlayerFPv(void* a0);
u16 get_obj_type__10TObjPlayerFPv(void* p);
void heap_alloc__10TObjPlayerFPv(void* a0);
int set_action_flag16__10TObjPlayerFPv(void* p);
int set_lock_flag__10TObjPlayerFPv(void* p);
void set_lock_timer__10TObjPlayerFPvi(void* p, s32 v);
void set_ring_action__10TObjPlayerFPvi(void* p, s32 v);
void set_stat_scale__10TObjPlayerFPvf(void* p, f32 v);
int test_flag_8__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_8001BEF8(void*, int);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
void destroy__13TForceOperateFis(void *, int);
int heap_alloc__5THeapFUl(void*, void*);
int heap_free__5THeapFPv(void*, void*);

u8 TObjPlayer__sub_801C6BEC(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x1C) >= 0xDU) {
        M2C_FIELD(arg0, u8 *, 0x1C) = 0U;
    }
    return M2C_FIELD(arg0, u8 *, 0x1C);
}

void TObjPlayer__sub_801C6D30(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 0x800);
}

    extern int obj_heap;
void free__10TObjPlayerFPv(void* a0) { heap_free__5THeapFPv((void*)(obj_heap), a0); }

    extern int obj_heap;
void heap_alloc__10TObjPlayerFPv(void* a0) { heap_alloc__5THeapFUl((void*)(obj_heap), a0); }

extern M2C_UNK __vt__13TForceOperate[];

s32 TObjPlayer__sub_801C6E40(s32 arg0) {
    if (((s32)TObjPlayer__sub_801C7098((void*)(arg0))) != 0) {
        return 1;
    }
    if (TObjPlayer__sub_801BF3E8((void *) (arg0)) != 0) {
        return 2;
    }
    if (((s32)test_flag_8__10TObjPlayerFPv((void*)((void *) (arg0)))) != 0) {
        return 3;
    }
    return (((s32)set_action_flag16__10TObjPlayerFPv((void*)((void *) (arg0)))) != 0) ? 4 : 0;
}

void *__dt__13TForceOperateFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TForceOperate;
        destroy__13TForceOperateFis((s8 *)arg0 + 0x1C, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 fn_801C6F2C(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 4) == 1);
}

void set_lock_timer__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }

int clear_target_lock_flag__10TObjPlayerFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi(p, 1); }
int set_lock_flag__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BEF8(p, 1); }
int TObjPlayer__sub_801C6F90(void* p) { return TObjPlayer__sub_8001BEF8(p, 2); }

void TObjPlayer__sub_801C6FB4(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }
void TObjPlayer__sub_801C6FBC(void* p, s16 v) { *(s16*)((char*)p + 0x1c) = v; }
void set_stat_scale__10TObjPlayerFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x0) = v; }
void TObjPlayer__sub_801C6FCC(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
void set_ring_action__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void TObjPlayer__sub_801C6FDC(void) {  }
void TObjPlayer__sub_801C6FE0(void* p, f32 a, f32 b, f32 c) { *(f32*)((char*)p + 0x0) = a; *(f32*)((char*)p + 0x4) = b; *(f32*)((char*)p + 0x8) = c; }
u16 get_obj_type__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x0); }

int set_action_flag16__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BEF8(p, 16); }
int test_flag_8__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BEF8(p, 8); }
int TObjPlayer__sub_801C7098(void* p) { return TObjPlayer__sub_8001BEF8(p, 2); }

}
