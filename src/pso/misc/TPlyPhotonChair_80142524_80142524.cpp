#include "types.h"

extern "C" {

void play_sound__15TPlyPhotonChairFPv(void* p);
void play_sound_with_arg__15TPlyPhotonChairFPvPv(void* p, void* a1);
void update_parts2__15TPlyPhotonChairFPv(void* p);
void update_parts__15TPlyPhotonChairFPv(void* p);
int TObjPlayer__sub_803DED84(void*);
int TPlyPhotonChair__sub_801426C0(void*, void*);
int TPlyPhotonChair__sub_801426DC(void*);
int TPlyPhotonChair__sub_8014270C(void*);
int TPlyPhotonChair__sub_80142720(void*);
int TPlyPhotonChair__sub_80142734(void*);
int restore_state__15TPlyPhotonChairFv(void*);
int save_state__15TPlyPhotonChairFv(void*);
int set_global_pair__10TObjPlayerFii(void*, void*);

void play_sound_with_arg__15TPlyPhotonChairFPvPv(void* p, void* a1) { TPlyPhotonChair__sub_801426C0(p, (void*)2064); set_global_pair__10TObjPlayerFii((void*)-1, (void*)2048); TObjPlayer__sub_803DED84(a1); }

void play_sound__15TPlyPhotonChairFPv(void* p) { TPlyPhotonChair__sub_801426C0(p, (void*)2064); set_global_pair__10TObjPlayerFii((void*)-1, (void*)2048); TObjPlayer__sub_803DED84(p); }

void update_parts__15TPlyPhotonChairFPv(void* p) { TPlyPhotonChair__sub_8014270C(p); TPlyPhotonChair__sub_801426DC(p); restore_state__15TPlyPhotonChairFv(p); }

void update_parts2__15TPlyPhotonChairFPv(void* p) { save_state__15TPlyPhotonChairFv(p); TPlyPhotonChair__sub_80142734(p); TPlyPhotonChair__sub_80142720(p); }

}
