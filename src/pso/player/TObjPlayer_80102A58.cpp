#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
s8 TObjPlayer__sub_80102C30(u8 *arg0);
void add_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
void alloc_from_obj_heap__10TObjPlayerFPv(void* a0);
void clear_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
void free_globals__10TObjPlayerFv(void);
void free_obj_heap__10TObjPlayerFPv(void* a0);
int get_item_ctrl__10TObjPlayerFv(void);
int has_flag_128__10TObjPlayerFPv(void* p);
void inc_player_count__10TObjPlayerFv(void);
void init_forward_default__10TObjPlayerFv(void);
int lookup_inventory_item__10TObjPlayerFPv(void* p);
int test_item_flags__10TObjPlayerFPvUi(void* p, u32 m);
int TLobby__sub_8010542C(void*);
void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
void bswap_32__FPUl(u32* p);
s32 check_flag__10TObjPlayerFPvi(s32, s32);
void free__11TOBoss4RockFUi(void*);
M2C_UNK free_global_805D6FB8__10TObjPlayerFv();
M2C_UNK free_item_globals__10TObjPlayerFv();
void free_rock_objects__6TLobbyFis(void*, int);
M2C_UNK free_static_buffer__10TObjPlayerFv();
int get_equip_field_d04__10TObjPlayerFPv(void* p);
u8 get_field_ec__12TOSwitchItemFPv(void* p);
int get_flag_40__8TItemMagFPv(void* p);
u16 get_id__13TItemProArmorFPv(void* p);
f32 get_mag_scale_f__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*);
s16 get_stat__10TObjPlayerFPv(void* p);
s16 get_stat_bonus__10TObjPlayerFPv(void* p);
int heap_alloc__5THeapFUl(void*, void*);
int heap_free__5THeapFPv(void*, void*);
M2C_UNK init_forward__10TObjPlayerFPv(M2C_UNK *);
s32 is_matching_id__6TLobbyFiUs(void *, u16);
void read_be16_field2__10TObjPlayerFPv(void* p);
void set_facing__10TObjPlayerFPvs(void* p, s16 v);

    extern int obj_heap;
void free_obj_heap__10TObjPlayerFPv(void* a0) { heap_free__5THeapFPv((void*)(obj_heap), a0); }

    extern int obj_heap;
void alloc_from_obj_heap__10TObjPlayerFPv(void* a0) { heap_alloc__5THeapFUl((void*)(obj_heap), a0); }

    extern int lbl_805D5408;
int get_item_ctrl__10TObjPlayerFv(void) {  return lbl_805D5408; }

    extern int lbl_805D5408;
void inc_player_count__10TObjPlayerFv(void) {
    int temp_r3 = lbl_805D5408;
    lbl_805D5408 = temp_r3 + 1;
}

int lookup_inventory_item__10TObjPlayerFPv(void* p) { return TLobby__sub_8010542C(p); }

extern s32 lbl_805D53F0;
extern u32 lbl_805D53F4;
extern u32 lbl_805D5400;

void free_globals__10TObjPlayerFv(void) {
    free_item_globals__10TObjPlayerFv();
    free_static_buffer__10TObjPlayerFv();
    free_global_805D6FB8__10TObjPlayerFv();
    if ((u32) lbl_805D5400 != 0U) {
        free_rock_objects__6TLobbyFis((void*)lbl_805D5400, 1);
        lbl_805D5400 = 0U;
    }
    if ((u32) lbl_805D53F4 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D53F4);
        lbl_805D53F4 = 0U;
    }
    lbl_805D53F0 = 0;
}

extern M2C_UNK lbl_805D53EC;

void init_forward_default__10TObjPlayerFv(void) {
    init_forward__10TObjPlayerFPv(&lbl_805D53EC);
}

int TObjPlayer__sub_80102BD0(void) { return 0; }
int TObjPlayer__sub_80102BD8(void) { return 0; }
int test_item_flags__10TObjPlayerFPvUi(void* p, u32 m) { return *(u32*)((char*)p + 0xdc) & m; }
void clear_item_flags__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0xdc) &= ~v; }
void add_item_flags__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0xdc) |= v; }
int has_flag_128__10TObjPlayerFPv(void* p) { return test_item_flags__10TObjPlayerFPvUi((void*)((void*)(p)), (u32)((u32)(128))); }
s8 TObjPlayer__sub_80102C30(u8 *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0xEB);
}

}
