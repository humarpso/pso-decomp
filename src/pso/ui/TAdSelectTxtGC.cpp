#include "pso/TAdSelectTxtGC.h"

TAdSelectTxtGC::~TAdSelectTxtGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Sel_802A16CC {
    u8 pad0[0xC0];
    void *slots[7];
};

extern "C" {
int queue_destruction__7TObjectFv(void *);
void TAdSelectTxtGC__sub_802A1838(void *, void *, void *);
void TAdSelectTxtGC__sub_802A16CC(Sel_802A16CC *arg0, void *arg1, void *arg2);
}

extern "C" {

void TAdSelectTxtGC__sub_802A16A8(void* p);
s32 TAdSelectTxtGC__sub_802A16C0(void* p);
void TLobby__sub_802A1918(void);
void *__ct__14TAdSelectTxtGCFv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__14TAdSelectTxtGCFv(void);
void reset_state__14TAdSelectTxtGCFPv(void* a0);
int run_task__14TAdSelectTxtGCFv(void);
void TAdSelectTxtGC__sub_802A1838(void *, void *, void *);
void TLobby__sub_803DA16C(void*);
void __ct__7TObjectFP7TObject(void *);

    extern const float lbl_805DDDF8;
void reset_state__14TAdSelectTxtGCFPv(void* a0) { *(short*)((char*)a0 + 0x8) = 0; *(short*)((char*)a0 + 0x6) = 0; *(short*)((char*)a0 + 0x4) = 0; *(short*)((char*)a0 + 0x2) = 0; *(short*)((char*)a0 + 0x0) = 0; *(short*)((char*)a0 + 0xe) = 0; *(short*)((char*)a0 + 0xc) = 0; *(short*)((char*)a0 + 0xa) = 0; *(float*)((char*)a0 + 0x10) = lbl_805DDDF8; *(float*)((char*)a0 + 0x14) = lbl_805DDDF8; *(int*)((char*)a0 + 0x20) = 0; *(int*)((char*)a0 + 0x1c) = 0; *(int*)((char*)a0 + 0x18) = 0; }

void TAdSelectTxtGC__sub_802A16A8(void* p) { *(u8*)((char*)p + 0x0) = 0; *(u8*)((char*)p + 0x1) = 0; *(s16*)((char*)p + 0x2) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 TAdSelectTxtGC__sub_802A16C0(void* p) { return *(s32*)((char*)p + 0x3e8); }

void render__14TAdSelectTxtGCFv(void) {  }

void TAdSelectTxtGC__sub_802A16CC(Sel_802A16CC *arg0, void *arg1, void *arg2) {
    s32 i;
    for (i = 0; i < 7; i++) {
        if (arg0->slots[i] != 0) {
            queue_destruction__7TObjectFv(arg0->slots[i]);
            arg0->slots[i] = 0;
        }
    }
    TAdSelectTxtGC__sub_802A1838(arg0, arg1, arg2);
}

int run_task__14TAdSelectTxtGCFv(void) { return 0; }

extern M2C_UNK __vt__14TAdSelectTxtGC[];
extern void *lbl_805D3D88;

void *__ct__14TAdSelectTxtGCFv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TAdSelectTxtGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D88;
    TAdSelectTxtGC__sub_802A1838(arg0, arg2, arg3);
    return arg0;
}

extern u32 lbl_805D6640;

void TLobby__sub_802A1918(void) {
    if ((u32) lbl_805D6640 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6640);
        lbl_805D6640 = 0U;
    }
}

}
