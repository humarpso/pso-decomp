extern "C" {
    int fn_801016D0(void*);
    int fn_80141F1C(void);
    extern unsigned char TOSignCave03__sub_803DB510[];
    extern int lbl_805D53F8;
    extern int lbl_805D53FC;
    extern int lbl_805D5404;
void fn_801018E4(void* a0, int a1) { lbl_805D53FC = *(int*)((char*)a0 + 0xe0); lbl_805D5404 = a1; lbl_805D53F8 = (int)TOSignCave03__sub_803DB510; fn_801016D0((void*)(*(int*)((char*)a0 + 0xf4))); lbl_805D53F8 = 0; lbl_805D5404 = 0; lbl_805D53FC = 0; fn_80141F1C(); }
}
