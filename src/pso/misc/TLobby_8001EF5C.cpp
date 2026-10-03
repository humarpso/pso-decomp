#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8001F8D8 { u8 pad0[4]; s32 f4; s32 f8; s32 fc; u8 pad10[0x418 - 0x10]; s32 f418; u8 pad41c[0x434 - 0x41c]; s32 f434; s32 f438; s32 f43c; };

typedef s32 M2C_UNK;
struct Ent_8001FB6C { s32 a; s32 data; };

struct Lobby_8001FB6C { u8 pad[0x430]; struct Ent_8001FB6C *entries; };

typedef struct Ent_8001F018 {
    s32 flags;
    s32 unk4;
    s32 unk8;
    s32 data;
} Ent_8001F018;

typedef struct Lobby_8001F018 {
    s32 flags;
    u8 pad4[0x42C - 0x4];
    Ent_8001F018 *entries;
} Lobby_8001F018;

typedef struct Ent_8001FD98 {
    s32 flags;
    s32 unk4;
    void *motion;
    void *texture;
} Ent_8001FD98;

typedef struct Lobby_8001FD98 {
    u8 pad0[0x42C];
    Ent_8001FD98 *entries;
} Lobby_8001FD98;

struct Ctx_8001FA1C { s32 f0; s32 f4; u8 pad8[0x43C - 8]; s32 f43C; };

struct Lobby_8001FA1C {
    s32 f0;
    s32 *f4;
    s32 *f8;
    Ctx_8001FA1C *fC;
    s32 f10;
    u32 f14;
};

struct Params_8001FA1C { Ctx_8001FA1C *a; s32 b; };

struct Ent16_8001FE7C { u32 flags; u8 pad4[4]; void *a; void *b; };

struct Ent8_8001FE7C { s32 x; void *data; };

struct Lobby_8001FE7C {
    u32 flags;
    u8 pad4[0x18 - 4];
    s32 handles[(0x418 - 0x18) / 4];
    s32 nHandles;
    u8 pad41c[0x42C - 0x41C];
    Ent16_8001FE7C *ents16;
    Ent8_8001FE7C *ents8;
    s32 nEnts16;
    s32 nEnts8;
};

struct Lobby_8001FB6C;
typedef struct Lobby_8001F018 Lobby_8001F018;
struct Ent16_80020004 { u32 flags; u8 pad4[4]; void *a; void *b; };

struct Ent8_80020004 { s32 x; void *data; };

struct Lobby_80020004 {
    u32 flags;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    u8 pad18[0x41C - 0x18];
    s32 f41C;
    s32 f420;
    s32 f424;
    u8 pad428[4];
    Ent16_80020004 *ents16;
    Ent8_80020004 *ents8;
    s32 nEnts16;
    s32 nEnts8;
};

struct Desc_80020004 { s32 name; u8 pad4[8]; s16 n16; s16 n8; };

struct Rec_80020004 { char name[0x20]; s32 size; u8 pad24[8]; s32 texSize; u8 pad30[0x10]; };

struct Hdr_80020004 { u8 pad0[8]; u8 compressed; s8 small; u8 padA[0x36]; Rec_80020004 recs[1]; };

struct Stream_80020004 { u8 pad[0x30]; };

extern "C" {
M2C_UNK TItemDrop__sub_800FE2DC();
s32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);
s32 xmalloc__FUl(M2C_UNK);
extern s8 lbl_804FE148[];
extern s32 lbl_805D4ACC;
extern s32 lbl_805D4AD4;
extern u32 lbl_805D4AD8;
void init_download_buffers__6TLobbyFv(void);
void increment_ref_and_set_flag__6TLobbyFPv(void *arg0);
s32 alloc_load_data__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK debug_print__6TLobbyFii(M2C_UNK *, ...);
extern s32 lbl_805D4ACC;
extern M2C_UNK lbl_80434C48[];
void load_bin_motion_callback(void *arg0);
extern s32 lbl_805D4AD0;
void reset_battle_state__6TLobbyFPv(void *arg0);
void set_flag_and_notify__6TLobbyFPv(void *arg0);
void TLobby__sub_8001EE48(const char *s);
extern char lbl_80434C38[];
void TLobby__sub_8001F8D8(Obj_8001F8D8 *self, void * _w1);
s32 alloc_load_data__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK debug_print__6TLobbyFii(M2C_UNK *, ...);
extern M2C_UNK lbl_80434CC4[];
s32 bind_bml_motion(struct Lobby_8001FB6C *self, s32 idx, void *bytes);
s32 TGStream__sub_800FDBA8(void *, s32);
M2C_UNK debug_print__6TLobbyFii(M2C_UNK *, ...);
M2C_UNK TLobby__sub_8013189C(void *, void *, void *);
M2C_UNK load_gvm_texture_archive(s32, s32);
extern M2C_UNK lbl_80434B04[];
extern M2C_UNK lbl_80434B24[];
extern s32 lbl_805D4ACC;
extern M2C_UNK lbl_805D7F10;
void TLobby__sub_8001F018(Lobby_8001F018 *arg0, void *arg1, s32 arg2);
s32 alloc_load_data__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 set_stream_state__6TLobbyFi(s32, s32);
M2C_UNK debug_print__6TLobbyFii(M2C_UNK *, ...);
extern M2C_UNK lbl_80434D10[];
extern M2C_UNK lbl_80434D30[];
extern M2C_UNK lbl_80434D54[];
extern s32 lbl_805D4ACC;
s32 TLobby__sub_8001FCC4(Lobby_8001FB6C *arg0, s32 arg1, s32 arg2);
void TLobby__sub_8001F018(Lobby_8001F018 *arg0, void *arg1, s32 arg2);
s32 bind_bml_model(void *, u32, s32, s32);
s32 set_stream_state__6TLobbyFi(s32, s32);
s32 TLobby__sub_800FD944(s32);
M2C_UNK debug_print__6TLobbyFii(M2C_UNK *, ...);
extern M2C_UNK lbl_80434D74[];
extern M2C_UNK lbl_80434D94[];
extern s32 lbl_805D4ACC;
s32 TLobby__sub_8001FD98(Lobby_8001FD98 *arg0, s32 arg1, s32 arg2);
M2C_UNK TLobby__sub_8001EDD8(void *, s32);
s32 alloc_load_data__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void TLobby__sub_8001F8D8(Obj_8001F8D8 *self, void * _w1);
s32 create_file_load_entry__6TLobbyFiiUiiPv(void *, s32, void *, void *, void *);
M2C_UNK debug_print__6TLobbyFii(M2C_UNK *, ...);
M2C_UNK TLobby__sub_8013189C(void *, void *, void *);
void increment_ref_and_set_flag__6TLobbyFPv(void *arg0);
extern M2C_UNK lbl_80434C70[];
extern M2C_UNK lbl_80434C98[];
extern s32 lbl_805D4ACC;
extern M2C_UNK lbl_805D7F10;
void TLobby__sub_8001FA1C(Lobby_8001FA1C *self);
M2C_UNK TLobby__sub_8001EDF4(void *);
void free_if_not_owner__6TLobbyFPvPv(void* p, void* a1);
void __dl__FPv(void *);
M2C_UNK TLobby__sub_800F9FF4(s32);
M2C_UNK free__11TOBoss4RockFUi(void *);
M2C_UNK TLobby__sub_803DA16C(void *);
extern char lbl_80434C38[];
Lobby_8001FE7C *TLobby__sub_8001FE7C(Lobby_8001FE7C *self, s16 del);
s32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);
M2C_UNK debug_print__6TLobbyFii(M2C_UNK *, ...);
void reset_battle_state__6TLobbyFPv(void *arg0);
void set_flag_and_notify__6TLobbyFPv(void *arg0);
s32 bind_bml_motion(struct Lobby_8001FB6C *self, s32 idx, void *bytes);
M2C_UNK load_gvm_texture_archive(s32, s32);
void TLobby__sub_8001F018(Lobby_8001F018 *arg0, void *arg1, s32 arg2);
s32 bind_bml_model(void *, u32, s32, s32);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
extern s32 lbl_805D4AD0;
extern u32 lbl_805D4AD8;
void pump_frames__6TLobbyFv(void);
void open__8TGStreamFPvPvi(void *, s32, s32);
s32 get_instance__8TGStreamFv(void *);
void read_data__8TGStreamFPvii(void *, void *, s32);
void TGStream__ct(void *, s32);
void TLobby__sub_800FDFEC(void *, s32);
void prs_decompress_buffer(s32, void *);
void add_named_entry__6TLobbyFii(void *, s32);
void debug_printf_nop(void *, ...);
void *alloc_buffer__11TOBoss4RockFPv(s32);
char *strncpy(char *dest, const char *src, unsigned long num);
extern u8 *lbl_805D49B0;
extern u8 lbl_805D4AC8;
extern s32 lbl_805D5338;
extern s32 lbl_805D2B10;
extern M2C_UNK lbl_80434B70[];
extern M2C_UNK lbl_80434DB8[];
extern M2C_UNK lbl_80434DD4[];
extern M2C_UNK lbl_80434DF4[];
extern M2C_UNK lbl_80434E10[];
extern M2C_UNK lbl_80434E2C[];
Lobby_80020004 *load_resource_from_descriptor(Lobby_80020004 *self, s32 kind, Desc_80020004 *desc, s32 arg3, s32 arg4, s32 arg5);
}

extern "C" {

s32 alloc_load_data__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void free_chr_select_data__6TLobbyFv(void);
void free_if_not_owner__6TLobbyFPvPv(void* p, void* a1);
void set_flag_and_notify__6TLobbyFPv(void *arg0);
M2C_UNK TItemDrop__sub_800FE2D8();
M2C_UNK TLobby__sub_801E38A0(s32, s32, s32, s32, u32 *);
s32 load_nj_chunk_model_resource(s32, s32, s32);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
int xfree__FPv(void*);

void free_if_not_owner__6TLobbyFPvPv(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x424) == 0) { xfree__FPv((void*)(a1)); } }

s32 alloc_load_data__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 sp8;
    s32 temp_r31;
    u32 temp_r4;
    u32 temp_r7;

    temp_r7 = M2C_FIELD(arg0, u32 *, 0x424);
    if (temp_r7 != 0U) {
        temp_r31 = temp_r7 + M2C_FIELD(arg0, s32 *, 0x428);
        TLobby__sub_801E38A0(arg1, arg2, arg3, temp_r31, &sp8);
        temp_r4 = ((sp8 >> 5U) + 1) << 5;
        sp8 = temp_r4;
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) + temp_r4);
        return temp_r31;
    }
    return load_nj_chunk_model_resource(arg1, arg2, arg3);
}

void TLobby__sub_8001F018(Lobby_8001F018 *arg0, void *arg1, s32 arg2) {
    char buf[0x20];
    s32 size;
    TLobby__sub_8013189C(buf, arg1, &lbl_805D7F10);
    size = TGStream__sub_800FDBA8(buf, lbl_805D4ACC);
    if (size > 0x40000) {
        debug_print__6TLobbyFii(lbl_80434B04, buf);
    } else if (size > 0) {
        load_gvm_texture_archive(lbl_805D4ACC, arg0->entries[arg2].data);
        arg0->entries[arg2].flags |= 1;
    } else {
        arg0->entries[arg2].flags |= 2;
        if (!(arg0->flags & 4)) {
            debug_print__6TLobbyFii(lbl_80434B24, buf);
        }
    }
}

void set_flag_and_notify__6TLobbyFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x400);
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x41C);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x420));
    }
}

extern s32 lbl_805D4ACC;
extern u32 lbl_805D4AD8;

void free_chr_select_data__6TLobbyFv(void) {
    if ((u32) lbl_805D4AD8 != 0U) {
        xfree__FPv((void*)((void*)lbl_805D4AD8));
        lbl_805D4AD8 = 0U;
    }
    TItemDrop__sub_800FE2D8();
    safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D4ACC);
    lbl_805D4ACC = 0;
}
void init_download_buffers__6TLobbyFv(void) {
    (*(s32 *)&lbl_805D4AD8) = xmalloc__FUl(0x4000);
    lbl_805D4ACC = alloc__22TQuestVmDownLoadServerFPv(0x40000);
    TItemDrop__sub_800FE2DC();
    lbl_805D4AD4 = 1;
    lbl_804FE148[0] = 0;
}

void TLobby__sub_8001F8D8(Obj_8001F8D8 *self, void * _w1) {
    if (self->f434 <= self->f4 && self->f438 <= self->f8 && self->f43c <= self->fc) {
        set_flag_and_notify__6TLobbyFPv(self);
        self->f418 = 0;
        TLobby__sub_8001EE48(lbl_80434C38);
    }
}

void increment_ref_and_set_flag__6TLobbyFPv(void *arg0) {
    s32 *temp_r3;
    void *temp_r4;
    temp_r4 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r4, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r4, s32 *, 0xC) + 1);
    TLobby__sub_8001F8D8((Obj_8001F8D8 *)(M2C_FIELD(arg0, void **, 0)), (void *)(temp_r4));
    temp_r3 = M2C_FIELD(arg0, s32 **, 4);
    *temp_r3 |= 1;
}
void load_bin_motion_callback(void *arg0) {
    s32 spC;
    M2C_UNK sp8;
    s32 temp_r3;
    void *temp_r4;
    *M2C_FIELD(arg0, s32 **, 0) = 0;
    spC = 0;
    temp_r3 = alloc_load_data__6TLobbyFPviii((void *)(M2C_FIELD(arg0, void **, 4)), (s32)(lbl_805D4ACC), (s32)(&spC), (s32)(&sp8));
    if (temp_r3 == 0) {
        debug_print__6TLobbyFii(lbl_80434C48);
    }
    *M2C_FIELD(arg0, s32 **, 0) = temp_r3;
    temp_r4 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_r4, s32 *, 8) = (s32) (M2C_FIELD(temp_r4, s32 *, 8) + 1);
    TLobby__sub_8001F8D8((Obj_8001F8D8 *)(M2C_FIELD(arg0, void **, 4)), (void *)(temp_r4));
}

struct Obj_8001F8D8;
void TLobby__sub_8001FA1C(Lobby_8001FA1C *self) {
    char name[0x20];
    Params_8001FA1C params;
    u32 i;
    s32 tag;
    s32 handle;
    s32 data;
    s32 r;
    s32 *slot;
    i = 0;
    while (i < self->f14) {
        data = ((s32 (*)(void *, s32, void *, void *))alloc_load_data__6TLobbyFPviii)(self->fC, lbl_805D4ACC, &i, &tag);
        switch (tag) {
        case 0x4E4A544C:
            slot = self->f8;
            *slot = data;
            params.a = self->fC;
            params.b = self->f10;
            TLobby__sub_8013189C(name, (void *)self->f0, &lbl_805D7F10);
            r = create_file_load_entry__6TLobbyFiiUiiPv(name, *slot, (void *)increment_ref_and_set_flag__6TLobbyFPv, &params, &handle);
            if (r >= 0) {
                TLobby__sub_8001EDD8(self->fC, handle);
                self->fC->f43C++;
            } else if (!(self->fC->f0 & 4)) {
                debug_print__6TLobbyFii(lbl_80434C70, name, r);
            }
            break;
        case 0x4E4A434D:
            *self->f4 = data;
            self->fC->f4++;
            break;
        default:
            debug_print__6TLobbyFii(lbl_80434C98);
            break;
        }
    }
    ((void (*)(void *))TLobby__sub_8001F8D8)(self->fC);
}

s32 bind_bml_motion(struct Lobby_8001FB6C *self, s32 idx, void *bytes) {
    s32 spC;
    s32 sp8;
    u32 r;
    self->entries[idx].data = 0;
    spC = 0;
    r = alloc_load_data__6TLobbyFPviii(self, (s32) bytes, (s32) &spC, (s32) &sp8);
    if (r == 0) {
        debug_print__6TLobbyFii(lbl_80434CC4);
        return 0;
    }
    self->entries[idx].data = r;
    return 1;
}

s32 TLobby__sub_8001FCC4(Lobby_8001FB6C *arg0, s32 arg1, s32 arg2) {
    u32 offset;
    s32 tag;
    s32 size;
    s32 data;
    arg0->entries[arg2].data = 0;
    size = set_stream_state__6TLobbyFi(arg1, lbl_805D4ACC);
    if (size == 0) {
        debug_print__6TLobbyFii(lbl_80434D10, arg1);
        return 0;
    }
    if (size > 0x40000) {
        debug_print__6TLobbyFii(lbl_80434D30, size - 0x40000);
    }
    offset = 0;
    data = alloc_load_data__6TLobbyFPviii((void *)(arg0), (s32)(lbl_805D4ACC), (s32)(&offset), (s32)(&tag));
    if (data == 0) {
        debug_print__6TLobbyFii(lbl_80434D54);
    }
    arg0->entries[arg2].data = data;
    return 1;
}

s32 TLobby__sub_8001FD98(Lobby_8001FD98 *arg0, s32 arg1, s32 arg2) {
    s32 size;
    arg0->entries[arg2].motion = NULL;
    arg0->entries[arg2].texture = NULL;
    size = TLobby__sub_800FD944(arg1);
    if (size <= 0) {
        debug_print__6TLobbyFii(lbl_80434D74, arg1);
        return 0;
    }
    if (size > 0x40000) {
        debug_print__6TLobbyFii(lbl_80434D94, size - 0x40000);
    }
    set_stream_state__6TLobbyFi(arg1, lbl_805D4ACC);
    bind_bml_model(arg0, size, arg2, lbl_805D4ACC);
    if (arg0->entries[arg2].texture != NULL) {
        TLobby__sub_8001F018((Lobby_8001F018 *)(arg0), (void *)(arg1), (s32)(arg2));
    }
    return 1;
}

Lobby_8001FE7C *TLobby__sub_8001FE7C(Lobby_8001FE7C *self, s16 del) {
    s32 i;
    if (self != NULL) {
        if (self->flags & 2) {
            if (self->flags & 0x100) {
                self->flags |= 0x200;
            } else {
                for (i = 0; i < self->nHandles; i++) {
                    TLobby__sub_800F9FF4(self->handles[i]);
                }
                TLobby__sub_8001EDF4(lbl_80434C38);
            }
        }
        for (i = 0; i < self->nEnts16; i++) {
            if (self->ents16[i].a != NULL) {
                free_if_not_owner__6TLobbyFPvPv(self, self->ents16[i].a);
            }
            if (self->ents16[i].b != NULL) {
                if (self->ents16[i].flags & 1) {
                    TLobby__sub_803DA16C(self->ents16[i].b);
                }
                free_if_not_owner__6TLobbyFPvPv(self, self->ents16[i].b);
            }
        }
        free__11TOBoss4RockFUi(self->ents16);
        for (i = 0; i < self->nEnts8; i++) {
            free_if_not_owner__6TLobbyFPvPv(self, self->ents8[i].data);
        }
        free__11TOBoss4RockFUi(self->ents8);
        if (del > 0) {
            __dl__FPv(self);
        }
    }
    return self;
}

void reset_battle_state__6TLobbyFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x42C) = 0;
    M2C_FIELD(arg0, s32 *, 0x430) = 0;
    M2C_FIELD(arg0, s32 *, 0x434) = 0;
    M2C_FIELD(arg0, s32 *, 0x438) = 0;
    M2C_FIELD(arg0, s32 *, 0x43C) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x418) = 0;
    M2C_FIELD(arg0, s32 *, 0x428) = 0;
    lbl_805D4AD0 = 0;
}
Lobby_80020004 *load_resource_from_descriptor(Lobby_80020004 *self, s32 kind, Desc_80020004 *desc, s32 arg3, s32 arg4, s32 arg5) {
    Stream_80020004 st;
    char name[0x20];
    Hdr_80020004 *hdr;
    s32 blk;
    s32 i;
    s32 j;
    Rec_80020004 *rec;
    Rec_80020004 *first;
    s32 sectors;
    s32 size;
    s32 buf;
    u32 flags;
    reset_battle_state__6TLobbyFPv(self);
    self->flags = kind | 0x100;
    self->f41C = arg3;
    self->f420 = arg4;
    self->f424 = arg5;
    self->nEnts16 = desc->n16;
    self->nEnts8 = desc->n8;
    if (self->nEnts16 > 0) {
        self->ents16 = (Ent16_80020004 *)alloc_buffer__11TOBoss4RockFPv(self->nEnts16 * 16);
        for (s32 i = 0; i < self->nEnts16; i++) {
            self->ents16[i].flags = 0;
            self->ents16[i].a = NULL;
            self->ents16[i].b = NULL;
        }
    }
    if (self->nEnts8 > 0) {
        self->ents8 = (Ent8_80020004 *)alloc_buffer__11TOBoss4RockFPv(self->nEnts8 * 8);
        for (s32 i = 0; i < self->nEnts8; i++) {
            self->ents8[i].data = NULL;
        }
    }
    flags = self->flags;
    if (flags & 1) {
        pump_frames__6TLobbyFv();
        lbl_805D4AD0 = 1;
        open__8TGStreamFPvPvi(&st, desc->name, 0);
        if (get_instance__8TGStreamFv(&st) <= 0) {
            debug_print__6TLobbyFii(lbl_80434DB8, desc->name);
            self->nEnts16 = self->nEnts8 = 0;
            TGStream__ct(&st, -1);
            return self;
        }
        sectors = (((self->nEnts16 + self->nEnts8 + 1) << 6) + 0x7FF) / 2048;
        if (sectors > 0x4000) {
            debug_printf_nop(lbl_80434B70, sectors);
        }
        hdr = (Hdr_80020004 *)lbl_805D4AD8;
        first = hdr->recs;
        read_data__8TGStreamFPvii(&st, hdr, sectors << 11);
        switch (hdr->compressed) {
        case 0x50:
            lbl_805D4AC8 = 1;
            break;
        default:
            lbl_805D4AC8 = 0;
            break;
        }
        blk = 0x800;
        if (hdr->small != 0) {
            blk = 0x20;
            self->flags |= 0x800;
        }
        rec = first;
        for (i = 0; i < self->nEnts16; i++, rec++) {
            size = rec->size;
            if (size > 0x40000) {
                debug_print__6TLobbyFii(lbl_80434DD4, size - 0x40000);
            }
            switch (lbl_805D4AC8) {
            case 1:
                buf = alloc__22TQuestVmDownLoadServerFPv(size + 0x800);
                if (buf != 0) {
                    lbl_805D5338 = desc->name;
                    read_data__8TGStreamFPvii(&st, (void *)buf, size);
                    TLobby__sub_800FDFEC(&st, blk);
                    lbl_805D5338 = lbl_805D2B10;
                    prs_decompress_buffer(buf, lbl_805D49B0);
                    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                    bind_bml_model(self, size, i, (s32)lbl_805D49B0);
                } else {
                    debug_print__6TLobbyFii(lbl_80434DF4, desc->name);
                }
                break;
            default:
                read_data__8TGStreamFPvii(&st, lbl_805D49B0, size);
                TLobby__sub_800FDFEC(&st, blk);
                lbl_805D5338 = lbl_805D2B10;
                bind_bml_model(self, size, i, (s32)lbl_805D49B0);
                break;
            }
            if (self->flags & 0x800) {
                Ent16_80020004 *e = &self->ents16[i];
                if (e->b != NULL) {
                    s32 tsize = rec->texSize;
                    if (tsize != 0) {
                        s32 tbuf = alloc__22TQuestVmDownLoadServerFPv(tsize + 0x800);
                        read_data__8TGStreamFPvii(&st, (void *)tbuf, tsize);
                        TLobby__sub_800FDFEC(&st, blk);
                        prs_decompress_buffer(tbuf, lbl_805D49B0);
                        safe_free__23TAdSinglePlyChrSelectGCFUi(tbuf);
                        if (load_gvm_texture_archive((s32)lbl_805D49B0, (s32)self->ents16[i].b) > 0) {
                            self->ents16[i].flags |= 1;
                        } else {
                            self->ents16[i].flags |= 2;
                            debug_print__6TLobbyFii(lbl_80434E10);
                        }
                    } else {
                        e->flags |= 2;
                        if (!(self->flags & 4)) {
                            debug_print__6TLobbyFii(lbl_80434E2C);
                        }
                    }
                }
            }
        }
        for (j = 0; j < self->nEnts8; j++, rec++) {
            s32 sz = rec->size;
            if (sz > 0x40000) {
                debug_print__6TLobbyFii(lbl_80434DD4, sz - 0x40000);
            }
            switch (lbl_805D4AC8) {
            case 1: {
                s32 mb = alloc__22TQuestVmDownLoadServerFPv(sz + 0x800);
                read_data__8TGStreamFPvii(&st, (void *)mb, sz);
                TLobby__sub_800FDFEC(&st, blk);
                prs_decompress_buffer(mb, lbl_805D49B0);
                safe_free__23TAdSinglePlyChrSelectGCFUi(mb);
                bind_bml_motion((struct Lobby_8001FB6C *)self, j, lbl_805D49B0);
                break;
            }
            default:
                read_data__8TGStreamFPvii(&st, lbl_805D49B0, sz);
                TLobby__sub_800FDFEC(&st, blk);
                bind_bml_motion((struct Lobby_8001FB6C *)self, j, lbl_805D49B0);
                break;
            }
        }
        TGStream__ct(&st, -1);
        if (!(self->flags & 0x800)) {
            rec = hdr->recs;
            for (s32 i = 0; i < self->nEnts16; i++, rec++) {
                if (self->ents16[i].b != NULL) {
                    strncpy(name, rec->name, 0x20);
                    TLobby__sub_8001F018((Lobby_8001F018 *)self, name, i);
                }
            }
        }
        set_flag_and_notify__6TLobbyFPv(self);
    } else if (flags & 2) {
        self->fC = 0;
        self->f8 = 0;
        self->f4 = 0;
        self->f10 = 0;
        self->f14 = 0;
        add_named_entry__6TLobbyFii(self, desc->name);
    }
    return self;
}

}
