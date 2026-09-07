#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8028D360___vt__12TChCrLoadReq { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8028D360___vt__12TChCrLoadReq_size[sizeof(RecoveredGlobal_8028D360___vt__12TChCrLoadReq) == 0x18 ? 1 : -1];

extern "C" {
u16 obj_getField1c(void *);
void __ct__7TObjectFP7TObject(void *, void *);
void TChCrLoadReq__sub_8028D214(void *);
extern M2C_UNK __vt__12TChCrLoadReq[];
extern void *lbl_805D3B60;
u8 *TChCrLoadReq__sub_8028D360(u8 *arg0, s32 arg1);
}

extern "C" {

void *TChCrLoadReq__ct(void *arg0, void *arg1, void *arg2);
void *__dt__12TChCrLoadReqFv(void *arg0, s16 arg1);
void copy__12TChCrLoadReqFPvPv(void* p, void* q);
void *create__12TChCrLoadReqFPv(void *arg0);
void * create_ch_cr_load_req(void *arg0, void *arg1);
void update_load_progress__12TChCrLoadReqFPv(void *arg0);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028CC28(void *);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028CD18(void *);
void TAdSinglePlyChrSelectGC__sub_8028CEEC(void *);
s32 TAdSinglePlyChrSelectGC__sub_8028CF6C();
void TChCrLoadReq__sub_8028D214(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 try_claim_load_slot__23TAdSinglePlyChrSelectGCFPv(void *);

void update_load_progress__12TChCrLoadReqFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) > 0x1512) {
        if (TAdSinglePlyChrSelectGC__sub_8028CF6C() == 0) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0x1512;
            goto block_3;
        }
    } else {
block_3:
        if (try_claim_load_slot__23TAdSinglePlyChrSelectGCFPv(arg0) != 0) {
            TAdSinglePlyChrSelectGC__sub_8028CD18(arg0);
            TAdSinglePlyChrSelectGC__sub_8028CC28(arg0);
            M2C_FIELD(arg0, s32 *, 0x60) = 1;
        }
    }
}

extern M2C_UNK __vt__12TChCrLoadReq[];

void *__dt__12TChCrLoadReqFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TChCrLoadReq;
        TAdSinglePlyChrSelectGC__sub_8028CEEC(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__12TChCrLoadReq[];
extern void *lbl_805D3B60;

void *TChCrLoadReq__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject((void *)(arg0), (void *)(arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TChCrLoadReq;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3B60;
    copy__12TChCrLoadReqFPvPv((void*)((void *)((char *)arg0 + 56)), (void*)(arg2));
    TChCrLoadReq__sub_8028D214(arg0);
    return arg0;
}

void copy__12TChCrLoadReqFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); *(u32*)((char*)p + 0xc) = *(u32*)((char*)q + 0xc); *(u32*)((char*)p + 0x10) = *(u32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(u32*)((char*)p + 0x18) = *(u32*)((char*)q + 0x18); *(u32*)((char*)p + 0x1c) = *(u32*)((char*)q + 0x1c); }

u8 *TChCrLoadReq__sub_8028D360(u8 *arg0, s32 arg1) {
    __ct__7TObjectFP7TObject((void *)((void *) (arg0)), (void *)((void *) (arg1)));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8028D360___vt__12TChCrLoadReq *)&__vt__12TChCrLoadReq).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (*(s32 *)&lbl_805D3B60);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (arg1 + 0x85C);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (arg1 + 0xCFC);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) obj_getField1c((void *) (arg1));
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (arg1 + 0x34);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (arg1 + 0x8AC);
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (arg1 + 0xCF4);
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (arg1 + 0xB88);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (arg1 + 0xA1C);
    TChCrLoadReq__sub_8028D214((void *) (arg0));
    return arg0;
}

void * create_ch_cr_load_req(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TChCrLoadReq__ct((void *)(o), (void *)(arg0), (void *)(arg1));
    }
    return o;
}

void *create__12TChCrLoadReqFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TChCrLoadReq__sub_8028D360((u8 *)(o), (s32)(arg0));
    }
    return o;
}

}
