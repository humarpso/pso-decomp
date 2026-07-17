#include "types.h"

extern "C" {

void set_shared_flag__10TObjPlayerFi(int a0);
void set_shared_count__10TObjPlayerFi(int a0);
void add_item_count_kind4__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void try_add_item_count_kind3__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void try_add_item_count_type2__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void add_item_count__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void try_add_item__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
u8 TObjPlayer__sub_801BED70(void* p);
u8 TObjPlayer__sub_801BED78(void* p);
u8 TObjPlayer__sub_801BED80(void* p);
u8 TObjPlayer__sub_801BED88(void* p);
u8 TObjPlayer__sub_801BED90(void* p);
void TObjPlayer__sub_801BED98(void* p, u8 v);
void TObjPlayer__sub_801BEDA0(void* p, u8 v);
void TObjPlayer__sub_801BEDA8(void* p, u8 v);
void TObjPlayer__sub_801BEDB0(void* p, u8 v);
void TObjPlayer__sub_801BEDB8(void* p, u8 v);
s32 try_add_item_count__10TObjPlayerFiiiUc(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);

    extern int lbl_805D5D74;
void set_shared_flag__10TObjPlayerFi(int a0) { lbl_805D5D74 = a0; }

    extern int lbl_805D5D70;
void set_shared_count__10TObjPlayerFi(int a0) { lbl_805D5D70 = a0; }

void add_item_count_kind4__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 4, arg2);
}
void try_add_item_count_kind3__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 3, arg2);
}
void try_add_item_count_type2__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 2, arg2);
}
void add_item_count__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 1, arg2);
}
void try_add_item__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 0, arg2);
}
u8 TObjPlayer__sub_801BED70(void* p) { return *(u8*)((char*)p + 0x4); }
u8 TObjPlayer__sub_801BED78(void* p) { return *(u8*)((char*)p + 0x3); }
u8 TObjPlayer__sub_801BED80(void* p) { return *(u8*)((char*)p + 0x2); }
u8 TObjPlayer__sub_801BED88(void* p) { return *(u8*)((char*)p + 0x1); }
u8 TObjPlayer__sub_801BED90(void* p) { return *(u8*)((char*)p + 0x0); }
void TObjPlayer__sub_801BED98(void* p, u8 v) { *(u8*)((char*)p + 0x4) = v; }
void TObjPlayer__sub_801BEDA0(void* p, u8 v) { *(u8*)((char*)p + 0x3) = v; }
void TObjPlayer__sub_801BEDA8(void* p, u8 v) { *(u8*)((char*)p + 0x2) = v; }
void TObjPlayer__sub_801BEDB0(void* p, u8 v) { *(u8*)((char*)p + 0x1) = v; }
void TObjPlayer__sub_801BEDB8(void* p, u8 v) { *(u8*)((char*)p + 0x0) = v; }

}
