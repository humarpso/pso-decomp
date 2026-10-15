#include "types.h"
#include "pso/ui/TAdDialingGC.h"

extern "C" {
s32 is_handle_valid__10TObjPlayerFv();
s32 TLobby__sub_80328F48(void);
s32 is_handle_valid__10TObjPlayerFv();
s32 TLobby__sub_80328EE8(void);
s32 is_handle_valid__10TObjPlayerFv();
s32 TLobby__sub_80328F18(void);
}

extern "C" {

s32 TLobby__sub_802A0F70();
s32 TLobby__sub_802A5154();
s32 free_dialing_gc__6TLobbyFv();
s32 free_dialog_global__6TLobbyFv();

extern s32 TAdDialingGC__instance;

void TAdDialingGC::close() {
    free_dialing_gc__6TLobbyFv();
    free_dialog_global__6TLobbyFv();
    TAdDialingGC__instance = 0;
}

extern s32 TAdDialingGC__instance;

void TAdDialingGC::open() {
    TAdDialingGC__instance = 0;
    TLobby__sub_802A0F70();
    TLobby__sub_802A5154();
}

s32 TLobby__sub_80328EE8(void) {
    s32 t = is_handle_valid__10TObjPlayerFv();
    s32 r = 2;
    if (t == 2) {
        r = 5;
    }
    return r;
}

s32 TLobby__sub_80328F18(void) {
    s32 t = is_handle_valid__10TObjPlayerFv();
    s32 r = 1;
    if (t == 2) {
        r = 4;
    }
    return r;
}

s32 TLobby__sub_80328F48(void) {
    return ((is_handle_valid__10TObjPlayerFv() - 2) == 0) ? 3 : 0;
}

}
