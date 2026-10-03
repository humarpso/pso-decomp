#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Word12 { int w; u8 _[8]; };

struct ObjArr254 { u8 _pad[0x25c]; Word12 arr[1]; };

struct ObjArrFC  { u8 _pad[0xfc];  u16 arr[1];     };

struct R_800193FC { s32 a; f32 b; s32 c; };

struct O_800193FC { u8 pad[0x254]; R_800193FC recs[1]; };

struct R_8001940C { s32 a; f32 b; s32 c; };

struct O_8001940C { u8 pad[0x254]; R_8001940C recs[1]; };

struct R_8001941C { s32 a; f32 b; s32 c; };

struct O_8001941C { u8 pad[0x254]; R_8001941C recs[1]; };

struct R_800194AC { s32 a; f32 b; s32 c; };

struct O_800194AC { u8 pad[0x254]; R_800194AC recs[1]; };

extern "C" {
s16 test_immunity_flags__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
u8 obj_is_hit_receivable(u8 *arg0);
int TObjPlayer__sub_8001943C(ObjArr254* p, int i);
void TObjPlayer__sub_800193FC(O_800193FC *self, s32 i, s32 v);
void TObjPlayer__sub_8001940C(O_8001940C *self, s32 i, s32 v);
void TObjPlayer__sub_8001941C(O_8001941C *self, s32 i, f32 v);
s32 TObjPlayer__sub_800194AC(O_800194AC *self, s32 i, s32 v);
}

extern "C" {

s16 TObjPlayer__sub_8001944C(void* p);
s16 TObjPlayer__sub_800194C4(void* p);
s16 TObjPlayer__sub_800194E8(void* p);
s16 TObjPlayer__sub_800194F0(void* p);
void TObjPlayer__sub_8001951C(void* p);
void TObjPlayer__sub_80019568(void* p, s16 v);
void add_flags_2e4__10TObjPlayerFPvUi(void* p, u32 v);
s32 get_field_0c__10TObjPlayerFPv(void* p);
s16 get_id__10TObjPlayerFPv(void* p);
s16 get_level__10TObjPlayerFPv(void* p);
s16 get_model_animation_id__10TObjPlayerFPv(void* p);
int get_player_data__10TObjPlayerFi(int a0);
f32 get_pos_x__10TObjPlayerFPv(void* p);
f32 get_target_value__10TObjPlayerFPv(void* p);
void* init_192dc_return_self__10TObjPlayerFPv(void* p);
s32 update_field_318__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_800192DC(void*);

s16 get_model_animation_id__10TObjPlayerFPv(void* p) { return get_id__10TObjPlayerFPv((void*)(*(void**)((char*)p + 0x318))); }
s16 get_id__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x0); }

void TObjPlayer__sub_800193FC(O_800193FC *self, s32 i, s32 v) {
    self->recs[i].c = v;
}

void TObjPlayer__sub_8001940C(O_8001940C *self, s32 i, s32 v) {
    self->recs[i].a = v;
}

void TObjPlayer__sub_8001941C(O_8001941C *self, s32 i, f32 v) {
    self->recs[i].b = v;
}

s16 test_immunity_flags__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    return (s16) (M2C_FIELD(arg0, s16 *, 0x11C) & arg1);
}

#pragma push
#pragma scheduling off
int TObjPlayer__sub_8001943C(ObjArr254* p, int i) {
    return p->arr[i].w;
}
#pragma scheduling on
#pragma scheduling off
#pragma pop

s16 TObjPlayer__sub_8001944C(void* p) { return *(s16*)((char*)p + 0x2d0); }
s32 update_field_318__10TObjPlayerFPv(void* p) { return get_field_0c__10TObjPlayerFPv((void*)(*(void**)((char*)p + 0x318))); }
s32 get_field_0c__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0xc); }
f32 get_target_value__10TObjPlayerFPv(void* p) { return get_pos_x__10TObjPlayerFPv((void*)(*(void**)((char*)p + 0x318))); }
f32 get_pos_x__10TObjPlayerFPv(void* p) { return *(f32*)((char*)p + 0x8); }

s32 TObjPlayer__sub_800194AC(O_800194AC *self, s32 i, s32 v) {
    return self->recs[i].c += v;
}

s16 TObjPlayer__sub_800194C4(void* p) { return TObjPlayer__sub_800194E8((void*)(*(void**)((char*)p + 0x318))); }
s16 TObjPlayer__sub_800194E8(void* p) { return *(s16*)((char*)p + 0x4); }
s16 TObjPlayer__sub_800194F0(void* p) { return get_level__10TObjPlayerFPv((void*)(*(void**)((char*)p + 0x318))); }
s16 get_level__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2); }
void TObjPlayer__sub_8001951C(void* p) { *(s16*)((char*)p + 0x11c) = 0; }
void add_flags_2e4__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x2e4) |= v; }
void* init_192dc_return_self__10TObjPlayerFPv(void* p) { TObjPlayer__sub_800192DC(p); return p; }
void TObjPlayer__sub_80019568(void* p, s16 v) { *(s16*)((char*)p + 0x94) = v; }

    extern int TObjPlayer__data_8050D460[];

u8 obj_is_hit_receivable(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, u16 *, 0x96) == 1);
}

int get_player_data__10TObjPlayerFi(int a0) {  return TObjPlayer__data_8050D460[a0]; }

}
