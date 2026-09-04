#include "types.h"

extern "C" {

void* init_state_shop__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char spawn_shoot_effect__10TObjPlayerFPviif[];
    extern unsigned char lbl_804A2A58[];
    extern const float lbl_805DAD78;
void* init_state_shop__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2A58; set_status_flags__10TObjPlayerFPvUi(a0, (void*)2); *(int*)((char*)a0 + 0x1f0) = (int)spawn_shoot_effect__10TObjPlayerFPviif; *(int*)((char*)a0 + 0x1fc) = 0; *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x1e4) = lbl_805DAD78; return a0; }

}
