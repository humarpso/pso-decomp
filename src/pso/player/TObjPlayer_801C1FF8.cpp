#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_801C2154 { u8 pad[7]; char v; u8 pad2[0x14]; };

struct O_801C2154 { E_801C2154 recs[8]; };

struct E_801C2180 { u8 pad[7]; char v; u8 pad2[0x14]; };

struct O_801C2180 { E_801C2180 recs[8]; };

struct E_801C21C4 { u8 pad[6]; u8 v; u8 pad2[0x15]; };

struct O_801C21C4 { E_801C21C4 recs[8]; };

struct O_801C21D4 { u8 pad[0x3a1]; u8 id; u8 pad2[0x408 - 0x3a2]; u8 arr[1]; };

struct S_801C20A4 { u16 f0; s16 f2; s32 f4; f32 f8; f32 fC; f32 f10; s32 f14; u8 f18[1]; };

extern "C" {
s32 TObjPlayer__sub_801C2044(s32 *arg0);
u32 TObjPlayer__sub_801C2154(O_801C2154 *self);
u32 TObjPlayer__sub_801C2180(O_801C2180 *self);
u8 TObjPlayer__sub_801C21C4(O_801C21C4 *self, s32 i);
void is_slot_within_limit__10TObjPlayerFiiUc(u8 id, s16 i, u8 v);
u8 get_slot_value_checked__10TObjPlayerFPvi(O_801C21D4 *self, s32 i);
void __dl__FPv(void *);
void __destroy_arr(void *, void *, int, int);
void TObjPlayer__sub_801AA528(void);
void *fn_801C2308(void *arg0, s16 arg1);
void __construct_array(void *, void *, void *, int, int);
void TObjPlayer__sub_801AA528(void);
void init_arrays__10TObjPlayerFi(void);
void *fn_801C2360(void *arg0);
int init_forward__10TObjPlayerFPv(void*);
void set_state__9TTecLukerFPvi(void *, s32);
extern const f32 TObjPlayer__data_805DC278;
S_801C20A4 *TObjPlayer__sub_801C20A4(S_801C20A4 *arg0);
}

extern "C" {

void* TObjPlayer__sub_801C2058(void* p);
void TObjPlayer__sub_801C2098(void* p);
void TObjPlayer__sub_801C210C(void* p, s32 v);
int TObjPlayer__sub_801C2114(void);
u8 TObjPlayer__sub_801C212C(void* p);
u8 TObjPlayer__sub_801C2134(void* p);
s32 get_level_row_exp_threshold(void* p);
u8 TObjPlayer__sub_801C21AC(void* p);
u8 TObjPlayer__sub_801C21B4(void* p);
u8 TObjPlayer__sub_801C21BC(void* p);
u8 TObjPlayer__sub_801C221C(void* p);
u8 TObjPlayer__sub_801C2224(void* p);
u8 TObjPlayer__sub_801C222C(void* p);
u8 TObjPlayer__sub_801C2234(void* p);
u8 TObjPlayer__sub_801C223C(void* p);
void TObjPlayer__sub_801C2244(void* p, s16 v);
s32 TObjPlayer__sub_801C22B4(void* p);
int check_flag_at_428__10TObjPlayerFPv(void* p);
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
int test_flags_any(void*, int);
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

S_801C20A4 *TObjPlayer__sub_801C20A4(S_801C20A4 *arg0) {
    init_forward__10TObjPlayerFPv(arg0->f18);
    arg0->f0 = 0xFFFF;
    arg0->f4 = 0;
    arg0->f8 = TObjPlayer__data_805DC278;
    arg0->fC = TObjPlayer__data_805DC278;
    arg0->f10 = TObjPlayer__data_805DC278;
    arg0->f14 = 0;
    arg0->f2 = 0;
    set_state__9TTecLukerFPvi(arg0->f18, 0xFFFF);
    return arg0;
}

void TObjPlayer__sub_801C210C(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
int TObjPlayer__sub_801C2114(void) { return 0; }
u8 get_field_5__10TObjPlayerFPv(void* p) { return *(u8*)((char*)p + 0x5); }
u8 get_byte_4__10TObjPlayerFPv(void* p) { return *(u8*)((char*)p + 0x4); }
u8 TObjPlayer__sub_801C212C(void* p) { return *(u8*)((char*)p + 0x3); }
u8 TObjPlayer__sub_801C2134(void* p) { return *(u8*)((char*)p + 0x2); }
u8 get_team_id__10TObjPlayerFPv(void* p) { return *(u8*)((char*)p + 0x1); }
u8 get_char_class__10TObjPlayerFPv(void* p) { return *(u8*)((char*)p + 0x0); }
s32 get_level_row_exp_threshold(void* p) { return *(s32*)((char*)p + 0x8); }

u32 TObjPlayer__sub_801C2154(O_801C2154 *self) {
    u32 r = (u8)self->recs[4].v;
    r |= (u8)self->recs[5].v << 8;
    r |= (u8)self->recs[6].v << 16;
    r |= (u8)self->recs[7].v << 24;
    return r;
}

u32 TObjPlayer__sub_801C2180(O_801C2180 *self) {
    u32 r = (u8)self->recs[0].v;
    r |= (u8)self->recs[1].v << 8;
    r |= (u8)self->recs[2].v << 16;
    r |= (u8)self->recs[3].v << 24;
    return r;
}

u8 TObjPlayer__sub_801C21AC(void* p) { return *(u8*)((char*)p + 0x1ab); }
u8 TObjPlayer__sub_801C21B4(void* p) { return *(u8*)((char*)p + 0x18f); }
u8 TObjPlayer__sub_801C21BC(void* p) { return *(u8*)((char*)p + 0x173); }

u8 TObjPlayer__sub_801C21C4(O_801C21C4 *self, s32 i) {
    return self->recs[i].v;
}

u8 get_slot_value_checked__10TObjPlayerFPvi(O_801C21D4 *self, s32 i) {
    u8 v = self->arr[i];
    is_slot_within_limit__10TObjPlayerFiiUc(self->id, i, v);
    return v;
}

void* get_ptr_4__10TObjPlayerFPv(void* p) { return (char*)p + 0x4; }
u8 TObjPlayer__sub_801C221C(void* p) { return *(u8*)((char*)p + 0x157); }
u8 TObjPlayer__sub_801C2224(void* p) { return *(u8*)((char*)p + 0x13b); }
u8 TObjPlayer__sub_801C222C(void* p) { return *(u8*)((char*)p + 0x11f); }
u8 TObjPlayer__sub_801C2234(void* p) { return *(u8*)((char*)p + 0x103); }
u8 TObjPlayer__sub_801C223C(void* p) { return *(u8*)((char*)p + 0xe7); }
void TObjPlayer__sub_801C2244(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void* setup_ctrl__10TObjPlayerFPv(void* p) { fn_8035B00C(p); return p; }

int check_flag_at_428__10TObjPlayerFPv(void* p) { return test_flags_any((char*)p + 0x428, 1); }
void* get_sub_obj__10TObjPlayerFPv(void* p) { return (char*)p + 0x4; }
void* get_char_data__10TObjPlayerFPv(void* p) { return (char*)p + 0xc; }
s32 TObjPlayer__sub_801C22B4(void* p) { return *(s32*)((char*)p + 0x0); }
void* init_char_data__10TObjPlayerFPv(void* p) { clear_header_struct__10TObjPlayerFPv((char*)p + 0x4); __ct__12TPlyCharDataFv((char*)p + 0xc); init_forward__10TObjPlayerFPv((void*)((char*)p + 0x428)); *(int*)(p) = 0; return p; }

void *fn_801C2308(void *arg0, s16 arg1) {
    if (arg0 != 0) {
        __destroy_arr(arg0, (void *)TObjPlayer__sub_801AA528, 0x18, 4);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}
void *fn_801C2360(void *arg0) {
    __construct_array(arg0, (void *)init_arrays__10TObjPlayerFi, (void *)TObjPlayer__sub_801AA528, 0x18, 4);
    return arg0;
}

}
