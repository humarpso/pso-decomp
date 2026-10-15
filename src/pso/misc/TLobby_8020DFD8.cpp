#include "types.h"

extern "C" {

void free_resources__6TLobbyFv(void);
void __dt__5THeapFv(void*, int);
void free_and_delete__6TLobbyFPvs(void*, int);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

extern u32 TLobby__data_805D6104;
extern u32 TLobby__data_805D6108;
extern u32 TLobby__data_805D6138;
extern u32 TLobby__data_805D613C;
extern u32 TLobby__data_805D6140;
extern u32 TLobby__data_805D6144;

void free_resources__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D6144 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__data_805D6144);
        TLobby__data_805D6144 = 0U;
    }
    if ((u32) TLobby__data_805D6140 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__data_805D6140);
        TLobby__data_805D6140 = 0U;
    }
    if ((u32) TLobby__data_805D6108 != 0U) {
        __dt__5THeapFv((void*)TLobby__data_805D6108, 1);
        TLobby__data_805D6108 = 0U;
    }
    if ((u32) TLobby__data_805D6104 != 0U) {
        free_and_delete__6TLobbyFPvs((void*)TLobby__data_805D6104, 1);
        TLobby__data_805D6104 = 0U;
    }
    if ((u32) TLobby__data_805D613C != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__data_805D613C);
        TLobby__data_805D613C = 0U;
    }
    if ((u32) TLobby__data_805D6138 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__data_805D6138);
        TLobby__data_805D6138 = 0U;
    }
}

}
