#include "types.h"
#include "pso/misc/TChCrLoadReq.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Cm_8028CB6C { u8 pad[0x3E]; s16 f3e; };

struct Gc_8028CB6C { u8 pad0[0x38]; Cm_8028CB6C *cm; };

struct Sl_8028CB6C { u8 pad0[0x68]; s32 a; u8 pad6c[8]; void *b; u8 pad78[8]; void *c; };

struct Req_8028CC28 { s32 id; s32 type; s32 *flags; s32 index; };

struct Info_8028CC28 { u8 pad[0x10]; u32 a; u32 b; };

struct Sel_8028CC28 {
    u8 pad[0x38];
    void *chara;
    s32 *flags;
    u8 pad2[0x4C - 0x40];
    s32 id4C;
    s32 id50;
    s32 id54;
    u8 pad3[0x5C - 0x58];
    Info_8028CC28 *info;
};

typedef s32 M2C_UNK;
struct Sel_8028C9B0 {
    u8 pad0[0x38];
    u8 *f38;
    u8 pad3C[0x44 - 0x3C];
    s32 *f44;
    u8 pad48[0x58 - 0x48];
    s32 *f58;
    u8 pad5C[0x68 - 0x5C];
    s32 f68[3];
    void *f74[6];
};

struct Arg_8028C9B0 {
    u8 *a;
    s32 b;
    s32 c;
    s32 x[3];
    u32 y[3];
    u32 z[3];
};

struct Req_8028CD18 {
    u32 data;
    void *dest;
    s32 ctx;
    s32 type;
    u32 *flags;
};

struct Cm_8028CD18 {
    u8 pad0[0x3E];
    s16 f3E;
    s16 f40;
};

struct Tbl_8028CD18 {
    u8 pad0[0x10];
    u32 *f10;
    u32 *f14;
    u32 *f18;
    u32 f1C;
};

struct Sel_8028CD18 {
    u8 pad0[0x38];
    Cm_8028CD18 *f38;
    u32 *f3C;
    s32 f40;
    s32 *f44;
    s32 *f48;
    u8 pad4C[0x5C - 0x4C];
    Tbl_8028CD18 *f5C;
};

extern "C" {
s32 is_selection_done__23TAdSinglePlyChrSelectGCFPv(void *);
s32 are_all_selections_done__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
void *create__12TChCrLoadAfsFPvPvPv(void *, int, void *);
void *calc_preview_offset__23TAdSinglePlyChrSelectGCFPviii(void *, s32, s32, s32);
s32 get_display_index__12TCharaMakingFPv(void *);
void get_sorted_region_samples__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
void start_preview_loads__23TAdSinglePlyChrSelectGCFPv(Gc_8028CB6C *arg0);
u32 create__22TChCrLoadAfsTextureReqFPvPv(void *, Req_8028CC28 *);
s32 get_display_index__12TCharaMakingFPv(void *);
void request_texture_loads__23TAdSinglePlyChrSelectGCFPv(Sel_8028CC28 *arg0);
void safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
u32 TLobby__sub_801E38A0(void *, s32 *, s32 *, s32, s32);
s32 is_node_tree_valid(u32, s32);
void *get_result__23TAdSinglePlyChrSelectGCFPv(void *);
void blend_creation_proportion_shapes(void *);
void reset_creation_parts__23TAdSinglePlyChrSelectGCFPv(void *);
M2C_UNK load_preview_models__23TAdSinglePlyChrSelectGCFPv(void *arg0);
u32 create_ch_cr_load_gm_nj_req(void *, Req_8028CD18 *);
void TLobby__sub_8028D738(s32);
void request_model_loads__23TAdSinglePlyChrSelectGCFPv(Sel_8028CD18 *self);
extern s32 chr_select_preview_stride_table[];
extern s32 chr_select_preview_base_offset_table[];

}

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_8028C998(void *arg0);
void TAdSinglePlyChrSelectGC__sub_8028CEEC(void *arg0, s32 *);
s32 TAdSinglePlyChrSelectGC__sub_8028CF6C(void);
void close_and_destroy__12TChCrLoadReqFv(void *arg0);
s32 try_acquire_slot__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void try_advance_state__12TChCrLoadReqFv(void* p);
s32 try_claim_load_slot__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s32 chr_select_slot_state;

s32 try_acquire_slot__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (((s32) chr_select_slot_state < 0) || ((s32) chr_select_slot_state > 1)) {
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) != 0) {
        return 0;
    }
    if ((s32) chr_select_slot_state >= 1) {
        return 0;
    }
    chr_select_slot_state += 1;
    M2C_FIELD(arg0, s32 *, 0x6C) = 1;
    return 1;
}

s32 are_all_selections_done__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    s32 off;
    s32 i;
    i = 0;
    off = 0;
    do {
        if (is_selection_done__23TAdSinglePlyChrSelectGCFPv(*(void **)(arg0 + 0x74 + off)) == 0) return 0;
        i++;
        off += 4;
    } while (i < 6);
    return 1;
}

s32 TAdSinglePlyChrSelectGC__sub_8028C998(void *arg0) {
    return (u32) __cntlzw((u32) (*M2C_FIELD(arg0, s32 **, 0x3C) & 0x7F)) >> 5;
}

extern s32 chr_select_load_slot_count;

M2C_UNK load_preview_models__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 len;
    s32 tag;
    u32 bufs[6];
    Arg_8028C9B0 s;
    s32 i;
    s32 j;
    u32 p;
    Sel_8028C9B0 *self = (Sel_8028C9B0 *)arg0;
    for (i = 0; i < 6; i++) {
        len = 0;
        p = TLobby__sub_801E38A0(get_result__23TAdSinglePlyChrSelectGCFPv(self->f74[i]), &len, &tag, 0, 0);
        if (p == 0 || tag != 0x4E4A544C) return;
        safe_free__23TAdSinglePlyChrSelectGCFUi(p);
        bufs[i] = TLobby__sub_801E38A0(get_result__23TAdSinglePlyChrSelectGCFPv(self->f74[i]), &len, &tag, 0, 0);
        if (bufs[i] == 0 || tag != 0x4E4A434D) {
            for (i = 0; i < 6; i++) safe_free__23TAdSinglePlyChrSelectGCFUi(bufs[i]);
            return;
        }
        if (is_node_tree_valid(bufs[i], tag) == 0) {
            for (i = 0; i < 6; i++) safe_free__23TAdSinglePlyChrSelectGCFUi(bufs[i]);
            return;
        }
    }
    s.a = self->f38;
    s.b = *self->f58;
    s.c = *self->f44;
    for (i = 0; i < 3; i++) {
        s.x[i] = self->f68[i];
        s.y[i] = bufs[i];
        s.z[i] = bufs[i + 3];
    }
    reset_creation_parts__23TAdSinglePlyChrSelectGCFPv(&s);
    blend_creation_proportion_shapes(self->f38 + 0x48);
    for (j = 0; j < 6; j++) safe_free__23TAdSinglePlyChrSelectGCFUi(bufs[j]);
}

void start_preview_loads__23TAdSinglePlyChrSelectGCFPv(Gc_8028CB6C *arg0) {
    s32 off;
    Sl_8028CB6C *p;
    s32 disp;
    s32 i;
    s32 id;
    void *t;
    get_sorted_region_samples__23TAdSinglePlyChrSelectGCFPvPv((u8 *)arg0->cm + 0x48, (u8 *)arg0 + 0x68);
    disp = get_display_index__12TCharaMakingFPv(arg0->cm);
    for (i = 0, off = 0; i < 3; i++, off += 4) {
        p = (Sl_8028CB6C *)((u8 *)arg0 + off);
        id = p->a;
        t = create__12TChCrLoadAfsFPvPvPv(arg0, 0xDB, calc_preview_offset__23TAdSinglePlyChrSelectGCFPviii(arg0, disp, arg0->cm->f3e, id));
        p->b = t;
        if (t == NULL) {
            break;
        }
        p->c = create__12TChCrLoadAfsFPvPvPv(arg0, 0xDB, (void*)((TChCrLoadReq*)arg0)->calc_preview_last_index(disp, id));
    }
}

void request_texture_loads__23TAdSinglePlyChrSelectGCFPv(Sel_8028CC28 *arg0) {
    Req_8028CC28 r1;
    Req_8028CC28 r2;
    Req_8028CC28 r3;
    s32 idx;
    idx = get_display_index__12TCharaMakingFPv(arg0->chara);
    r1.id = arg0->id4C;
    r1.type = 4;
    r1.flags = arg0->flags;
    r1.index = idx;
    if (create__22TChCrLoadAfsTextureReqFPvPv(arg0, &r1) == 0) {
        return;
    }
    if (arg0->info->a != 0 || arg0->info->b != 0) {
        r2.id = arg0->id54;
        r2.type = 1;
        r2.flags = arg0->flags;
        r2.index = idx;
        if (create__22TChCrLoadAfsTextureReqFPvPv(arg0, &r2) == 0) {
            return;
        }
    } else {
        *arg0->flags &= ~1;
    }
    r3.id = arg0->id50;
    r3.type = 2;
    r3.flags = arg0->flags;
    r3.index = idx;
    if (create__22TChCrLoadAfsTextureReqFPvPv(arg0, &r3) == 0) {
        return;
    }
}

void request_model_loads__23TAdSinglePlyChrSelectGCFPv(Sel_8028CD18 *self) {
    Req_8028CD18 r1;
    Req_8028CD18 r2;
    Req_8028CD18 r3;
    Req_8028CD18 r4;
    s32 idx;
    u32 *tbl;
    u32 d;
    TLobby__sub_8028D738(self->f40);
    *self->f44 = 0;
    r1.data = self->f5C->f1C;
    r1.dest = self->f44;
    r1.ctx = self->f40;
    r1.type = 0x40;
    r1.flags = self->f3C;
    if (create_ch_cr_load_gm_nj_req(self, &r1) == 0) return;
    idx = self->f38->f40;
    self->f48[1] = 0;
    tbl = self->f5C->f14;
    if (tbl != 0 && (d = tbl[idx]) != 0) {
        r2.data = d;
        r2.dest = &self->f48[1];
        r2.ctx = self->f40;
        r2.type = 8;
        r2.flags = self->f3C;
        if (create_ch_cr_load_gm_nj_req(self, &r2) == 0) return;
    } else {
        *self->f3C &= ~8;
    }
    self->f48[0] = 0;
    tbl = self->f5C->f10;
    if (tbl != 0 && (d = tbl[idx]) != 0) {
        r3.data = d;
        r3.dest = &self->f48[0];
        r3.ctx = self->f40;
        r3.type = 0x10;
        r3.flags = self->f3C;
        if (create_ch_cr_load_gm_nj_req(self, &r3) == 0) return;
    } else {
        *self->f3C &= ~0x10;
    }
    self->f48[2] = 0;
    r4.data = self->f5C->f18[self->f38->f3E];
    r4.dest = &self->f48[2];
    r4.ctx = self->f40;
    r4.type = 0x20;
    r4.flags = self->f3C;
    if (create_ch_cr_load_gm_nj_req(self, &r4) == 0) return;
}

void TAdSinglePlyChrSelectGC__sub_8028CEEC(void *arg0, s32 *) {
    if (((s32) chr_select_load_slot_count <= 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x8C) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
        if (--chr_select_load_slot_count == 0) {
            return;
        }
    }
}

extern s32 chr_select_load_slot_count;

s32 try_claim_load_slot__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x8C) != 0) || ((s32) chr_select_load_slot_count < 0) || ((s32) chr_select_load_slot_count > 1)) {
        return 0;
    }
    if ((s32) chr_select_load_slot_count >= 1) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x8C) = 1;
    chr_select_load_slot_count += 1;
    return 1;
}

extern s32 chr_select_load_slot_count;

s32 TAdSinglePlyChrSelectGC__sub_8028CF6C(void) {
    return chr_select_load_slot_count < 1;
}

extern s32 chr_select_preview_stride_table[];
extern s32 chr_select_preview_base_offset_table[];

}

s32 TChCrLoadReq::calc_preview_last_index(s32 display_index, s32 region_index) {
    s32 stride=chr_select_preview_stride_table[display_index];
    return stride + region_index * stride - 1 + chr_select_preview_base_offset_table[display_index];
}

extern "C" {

void *calc_preview_offset__23TAdSinglePlyChrSelectGCFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return (void *)(arg2 + (arg3 * chr_select_preview_stride_table[arg1] + chr_select_preview_base_offset_table[arg1]));
}

void close_and_destroy__12TChCrLoadReqFv(void *arg0) {
    s32 *temp_r4;

    if (are_all_selections_done__23TAdSinglePlyChrSelectGCFPv((u8 *)(arg0)) != 0) {
        load_preview_models__23TAdSinglePlyChrSelectGCFPv((void *)(arg0));
        temp_r4 = M2C_FIELD(arg0, s32 **, 0x3C);
        *temp_r4 &= 0xFFFFFF7F;
        TAdSinglePlyChrSelectGC__sub_8028CEEC((void *)(arg0), (s32 *)(temp_r4));
        queue_destruction__7TObjectFv(arg0);
    }
}

void try_advance_state__12TChCrLoadReqFv(void* p) { if (TAdSinglePlyChrSelectGC__sub_8028C998((void *)(p)) != 0) { start_preview_loads__23TAdSinglePlyChrSelectGCFPv((Gc_8028CB6C *)(p)); *(int*)((char*)p + 0x60) = 2; } }

}
