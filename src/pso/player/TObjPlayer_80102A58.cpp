#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_obj_heap__10TObjPlayerFPv(void* a0);
void alloc_from_obj_heap__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80102AA8(void);
void TObjPlayer__sub_80102AB0(void);
int TObjPlayer__sub_80102AC0(void* p);
void TObjPlayer__sub_80102AE0(void);
int fn_8010542C(void*);
M2C_UNK fn_80105874();
M2C_UNK fn_80363CE0();
M2C_UNK TObjPlayer__sub_803641EC();
void free__11TOBoss4RockFUi(void*);
void free_rock_objects__6TLobbyFis(void*, int);
int heap_alloc__5THeapFUl(void*, void*);
int heap_free__5THeapFPv(void*, void*);

    extern int obj_heap;
void free_obj_heap__10TObjPlayerFPv(void* a0) { heap_free__5THeapFPv((void*)(obj_heap), a0); }

    extern int obj_heap;
void alloc_from_obj_heap__10TObjPlayerFPv(void* a0) { heap_alloc__5THeapFUl((void*)(obj_heap), a0); }

    extern int lbl_805D5408;
int TObjPlayer__sub_80102AA8(void) {  return lbl_805D5408; }

    extern int lbl_805D5408;
void TObjPlayer__sub_80102AB0(void) {
    int temp_r3 = lbl_805D5408;
    lbl_805D5408 = temp_r3 + 1;
}

int TObjPlayer__sub_80102AC0(void* p) { return fn_8010542C(p); }

extern s32 lbl_805D53F0;
extern u32 lbl_805D53F4;
extern u32 lbl_805D5400;

void TObjPlayer__sub_80102AE0(void) {
    fn_80105874();
    fn_80363CE0();
    TObjPlayer__sub_803641EC();
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
