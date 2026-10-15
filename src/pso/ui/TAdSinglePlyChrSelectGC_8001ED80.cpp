#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

s32 TLobby__sub_8001ED88(void* p);
int fn_8001ED90(void* p);

extern s32 system_save_payload;

s32 TAdSinglePlyChrSelectGC::get_global_state() {
    return system_save_payload;
}

s32 TLobby__sub_8001ED88(void* p) { return *(s32*)((char*)p + 0x428); }

}
