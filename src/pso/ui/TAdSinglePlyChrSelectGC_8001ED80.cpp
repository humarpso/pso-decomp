#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC_8001ED80.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern s32 system_save_payload;

s32 TAdSinglePlyChrSelectGC::get_global_state() {
    return system_save_payload;
}

s32 TLobby__sub_8001ED88(void* p) { return *(s32*)((char*)p + 0x428); }
