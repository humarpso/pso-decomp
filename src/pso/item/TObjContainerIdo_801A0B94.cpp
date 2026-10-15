#include "types.h"

extern "C" {
int construct_collider_proxy__10TObjPlayerFPv(void);
extern s32 lbl_804B97C0[];
    extern const float lbl_805DC078;
    extern const float lbl_805DC07C;
void* init_positions__16TObjContainerIdoFPv(void* a0);
}

extern "C" {

void *dt__16TObjContainerIdoFPvs(void *arg0, s16 arg1);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern s32 lbl_804B97C0[];

void *dt__16TObjContainerIdoFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804B97C0;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void* init_positions__16TObjContainerIdoFPv(void* a0) { construct_collider_proxy__10TObjPlayerFPv(); *(int*)((char*)a0 + 0x18) = (int)((unsigned char *)&lbl_804B97C0); *(float*)((char*)a0 + 0xac) = lbl_805DC078; *(float*)((char*)a0 + 0xb0) = lbl_805DC07C; return a0; }

}
