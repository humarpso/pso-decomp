#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TOFenceAncient01__vt12(void* p);
void TOFenceAncient01__vt13(void* p);
void TOFenceAncient01__vt14(void);
void TOFenceAncient01__sub_80166AF4(void);
void TOFenceAncient01__sub_80166AF8(void);
void TOFenceAncient01__sub_80166AFC(void);

int clear_player_status_flag__10TObjPlayerFPviUi(void*, void*, void*);
int set_indexed_flags(void*, void*, void*);

void TOFenceAncient01__sub_80166AF4(void) {  }
void TOFenceAncient01__sub_80166AF8(void) {  }
void TOFenceAncient01__sub_80166AFC(void) {  }
void TOFenceAncient01__vt14(void) {  }
void TOFenceAncient01__vt13(void* p) { *(int*)((char*)p + 0xac) = 0; *(int*)((char*)p + 0xd0) = 0; clear_player_status_flag__10TObjPlayerFPviUi(p, (void*)0, (void*)8); }
void TOFenceAncient01__vt12(void* p) { *(int*)((char*)p + 0xac) = 1; *(int*)((char*)p + 0xd0) = 1; set_indexed_flags(p, (void*)0, (void*)8); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80166A44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__16TOFenceAncient01FPvs(void *arg0, s16 arg1);
void *init_fields__16TOFenceAncient01FPv(void *arg0);
void destroy_key_base__5TOKeyFPvs(void *, int);
void __dl__7TObjectFPv(void *);
void init_map_object_base(void *);

extern M2C_UNK lbl_804B1B80[];

void *destroy__16TOFenceAncient01FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B1B80;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804B1B80[];

void *init_fields__16TOFenceAncient01FPv(void *arg0) {
    init_map_object_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B1B80;
    M2C_FIELD(arg0, u32 *, 0xAC) = 0;
    M2C_FIELD(arg0, u32 *, 0xCC) = -1;
    M2C_FIELD(arg0, u32 *, 0xC8) = 0;
    M2C_FIELD(arg0, u32 *, 0xD0) = 0;
    M2C_FIELD(arg0, u32 *, 0xD4) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80166B6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TOFenceAncient01FPv(void *arg0);
void *TOFenceAncient01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__16TOFenceAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOFenceAncient01__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80166CF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__16TOFenceAncient01Fv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy__16TOFenceAncient01FPvs(void *, M2C_UNK);

extern M2C_UNK __vt__16TOFenceAncient01[];

void *__dt__16TOFenceAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOFenceAncient01;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy__16TOFenceAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
