#include "pso/TAdSelectTxtGC.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Sel_802A16CC {
    u8 pad0[0xC0];
    void *slots[7];
};

struct Ent_802A1740 { u8 b[0x14]; };

struct Sel_802A1740 {
    u8 pad0[0x1C];
    Ent_802A1740 ent[8];
    s32 cnt;
    void *tasks[8];
};

struct Ent_802A1838 {
    u8 pad[0x1C];
    void *f0;
    s32 f4;
    u8 v[8];
    s32 f10;
};

struct Sel_802A1838 {
    u8 pad0[0xBC];
    s32 cnt;
    void *tasks[8];
};

struct Src_802A1838 {
    s32 f0;
    u8 v[8];
};

struct Tbl_802A194C { s32 v[5]; };

extern "C" {
int queue_destruction__7TObjectFv(void *);
void TAdSelectTxtGC__sub_802A16CC(Sel_802A16CC *arg0, void *arg1, void *arg2);
void *__nw__7TObjectFUl(s32);
void *__ct__17TAdSelectTxtSubGCFv(void *, void *, void *);
void run_task__14TAdSelectTxtGCFv(Sel_802A1740 *arg0);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void TAdSelectTxtGC__sub_802A1838(Sel_802A1838 *arg0, Src_802A1838 *arg1, void *arg2);
void update_menu_cursor__6TLobbyFv();
void TLobby__sub_8023E4B4(s32, s32);
extern Tbl_802A194C lbl_80466340;
extern Tbl_802A194C lbl_80466354;
extern const s32 lbl_805D5544;
extern u32 lbl_805D6640;
void TLobby__sub_802A194C(void);
}

extern "C" {

void TAdSelectTxtGC__sub_802A16A8(void* p);
s32 TAdSelectTxtGC__sub_802A16C0(void* p);
void TLobby__sub_802A1918(void);
void *__ct__14TAdSelectTxtGCFv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__14TAdSelectTxtGCFv(void);
void reset_state__14TAdSelectTxtGCFPv(void* a0);
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
    TAdSelectTxtGC__sub_802A1838((Sel_802A1838 *)(arg0), (Src_802A1838 *)(arg1), (void *)(arg2));
}

extern M2C_UNK __vt__14TAdSelectTxtGC[];
extern void *lbl_805D3D88;

void run_task__14TAdSelectTxtGCFv(Sel_802A1740 *arg0) {
    void *o;
    arg0->cnt = arg0->cnt + 1;
    if (arg0->cnt % 3 == 0 && arg0->cnt / 3 < 8) {
        o = __nw__7TObjectFUl(0x88);
        if (o != NULL) {
            o = __ct__17TAdSelectTxtSubGCFv(o, arg0, &arg0->ent[arg0->cnt / 3]);
        }
        arg0->tasks[arg0->cnt / 3] = o;
    }
}

TAdSelectTxtGC::~TAdSelectTxtGC() {}
void TAdSelectTxtGC__sub_802A1838(Sel_802A1838 *arg0, Src_802A1838 *arg1, void *arg2) {
    Ent_802A1838 *e;
    s32 i;
    arg0->cnt = -1;
    for (i = 0; i < 8; i++) {
        e = (Ent_802A1838 *)((u8 *)arg0 + i * 0x14);
        e->f0 = arg2;
        e->f4 = i;
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(e->v, arg1->v);
        e->f10 = arg1->f0;
        arg0->tasks[i] = NULL;
    }
}

void *__ct__14TAdSelectTxtGCFv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TAdSelectTxtGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D88;
    TAdSelectTxtGC__sub_802A1838((Sel_802A1838 *)(arg0), (Src_802A1838 *)(arg2), (void *)(arg3));
    return arg0;
}

extern u32 lbl_805D6640;

void TLobby__sub_802A1918(void) {
    if ((u32) lbl_805D6640 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6640);
        lbl_805D6640 = 0U;
    }
}
void TLobby__sub_802A194C(void) {
    update_menu_cursor__6TLobbyFv();
    Tbl_802A194C a = lbl_80466340;
    Tbl_802A194C b = lbl_80466354;
    s32 i = lbl_805D5544;
    s32 v = b.v[i];
    lbl_805D6640 = v;
    TLobby__sub_8023E4B4(a.v[i], v);
}

}
