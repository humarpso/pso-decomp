extern "C" {
    int fn_801FCD04(void*);
    int fn_801FCD3C(void*);
    int fn_80200228(void);
    int memcpy(void*, void*, void*);
    extern int lbl_805D5F58;
    extern int lbl_805D5F60;
    extern int lbl_805D5F64;
    extern int lbl_805D5F74;
void fn_801FCB4C(int a0) { lbl_805D5F74 = a0; memcpy((void*)(lbl_805D5F60), (void*)fn_801FCD04((void*)(lbl_805D5F58)), (void*)1052); memcpy((void*)(lbl_805D5F64), (void*)fn_801FCD3C((void*)(lbl_805D5F58)), (void*)9072); fn_80200228(); }
}
