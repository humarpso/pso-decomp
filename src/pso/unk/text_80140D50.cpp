#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjPlayer__sub_8030A2CC(void* p, void* a1, void* a2);
void TObjPlayer__sub_8030A2CC(void* p, void* a1, void* a2);
void TObjPlayer__sub_8030A030(void *arg0, void *arg1);
void fn_80140DFC(s32 arg0, s32 arg1);
s32 TLobby__sub_80141030(void *);
M2C_UNK fn_80140E38(void *, void *);
void TObjPlayer__sub_8030A030(void *arg0, void *arg1);
void TObjPlayer__sub_8030A2CC(void* p, void* a1, void* a2);
void fn_80140DFC(s32 arg0, s32 arg1);
void TObjPlayer__sub_8030A2CC(void* p, void* a1, void* a2);
void TObjPlayer__sub_8030A030(void *arg0, void *arg1);
void fn_80140EA8(s32 arg0, s32 arg1);
s32 TLobby__sub_80141030(void *);
M2C_UNK fn_80140EE4(void *, void *);
void fn_80140EA8(s32 arg0, s32 arg1);
}

extern "C" {

struct VOff_80309DD0_arg0_80309dd0_80309D80 { char pad_0[0x4]; char f_4[1]; };
void fn_80140DFC(s32 arg0, s32 arg1) {
    fn_80140E38((void *) (arg0), (void *) (TLobby__sub_80141030((void *) (arg1))));
}
void fn_80140EA8(s32 arg0, s32 arg1) {
    fn_80140EE4((void *) (arg0), (void *) (TLobby__sub_80141030((void *) (arg1))));
}

}
