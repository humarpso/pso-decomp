#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_8001D768 { u32 f0; u32 f4; u32 f8; u32 fc; };

struct Obj_8001D768 { Ent_8001D768 *ents; u32 count; };

struct Node_8001D7AC { Node_8001D7AC *next; Node_8001D7AC *prev; u32 addr; u32 size; };

struct Pool_8001D7AC { u8 pad[0x2C]; Node_8001D7AC *head; };

struct Node_8001D808 { Node_8001D808 *next; Node_8001D808 *prev; u32 addr; u32 size; };

struct Pool_8001D808 { u8 pad[0x2C]; Node_8001D808 *head; };

extern "C" {
extern s32 lbl_805D4A90;
void TLobby__sub_8001D9DC(void);
s32 set_flag_bit0__6TLobbyFi(s32);
s32 is_active__6TLobbyFv(void);
s32 get_card_window__17TWindowSubComCardFUi(M2C_UNK);
s32 TLobby__sub_8001DC24();
M2C_UNK TWindowSubComCard__sub_80225E80(void *, int);
M2C_UNK strncpy(int, int, int);
extern s32 TLobby__data_805D4A98;
void TLobby__sub_8001DAB4(s32 arg0);
Ent_8001D768 *TLobby__sub_8001D768(Obj_8001D768 *self);
void TLobby__sub_8001D6E0(Pool_8001D7AC *pool);
void TLobby__sub_8001D7AC(Pool_8001D7AC *pool, Node_8001D7AC *node);
Ent_8001D768 *TLobby__sub_8001D768(Obj_8001D768 *self);
Node_8001D808 *TLobby__sub_8001D808(Pool_8001D808 *pool, u32 size);
}

extern "C" {

void TLobby__sub_8001D9E8(void* p);
u32 *free_and_delete__6TLobbyFPvs(u32 *arg0, s16 arg1);
s32 get_card_window_area__6TLobbyFv(void);
u8 *init_memory_pool__6TLobbyFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void send_or_handle_packet__6TLobbyFPvPvPvPvUi(void *arg0, void *arg1, void *arg2, void *arg3, u32 arg4);
M2C_UNK TLobby__sub_8001D568(M2C_UNK, s32);
M2C_UNK TLobby__sub_8001D600(M2C_UNK, void *, s32);
M2C_UNK __dl__FPv(u32 *);
u8 *fn_803DE864(s32, M2C_UNK);
s32 get_card_window__17TWindowSubComCardFUi(M2C_UNK);
M2C_UNK xfree__FPv(u32);

void send_or_handle_packet__6TLobbyFPvPvPvPvUi(void *arg0, void *arg1, void *arg2, void *arg3, u32 arg4) {
    if (arg4 == 0U) {
        TLobby__sub_8001D600(0, arg1, M2C_FIELD(arg2, s32 *, 8));
        return;
    }
    TLobby__sub_8001D568(0, M2C_FIELD(arg1, s32 *, 8));
}

Ent_8001D768 *TLobby__sub_8001D768(Obj_8001D768 *self) {
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

void TLobby__sub_8001D7AC(Pool_8001D7AC *pool, Node_8001D7AC *node) {
    Node_8001D7AC *prev;
    Node_8001D7AC *cur;
    for (prev = pool->head; (cur = prev->next) != 0; prev = cur) {
        if (node->addr < cur->addr) {
            prev->next = node;
            node->next = cur;
            node->prev = prev;
            cur->prev = node;
            TLobby__sub_8001D6E0(pool);
            return;
        }
    }
}

struct Ent_8001D768;
struct Obj_8001D768;
Node_8001D808 *TLobby__sub_8001D808(Pool_8001D808 *pool, u32 size) {
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
                n = (Node_8001D808 *)TLobby__sub_8001D768((Obj_8001D768 *)pool);
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

s32 get_card_window_area__6TLobbyFv(void) {
    return get_card_window__17TWindowSubComCardFUi(0xFFFF) + 0x2050;
}
void TLobby__sub_8001DAB4(s32 arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(get_card_window__17TWindowSubComCardFUi((M2C_UNK)(0xFFFFU)) + 0x2050);
    TWindowSubComCard__sub_80225E80((void *) (arg0), (int) (TLobby__sub_8001DC24()));
    strncpy((int) (temp_r31), (int) (TLobby__sub_8001DC24()), (int) (0xAB));
    M2C_FIELD(temp_r31, s8 *, 0xAB) = 0;
    TLobby__data_805D4A98 |= 4;
    if (is_active__6TLobbyFv() != 0) {
        set_flag_bit0__6TLobbyFi(1);
        return;
    }
    set_flag_bit0__6TLobbyFi(0);
}

}
