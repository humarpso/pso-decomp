#include "types.h"

extern "C" {

void TObjPlayer__sub_80101824(int a0, int a1, int a2);
int TObjPlayer__sub_80101870(void* p);
void TObjPlayer__sub_80101894(void* a0, int a1);
void TObjPlayer__sub_801018E4(void* a0, int a1);
void TObjPlayer__sub_80101934(void* a0, int a1);
int TObjBoss2Tunnel__sub_803DB470(void*);
int TObjPlayer__sub_801016D0(void*);
int TObjPlayer__sub_80141F1C(void);

    extern unsigned char TOSignCave03__sub_803DB510[];
    extern int lbl_805D53F8;
    extern int lbl_805D53FC;
    extern int lbl_805D5404;
void TObjPlayer__sub_80101824(int a0, int a1, int a2) { lbl_805D53FC = a1; lbl_805D5404 = 0; lbl_805D53F8 = (int)TOSignCave03__sub_803DB510; TObjPlayer__sub_801016D0((void*)(a0)); lbl_805D53F8 = 0; lbl_805D5404 = 0; lbl_805D53FC = 0; TObjPlayer__sub_80141F1C(); }

int TObjPlayer__sub_80101870(void* p) { return TObjBoss2Tunnel__sub_803DB470(*(void**)((char*)p + 0xf4)); }

    extern unsigned char TOSignCave03__sub_803DB510[];
    extern int lbl_805D53F8;
    extern int lbl_805D53FC;
    extern int lbl_805D5404;
void TObjPlayer__sub_80101894(void* a0, int a1) { lbl_805D53FC = *(int*)((char*)a0 + 0xe0); lbl_805D5404 = a1; lbl_805D53F8 = (int)TOSignCave03__sub_803DB510; TObjPlayer__sub_801016D0((void*)((void*)(*(int*)((char*)a0 + 0xf4)))); lbl_805D53F8 = 0; lbl_805D5404 = 0; lbl_805D53FC = 0; TObjPlayer__sub_80141F1C(); }

    extern unsigned char TOSignCave03__sub_803DB510[];
    extern int lbl_805D53F8;
    extern int lbl_805D53FC;
    extern int lbl_805D5404;
void TObjPlayer__sub_801018E4(void* a0, int a1) { lbl_805D53FC = *(int*)((char*)a0 + 0xe0); lbl_805D5404 = a1; lbl_805D53F8 = (int)TOSignCave03__sub_803DB510; TObjPlayer__sub_801016D0((void*)((void*)(*(int*)((char*)a0 + 0xf4)))); lbl_805D53F8 = 0; lbl_805D5404 = 0; lbl_805D53FC = 0; TObjPlayer__sub_80141F1C(); }

    extern int lbl_805D53F8;
    extern int lbl_805D53FC;
    extern int lbl_805D5404;
void TObjPlayer__sub_80101934(void* a0, int a1) { lbl_805D53FC = *(int*)((char*)a0 + 0xe0); lbl_805D5404 = a1; lbl_805D53F8 = 0; TObjPlayer__sub_801016D0((void*)((void*)(*(int*)((char*)a0 + 0xf4)))); lbl_805D53F8 = 0; lbl_805D5404 = 0; lbl_805D53FC = 0; TObjPlayer__sub_80141F1C(); }

}
