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
s32 TLobby__sub_8001FB6C(struct Lobby_8001FB6C *self, s32 idx, void *bytes);
s32 TGStream__sub_800FDBA8(void *, s32);
M2C_UNK debug_print__6TLobbyFii(M2C_UNK *, ...);
M2C_UNK TLobby__sub_8013189C(void *, void *, void *);
M2C_UNK TLobby__sub_803DE084(s32, s32);
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
s32 TLobby__sub_8001FBEC(void *, u32, s32, s32);
s32 set_stream_state__6TLobbyFi(s32, s32);
s32 TLobby__sub_800FD944(s32);
M2C_UNK debug_print__6TLobbyFii(M2C_UNK *, ...);
extern M2C_UNK lbl_80434D74[];
extern M2C_UNK lbl_80434D94[];
extern s32 lbl_805D4ACC;
s32 TLobby__sub_8001FD98(Lobby_8001FD98 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

s32 alloc_load_data__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void free_chr_select_data__6TLobbyFv(void);
void free_if_not_owner__6TLobbyFPvPv(void* p, void* a1);
void set_flag_and_notify__6TLobbyFPv(void *arg0);
M2C_UNK TItemDrop__sub_800FE2D8();
M2C_UNK TLobby__sub_801E38A0(s32, s32, s32, s32, u32 *);
s32 TLobby__sub_803DE328(s32, s32, s32);
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
    return TLobby__sub_803DE328(arg1, arg2, arg3);
}

void TLobby__sub_8001F018(Lobby_8001F018 *arg0, void *arg1, s32 arg2) {
    char buf[0x20];
    s32 size;
    TLobby__sub_8013189C(buf, arg1, &lbl_805D7F10);
    size = TGStream__sub_800FDBA8(buf, lbl_805D4ACC);
    if (size > 0x40000) {
        debug_print__6TLobbyFii(lbl_80434B04, buf);
    } else if (size > 0) {
        TLobby__sub_803DE084(lbl_805D4ACC, arg0->entries[arg2].data);
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

s32 TLobby__sub_8001FB6C(struct Lobby_8001FB6C *self, s32 idx, void *bytes) {
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
    TLobby__sub_8001FBEC(arg0, size, arg2, lbl_805D4ACC);
    if (arg0->entries[arg2].texture != NULL) {
        TLobby__sub_8001F018((Lobby_8001F018 *)(arg0), (void *)(arg1), (s32)(arg2));
    }
    return 1;
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

}
