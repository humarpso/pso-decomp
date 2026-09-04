#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TLobby__sub_8028C50C(void);
void * create__22TChCrLoadAfsTextureReqFPvPv(void *arg0, void *arg1);
void * create_ch_cr_load_afs_texture_req(void *arg0, void *arg1, void *arg2, void *arg3);
void finish_request__22TChCrLoadAfsTextureReqFPv(void *arg0);
void *init__22TChCrLoadAfsTextureReqFPvPvPv(void *arg0, void *arg1, void *arg2);
s32 try_acquire_load_slot__22TChCrLoadAfsTextureReqFPv(void *arg0);
void try_begin_load__22TChCrLoadAfsTextureReqFPv(void* p);
void *TChCrLoadAfsTextureReq__ct(void *, void *, void *, void *, void *);
void TChCrLoadAfsTextureReq__sub_8028C310(void *);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
f64 cancel_dvd_async();

void try_begin_load__22TChCrLoadAfsTextureReqFPv(void* p) { if (try_acquire_load_slot__22TChCrLoadAfsTextureReqFPv((void *)(p)) != 0) { *(int*)((char*)p + 0x2c) = 1; } }

extern s32 lbl_805D64E0;

void finish_request__22TChCrLoadAfsTextureReqFPv(void *arg0) {
    s32 temp_r0;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x68) != 0) && ((s32) lbl_805D64E0 <= 3)) {
        temp_r0 = lbl_805D64E0 - 1;
        lbl_805D64E0 = temp_r0;
        if (temp_r0 >= 0) {
            M2C_FIELD(arg0, s32 *, 0x68) = 0;
        }
    }
}

extern s32 lbl_805D64E0;

s32 try_acquire_load_slot__22TChCrLoadAfsTextureReqFPv(void *arg0) {
    if (((s32) lbl_805D64E0 < 0) || ((s32) lbl_805D64E0 > 3)) {
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x68) == 1) {
        return 0;
    }
    if ((s32) lbl_805D64E0 >= 3) {
        return 0;
    }
    lbl_805D64E0 += 1;
    M2C_FIELD(arg0, s32 *, 0x68) = 1;
    return 1;
}

extern M2C_UNK __vt__22TChCrLoadAfsTextureReq[];
extern void *lbl_805D3B50;

void *init__22TChCrLoadAfsTextureReqFPvPvPv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TChCrLoadAfsTextureReq;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3B50;
    M2C_FIELD(arg0, void **, 0x30) = M2C_FIELD(arg2, void **, 0x0);
    M2C_FIELD(arg0, void **, 0x6C) = M2C_FIELD(arg2, void **, 0x4);
    M2C_FIELD(arg0, void **, 0x34) = M2C_FIELD(arg2, void **, 0x8);
    M2C_FIELD(arg0, void **, 0x70) = M2C_FIELD(arg2, void **, 0xC);
    TChCrLoadAfsTextureReq__sub_8028C310(arg0);
    return arg0;
}

void * create_ch_cr_load_afs_texture_req(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x194);
    if (o != NULL) {
        o = TChCrLoadAfsTextureReq__ct(o, arg0, arg1, arg2, arg3);
    }
    return o;
}

void * create__22TChCrLoadAfsTextureReqFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x194);
    if (o != NULL) {
        o = init__22TChCrLoadAfsTextureReqFPvPvPv((void *)(o), (void *)(arg0), (void *)(arg1));
    }
    return o;
}

f32 TLobby__sub_8028C50C(void) {
    return (f32) cancel_dvd_async();
}

}
