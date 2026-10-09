#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK* get_shared_text_buffer(void);
s32 get_card_window_area__6TLobbyFv(void);
int get_flag_bit0__6TLobbyFv(void);
void broadcast_to_players__6TLobbyFii(s32 arg0, s32 arg1);
void TLobby__sub_8001DF58(s32 arg0, s32 arg1);
void copy_all_entries__6TLobbyFii(s32 arg0, s32 arg1);
void copy_all_data__6TLobbyFii(s32 arg0, s32 arg1);
void* get_player_entry__6TLobbyFii(int a0, int a1);
u8 is_valid_player_index__6TLobbyFi(s32 arg0);
void* TLobby__sub_8001E270(int a0, int a1);
void* TLobby__sub_8001E2A8(int a0, int a1);
void* get_entry__6TLobbyFii(int a0, int a1);
void set_difficulty__6TLobbyFi(s32 arg0);
s32 get_instance__6TLobbyFv(void);
}

struct Ent_8001D768 { u32 f0; u32 f4; u32 f8; u32 fc; };

struct Obj_8001D768 { Ent_8001D768 *ents; u32 count; };

struct Node_8001D7AC { Node_8001D7AC *next; Node_8001D7AC *prev; u32 addr; u32 size; };

struct Pool_8001D7AC { u8 pad[0x2C]; Node_8001D7AC *head; };

struct Node_8001D808 { Node_8001D808 *next; Node_8001D808 *prev; u32 addr; u32 size; };

struct Pool_8001D808 { u8 pad[0x2C]; Node_8001D808 *head; };

struct Node_8001D6E0 { Node_8001D6E0 *next; Node_8001D6E0 *prev; u32 addr; u32 size; };

struct Pool_8001D6E0 { u8 pad[0x2C]; Node_8001D6E0 *head; };

extern "C" {
extern s32 lbl_805D4A90;
void TLobby__sub_8001D9DC(void);
s32 set_flag_bit0__6TLobbyFi(s32);
s32 is_active__6TLobbyFv(void);
s32 get_card_window__17TWindowSubComCardFUi(M2C_UNK);

M2C_UNK TWindowSubComCard__sub_80225E80(void *, int);
M2C_UNK strncpy(int, int, int);
extern s32 TLobby__data_805D4A98;
void set_short_mail_text__6TLobbyFi(s32 arg0);
Ent_8001D768 *find_free_pool_entry__6TLobbyFPv(Obj_8001D768 *self);
void archive_pool_free(Pool_8001D7AC *pool, Node_8001D7AC *node);
Ent_8001D768 *find_free_pool_entry__6TLobbyFPv(Obj_8001D768 *self);
Node_8001D808 *archive_pool_alloc(Pool_8001D808 *pool, u32 size);
void TLobby__sub_8001D9E8(void* p);
void merge_adjacent_free_blocks__6TLobbyFPv(Pool_8001D6E0 *pool);

void send_disable_auto_reply__9TProtocolFv(s32);
void send_text_packet_c7__6TLobbyFPvPv(s32, s32);
extern s32 TLobby__data_805D4A98;
extern s32 TLobby__protocol_instance;
void sync_auto_reply_state__6TLobbyFv(void);
}

extern "C" {

void TLobby__sub_8001D9E8(void* p);
u32 *free_and_delete__6TLobbyFPvs(u32 *arg0, s16 arg1);

u8 *init_memory_pool__6TLobbyFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void send_or_handle_packet__6TLobbyFPvPvPvPvUi(void *arg0, void *arg1, void *arg2, void *arg3, u32 arg4);
M2C_UNK aram_read_sync__6TLobbyFiiii(M2C_UNK, s32);
M2C_UNK aram_transfer_sync__6TLobbyFiUiii(M2C_UNK, void *, s32);
M2C_UNK __dl__FPv(u32 *);
u8 *fn_803DE864(s32, M2C_UNK);
s32 get_card_window__17TWindowSubComCardFUi(M2C_UNK);
M2C_UNK xfree__FPv(u32);

void send_or_handle_packet__6TLobbyFPvPvPvPvUi(void *arg0, void *arg1, void *arg2, void *arg3, u32 arg4) {
    if (arg4 == 0U) {
        aram_transfer_sync__6TLobbyFiUiii(0, arg1, M2C_FIELD(arg2, s32 *, 8));
        return;
    }
    aram_read_sync__6TLobbyFiiii(0, M2C_FIELD(arg1, s32 *, 8));
}

void merge_adjacent_free_blocks__6TLobbyFPv(Pool_8001D6E0 *pool) {
    Node_8001D6E0 *cur;
    Node_8001D6E0 *n;
    cur = pool->head->next;
    while ((n = cur->next) != 0) {
        if (n->addr == cur->addr + cur->size) {
            cur->next = n->next;
            cur->size = cur->size + n->size;
            if (n->next != 0) {
                n->next->prev = cur;
            }
            TLobby__sub_8001D9E8((void*)(n));
        } else {
            cur = n;
        }
    }
}

Ent_8001D768 *find_free_pool_entry__6TLobbyFPv(Obj_8001D768 *self) {
    u32 i;
    if (self->ents != 0) {
        for (i = 1; i < self->count; i++) {
            if (self->ents[i].fc == 0) {
                return &self->ents[i];
            }
        }
    }
    return 0;
}

void archive_pool_free(Pool_8001D7AC *pool, Node_8001D7AC *node) {
    Node_8001D7AC *prev;
    Node_8001D7AC *cur;
    for (prev = pool->head; (cur = prev->next) != 0; prev = cur) {
        if (node->addr < cur->addr) {
            prev->next = node;
            node->next = cur;
            node->prev = prev;
            cur->prev = node;
            merge_adjacent_free_blocks__6TLobbyFPv((Pool_8001D6E0 *)(pool));
            return;
        }
    }
}

struct Ent_8001D768;
struct Obj_8001D768;
Node_8001D808 *archive_pool_alloc(Pool_8001D808 *pool, u32 size) {
    u32 sz = (size + 0x1F) & ~0x1F;
    Node_8001D808 *prev;
    Node_8001D808 *cur;
    Node_8001D808 *n;
    for (prev = pool->head; (cur = prev->next) != 0; prev = cur) {
        if (cur->size >= sz) {
            if (cur->size == sz) {
                prev->next = cur->next;
                if (cur->next != 0) {
                    cur->next->prev = prev;
                }
                cur->next = 0;
                cur->prev = 0;
                return cur;
            }
            if (cur->size > sz) {
                n = (Node_8001D808 *)find_free_pool_entry__6TLobbyFPv((Obj_8001D768 *)pool);
                if (n != 0) {
                    n->next = 0;
                    n->prev = 0;
                    n->addr = cur->addr;
                    n->size = sz;
                    cur->addr += sz;
                    cur->size -= sz;
                    return n;
                }
            }
        }
    }
    return 0;
}

u32 *free_and_delete__6TLobbyFPvs(u32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) *arg0 != 0U) {
            xfree__FPv(*arg0);
            *arg0 = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

u8 *init_memory_pool__6TLobbyFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;
    u8 *temp_r3;
    u8 *temp_r5;

    M2C_FIELD(arg0, void **, 0) = fn_803DE864(arg3, 0x10);
    if ((void *) M2C_FIELD(arg0, void **, 0) != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = arg3;
        temp_r4 = (arg2 + 0x1F) & 0xFFFFFFE0;
        M2C_FIELD(arg0, s32 *, 8) = temp_r4;
        temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0));
        M2C_FIELD(arg0, void **, 0x2C) = temp_r3;
        temp_r5 = temp_r3 + 0x10;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), void **, 0) = temp_r5;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 4) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 8) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 0xC) = 0;
        M2C_FIELD(temp_r5, s32 *, 0) = 0;
        M2C_FIELD(temp_r5, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r5, s32 *, 8) = arg1;
        M2C_FIELD(temp_r5, s32 *, 0xC) = temp_r4;
    }
    return arg0;
}

void TLobby__sub_8001D9DC(void) {
    lbl_805D4A90 = 0;
}

void TLobby__sub_8001D9E8(void* p) { *(s32*)((char*)p + 0x4) = 0; *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0xc) = 0; *(s32*)((char*)p + 0x8) = 0; }

void sync_auto_reply_state__6TLobbyFv(void) {
    if ((TLobby__data_805D4A98 & 4) || (TLobby__data_805D4A98 & 1) != ((TLobby__data_805D4A98 >> 1) & 1)) {
        if (((s32 (*)(void))get_flag_bit0__6TLobbyFv)() != 0) {
            send_text_packet_c7__6TLobbyFPvPv(TLobby__protocol_instance, get_card_window_area__6TLobbyFv());
        } else {
            send_disable_auto_reply__9TProtocolFv(TLobby__protocol_instance);
        }
        TLobby__data_805D4A98 &= ~4;
        TLobby__data_805D4A98 = ((s32 (*)(void))get_flag_bit0__6TLobbyFv)() != 0 ? (TLobby__data_805D4A98 | 2) : (TLobby__data_805D4A98 & ~2);
    }
}

s32 get_card_window_area__6TLobbyFv(void) {
    return get_card_window__17TWindowSubComCardFUi(0xFFFF) + 0x2050;
}
void set_short_mail_text__6TLobbyFi(s32 arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(get_card_window__17TWindowSubComCardFUi((M2C_UNK)(0xFFFFU)) + 0x2050);
    TWindowSubComCard__sub_80225E80((void *) (arg0), (int) (((s32 (*)(void))get_shared_text_buffer)()));
    strncpy((int) (temp_r31), (int) (((s32 (*)(void))get_shared_text_buffer)()), (int) (0xAB));
    M2C_FIELD(temp_r31, s8 *, 0xAB) = 0;
    TLobby__data_805D4A98 |= 4;
    if (is_active__6TLobbyFv() != 0) {
        set_flag_bit0__6TLobbyFi(1);
        return;
    }
    set_flag_bit0__6TLobbyFi(0);
}

}

extern "C" {

int get_flag_bit0__6TLobbyFv(void) {  return (TLobby__data_805D4A98 & 0x1); }

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_flag_bit0__6TLobbyFi(s32 arg0);

extern s32 TLobby__data_805D4A98;

s32 set_flag_bit0__6TLobbyFi(s32 arg0) {
    s32 var_r3;
    s32 ret;

    ret = ((s32 (*)(s32))get_flag_bit0__6TLobbyFv)(arg0);
    if (ret == arg0) {
        return 0;
    }
    var_r3 = TLobby__data_805D4A98 & 0xFFFFFFFE;
    if (arg0 != 0) {
        var_r3 = TLobby__data_805D4A98 | 1;
    }
    TLobby__data_805D4A98 = var_r3;
    return 1;
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8001DC24_lbl_80515BC8 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

extern "C" {
extern s32 TLobby__data_805D4A98;
void TLobby__sub_8001DBD8(s32 _w0);
extern RecoveredGlobal_8001DC24_lbl_80515BC8 lbl_80515BC8;

}

extern "C" {

void TLobby__sub_8001DC04(void* p);
void broadcast__6TLobbyFPv(void* a0);
void forward_8001DBD8__6TLobbyFPv(void* p);
s32 is_active__6TLobbyFv(void);

s32 is_active__6TLobbyFv(void) {
    return *((s8* (*)(void))get_card_window_area__6TLobbyFv)() == 0 ? 0 : 1;
}

void TLobby__sub_8001DBD8(s32 _w0) {
    TLobby__data_805D4A98 = 0;
}

void forward_8001DBD8__6TLobbyFPv(void* p) { TLobby__sub_8001DBD8((s32)(p)); }
void TLobby__sub_8001DC04(void* p) { TLobby__sub_8001DBD8((s32)(p)); }

    extern int TLobby__lobby_instance;

typedef char RecoveredGlobal_8001DC24_lbl_80515BC8_size[sizeof(RecoveredGlobal_8001DC24_lbl_80515BC8) == 0x100 ? 1 : -1];
M2C_UNK *get_shared_text_buffer(void) {
    return &lbl_80515BC8.value;
}

void broadcast__6TLobbyFPv(void* a0) { ((int (*)(void*, void*))broadcast_to_players__6TLobbyFii)((void*)(TLobby__lobby_instance), a0); }

}

extern "C" {

void TLobby__sub_8001DE30(void* a0);
void copy_all_entries__6TLobbyFPv(void* a0);

    extern int TLobby__lobby_instance;
void TLobby__sub_8001DE30(void* a0) { ((int (*)(void*, void*))TLobby__sub_8001DF58)((void*)(TLobby__lobby_instance), a0); }

    extern int TLobby__lobby_instance;
void copy_all_entries__6TLobbyFPv(void* a0) { ((int (*)(void*, void*))copy_all_entries__6TLobbyFii)((void*)(TLobby__lobby_instance), a0); }

}

extern "C" {

void copy_data__6TLobbyFPv(void* a0);

    extern int TLobby__lobby_instance;
void copy_data__6TLobbyFPv(void* a0) { ((int (*)(void*, void*))copy_all_data__6TLobbyFii)((void*)(TLobby__lobby_instance), a0); }

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Blk_8001DF0C { s32 w[6]; };

struct Obj_8001DF0C { Blk_8001DF0C a; Blk_8001DF0C b; };

extern "C" {
Obj_8001DF0C *copy_pair__6TLobbyFPvPv(Obj_8001DF0C *d, Obj_8001DF0C *s);
}

extern "C" {

void TLobby__sub_8001DEA8(s32 arg0);

void TLobby__sub_8001DEA8(s32 arg0) {
    TLobby__lobby_instance = arg0;
}

void broadcast_to_players__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 var_r31;

    if (((s32 (*)(void))is_valid_player_index__6TLobbyFi)() != 0) {
        var_r31 = 0;
        do {
            copy_pair__6TLobbyFPvPv((Obj_8001DF0C *)(((s32 (*)(s32, s32))get_player_entry__6TLobbyFii)(var_r31, arg0)), (Obj_8001DF0C *)(arg1));
            var_r31 += 1;
        } while (var_r31 < 4);
    }
}
Obj_8001DF0C *copy_pair__6TLobbyFPvPv(Obj_8001DF0C *d, Obj_8001DF0C *s) {
    d->a = s->a;
    d->b = s->b;
    return d;
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_data__6TLobbyFPvPv(void *arg0, void *arg1);
void copy_entry__6TLobbyFPvPv(void *arg0, void *arg1);
void copy_from__6TLobbyFPvPv(void *arg0, void *arg1);

void TLobby__sub_8001DF58(s32 arg0, s32 arg1) {
    s32 var_r31;

    if (((s32 (*)(void))is_valid_player_index__6TLobbyFi)() != 0) {
        var_r31 = 0;
        do {
            copy_entry__6TLobbyFPvPv((void *)(((s32 (*)(s32, s32))get_entry__6TLobbyFii)(var_r31, arg0)), (void *)(arg1));
            var_r31 += 1;
        } while (var_r31 < 4);
    }
}

void copy_entry__6TLobbyFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg1, s16 *, 0xA);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
}

void copy_all_entries__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 var_r31;

    if (((s32 (*)(void))is_valid_player_index__6TLobbyFi)() != 0) {
        var_r31 = 0;
        do {
            copy_from__6TLobbyFPvPv((void *)(((s32 (*)(s32, s32))TLobby__sub_8001E270)(var_r31, arg0)), (void *)(arg1));
            var_r31 += 1;
        } while (var_r31 < 4);
    }
}

void copy_from__6TLobbyFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) M2C_FIELD(arg1, s16 *, 0x14);
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) M2C_FIELD(arg1, s16 *, 0x16);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) M2C_FIELD(arg1, s16 *, 0x18);
    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) M2C_FIELD(arg1, s16 *, 0x1A);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
}

void copy_all_data__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 var_r31;

    if (((s32 (*)(void))is_valid_player_index__6TLobbyFi)() != 0) {
        var_r31 = 0;
        do {
            copy_data__6TLobbyFPvPv((void *)(((s32 (*)(s32, s32))TLobby__sub_8001E2A8)(var_r31, arg0)), (void *)(arg1));
            var_r31 += 1;
        } while (var_r31 < 4);
    }
}

void copy_data__6TLobbyFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg1, s16 *, 0xA);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) M2C_FIELD(arg1, s16 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) M2C_FIELD(arg1, s16 *, 0xE);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_shared_handler_a__6TLobbyFPv(void* a0);
void dispatch_shared_handler_b__6TLobbyFPv(void* a0);

void register_boss__6TLobbyFPv(void* a0);
void register_object__6TLobbyFPv(void* a0);

u8 is_valid_player_index__6TLobbyFi(s32 arg0) {
    s32 var_r0;

    var_r0 = 0;
    if ((arg0 >= 0) && (arg0 < 0x60)) {
        var_r0 = 1;
    }
    return (u8)var_r0;
}

    extern int TLobby__data_805D4AB4;
void dispatch_shared_handler_a__6TLobbyFPv(void* a0) { get_player_entry__6TLobbyFii((int)((void*)(TLobby__data_805D4AB4)), (int)(a0)); }

    extern int TLobby__data_805D4AB0;
void* get_player_entry__6TLobbyFii(int a0, int a1) {  return (char*)(TLobby__data_805D4AB0) + a1 * 48; }

    extern int TLobby__data_805D4AB4;
void register_object__6TLobbyFPv(void* a0) { get_entry__6TLobbyFii((int)((void*)(TLobby__data_805D4AB4)), (int)(a0)); }

    extern int TLobby__data_805D4AAC;
void* get_entry__6TLobbyFii(int a0, int a1) {  return (char*)(TLobby__data_805D4AAC) + a1 * 32; }

    extern int TLobby__data_805D4AB4;
void dispatch_shared_handler_b__6TLobbyFPv(void* a0) { TLobby__sub_8001E270((int)((void*)(TLobby__data_805D4AB4)), (int)(a0)); }

    extern int TLobby__data_805D4AA8;
void* TLobby__sub_8001E270(int a0, int a1) {  return (char*)(TLobby__data_805D4AA8) + a1 * 48; }

    extern int TLobby__data_805D4AB4;
void register_boss__6TLobbyFPv(void* a0) { TLobby__sub_8001E2A8((int)((void*)(TLobby__data_805D4AB4)), (int)(a0)); }

    extern int TLobby__data_805D4AA4;
void* TLobby__sub_8001E2A8(int a0, int a1) {  return (char*)(TLobby__data_805D4AA4) + a1 * 36; }

extern s32 TLobby__data_805D4AB8;

void set_difficulty__6TLobbyFi(s32 arg0) {
    TLobby__data_805D4AB8 = arg0;
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 *alloc_buffer__11TOBoss4RockFPv(u32 size);
void clamp_difficulty__6TLobbyFi(s32 arg0);

M2C_UNK load_battle_param_entry();
extern u32 TLobby__data_805D4AA0;

extern s32 game_difficulty_selection;
void alloc_battle_param_tables(void);
}

extern "C" {

void bswap__12player_statsFv(void *arg0);
void byteswap_packet__6TLobbyFPv(void* p);
void clamp_difficulty__6TLobbyFi(s32 arg0);
void free_boss4_rock__6TLobbyFv(void);
void swap_endian__6TLobbyFPv(void* p);
void update_difficulty__6TLobbyFv(void);
M2C_UNK load_battle_param_entry();
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void free__11TOBoss4RockFUi(void*);

extern s32 enable_v2_features;

void clamp_difficulty__6TLobbyFi(s32 arg0) {
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0;
    } else if ((s32) enable_v2_features != 0) {
        if (var_r3 >= 4) {
            var_r3 = 3;
        }
    } else if (var_r3 >= 3) {
        var_r3 = 2;
    }
    TLobby__data_805D4AB4 = var_r3;
}

extern s32 TLobby__data_805D4AB8;
extern s32 game_difficulty_selection;

void update_difficulty__6TLobbyFv(void) {
    s32 temp_r31;
    s32 temp_r30;

    temp_r31 = TLobby__data_805D4AB4;
    temp_r30 = TLobby__data_805D4AB8;
    clamp_difficulty__6TLobbyFi((s32)(game_difficulty_selection));
    ((M2C_UNK (*)(void))get_instance__6TLobbyFv)();
    ((M2C_UNK (*)(void))set_difficulty__6TLobbyFi)();
    if (((s32) TLobby__data_805D4AB4 != temp_r31) || ((s32) TLobby__data_805D4AB8 != temp_r30)) {
        load_battle_param_entry();
    }
}

extern u32 TLobby__data_805D4AA0;

void free_boss4_rock__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D4AA0 != 0U) {
        free__11TOBoss4RockFUi((void*)TLobby__data_805D4AA0);
        TLobby__data_805D4AA0 = 0U;
    }
    TLobby__data_805D4AA4 = 0;
    TLobby__data_805D4AA8 = 0;
    TLobby__data_805D4AAC = 0;
    TLobby__data_805D4AB0 = 0;
}

void alloc_battle_param_tables(void) {
    u8 *buf = alloc_buffer__11TOBoss4RockFPv(0x3d80);
    s32 i;
    for (i = 0; i < 0x3d80; i++) {
        buf[i] = 0;
    }
    TLobby__data_805D4AA0 = (u32)buf;
    TLobby__data_805D4AA4 = (s32)buf;
    TLobby__data_805D4AA8 = (s32)(buf + 0xd80);
    TLobby__data_805D4AAC = (s32)(buf + 0x1f80);
    TLobby__data_805D4AB0 = (s32)(buf + 0x2b80);
    clamp_difficulty__6TLobbyFi(game_difficulty_selection);
    ((M2C_UNK (*)(void))get_instance__6TLobbyFv)();
    ((M2C_UNK (*)(void))set_difficulty__6TLobbyFi)();
    load_battle_param_entry();
    TLobby__lobby_instance = 0;
}

void swap_endian__6TLobbyFPv(void* p) { bswap_16__FPUs((void*)(p)); bswap_16__FPUs((void*)((char*)p + 0x2)); bswap_16__FPUs((void*)((char*)p + 0x4)); bswap_16__FPUs((void*)((char*)p + 0x6)); bswap_16__FPUs((void*)((char*)p + 0x8)); bswap_16__FPUs((void*)((char*)p + 0xa)); bswap_32__FPUl((void*)((char*)p + 0xc)); bswap_32__FPUl((void*)((char*)p + 0x10)); bswap_32__FPUl((void*)((char*)p + 0x14)); bswap_32__FPUl((void*)((char*)p + 0x18)); bswap_32__FPUl((void*)((char*)p + 0x1c)); }

void byteswap_packet__6TLobbyFPv(void* p) { bswap_16__FPUs((void*)(p)); bswap_16__FPUs((void*)((char*)p + 0x2)); bswap_16__FPUs((void*)((char*)p + 0x4)); bswap_16__FPUs((void*)((char*)p + 0x6)); bswap_32__FPUl((void*)((char*)p + 0x8)); bswap_32__FPUl((void*)((char*)p + 0xc)); bswap_32__FPUl((void*)((char*)p + 0x10)); bswap_16__FPUs((void*)((char*)p + 0x14)); bswap_16__FPUs((void*)((char*)p + 0x16)); bswap_16__FPUs((void*)((char*)p + 0x18)); bswap_16__FPUs((void*)((char*)p + 0x1a)); bswap_32__FPUl((void*)((char*)p + 0x1c)); bswap_32__FPUl((void*)((char*)p + 0x20)); bswap_32__FPUl((void*)((char*)p + 0x24)); bswap_32__FPUl((void*)((char*)p + 0x28)); bswap_32__FPUl((void*)((char*)p + 0x2c)); }

void bswap__12player_statsFv(void *arg0) {
    bswap_16__FPUs((void*)(arg0));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 2)));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 4)));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 6)));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 8)));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 10)));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 12)));
    bswap_16__FPUs((void*)((void *)((char *)arg0 + 14)));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 16)));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 20)));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 24)));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 28)));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 32)));
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern f32 TLobby__data_805D7EC8;
s32 calc_time_from_hms__6TLobbyFi(s32 arg0);
s32 TLobby__sub_8001E75C(void *arg0);
}

extern "C" {

extern s32 lbl_805D6060;

s32 get_instance__6TLobbyFv(void) {
    return lbl_805D6060;
}
s32 calc_time_from_hms__6TLobbyFi(s32 arg0) {
  s32 *new_var;
  int new_var2;
  s32 temp_r31_2;
  s32 temp_r31;
  temp_r31_2 = TLobby__sub_8001E75C((void *)((void *) (arg0 + 0xC)));
  new_var = &arg0;
  temp_r31 = (temp_r31_2 * 0x3C) + TLobby__sub_8001E75C((void *)((void *) (arg0 + 0xF)));
  new_var2 = (temp_r31 * 0x3C) + TLobby__sub_8001E75C((void *)((void *) ((*new_var) + 0x12)));
  return (s32) (TLobby__data_805D7EC8 * ((f32) new_var2));
}
s32 TLobby__sub_8001E75C(void *arg0) {
    s8 *s = (s8 *)arg0;
    s32 v = (s[0] - '0') * 10;
    v += s[1] - '0';
    return v;
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_alpha_shifted__6TLobbyFf(f32 farg0);

s32 __cvt_fp2unsigned(f32);
extern const f32 lbl_805D7ED4;

s32 calc_alpha_shifted__6TLobbyFf(f32 farg0) {
    return __cvt_fp2unsigned(lbl_805D7ED4 * farg0) << 0x18;
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_result_windows__6TLobbyFv(void);
f32 calc_result_offset__6TLobbyFv(void);
M2C_UNK append_padded_number(s32, M2C_UNK);
M2C_UNK text_builder_reset();

u32 get_name_text_width();
M2C_UNK text_builder_append(M2C_UNK *);

extern M2C_UNK TLobby__data_8050AAAC[];
extern s32 TLobby__data_805D55AC;
extern s32 TLobby__lobby_number;
extern M2C_UNK lbl_805D7ED8;
extern M2C_UNK lbl_805D7EDC;

void close_result_windows__6TLobbyFv(void) {
    text_builder_reset();
    text_builder_append(TLobby__data_8050AAAC);
    text_builder_append(&lbl_805D7ED8);
    append_padded_number(TLobby__data_805D55AC, 2);
    text_builder_append(&lbl_805D7EDC);
    append_padded_number(TLobby__lobby_number + 1, 2);
}

s32 get_main_phase();
extern M2C_UNK lbl_80434A90;
extern f32 TLobby__data_805D7EE0;

f32 calc_result_offset__6TLobbyFv(void) {
    f32 var_f31;

    var_f31 = TLobby__data_805D7EE0;
    if (get_main_phase() == 0xF) {
        close_result_windows__6TLobbyFv();
        ((M2C_UNK (*)(void))get_shared_text_buffer)();
        var_f31 -= (f32) get_name_text_width();
    }
    return var_f31;
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern f32 lbl_805D4AC0;

void TLobby__sub_8001ED74(void);
s32 get_main_phase();

s32 calc_alpha_shifted__6TLobbyFf(f32);
void close_result_windows__6TLobbyFv(void);
void draw_small_font_text(s32, void *, f32, f32, f32);

extern const f32 lbl_805D7EEC;
extern const f32 lbl_805D7EF0;
void TLobby__sub_8001E998(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
}

extern "C" {

s32 TLobby__sub_8001E8B8(void);
void TLobby__sub_8001ED70(void);
f32 calc_phase_offset__6TLobbyFv(void);
s32 get_minutes__6TLobbyFv(void);
s32 get_time_of_day_seconds__6TLobbyFv();
s32 get_main_phase();

extern f32 lbl_805D7EE4;
extern f32 lbl_805D7EE8;

f32 calc_phase_offset__6TLobbyFv(void) {
    f32 var_f31;

    var_f31 = lbl_805D7EE4;
    if (get_main_phase() == 0xF) {
        var_f31 -= lbl_805D7EE8;
    }
    return var_f31;
}

s32 TLobby__sub_8001E8B8(void) {
    return 0x1A5E00;
}

s32 get_minutes__6TLobbyFv(void) {
    return (get_time_of_day_seconds__6TLobbyFv() / 2592) % 1000;
}

typedef struct DateStamp_8001E8FC DateStamp_8001E8FC;
struct DateStamp_8001E8FC
{
  u8 pad0[4];
  u8 h;
  u8 m;
  u8 s;
  u8 pad7;
  u8 pad8[4];
};
u8 *get_global_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK getDateStamp__FP9DateStamp(void *);
s32 get_time_of_day_seconds__6TLobbyFv() {
  u8 *new_var;
  u8 *g;
  s32 base;
  DateStamp_8001E8FC d;
  new_var = &d.h;
  g = get_global_state__23TAdSinglePlyChrSelectGCFv();
  if (g == 0)
  {
    base = TLobby__sub_8001E8B8();
  }
  else
  {
    base = *((s32 *) (g + 8));
  }
  getDateStamp__FP9DateStamp(&d);
  s32 secs = (*new_var) * 60;
  s32 mins = d.m;
  if (g && g)
  {
  }
  secs = (mins + secs) * 60;
  secs = d.s + secs;
  s32 t = (s32) (TLobby__data_805D7EC8 * ((f32) ((s32) secs)));
  t += base;
  return t;
}

void TLobby__sub_8001E998(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f32 temp_f31;
    f32 var_f4;
    s32 temp_r31;
    var_f4 = farg3;
    if (!(var_f4 <= TLobby__data_805D7EE0)) {
        if (var_f4 > lbl_805D7EEC) {
            var_f4 = lbl_805D7EEC;
        }
        temp_f31 = lbl_805D7EF0 / farg2;
        temp_r31 = calc_alpha_shifted__6TLobbyFf(var_f4);
        if (get_main_phase() == 0xF) {
            close_result_windows__6TLobbyFv();
            draw_small_font_text(temp_r31 | 0xFF0000 | 0xFFFF, ((u8* (*)(void))get_shared_text_buffer)(), farg0, lbl_805D7EF0 + farg1, temp_f31);
        }
    }
}

void TLobby__sub_8001ED70(void) {  }
void TLobby__sub_8001ED74(void) {
    lbl_805D4AC0 = TLobby__data_805D7EE0;
}

}
