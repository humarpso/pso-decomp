#include "types.h"

extern "C" {

int TObjBoss2Tunnel__sub_8036EF44(void);
void TObjBoss2Tunnel__sub_8036EF4C(void);
void enable_and_trigger__15TObjBoss2TunnelFv(void);
int TObjBoss2Tunnel__sub_8036EF0C(void*);

    extern int lbl_805D44F8;
int TObjBoss2Tunnel__sub_8036EF44(void) {  return lbl_805D44F8; }

    extern int lbl_805D44F8;
void TObjBoss2Tunnel__sub_8036EF4C(void) { lbl_805D44F8 = 1; }

    extern int lbl_805D44F8;
void enable_and_trigger__15TObjBoss2TunnelFv(void) { lbl_805D44F8 = 1; TObjBoss2Tunnel__sub_8036EF0C((void*)1); }

}
