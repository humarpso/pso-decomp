#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_obj_heap__10TObjPlayerFPv(void* a0);
void alloc_from_obj_heap__10TObjPlayerFPv(void* a0);
int get_item_ctrl__10TObjPlayerFv(void);
void inc_player_count__10TObjPlayerFv(void);
int lookup_inventory_item__10TObjPlayerFPv(void* p);
void free_globals__10TObjPlayerFv(void);
int TLobby__sub_8010542C(void*);
M2C_UNK fn_80105874();
M2C_UNK free_static_buffer__10TObjPlayerFv();
M2C_UNK free_global_805D6FB8__10TObjPlayerFv();
void free__11TOBoss4RockFUi(void*);
void free_rock_objects__6TLobbyFis(void*, int);
int heap_alloc__5THeapFUl(void*, void*);
int heap_free__5THeapFPv(void*, void*);

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
    fn_80105874();
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

}
