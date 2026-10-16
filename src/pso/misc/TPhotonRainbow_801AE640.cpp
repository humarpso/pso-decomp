#include "types.h"
#include "pso/misc/TPhotonYoulla.h"

extern "C" {

void TObjPlayer__sub_801AE724(void);
void TObjPlayer__sub_801AE728(void);
u8 *TPhotonRainbow__ct(u8 *arg0, s32 arg1_unused, s32 arg2);
s32 construct_world_actor_base();
s32 VecCopy__FP3VecPC3Vec(void *, s32);

extern void *__vt__14TPhotonRainbow[];
extern s32 lbl_805D3520;
extern u8 *photon_blast_shared_resource;

u8 *TPhotonRainbow__ct(u8 *arg0, s32 arg1_unused, s32 arg2) {
    construct_world_actor_base();
    *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)&__vt__14TPhotonRainbow;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3520;
    if ((s32) *(s32 *)((s8 *)arg0 + 0xA8) == 1) {
        *(s32 *)((s8 *)arg0 + 0x90) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x6C);
        *(s32 *)((s8 *)arg0 + 0x94) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x8C);
        *(s32 *)((s8 *)arg0 + 0x98) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x68);
        *(s32 *)((s8 *)arg0 + 0x9C) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x88);
    } else {
        *(s32 *)((s8 *)arg0 + 0x90) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x5C);
        *(s32 *)((s8 *)arg0 + 0x94) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x7C);
        *(s32 *)((s8 *)arg0 + 0x98) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x58);
        *(s32 *)((s8 *)arg0 + 0x9C) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x78);
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg2);
    return arg0;
}

void TObjPlayer__sub_801AE724(void) {  }
void TObjPlayer__sub_801AE728(void) {  }

    extern const float lbl_805DC260;
void TPhotonYoulla::sub_801AE72C() { *(float*)((char*)this + 0x184) = lbl_805DC260; *(float*)((char*)this + 0x188) = lbl_805DC260; *(float*)((char*)this + 0x18c) = lbl_805DC260; *(float*)((char*)this + 0x190) = lbl_805DC260; }

}
