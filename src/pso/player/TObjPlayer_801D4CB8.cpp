#include "types.h"

struct VB_801D4E94 { u8 pad[0x18]; };

struct V_801D4E94 : VB_801D4E94 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
};

extern "C" {
void *get_owner_if_alive__10TObjPlayerFPv(void *);
s32 is_item_valid__9TItemListFi(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
void TObjPlayer__sub_801D4E94(void *arg0);
}

extern "C" {

void TObjPlayer__sub_801D4DE8(void* a0, int a1);
void destroy_subobjects__10TObjPlayerFPvi(void* a0, int a1);
void set_mode_and_refresh_object__10TObjPlayerFPvi(void* a0, int a1);
void start_inventory_update__10TObjPlayerFPvi(void* a0, int a1);
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
void destroy_subobjects__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D5DE0 = a1; lbl_805D5DF0 = 0; TObjPlayer__sub_801D4E94((void *)((void*)(*(int*)((char*)a0 + 0x1c4)))); queue_destruction__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c4))); run_tasks__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c8))); run_tasks__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c8))); queue_destruction__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c8))); }

    extern int lbl_805D5DE8;
    extern int lbl_805D5DF0;

void TObjPlayer__sub_801D4E94(void *arg0) {
    u8 *p;
    V_801D4E94 *o;
    p = *(u8 **)((u8 *)arg0 + 0x14);
    while (p != NULL) {
        if (is_item_valid__9TItemListFi(p) != 0) {
            o = (V_801D4E94 *)get_owner_if_alive__10TObjPlayerFPv(p);
            if (o != NULL && all_parents_unqueued_for_destruction__7TObjectFv() != 0) {
                o->m27();
            }
        }
        TObjPlayer__sub_801D4E94(p);
        p = *(u8 **)(p + 0xC);
    }
}

void start_inventory_update__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D5DE8 = a1; lbl_805D5DF0 = 0; TObjPlayer__sub_801D56D0((void*)(*(int*)((char*)a0 + 0x1c4))); }

}
