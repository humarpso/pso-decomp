#include "types.h"

extern "C" {

void reset_story_select__6TLobbyFv(void);
s32 is_scene_ready__6TLobbyFv(void);
int TLobby__sub_80207E24(void* p);
void TLobby__sub_80207E44(void);
int TLobby__sub_80207E48(void* p);
int lookup_scene_object__6TLobbyFPv(void* p);
int set_state__16TAdStorySelectGCFi(void*);
int TLobby__sub_802077CC(void*);
int TLobby__sub_8020780C(void*);
int TOBoss4Rock__sub_802078A4(void*);
s32 get_global_state__14TOKeyMachine01Fv();
s32 TScene__sub_801FBA20();

    extern int lbl_805D3628;
void reset_story_select__6TLobbyFv(void) { set_state__16TAdStorySelectGCFi((void*)0); lbl_805D3628 = -1; }

s32 is_scene_ready__6TLobbyFv(void) {
    s32 temp_r3;

    if (get_global_state__14TOKeyMachine01Fv() != 0xF) {
        return 0;
    }
    temp_r3 = TScene__sub_801FBA20();
    if ((temp_r3 >= 0xD) && (temp_r3 < 0xF)) {
        return 1;
    }
    return 0;
}
int TLobby__sub_80207E24(void* p) { return TLobby__sub_8020780C(p); }
void TLobby__sub_80207E44(void) {  }
int TLobby__sub_80207E48(void* p) { return TOBoss4Rock__sub_802078A4(p); }
int lookup_scene_object__6TLobbyFPv(void* p) { return TLobby__sub_802077CC(p); }

}
