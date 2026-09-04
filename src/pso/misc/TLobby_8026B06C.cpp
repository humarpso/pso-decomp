#include "types.h"

extern "C" {

int fn_8026B074(void);
int fn_8026B0C4(void);
void set_field_90__6TLobbyFPvi(void* p, s32 v);

void set_field_90__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x90) = v; }

int fn_8026B074(void) { return 0; }
int fn_8026B0C4(void) { return 0; }

}
