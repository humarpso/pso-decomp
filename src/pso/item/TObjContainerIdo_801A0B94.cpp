#include "types.h"
#include "pso/item/TObjContainerIdo.h"

extern "C" {
int construct_collider_proxy__10TObjPlayerFv(void);
extern s32 lbl_804B97C0[];
    extern const float lbl_805DC078;
    extern const float lbl_805DC07C;
}

extern "C" {

void destroy_particle_controller__10TObjPlayerFs(void *, int);
void __dl__7TObjectFPv(void *);

extern s32 lbl_804B97C0[];

void *TObjContainerIdo::dt(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804B97C0;
        destroy_particle_controller__10TObjPlayerFs(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}
void*TObjContainerIdo::init_positions() { construct_collider_proxy__10TObjPlayerFv(); *(int*)((char*)this + 0x18) = (int)((unsigned char *)&lbl_804B97C0); *(float*)((char*)this + 0xac) = lbl_805DC078; *(float*)((char*)this + 0xb0) = lbl_805DC07C; return this; }

}
