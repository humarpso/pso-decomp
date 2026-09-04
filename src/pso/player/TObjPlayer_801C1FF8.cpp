#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjPlayer__sub_801C2044(s32 *arg0);
}

extern "C" {

void* TObjPlayer__sub_801C2058(void* p);
void TObjPlayer__sub_801C2098(void* p);
void TObjPlayer__sub_801C210C(void* p, s32 v);
int TObjPlayer__sub_801C2114(void);
u8 TObjPlayer__sub_801C212C(void* p);
u8 TObjPlayer__sub_801C2134(void* p);
s32 TObjPlayer__sub_801C214C(void* p);
int TObjPlayer__sub_801C2154(void);
int TObjPlayer__sub_801C2180(void);
u8 TObjPlayer__sub_801C21AC(void* p);
u8 TObjPlayer__sub_801C21B4(void* p);
u8 TObjPlayer__sub_801C21BC(void* p);
int TObjPlayer__sub_801C21C4(void);
int TObjPlayer__sub_801C21D4(void);
u8 TObjPlayer__sub_801C221C(void* p);
u8 TObjPlayer__sub_801C2224(void* p);
u8 TObjPlayer__sub_801C222C(void* p);
u8 TObjPlayer__sub_801C2234(void* p);
u8 TObjPlayer__sub_801C223C(void* p);
void TObjPlayer__sub_801C2244(void* p, s16 v);
s32 TObjPlayer__sub_801C22B4(void* p);
int check_flag_at_428__10TObjPlayerFPv(void* p);
int fn_801C2308(void);
int fn_801C2360(void);
u8 get_byte_4__10TObjPlayerFPv(void* p);
u8 get_char_class__10TObjPlayerFPv(void* p);
void* get_char_data__10TObjPlayerFPv(void* p);
u8 get_field_5__10TObjPlayerFPv(void* p);
void* get_ptr_4__10TObjPlayerFPv(void* p);
void* get_sub_obj__10TObjPlayerFPv(void* p);
u8 get_team_id__10TObjPlayerFPv(void* p);
void *init__10TObjPlayerFPv(void *arg0);
void* init_c2098_return_self__10TObjPlayerFPv(void* p);
void* init_char_data__10TObjPlayerFPv(void* p);
void set_field4__10TObjPlayerFPvi(void* p, s32 v);
void* setup_ctrl__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_8001BEF8(void*, int);
void TObjPlayer__sub_8012AF00(void *);
int __ct__12TPlyCharDataFv(void*);
int clear_header_struct__10TObjPlayerFPv(void*);
int fn_8035B00C(void*);
int init_forward__10TObjPlayerFPv(void*);
void reset_movement_state__10TObjPlayerFPv(void *);

extern const f32 TObjPlayer__data_805DC294;

void *init__10TObjPlayerFPv(void *arg0) {
    init_forward__10TObjPlayerFPv((void*)((void *)((char *)arg0 + 12)));
    TObjPlayer__sub_8012AF00((void *)((char *)arg0 + 48));
    M2C_FIELD(arg0, f32 *, 0x8) = TObjPlayer__data_805DC294;
    reset_movement_state__10TObjPlayerFPv(arg0);
    return arg0;
}

s32 TObjPlayer__sub_801C2044(s32 *arg0) {
    return *arg0 > 0;
}

void* TObjPlayer__sub_801C2058(void* p) { return (char*)p + 0x8; }
void set_field4__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void* init_c2098_return_self__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801C2098((void*)(p)); return p; }
void TObjPlayer__sub_801C2098(void* p) { *(s32*)((char*)p + 0x0) = 0; }

void TObjPlayer__sub_801C210C(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
int TObjPlayer__sub_801C2114(void) { return 0; }
u8 get_field_5__10TObjPlayerFPv(void* p) { return *(u8*)((char*)p + 0x5); }
u8 get_byte_4__10TObjPlayerFPv(void* p) { return *(u8*)((char*)p + 0x4); }
u8 TObjPlayer__sub_801C212C(void* p) { return *(u8*)((char*)p + 0x3); }
u8 TObjPlayer__sub_801C2134(void* p) { return *(u8*)((char*)p + 0x2); }
u8 get_team_id__10TObjPlayerFPv(void* p) { return *(u8*)((char*)p + 0x1); }
u8 get_char_class__10TObjPlayerFPv(void* p) { return *(u8*)((char*)p + 0x0); }
s32 TObjPlayer__sub_801C214C(void* p) { return *(s32*)((char*)p + 0x8); }

int TObjPlayer__sub_801C2154(void) { return 0; }
int TObjPlayer__sub_801C2180(void) { return 0; }

u8 TObjPlayer__sub_801C21AC(void* p) { return *(u8*)((char*)p + 0x1ab); }
u8 TObjPlayer__sub_801C21B4(void* p) { return *(u8*)((char*)p + 0x18f); }
u8 TObjPlayer__sub_801C21BC(void* p) { return *(u8*)((char*)p + 0x173); }

int TObjPlayer__sub_801C21C4(void) { return 0; }
int TObjPlayer__sub_801C21D4(void) { return 0; }

void* get_ptr_4__10TObjPlayerFPv(void* p) { return (char*)p + 0x4; }
u8 TObjPlayer__sub_801C221C(void* p) { return *(u8*)((char*)p + 0x157); }
u8 TObjPlayer__sub_801C2224(void* p) { return *(u8*)((char*)p + 0x13b); }
u8 TObjPlayer__sub_801C222C(void* p) { return *(u8*)((char*)p + 0x11f); }
u8 TObjPlayer__sub_801C2234(void* p) { return *(u8*)((char*)p + 0x103); }
u8 TObjPlayer__sub_801C223C(void* p) { return *(u8*)((char*)p + 0xe7); }
void TObjPlayer__sub_801C2244(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void* setup_ctrl__10TObjPlayerFPv(void* p) { fn_8035B00C(p); return p; }

int check_flag_at_428__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x428, 1); }
void* get_sub_obj__10TObjPlayerFPv(void* p) { return (char*)p + 0x4; }
void* get_char_data__10TObjPlayerFPv(void* p) { return (char*)p + 0xc; }
s32 TObjPlayer__sub_801C22B4(void* p) { return *(s32*)((char*)p + 0x0); }
void* init_char_data__10TObjPlayerFPv(void* p) { clear_header_struct__10TObjPlayerFPv((char*)p + 0x4); __ct__12TPlyCharDataFv((char*)p + 0xc); init_forward__10TObjPlayerFPv((void*)((char*)p + 0x428)); *(int*)(p) = 0; return p; }

int fn_801C2308(void) { return 0; }
int fn_801C2360(void) { return 0; }

}
