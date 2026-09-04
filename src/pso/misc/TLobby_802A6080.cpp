#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjSuisoChip__vt10(void);
void TObjSuisoChip__vt6(void);
void TObjSuisoChip__vt8(void* p);
int get_max_players__6TLobbyFv(void);
M2C_UNK TObjChip__vt6();
int TObjChip__vt8(void*, void*);
int TWindowSnapShot__sub_802A5D28(void*);
s32 alloc_buffer__15TWindowSnapShotFPv(void *);
s32 fn_802A5C7C(void *);
s32 fn_802A5CB8(void *);
s32 fn_802A5CC4(void *, s32);
void fn_802A6070(void* p, s32 v);
void fn_802A6078(void* p, s32 v);
s32 get_buffer_size__15TWindowSnapShotFPv(void* p);
int get_width__15TWindowSnapShotFv(void);
s32 init__15TWindowSnapShotFPvi();
s32 open_stream__15TWindowSnapShotFPvi(void *, s32);
int reset__15TWindowSnapShotFPv(void*);
void set_mode__15TWindowSnapShotFPvi(void* p, s32 v);

int get_max_players__6TLobbyFv(void) { return 8; }

void TObjSuisoChip__vt6(void) {
    TObjChip__vt6();
}

void TObjSuisoChip__vt8(void* p) { TObjChip__vt8(p, (char*)p + 0x234); }

int TObjSuisoChip__vt10(void) { return 0; }

}
