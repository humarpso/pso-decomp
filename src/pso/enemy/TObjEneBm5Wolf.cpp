#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjEneBm5Wolf__sub_800B896C(u8 *arg0, void **arg1, void **arg2);
}

extern "C" {

int TObjEneBm5Wolf__sub_800B89A4(void*, void*, void*);
int TObjEneBm5Wolf__sub_800B8A24(void);
s32 TObjEneBm5Wolf__sub_800B8AF8(void* p);
s32 __dt__14TObjEneBm5WolfFis(s32 arg0, s16 arg1);
void apply_to_position__14TObjEneBm5WolfFPvPv(void* p, void* a1);
void *create__14TObjEneBm5WolfFPv(void *arg0);
s32 destroy__14TObjEneBm5WolfFis(s32 arg0, s16 arg1);
void play_sound__14TObjEneBm5WolfFPv(void *arg0);
void* reset__14TObjEneBm5WolfFPv(void* p);
void reset_fields__14TObjEneBm5WolfFPv(void* p);
void set_field8_from_obj__14TObjEneBm5WolfFPvi(void *arg0, s32 arg1);
void update__14TObjEneBm5WolfFPvPv(void* p, void* a1);
void *TObjEneBm5Wolf__ct(void *, void *, void *);
s32 TPhotonMylla__sub_80154CB4(u16);
int __dl__FPv();
void *__nw__7TObjectFUl(int);
void* fn_800B8B00(void* p);
s16 obj_getField1c(s32);

extern void *tl_04;

void *create__14TObjEneBm5WolfFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x46C);
    if (o != NULL) {
        o = TObjEneBm5Wolf__ct(o, tl_04, arg0);
    }
    return o;
}

void update__14TObjEneBm5WolfFPvPv(void* p, void* a1) { TObjEneBm5Wolf__sub_800B89A4((void*)(a1), (void*)(p), (void*)((char*)p + 0x4)); }
void apply_to_position__14TObjEneBm5WolfFPvPv(void* p, void* a1) { TObjEneBm5Wolf__sub_800B896C((u8 *)((void*)(a1)), (void **)((void*)(p)), (void **)((void*)((char*)p + 0x4))); }
void reset_fields__14TObjEneBm5WolfFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 __dt__14TObjEneBm5WolfFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void* reset__14TObjEneBm5WolfFPv(void* p) { reset_fields__14TObjEneBm5WolfFPv((void*)(p)); return p; }
void play_sound__14TObjEneBm5WolfFPv(void *arg0) {
    TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 8));
}
void set_field8_from_obj__14TObjEneBm5WolfFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 8) = obj_getField1c(arg1);
}

void TObjEneBm5Wolf__sub_800B896C(u8 *arg0, void **arg1, void **arg2) {
    u8 *temp_r0;
    temp_r0 = (u8 *)(*arg2);
    if (temp_r0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = temp_r0;
        M2C_FIELD(*arg2, void **, 4) = arg0;
    } else {
        M2C_FIELD(arg0, void **, 0) = NULL;
        *arg1 = arg0;
    }
    *arg2 = arg0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

int TObjEneBm5Wolf__sub_800B89A4(void*, void*, void*) { return 0; }

s32 destroy__14TObjEneBm5WolfFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

int TObjEneBm5Wolf__sub_800B8A24(void) { return 0; }

s32 TObjEneBm5Wolf__sub_800B8AF8(void* p) { return *(s32*)((char*)p + 0x3dc); }

}
