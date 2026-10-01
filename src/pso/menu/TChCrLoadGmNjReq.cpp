#include "pso/TChCrLoadGmNjReq.h"

extern "C" void fn_8028C8A8(void*);
extern "C" void TLobby__sub_8001FE7C(void*, int);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv();
M2C_UNK TLobby__sub_8028C530();
M2C_UNK start_character_load_task__23TAdSinglePlyChrSelectGCFPv();
}

extern "C" {

struct VOff_8028C7BC_arg0_8028C6EC { char pad_0[0x30]; char f_30[1]; };

void *TChCrLoadGmNjReq__ct(void *arg0, void *arg1, void *arg2);
void * create_ch_cr_load_gm_nj_req(void *arg0, void *arg1);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void strncpy(void *, void *, int);

extern M2C_UNK __vt__16TChCrLoadGmNjReq[];
extern void *lbl_805D3B58;

void run_task__16TChCrLoadGmNjReqFv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x70) - 1;
    M2C_FIELD(arg0, s32 *, 0x70) = temp_r0;
    if (temp_r0 < 0) {
        queue_destruction__7TObjectFv();
        return;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x2C);
    switch (temp_r0_2) {
    case 0:
        start_character_load_task__23TAdSinglePlyChrSelectGCFPv();
        return;
    case 1:
        TLobby__sub_8028C530();
        return;
    }
}

TChCrLoadGmNjReq::~TChCrLoadGmNjReq() {
    fn_8028C8A8(this);
    if (m_68 != nullptr) {
        TLobby__sub_8001FE7C(m_68, 1);
    }
}
void *TChCrLoadGmNjReq__ct(void *arg0, void *arg1, void *arg2) {
    struct VOff_8028C7BC_arg0_8028C6EC *self = (struct VOff_8028C7BC_arg0_8028C6EC *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TChCrLoadGmNjReq;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3B58;
    M2C_FIELD(arg0, void **, 0x24) = M2C_FIELD(arg2, void **, 0x8);
    M2C_FIELD(arg0, void **, 0x28) = M2C_FIELD(arg2, void **, 0x10);
    M2C_FIELD(arg0, void **, 0x1C) = M2C_FIELD(arg2, void **, 0x4);
    M2C_FIELD(arg0, void **, 0x20) = M2C_FIELD(arg2, void **, 0xC);
    strncpy(self->f_30, M2C_FIELD(arg2, void **, 0x0), 48);
    M2C_FIELD(arg0, void **, 0x60) = self->f_30;
    M2C_FIELD(arg0, u32 *, 0x64) = 0;
    M2C_FIELD(arg0, u32 *, 0x68) = 0;
    M2C_FIELD(arg0, u32 *, 0x6C) = 0;
    M2C_FIELD(arg0, u32 *, 0x70) = 5370;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    return arg0;
}

void * create_ch_cr_load_gm_nj_req(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x78);
    if (o != NULL) {
        o = TChCrLoadGmNjReq__ct((void *)(o), (void *)(arg0), (void *)(arg1));
    }
    return o;
}

}
