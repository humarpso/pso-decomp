#include "types.h"

extern "C" {

int TObjPlayer__sub_801D877C(void);
void TObjPlayer__sub_801D8864(void);
void free_shared_lobby_data__10TObjPlayerFv(void);
int query_darkfalz_state__10TObjPlayerFPv(void* p);
int set_animation_default__10TObjPlayerFPv(void* p);
int TBoss4DarkFalz__sub_8004C220(void*);
int TLobby__sub_800F957C(void*);
int free_shared_data__10TObjPlayerFv(void);
int set_animation__10TObjPlayerFPvs(void*);

int query_darkfalz_state__10TObjPlayerFPv(void* p) { return TBoss4DarkFalz__sub_8004C220(p); }
int set_animation_default__10TObjPlayerFPv(void* p) { return set_animation__10TObjPlayerFPvs(p); }

int TObjPlayer__sub_801D877C(void) { return 0; }

void TObjPlayer__sub_801D8864(void) {  }

    extern int lbl_805D5E08;
void free_shared_lobby_data__10TObjPlayerFv(void) { TLobby__sub_800F957C((void*)(lbl_805D5E08)); lbl_805D5E08 = 0; free_shared_data__10TObjPlayerFv(); }

}
