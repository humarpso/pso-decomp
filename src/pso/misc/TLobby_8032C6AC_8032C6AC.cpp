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

extern M2C_UNK TLobby__data_805434A8[];
extern u32 TLobby__data_805D6CC4;

void destroy_singleton__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D6CC4 != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D6CC4);
        TLobby__data_805D6CC4 = 0U;
    }
    M2C_FIELD(TLobby__data_805434A8, s8 *, 7) = 0;
}

extern u32 TLobby__data_805D6CC4;

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

extern u32 TLobby__data_805D6CC0;
extern s32 TLobby__data_805D6CC8;

void free_buffer__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D6CC0 != 0U) {
        xfree__FPv((void*)TLobby__data_805D6CC0);
        TLobby__data_805D6CC0 = 0U;
    }
    TLobby__data_805D6CC8 = 0;
}

}
