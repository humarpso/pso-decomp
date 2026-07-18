#include "types.h"

extern "C" {

u16 TPlyPhotonChair__sub_8035B530(void* p);
void set_field90__15TPlyPhotonChairFPvs(void* p, s16 v);
void render__15TPlyPhotonChairFPvPv(void* p, void* a1);
void TPlyPhotonChair__sub_8035B56C(void* p, f32 v);
void set_state_ready__15TPlyPhotonChairFPv(void* p);
int TPlyPhotonChair__sub_8035B520(void* p);

int copy_vec4__13TRaderMapCoreFPvPv(void*, void*);

int TPlyPhotonChair__sub_8035B520(void* p) { return *(u32*)((char*)p + 0x94) == 0; }
u16 TPlyPhotonChair__sub_8035B530(void* p) { return *(u16*)((char*)p + 0x90); }
void set_field90__15TPlyPhotonChairFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x90) = v; }
void render__15TPlyPhotonChairFPvPv(void* p, void* a1) { copy_vec4__13TRaderMapCoreFPvPv(a1, p); }
void TPlyPhotonChair__sub_8035B56C(void* p, f32 v) { *(f32*)((char*)p + 0x14) = v; }
void set_state_ready__15TPlyPhotonChairFPv(void* p) { *(s32*)((char*)p + 0x18) = 2; }

}
