#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_singleton__6TLobbyFv(void);
void free_buffer__6TLobbyFv(void);
void init_graph__6TLobbyFv(void);
u32 create__8TDLGraphFv();
void queue_destruction__7TObjectFv(void*);
M2C_UNK set_graph_param__8TDLGraphFPvi(M2C_UNK, M2C_UNK);
void xfree__FPv(void*);
void alloc_buffer__6TLobbyFv(void);
s32 xmalloc__FUl(M2C_UNK);
int TLobby__sub_8032C91C(void* p);
u8 get_selected_slot__6TLobbyFv(void);
void send_data__6TLobbyFi(s32 arg0);
void update_alloc_size__6TLobbyFv(void);
M2C_UNK load_from_aram_sync__16TAdWarningBaseGCFi(void*);
u32 TAdWarningBaseGC__sub_8032D020();
M2C_UNK update_graph__8TDLGraphFii(s32, M2C_UNK);
M2C_UNK read_disc_file(s32, u32);
s32 TLobby__sub_801F34F8();
int GBAInit(void*);
s32 GBAGetProcessStatus(M2C_UNK, u8 *);
u32 get_alloc_size__16TAdWarningBaseGCFv();
u32 update_lobby_scene__6TSceneFPv();

extern u32 TLobby__data_805D6CC0;
extern u32 TLobby__data_805D6CC4;
extern u32 TLobby__data_805D6CC8;

extern M2C_UNK TLobby__data_805434A8[];
void destroy_singleton__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D6CC4 != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D6CC4);
        TLobby__data_805D6CC4 = 0U;
    }
    M2C_FIELD(TLobby__data_805434A8, s8 *, 7) = 0;
}

void init_graph__6TLobbyFv(void) {
    u32 temp_r3;

    if ((u32) TLobby__data_805D6CC4 == 0U) {
        temp_r3 = create__8TDLGraphFv();
        TLobby__data_805D6CC4 = temp_r3;
        if (temp_r3 != 0U) {
            set_graph_param__8TDLGraphFPvi(temp_r3, 2);
        }
    }
}

void free_buffer__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D6CC0 != 0U) {
        xfree__FPv((void*)TLobby__data_805D6CC0);
        TLobby__data_805D6CC0 = 0U;
    }
    TLobby__data_805D6CC8 = 0;
}

void alloc_buffer__6TLobbyFv(void) {
    TLobby__data_805D6CC0 = 0;
    TLobby__data_805D6CC8 = 0;
    TLobby__data_805D6CC0 = xmalloc__FUl(0x40000);
    TLobby__data_805D6CC8 = 0;
}

void send_data__6TLobbyFi(s32 arg0) {
    u32 temp_r3;

    temp_r3 = update_lobby_scene__6TSceneFPv();
    TLobby__data_805D6CC8 = temp_r3;
    if (temp_r3 > 0x40000U) {
        TLobby__data_805D6CC8 = 0U;
        return;
    }
    if ((u32) TLobby__data_805D6CC0 != 0U) {
        read_disc_file(arg0, TLobby__data_805D6CC0);
        return;
    }
    TLobby__data_805D6CC8 = 0U;
}

void update_alloc_size__6TLobbyFv(void) {
    u32 temp_r3;

    temp_r3 = TAdWarningBaseGC__sub_8032D020();
    TLobby__data_805D6CC8 = temp_r3;
    if (temp_r3 > 0x40000U) {
        TLobby__data_805D6CC8 = 0U;
        return;
    }
    if ((u32) TLobby__data_805D6CC0 != 0U) {
        load_from_aram_sync__16TAdWarningBaseGCFi((void*)TLobby__data_805D6CC0);
        TLobby__data_805D6CC8 = get_alloc_size__16TAdWarningBaseGCFv();
        return;
    }
    TLobby__data_805D6CC8 = 0U;
}

int TLobby__sub_8032C91C(void* p) { return GBAInit(p); }

u8 get_selected_slot__6TLobbyFv(void) {
    u8 sp8;

    if (TLobby__sub_801F34F8() == 3) {
        if (GBAGetProcessStatus(3, &sp8) == 0) {
            return 0U;
        }
        if ((u32) TLobby__data_805D6CC4 != 0U) {
            update_graph__8TDLGraphFii(sp8 + 1, 0x65);
        }
        return sp8;
    }
    return 0U;
}

}
