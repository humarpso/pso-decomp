#include "types.h"

extern "C" {

void TObjPlayer__sub_801D4DE8(void* a0, int a1);
void destroy_subobjects__10TObjPlayerFPvi(void* a0, int a1);
void set_mode_and_refresh_object__10TObjPlayerFPvi(void* a0, int a1);
void start_inventory_update__10TObjPlayerFPvi(void* a0, int a1);
int TObjPlayer__sub_801D4E94(void*);
int TObjPlayer__sub_801D55A4(void*);
int TObjPlayer__sub_801D563C(void*);
int TObjPlayer__sub_801D56D0(void*);
int queue_destruction__7TObjectFv(void*);
int run_tasks__7TObjectFv(void*);

    extern int lbl_805D5DFC;
void TObjPlayer__sub_801D4DE8(void* a0, int a1) { lbl_805D5DFC = a1; TObjPlayer__sub_801D55A4((void*)(*(int*)((char*)a0 + 0x1c4))); }

    extern int lbl_805D5DFC;
void set_mode_and_refresh_object__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D5DFC = a1; TObjPlayer__sub_801D563C((void*)(*(int*)((char*)a0 + 0x1c4))); }

    extern int lbl_805D5DE0;
    extern int lbl_805D5DF0;
void destroy_subobjects__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D5DE0 = a1; lbl_805D5DF0 = 0; TObjPlayer__sub_801D4E94((void*)(*(int*)((char*)a0 + 0x1c4))); queue_destruction__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c4))); run_tasks__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c8))); run_tasks__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c8))); queue_destruction__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c8))); }

    extern int lbl_805D5DE8;
    extern int lbl_805D5DF0;
void start_inventory_update__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D5DE8 = a1; lbl_805D5DF0 = 0; TObjPlayer__sub_801D56D0((void*)(*(int*)((char*)a0 + 0x1c4))); }

}
