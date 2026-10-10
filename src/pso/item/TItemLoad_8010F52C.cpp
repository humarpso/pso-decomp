#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Load_8010F838 { u8 pad[0x14]; void *vtbl; u8 pad18[0xC]; s32 id; s32 f28; s32 f2c[4]; s32 f3c; };

struct Load_8010F61C { u8 pad[0x24]; s32 id; s32 f28; s32 f2c[4]; s32 f3c; };

typedef s32 M2C_UNK;
struct Ent_8010F68C { void *vt; u8 pad[8]; };

struct List_8010F68C { Ent_8010F68C *ents; u32 count; };

struct Load_8010F68C { u8 pad[0x24]; s32 id; List_8010F68C *list; void *f2c[4]; void *f3c; };

extern "C" {
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
void * construct__9TItemLoadFPv(void *, void *, int, int);
s32 alloc_buffer__11TOBoss4RockFPv(int);
extern s32 lbl_805D2BE8;
extern s32 lbl_805D2BEC;
extern void *item_texture_archive_loader;
extern void *item_model_chunk_loader;
extern s32 item_load_model_buffer;
void TItemLoad__sub_8010F5A0(void);
void init__9TItemLoadFPv(void *, void *, int, int);
extern M2C_UNK lbl_8049F40C[];
s32 construct_with_vtable__9TItemLoadFiPvii(int arg0, void *a1, int a2, int a3);
s32 begin_load__9TItemLoadFPvi(void *, s32);
void start_load_with_id__9TItemLoadFPvii(Load_8010F61C *self, s32 id, s32 arg2);
M2C_UNK decompress_buffer__9TItemLoadFUi();
M2C_UNK tmp_buf_release__6TLobbyFi(s32);
s32 TLobby__sub_8001EEF4();
s32 tmp_buf_use_req__6TLobbyFPv(s32);
M2C_UNK reset_state__9TItemLoadFPv(void *);
void *TLobby__sub_801E38A0(s32, u32 *, s32 *, s32, s32 *);
extern u8 lbl_80506208[];
extern s32 item_load_tmp_buffer;
void parse_nj_chunks__9TItemLoadFPv(Load_8010F68C *self);
}

extern "C" {

struct Base_8010F52C { char pad[0x14]; };
struct VObj_8010F52C : Base_8010F52C {
    virtual void m0(int);
};

void *TItemLoad__sub_8010F950(void *arg0, s16 arg1);
void begin_load_if_pending__9TItemLoadFPvii(void *arg0, s32 arg1, s32 arg2);
void *dt__9TItemLoadFPvs(void *arg0, s16 arg1);
void free_all_models__9TItemLoadFv(void);
void reload_item__9TItemLoadFPv(void *arg0);
M2C_UNK TItemLoad__sub_8010FCB4(void *, M2C_UNK);
M2C_UNK decompress_buffer__9TItemLoadFUi();
M2C_UNK tmp_buf_release__6TLobbyFi(s32);
s32 TLobby__sub_8001EEF4();
s32 tmp_buf_use_req__6TLobbyFPv(s32);
M2C_UNK load_gvm_texture_archive(s32, s32);
M2C_UNK __dl__FPv(void *);
s32 begin_load__9TItemLoadFPvi(void *, s32);
M2C_UNK free__11TOBoss4RockFUi(s32);
void init__9TItemLoadFPv(void *, void *, int, int);
M2C_UNK reset_state__9TItemLoadFPv(void *);

extern void *item_texture_archive_loader;
extern void *item_model_chunk_loader;
extern s32 item_load_model_buffer;

void free_all_models__9TItemLoadFv(void) {
    free__11TOBoss4RockFUi(item_load_model_buffer);
    if (item_model_chunk_loader != NULL) {
        ((struct VObj_8010F52C *)item_model_chunk_loader)->m0(1);
    }
    if (item_texture_archive_loader != NULL) {
        ((struct VObj_8010F52C *)item_texture_archive_loader)->m0(1);
    }
    item_texture_archive_loader = NULL;
    item_model_chunk_loader = NULL;
    item_load_model_buffer = 0;
}

extern M2C_UNK lbl_8049F40C[];

void TItemLoad__sub_8010F5A0(void) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    s32 var_r0_2;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x28));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = ((s32)construct__9TItemLoadFPv((void *)((int) (temp_r3)), (void *)((void *) (lbl_805D2BE8)), (int)((int) (0xB5)), (int)((int) (0x144))));
    }
    (*(s32 *)&item_texture_archive_loader) = var_r0;
    temp_r3_2 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x40));
    var_r0_2 = temp_r3_2;
    if (var_r0_2 != 0) {
        var_r0_2 = construct_with_vtable__9TItemLoadFiPvii((int)((int) (temp_r3_2)), (void *)((void *) (lbl_805D2BEC)), (int)((int) (0xB4)), (int)((int) (0x12F)));
    }
    (*(s32 *)&item_model_chunk_loader) = var_r0_2;
    item_load_model_buffer = alloc_buffer__11TOBoss4RockFPv((int) (0x21000));
}

void start_load_with_id__9TItemLoadFPvii(Load_8010F61C *self, s32 id, s32 arg2) {
    s32 i;
    if (id != 0 && begin_load__9TItemLoadFPvi(self, arg2) == 1) {
        self->id = id;
        self->f28 = 0;
        for (i = 0; i < 4; i++) {
            self->f2c[i] = 0;
        }
        self->f3c = 0;
    }
}

void parse_nj_chunks__9TItemLoadFPv(Load_8010F68C *self) {
    u32 pos;
    s32 tag;
    s32 size;
    s32 h;
    s32 off;
    u32 total;
    s32 n;
    void *p;
    u32 i;
    if (TLobby__sub_8001EEF4() == 1) {
        h = tmp_buf_use_req__6TLobbyFPv(item_load_tmp_buffer);
        off = self->id;
        total = decompress_buffer__9TItemLoadFUi();
        pos = 0;
        n = 0;
        while (pos < total) {
            p = TLobby__sub_801E38A0(h, &pos, &tag, off, &size);
            off += (size + 0x20) & ~0x1F;
            switch (tag) {
            case 0x4E4A434D:
                if (n < 4) {
                    self->f2c[n] = p;
                    n++;
                }
                break;
            case 0x4E4A544C:
                if (self->list == NULL) {
                    self->list = (List_8010F68C *)p;
                    for (i = 0; i != self->list->count; i++) {
                        self->list->ents[i].vt = lbl_80506208;
                    }
                }
                break;
            case 0x4E4D444D:
                self->f3c = p;
                break;
            }
        }
        tmp_buf_release__6TLobbyFi(item_load_tmp_buffer);
        self->id = 0;
        reset_state__9TItemLoadFPv(self);
    }
}

void *dt__9TItemLoadFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_8049F40C;
        TItemLoad__sub_8010FCB4(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

s32 construct_with_vtable__9TItemLoadFiPvii(int arg0, void *a1, int a2, int a3) {
    Load_8010F838 *self = (Load_8010F838 *)arg0;
    s32 i;
    init__9TItemLoadFPv(self, a1, a2, a3);
    self->vtbl = ((s32 *)&lbl_8049F40C);
    self->id = 0;
    for (i = 0; i < 4; i++) {
        self->f2c[i] = 0;
    }
    self->f28 = 0;
    self->f3c = 0;
    return (s32)self;
}

void begin_load_if_pending__9TItemLoadFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 != 0) && (begin_load__9TItemLoadFPvi(arg0, arg2) == 1)) {
        M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    }
}

extern s32 item_load_tmp_buffer;

void reload_item__9TItemLoadFPv(void *arg0) {
    s32 temp_r31;

    if (TLobby__sub_8001EEF4() == 1) {
        temp_r31 = tmp_buf_use_req__6TLobbyFPv(item_load_tmp_buffer);
        decompress_buffer__9TItemLoadFUi();
        load_gvm_texture_archive(temp_r31, M2C_FIELD(arg0, s32 *, 0x24));
        tmp_buf_release__6TLobbyFi(item_load_tmp_buffer);
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        reset_state__9TItemLoadFPv(arg0);
    }
}

extern M2C_UNK lbl_8049F41C[];

void *TItemLoad__sub_8010F950(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_8049F41C;
        TItemLoad__sub_8010FCB4(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049F41C[];

void *construct__9TItemLoadFPv(void *arg0, void * _w1, int _w2, int _w3) {
    init__9TItemLoadFPv(arg0, _w1, _w2, _w3);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_8049F41C;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    return arg0;
}

}
