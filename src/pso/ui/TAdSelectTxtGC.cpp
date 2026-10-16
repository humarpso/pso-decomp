#include "pso/TAdSelectTxtGC.h"

#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowSubSymbolChatPartsSet.h"

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
void reset_slots__14TAdSelectTxtGCFPvPvPv(Sel_802A16CC *arg0, void *arg1, void *arg2);
void *__nw__7TObjectFUl(s32);
void *__ct__17TAdSelectTxtSubGCFv(void *, void *, void *);
void init_slot_entries__14TAdSelectTxtGCFPvPvPv(Sel_802A1838 *arg0, Src_802A1838 *arg1, void *arg2);
void TLobby__sub_8023E4B4(s32, s32);
extern Tbl_802A194C select_gamen_resource_name_table;
extern Tbl_802A194C select_gamen_resource_name_table_b;
extern const s32 current_language;
extern u32 ad_select_text_texture_handle;
void TLobby__sub_802A194C(void);
}

extern "C" {

void TAdSelectTxtGC__sub_802A16A8(void* p);
s32 TAdSelectTxtGC__sub_802A16C0(void* p);
void TLobby__sub_802A1918(void);
void *__ct__14TAdSelectTxtGCFv(void *arg0, void *arg1, void *arg2, void *arg3);
void TLobby__sub_803DA16C(void*);
void __ct__7TObjectFP7TObject(void *);

    extern const float lbl_805DDDF8;
void TAdSelectTxtGC::reset_state() { *(short*)((char*)this + 0x8) = 0; *(short*)((char*)this + 0x6) = 0; *(short*)((char*)this + 0x4) = 0; *(short*)((char*)this + 0x2) = 0; *(short*)((char*)this + 0x0) = 0; *(short*)((char*)this + 0xe) = 0; *(short*)((char*)this + 0xc) = 0; *(short*)((char*)this + 0xa) = 0; *(float*)((char*)this + 0x10) = lbl_805DDDF8; *(float*)((char*)this + 0x14) = lbl_805DDDF8; *(int*)((char*)this + 0x20) = 0; *(int*)((char*)this + 0x1c) = 0; *(int*)((char*)this + 0x18) = 0; }

void TAdSelectTxtGC__sub_802A16A8(void* p) { *(u8*)((char*)p + 0x0) = 0; *(u8*)((char*)p + 0x1) = 0; *(s16*)((char*)p + 0x2) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 TAdSelectTxtGC__sub_802A16C0(void* p) { return *(s32*)((char*)p + 0x3e8); }

void TAdSelectTxtGC::render() {  }

void reset_slots__14TAdSelectTxtGCFPvPvPv(Sel_802A16CC *arg0, void *arg1, void *arg2) {
    s32 i;
    for (i = 0; i < 7; i++) {
        if (arg0->slots[i] != 0) {
            queue_destruction__7TObjectFv(arg0->slots[i]);
            arg0->slots[i] = 0;
        }
    }
    init_slot_entries__14TAdSelectTxtGCFPvPvPv((Sel_802A1838 *)(arg0), (Src_802A1838 *)(arg1), (void *)(arg2));
}

extern s32 __vt__14TAdSelectTxtGC[];
extern void *lbl_805D3D88;

void TAdSelectTxtGC::run_task() {
    Sel_802A1740 *arg0 = (Sel_802A1740 *)this;
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
void init_slot_entries__14TAdSelectTxtGCFPvPvPv(Sel_802A1838 *arg0, Src_802A1838 *arg1, void *arg2) {
    Ent_802A1838 *e;
    s32 i;
    arg0->cnt = -1;
    for (i = 0; i < 8; i++) {
        e = (Ent_802A1838 *)((u8 *)arg0 + i * 0x14);
        e->f0 = arg2;
        e->f4 = i;
        ((TWindowSubSymbolChatPartsSet *)(e->v))->copy_vec2(arg1->v);
        e->f10 = arg1->f0;
        arg0->tasks[i] = NULL;
    }
}

void *__ct__14TAdSelectTxtGCFv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TAdSelectTxtGC;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D3D88;
    init_slot_entries__14TAdSelectTxtGCFPvPvPv((Sel_802A1838 *)(arg0), (Src_802A1838 *)(arg2), (void *)(arg3));
    return arg0;
}

extern u32 ad_select_text_texture_handle;

void TLobby__sub_802A1918(void) {
    if ((u32) ad_select_text_texture_handle != 0U) {
        TLobby__sub_803DA16C((void*)ad_select_text_texture_handle);
        ad_select_text_texture_handle = 0U;
    }
}
void TLobby__sub_802A194C(void) {
    TLobby::update_menu_cursor();
    Tbl_802A194C a = select_gamen_resource_name_table;
    Tbl_802A194C b = select_gamen_resource_name_table_b;
    s32 i = current_language;
    s32 v = b.v[i];
    ad_select_text_texture_handle = v;
    TLobby__sub_8023E4B4(a.v[i], v);
}

}
