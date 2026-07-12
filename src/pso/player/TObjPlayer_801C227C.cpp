#include "types.h"

extern "C" {

int __ct__12TPlyCharDataFv(void*);
int TObjPlayer__sub_8001BF10(void*);
int TObjPlayer__sub_80072218(void*);
void* init_char_data__10TObjPlayerFPv(void* p);
int fn_8035B00C(void*);
void TObjPlayer__sub_801C210C(void* p, s32 v);
int TObjPlayer__sub_801C2114(void);
u8 TObjPlayer__sub_801C211C(void* p);
u8 TObjPlayer__sub_801C2124(void* p);
u8 TObjPlayer__sub_801C212C(void* p);
u8 TObjPlayer__sub_801C2134(void* p);
u8 TObjPlayer__sub_801C213C(void* p);
u8 TObjPlayer__sub_801C2144(void* p);
s32 TObjPlayer__sub_801C214C(void* p);
u8 TObjPlayer__sub_801C21AC(void* p);
u8 TObjPlayer__sub_801C21B4(void* p);
u8 TObjPlayer__sub_801C21BC(void* p);
void* TObjPlayer__sub_801C2214(void* p);
u8 TObjPlayer__sub_801C221C(void* p);
u8 TObjPlayer__sub_801C2224(void* p);
u8 TObjPlayer__sub_801C222C(void* p);
u8 TObjPlayer__sub_801C2234(void* p);
u8 TObjPlayer__sub_801C223C(void* p);
void TObjPlayer__sub_801C2244(void* p, s16 v);
int check_flag_at_428__10TObjPlayerFPv(void* p);
void* TObjPlayer__sub_801C22A4(void* p);
void* TObjPlayer__sub_801C22AC(void* p);
s32 TObjPlayer__sub_801C22B4(void* p);
int TObjPlayer__sub_8001BEF8(void*, int);

int check_flag_at_428__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x428, 1); }
void* TObjPlayer__sub_801C22A4(void* p) { return (char*)p + 0x4; }
void* TObjPlayer__sub_801C22AC(void* p) { return (char*)p + 0xc; }
s32 TObjPlayer__sub_801C22B4(void* p) { return *(s32*)((char*)p + 0x0); }
void* init_char_data__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80072218((char*)p + 0x4); __ct__12TPlyCharDataFv((char*)p + 0xc); TObjPlayer__sub_8001BF10((char*)p + 0x428); *(int*)(p) = 0; return p; }

}
