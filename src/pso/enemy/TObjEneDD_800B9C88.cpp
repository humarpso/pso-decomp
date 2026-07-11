#include "types.h"

extern "C" {

s32 get_main_phase();
int TObjEneDD__sub_800B9C88(void* p);
int TObjEneDD__sub_800B9CA8(void* p);
int TLobby__sub_800C6C10(void*);
int fn_801A85A0(void*);

int TObjEneDD__sub_800B9C88(void* p) { return fn_801A85A0(p); }
int TObjEneDD__sub_800B9CA8(void* p) { return TLobby__sub_800C6C10(p); }
u8 is_phase_e__9TObjEneDDFv(void) {
    return (u8) (get_main_phase() == 0xE);
}
u8 is_main_phase_15__9TObjEneDDFv(void) {
    return (u8) (get_main_phase() == 0xF);
}

}
