#include "types.h"

extern "C" {

int __ct__12TPlyCharDataFv(void*);
int init_forward__10TObjPlayerFPv(void*);
int clear_header_struct__10TObjPlayerFPv(void*);
void* init_char_data__10TObjPlayerFPv(void* p);
int fn_8035B00C(void*);
void TObjPlayer__sub_801C210C(void* p, s32 v);
int TObjPlayer__sub_801C2114(void);
u8 get_field_5__10TObjPlayerFPv(void* p);
u8 get_byte_4__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801C212C(void* p);
u8 TObjPlayer__sub_801C2134(void* p);
u8 get_team_id__10TObjPlayerFPv(void* p);
u8 get_char_class__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801C214C(void* p);
u8 TObjPlayer__sub_801C21AC(void* p);
u8 TObjPlayer__sub_801C21B4(void* p);
u8 TObjPlayer__sub_801C21BC(void* p);
void* get_ptr_4__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801C221C(void* p);
u8 TObjPlayer__sub_801C2224(void* p);
u8 TObjPlayer__sub_801C222C(void* p);
u8 TObjPlayer__sub_801C2234(void* p);
u8 TObjPlayer__sub_801C223C(void* p);
void TObjPlayer__sub_801C2244(void* p, s16 v);
int check_flag_at_428__10TObjPlayerFPv(void* p);
void* get_sub_obj__10TObjPlayerFPv(void* p);
void* get_char_data__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801C22B4(void* p);
int TObjPlayer__sub_8001BEF8(void*, int);

int check_flag_at_428__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x428, 1); }
void* get_sub_obj__10TObjPlayerFPv(void* p) { return (char*)p + 0x4; }
void* get_char_data__10TObjPlayerFPv(void* p) { return (char*)p + 0xc; }
s32 TObjPlayer__sub_801C22B4(void* p) { return *(s32*)((char*)p + 0x0); }
void* init_char_data__10TObjPlayerFPv(void* p) { clear_header_struct__10TObjPlayerFPv((char*)p + 0x4); __ct__12TPlyCharDataFv((char*)p + 0xc); init_forward__10TObjPlayerFPv((char*)p + 0x428); *(int*)(p) = 0; return p; }

}
