#include "types.h"

extern "C" {

void cleanup_global__14TBoss4DarkFalzFv(void);
int TLobby__sub_8001FE7C(void*, void*);
int free_global_instance__14TBoss4DarkFalzFv(void);
int TBoss4DarkFalz__sub_8030AD38(void);

    extern int lbl_805D4D58;
void cleanup_global__14TBoss4DarkFalzFv(void) { free_global_instance__14TBoss4DarkFalzFv(); TBoss4DarkFalz__sub_8030AD38(); TLobby__sub_8001FE7C((void*)(lbl_805D4D58), (void*)1); lbl_805D4D58 = 0; }

}
