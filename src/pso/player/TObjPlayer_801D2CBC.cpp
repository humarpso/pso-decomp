#include "types.h"

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
void* TObjPlayer__sub_801D28A0(void* p, void* a1);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
f32 TObjPlayer__sub_801D2858(void* p);
s32 TObjPlayer__sub_801D2870(void* p);
s32 TObjPlayer__sub_801D2878(void* p);
int TObjPlayer__sub_801D2880(void* p);
int TObjPlayer__sub_801D29A8(void* p);
int TObjPlayer__sub_801D29D0(void* p);
int TObjPlayer__sub_801D29F8(void* p);
int check_flag_clear__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2A50(void* p);
void TObjPlayer__sub_801D2A78(void* p, f32 v);
s32 TObjPlayer__sub_801D2A80(void* p);
f32 TObjPlayer__sub_801D2A98(void* p);
void TObjPlayer__sub_801D2AA0(void* p, f32 v);
void TObjPlayer__sub_801D2AA8(void* p, s32 v);
void TObjPlayer__sub_801D2AC4(void* p, f32 v);
int TObjPlayer__sub_801D2ACC(void* p);
f32 TObjPlayer__sub_801D2AF4(void* p);
int TObjPlayer__sub_801D2B08(void* p);
void TObjPlayer__sub_801D2C74(void* p, s32 v);
void TObjPlayer__sub_801D2C7C(void* p, u8 v);
int TObjPlayer__sub_801D2C84(void* p);
f32 TObjPlayer__sub_801D2CBC(void* p);
void TObjPlayer__sub_801D2CC4(void* p, f32 v);
void* TObjPlayer__sub_801D2CCC(void* p);
void TObjPlayer__sub_801D2CD4(void* p, u8 v);
f32 TObjPlayer__sub_801D2CDC(void* p);
void TObjPlayer__sub_801D2CE4(void* p, s16 v);
void* TObjPlayer__sub_801D2CEC(void* p);
int bswap_32__FPUl(void*);
int fn_8001BED8(void*, int);
int TAdRicoRing__sub_8001BEE8(void*, int);
int fn_8001BEF8(void*, int);
int fn_801D7BF4(void*);

f32 TObjPlayer__sub_801D2CBC(void* p) { return *(f32*)((char*)p + 0x14); }
void TObjPlayer__sub_801D2CC4(void* p, f32 v) { *(f32*)((char*)p + 0x14) = v; }
void* TObjPlayer__sub_801D2CCC(void* p) { return (char*)p + 0x20; }
void TObjPlayer__sub_801D2CD4(void* p, u8 v) { *(u8*)((char*)p + 0x1) = v; }
f32 TObjPlayer__sub_801D2CDC(void* p) { return *(f32*)((char*)p + 0x4); }
void TObjPlayer__sub_801D2CE4(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void* TObjPlayer__sub_801D2CEC(void* p) { return (char*)p + 0xc; }

}
