#include "types.h"

extern "C" {

void play_sound__15TPlyPhotonChairFPv(void* p);
void update_parts__15TPlyPhotonChairFPv(void* p);
void update_parts2__15TPlyPhotonChairFPv(void* p);
int TPlyPhotonChair__sub_801426C0(void*, void*);
int restore_state__15TPlyPhotonChairFv(void*);
int TPlyPhotonChair__sub_801426DC(void*);
int TPlyPhotonChair__sub_8014270C(void*);
int TPlyPhotonChair__sub_80142720(void*);
int TPlyPhotonChair__sub_80142734(void*);
int save_state__15TPlyPhotonChairFv(void*);
int fn_803DED78(void*, void*);
int fn_803DED84(void*);

void play_sound__15TPlyPhotonChairFPv(void* p) { TPlyPhotonChair__sub_801426C0(p, (void*)2064); fn_803DED78((void*)-1, (void*)2048); fn_803DED84(p); }

void update_parts__15TPlyPhotonChairFPv(void* p) { TPlyPhotonChair__sub_8014270C(p); TPlyPhotonChair__sub_801426DC(p); restore_state__15TPlyPhotonChairFv(p); }

void update_parts2__15TPlyPhotonChairFPv(void* p) { save_state__15TPlyPhotonChairFv(p); TPlyPhotonChair__sub_80142734(p); TPlyPhotonChair__sub_80142720(p); }

}
