#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__6TLobbyFv(void);
void __dt__5THeapFv(void*, int);
void TLobby__sub_8001D8D8(void*, int);
void TAdSinglePlyChrSelectGC__sub_8007EBB4(void*);

extern u32 TLobby__data_805D6104;
extern u32 TLobby__data_805D6108;
extern u32 TLobby__data_805D6138;
extern u32 TLobby__data_805D613C;
extern u32 TLobby__data_805D6140;
extern u32 TLobby__data_805D6144;

void free_resources__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D6144 != 0U) {
        TAdSinglePlyChrSelectGC__sub_8007EBB4((void*)TLobby__data_805D6144);
        TLobby__data_805D6144 = 0U;
    }
    if ((u32) TLobby__data_805D6140 != 0U) {
        TAdSinglePlyChrSelectGC__sub_8007EBB4((void*)TLobby__data_805D6140);
        TLobby__data_805D6140 = 0U;
    }
    if ((u32) TLobby__data_805D6108 != 0U) {
        __dt__5THeapFv((void*)TLobby__data_805D6108, 1);
        TLobby__data_805D6108 = 0U;
    }
    if ((u32) TLobby__data_805D6104 != 0U) {
        TLobby__sub_8001D8D8((void*)TLobby__data_805D6104, 1);
        TLobby__data_805D6104 = 0U;
    }
    if ((u32) TLobby__data_805D613C != 0U) {
        TAdSinglePlyChrSelectGC__sub_8007EBB4((void*)TLobby__data_805D613C);
        TLobby__data_805D613C = 0U;
    }
    if ((u32) TLobby__data_805D6138 != 0U) {
        TAdSinglePlyChrSelectGC__sub_8007EBB4((void*)TLobby__data_805D6138);
        TLobby__data_805D6138 = 0U;
    }
}

}
