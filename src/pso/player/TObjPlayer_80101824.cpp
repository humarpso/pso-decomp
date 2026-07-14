#include "types.h"

extern "C" {

void TObjPlayer__sub_80101824(int a0, int a1, int a2);
int check_boss2tunnel_field_f4__10TObjPlayerFPv(void* p);
void run_with_callback__10TObjPlayerFPvi(void* a0, int a1);
void apply_sign_effect__10TObjPlayerFPvi(void* a0, int a1);
void apply_to_child__10TObjPlayerFPvi(void* a0, int a1);
int TObjBoss2Tunnel__sub_803DB470(void*);
int TObjPlayer__sub_801016D0(void*);
int reset_transform_state__10TObjPlayerFv(void);

    extern unsigned char TOSignCave03__sub_803DB510[];
    extern int lbl_805D53F8;
    extern int lbl_805D53FC;
    extern int lbl_805D5404;
void TObjPlayer__sub_80101824(int a0, int a1, int a2) { lbl_805D53FC = a1; lbl_805D5404 = 0; lbl_805D53F8 = (int)TOSignCave03__sub_803DB510; TObjPlayer__sub_801016D0((void*)(a0)); lbl_805D53F8 = 0; lbl_805D5404 = 0; lbl_805D53FC = 0; reset_transform_state__10TObjPlayerFv(); }

int check_boss2tunnel_field_f4__10TObjPlayerFPv(void* p) { return TObjBoss2Tunnel__sub_803DB470(*(void**)((char*)p + 0xf4)); }

    extern unsigned char TOSignCave03__sub_803DB510[];
    extern int lbl_805D53F8;
    extern int lbl_805D53FC;
    extern int lbl_805D5404;
void run_with_callback__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D53FC = *(int*)((char*)a0 + 0xe0); lbl_805D5404 = a1; lbl_805D53F8 = (int)TOSignCave03__sub_803DB510; TObjPlayer__sub_801016D0((void*)((void*)(*(int*)((char*)a0 + 0xf4)))); lbl_805D53F8 = 0; lbl_805D5404 = 0; lbl_805D53FC = 0; reset_transform_state__10TObjPlayerFv(); }

    extern unsigned char TOSignCave03__sub_803DB510[];
    extern int lbl_805D53F8;
    extern int lbl_805D53FC;
    extern int lbl_805D5404;
void apply_sign_effect__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D53FC = *(int*)((char*)a0 + 0xe0); lbl_805D5404 = a1; lbl_805D53F8 = (int)TOSignCave03__sub_803DB510; TObjPlayer__sub_801016D0((void*)((void*)(*(int*)((char*)a0 + 0xf4)))); lbl_805D53F8 = 0; lbl_805D5404 = 0; lbl_805D53FC = 0; reset_transform_state__10TObjPlayerFv(); }

    extern int lbl_805D53F8;
    extern int lbl_805D53FC;
    extern int lbl_805D5404;
void apply_to_child__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D53FC = *(int*)((char*)a0 + 0xe0); lbl_805D5404 = a1; lbl_805D53F8 = 0; TObjPlayer__sub_801016D0((void*)((void*)(*(int*)((char*)a0 + 0xf4)))); lbl_805D53F8 = 0; lbl_805D5404 = 0; lbl_805D53FC = 0; reset_transform_state__10TObjPlayerFv(); }

}
