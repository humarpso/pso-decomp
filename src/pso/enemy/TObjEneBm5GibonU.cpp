#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm5GibonU__sub_800D119C(u8 *arg0);
void TObjEneBm5GibonU__sub_800D11F8(void);
void TObjEneBm5GibonU__sub_800D1264(void);
int TObjEneBm5GibonU__sub_800D1C40(void*, void*, void*);
int TObjEneBm5GibonU__sub_800D1C78(void*, void*, void*);
int TObjEneBm5GibonU__sub_800D1CF8(void);
s32 TObjEneBm5GibonU__sub_800D1D70(void* p);
void* TObjEneBm5GibonU__sub_800D1D78(void* p);
int TObjEneBm5GibonU__sub_800D1D80(void* a0 = 0);
s32 __dt__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1);
s32 check_and_update__16TObjEneBm5GibonUFi(s32 arg0);
void *create__16TObjEneBm5GibonUFPv(void *arg0);
s32 destroy__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1);
void forward_hit__16TObjEneBm5GibonUFPvPv(void* p, void* a1);
void init_child__16TObjEneBm5GibonUFPvPv(void* p, void* a1);
void release_static_resource__16TObjEneBm5GibonUFv(void);
void* reset__16TObjEneBm5GibonUFPv(void* p);
void reset_fields__16TObjEneBm5GibonUFPv(void* p);
void set_anim_hit__16TObjEneBm5GibonUFPv(void *arg0);
void set_field8_from_obj__16TObjEneBm5GibonUFPvi(void *arg0, s32 arg1);
void set_state__16TObjEneBm5GibonUFPv(void* p);
s32 try_activate__16TObjEneBm5GibonUFi(s32 arg0);
void update_center_position__16TObjEneBm5GibonUFPv(u8 *arg0);
void update_photon_mylla__16TObjEneBm5GibonUFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TObjEneBm5GibonU__ct(void *, void *, void *);
int TObjEneDD__sub_800BBA18(void*, void*);
s32 TObjPlayer__sub_80016C54();
s32 TObjPlayer__sub_80016D78();
s32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *, f32);
int __dl__FPv();
void *__nw__7TObjectFUl(int);
s16 obj_getField1c(s32);

extern const f32 TObjEneBm5GibonU__data_805DA178;

void TObjEneBm5GibonU__sub_800D119C(u8 *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) TObjEneBm5GibonU__data_805DA178;
}

extern const f32 TObjEneBm5GibonU__data_805DA178;

void update_center_position__16TObjEneBm5GibonUFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (TObjEneBm5GibonU__data_805DA178 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0), (f32) (TObjEneBm5GibonU__data_805DA178));
}

void TObjEneBm5GibonU__sub_800D11F8(void) {  }
void set_state__16TObjEneBm5GibonUFPv(void* p) { if (*(short*)((char*)p + 0x326) != 16) { TObjEneDD__sub_800BBA18(p, (void*)16); } }
void set_anim_hit__16TObjEneBm5GibonUFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0x11) && (temp_r0 != 0x12)) {
        TObjEneDD__sub_800BBA18((void*)(arg0), (void*)(0x11));
    }
}
void TObjEneBm5GibonU__sub_800D1264(void) {  }

extern u32 TObjEneBm5GibonU__data_805D51D0;

void release_static_resource__16TObjEneBm5GibonUFv(void) {
    if ((u32) TObjEneBm5GibonU__data_805D51D0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneBm5GibonU__data_805D51D0, 1);
        TObjEneBm5GibonU__data_805D51D0 = 0U;
    }
}

extern void *tl_04;

void *create__16TObjEneBm5GibonUFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x568);
    if (o != NULL) {
        o = TObjEneBm5GibonU__ct(o, tl_04, arg0);
    }
    return o;
}

void forward_hit__16TObjEneBm5GibonUFPvPv(void* p, void* a1) { TObjEneBm5GibonU__sub_800D1C78((void*)(a1), (void*)(p), (void*)((char*)p + 0x4)); }
void init_child__16TObjEneBm5GibonUFPvPv(void* p, void* a1) { TObjEneBm5GibonU__sub_800D1C40((void*)(a1), (void*)(p), (void*)((char*)p + 0x4)); }
void reset_fields__16TObjEneBm5GibonUFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 __dt__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void* reset__16TObjEneBm5GibonUFPv(void* p) { reset_fields__16TObjEneBm5GibonUFPv((void*)(p)); return p; }
void update_photon_mylla__16TObjEneBm5GibonUFPv(void *arg0) {
    TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 8));
}
void set_field8_from_obj__16TObjEneBm5GibonUFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 8) = obj_getField1c(arg1);
}

int TObjEneBm5GibonU__sub_800D1C40(void*, void*, void*) { return 0; }
int TObjEneBm5GibonU__sub_800D1C78(void*, void*, void*) { return 0; }

s32 destroy__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

int TObjEneBm5GibonU__sub_800D1CF8(void) { return 0; }

s32 TObjEneBm5GibonU__sub_800D1D70(void* p) { return *(s32*)((char*)p + 0x46c); }
void* TObjEneBm5GibonU__sub_800D1D78(void* p) { return (char*)p + 0x47c; }

int TObjEneBm5GibonU__sub_800D1D80(void* a0) { return 0; }

s32 check_and_update__16TObjEneBm5GibonUFi(s32 arg0) {
    if (TObjPlayer__sub_80016D78() != 0) {
        TObjEneBm5GibonU__sub_800D1D80((void*)((void*)(arg0)));
        return 1;
    }
    return 0;
}
s32 try_activate__16TObjEneBm5GibonUFi(s32 arg0) {
    if (TObjPlayer__sub_80016C54() != 0) {
        TObjEneBm5GibonU__sub_800D1D80((void*)((void*)(arg0)));
        return 1;
    }
    return 0;
}

}
