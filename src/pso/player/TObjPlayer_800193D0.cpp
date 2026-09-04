#include "types.h"

extern "C" {

int TObjPlayer__sub_800193FC(void);
int TObjPlayer__sub_8001940C(void);
int TObjPlayer__sub_8001941C(void);
int TObjPlayer__sub_8001942C(void);
int TObjPlayer__sub_8001943C(void);
s16 TObjPlayer__sub_8001944C(void* p);
int TObjPlayer__sub_800194AC(void);
s16 TObjPlayer__sub_800194C4(void* p);
s16 TObjPlayer__sub_800194E8(void* p);
s16 TObjPlayer__sub_800194F0(void* p);
void TObjPlayer__sub_8001951C(void* p);
void TObjPlayer__sub_80019568(void* p, s16 v);
int TObjPlayer__sub_80019570(void);
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

int TObjPlayer__sub_800193FC(void) { return 0; }
int TObjPlayer__sub_8001940C(void) { return 0; }
int TObjPlayer__sub_8001941C(void) { return 0; }
int TObjPlayer__sub_8001942C(void) { return 0; }
int TObjPlayer__sub_8001943C(void) { return 0; }

s16 TObjPlayer__sub_8001944C(void* p) { return *(s16*)((char*)p + 0x2d0); }
s32 update_field_318__10TObjPlayerFPv(void* p) { return get_field_0c__10TObjPlayerFPv((void*)(*(void**)((char*)p + 0x318))); }
s32 get_field_0c__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0xc); }
f32 get_target_value__10TObjPlayerFPv(void* p) { return get_pos_x__10TObjPlayerFPv((void*)(*(void**)((char*)p + 0x318))); }
f32 get_pos_x__10TObjPlayerFPv(void* p) { return *(f32*)((char*)p + 0x8); }

int TObjPlayer__sub_800194AC(void) { return 0; }

s16 TObjPlayer__sub_800194C4(void* p) { return TObjPlayer__sub_800194E8((void*)(*(void**)((char*)p + 0x318))); }
s16 TObjPlayer__sub_800194E8(void* p) { return *(s16*)((char*)p + 0x4); }
s16 TObjPlayer__sub_800194F0(void* p) { return get_level__10TObjPlayerFPv((void*)(*(void**)((char*)p + 0x318))); }
s16 get_level__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2); }
void TObjPlayer__sub_8001951C(void* p) { *(s16*)((char*)p + 0x11c) = 0; }
void add_flags_2e4__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x2e4) |= v; }
void* init_192dc_return_self__10TObjPlayerFPv(void* p) { TObjPlayer__sub_800192DC(p); return p; }
void TObjPlayer__sub_80019568(void* p, s16 v) { *(s16*)((char*)p + 0x94) = v; }

int TObjPlayer__sub_80019570(void) { return 0; }

    extern int TObjPlayer__data_8050D460[];
int get_player_data__10TObjPlayerFi(int a0) {  return TObjPlayer__data_8050D460[a0]; }

}
