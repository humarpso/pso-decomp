#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8028C378___vt__22TChCrLoadAfsTextureReq {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct S_8028C310 { u8 pad0[4]; s32 cnt; };

struct R_8028C310 {
    u8 pad0[0x1c]; s32 f1c; u8 pad20[8]; s32 f28; s32 f2c; S_8028C310 *f30; u8 pad34[4];
    s32 tab[8]; s32 f58; s32 f5c; u8 pad60[4]; s32 f64; s32 f68;
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *, int, int);
s32 TLobby__sub_8001ED88(int);
s32 fn_8001ED90(int);
u32 TObjFish__sub_8001EDC4(int, int);
M2C_UNK TLobby__sub_8001FE7C(int, int);
u32 TLobby__sub_8002058C(int, int, void *, void *, int, int, int);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
M2C_UNK fn_8028C8A8(void *);
M2C_UNK TLobby__sub_8028D628(int, int);
s32 start_load_default__6TLobbyFPv(int);
void TLobby__sub_8028C530(u8 *arg0);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK __vt__22TChCrLoadAfsTextureReq[];
extern void *lbl_805D3B50;
u8 *TChCrLoadAfsTextureReq__ct(u8 *arg0, u8 *arg1, s32 arg2, s32 *arg3, s32 arg4);
void TChCrLoadAfsTextureReq__sub_8028C310(R_8028C310 *arg0);
}

extern "C" {

f32 TLobby__sub_8028C50C(void);
void * create__22TChCrLoadAfsTextureReqFPvPv(void *arg0, void *arg1);
void * create_ch_cr_load_afs_texture_req(void *arg0, void *arg1, void *arg2, void *arg3);
void finish_request__22TChCrLoadAfsTextureReqFPv(void *arg0);
void *init__22TChCrLoadAfsTextureReqFPvPvPv(void *arg0, void *arg1, void *arg2);
s32 try_acquire_load_slot__22TChCrLoadAfsTextureReqFPv(void *arg0);
void try_begin_load__22TChCrLoadAfsTextureReqFPv(void* p);
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

typedef char RecoveredGlobal_8028C378___vt__22TChCrLoadAfsTextureReq_size[sizeof(RecoveredGlobal_8028C378___vt__22TChCrLoadAfsTextureReq) == 0x18 ? 1 : -1];

void TChCrLoadAfsTextureReq__sub_8028C310(R_8028C310 *arg0) {
    s32 i;
    arg0->f58 = arg0->f30->cnt;
    if (arg0->f58 <= 0 || arg0->f58 > 8) return;
    {
    for (i = 0; i < 8; i++) arg0->tab[i] = 0;
    arg0->f1c = 0;
    arg0->f2c = 0;
    arg0->f5c = 0;
    arg0->f28 = 0;
    arg0->f64 = 0x14FA;
    arg0->f68 = 0;
    }
}

u8 *TChCrLoadAfsTextureReq__ct(u8 *arg0, u8 *arg1, s32 arg2, s32 *arg3, s32 arg4) {
    __ct__7TObjectFP7TObject((void *)(arg0), (void *)(arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8028C378___vt__22TChCrLoadAfsTextureReq *)&__vt__22TChCrLoadAfsTextureReq).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (*(s32 *)&lbl_805D3B50);
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    M2C_FIELD(arg0, s32 **, 0x34) = arg3;
    *M2C_FIELD(arg0, s32 **, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = arg4;
    TChCrLoadAfsTextureReq__sub_8028C310((R_8028C310 *)(arg0));
    return arg0;
}

void *init__22TChCrLoadAfsTextureReqFPvPvPv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject((void *)(arg0), (void *)(arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TChCrLoadAfsTextureReq;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3B50;
    M2C_FIELD(arg0, void **, 0x30) = M2C_FIELD(arg2, void **, 0x0);
    M2C_FIELD(arg0, void **, 0x6C) = M2C_FIELD(arg2, void **, 0x4);
    M2C_FIELD(arg0, void **, 0x34) = M2C_FIELD(arg2, void **, 0x8);
    M2C_FIELD(arg0, void **, 0x70) = M2C_FIELD(arg2, void **, 0xC);
    TChCrLoadAfsTextureReq__sub_8028C310((R_8028C310 *)(arg0));
    return arg0;
}

void * create_ch_cr_load_afs_texture_req(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x194);
    if (o != NULL) {
        o = TChCrLoadAfsTextureReq__ct((u8 *)(o), (u8 *)(arg0), (s32)(arg1), (s32 *)(arg2), (s32)(arg3));
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
#pragma push
#pragma fp_contract on
void TLobby__sub_8028C530(u8 *arg0) {
    s32 *temp_r5;
    s32 temp_r0;
    s32 temp_r4;
    u32 temp_r3;
    u32 var_r31;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x74) - 1;
    M2C_FIELD(arg0, s32 *, 0x74) = temp_r0;
    if (temp_r0 < 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            TLobby__sub_8001FE7C((int) M2C_FIELD(arg0, u32 *, 0x68), (int) (1));
        } else {
            return;
        }
        var_r31 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x440));
        if (var_r31 != 0U) {
            var_r31 = TLobby__sub_8002058C((int) (var_r31), (int) (6), (void *) (arg0 + 0x60), (void *) (arg0 + 0x64), (int) (0), (int) (0), (int) (start_load_default__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 0x24)))));
        }
        M2C_FIELD(arg0, u32 *, 0x68) = var_r31;
        if (var_r31 != 0U) {
            M2C_FIELD(arg0, s32 *, 0x74) = 0x12C;
        }
    } else if (fn_8001ED90((int) (M2C_FIELD(arg0, u32 *, 0x68))) != 0) {
        temp_r3 = TObjFish__sub_8001EDC4((int) (M2C_FIELD(arg0, u32 *, 0x68)), (int) (0));
        *M2C_FIELD(arg0, u32 **, 0x1C) = temp_r3;
        if (temp_r3 != 0U) {
            TLobby__sub_8028D628((int) (M2C_FIELD(arg0, s32 *, 0x24)), (int) (TLobby__sub_8001ED88((int) (M2C_FIELD(arg0, u32 *, 0x68)))));
            TLobby__sub_8001FE7C((int) (M2C_FIELD(arg0, u32 *, 0x68)), (int) (1));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
            fn_8028C8A8((void *) (arg0));
            temp_r5 = M2C_FIELD(arg0, s32 **, 0x28);
            temp_r4 = *temp_r5;
            *temp_r5 = temp_r4 & ~M2C_FIELD(arg0, s32 *, 0x20);
            queue_destruction__7TObjectFv((void *) (arg0), (int) (temp_r4), (int) (temp_r5));
        }
    }
}
#pragma pop

}
