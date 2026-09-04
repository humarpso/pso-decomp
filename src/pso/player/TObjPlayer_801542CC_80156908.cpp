#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjPlayer__sub_80156934(void);
void TObjPlayer__sub_80156A68(void* p);
void TObjPlayer__sub_80156A74(void* p);
void *destroy_particle_controller__10TObjPlayerFPvs(void *arg0, s16 arg1);
void release_member_90__10TObjPlayerFPv(void* p);
void reset__10TObjPlayerFv(void);
int TObjPlayer__sub_80019828(void*);
int TObjPlayer__sub_801549D0(void);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
int init_all_slots__10TObjPlayerFv(void);

void release_member_90__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x90); if (m) TObjPlayer__sub_80019828(m); }
void TObjPlayer__sub_80156934(void) { TObjPlayer__sub_801549D0(); init_all_slots__10TObjPlayerFv(); }

    extern int lbl_805D5868;
    extern int lbl_805D586C;
    extern int lbl_805D5870;
    extern int TObjPlayer__data_805D5874;
void reset__10TObjPlayerFv(void) { lbl_805D5868 = 0; lbl_805D586C = 0; lbl_805D5870 = 0; TObjPlayer__data_805D5874 = 0; TObjPlayer__sub_801549D0(); init_all_slots__10TObjPlayerFv(); }

extern M2C_UNK lbl_804AF8A0[];

void *destroy_particle_controller__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804AF8A0;
        M2C_FIELD(arg0, M2C_UNK *, 0xA8) = 0;
        M2C_FIELD(arg0, M2C_UNK *, 0xA4) = 0;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_80156A68(void* p) { *(s16*)((char*)p + 0x96) = 0; }
void TObjPlayer__sub_80156A74(void* p) { *(s32*)((char*)p + 0x0) = 0; }

}
