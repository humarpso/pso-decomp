#include "pso/TChCrLoadGmNjReq.h"

extern "C" void TLobby__sub_8001FE7C(void*, int);

#include "types.h"

extern "C" {
s32 queue_destruction__7TObjectFv();
s32 update_model_load__6TLobbyFv();
s32 start_character_load_task__23TAdSinglePlyChrSelectGCFv();
struct VOff_8028C7BC_arg0_8028C6EC { char pad_0[0x30]; char f_30[1]; };

void *TChCrLoadGmNjReq__ct(void *arg0, void *arg1, void *arg2);
void * create_ch_cr_load_gm_nj_req(void *arg0, void *arg1);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void strncpy(void *, void *, int);

extern s32 __vt__16TChCrLoadGmNjReq[];
extern void *lbl_805D3B58;

void TChCrLoadGmNjReq::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    s32 temp_r0_2;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x70) - 1;
    *(s32 *)((s8 *)arg0 + 0x70) = temp_r0;
    if (temp_r0 < 0) {
        queue_destruction__7TObjectFv();
        return;
    }
    temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x2C);
    switch (temp_r0_2) {
    case 0:
        start_character_load_task__23TAdSinglePlyChrSelectGCFv();
        return;
    case 1:
        update_model_load__6TLobbyFv();
        return;
    }
}

TChCrLoadGmNjReq::~TChCrLoadGmNjReq() {
    sub_8028C8A8();
    if (m_68 != nullptr) {
        TLobby__sub_8001FE7C(m_68, 1);
    }
}
void *TChCrLoadGmNjReq__ct(void *arg0, void *arg1, void *arg2) {
    struct VOff_8028C7BC_arg0_8028C6EC *self = (struct VOff_8028C7BC_arg0_8028C6EC *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TChCrLoadGmNjReq;
    *(void * *)&((TChCrLoadGmNjReq *)arg0)->m_name = lbl_805D3B58;
    *(void **)((s8 *)arg0 + 0x24) = *(void **)((s8 *)arg2 + 0x8);
    *(void **)((s8 *)arg0 + 0x28) = *(void **)((s8 *)arg2 + 0x10);
    *(void **)((s8 *)arg0 + 0x1C) = *(void **)((s8 *)arg2 + 0x4);
    *(void **)((s8 *)arg0 + 0x20) = *(void **)((s8 *)arg2 + 0xC);
    strncpy(self->f_30, *(void **)((s8 *)arg2 + 0x0), 48);
    *(void **)((s8 *)arg0 + 0x60) = self->f_30;
    *(u32 *)((s8 *)arg0 + 0x64) = 0;
    *(u32 *)((s8 *)arg0 + 0x68) = 0;
    *(u32 *)((s8 *)arg0 + 0x6C) = 0;
    *(u32 *)((s8 *)arg0 + 0x70) = 5370;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
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
