extern "C" {
    int memset(void*, void*, void*);
    extern unsigned char lbl_80513DE8[];
    extern unsigned char lbl_80513E24[];
    extern int lbl_805D6198;
    extern int lbl_805D619C;
    extern int lbl_805D61A0;
    extern int lbl_805D61A4;
    extern int lbl_805D61A8;
    extern int lbl_805D61AC;
    extern int lbl_805D61B0;
    extern int lbl_805D61B4;
void reset_globals(void) { lbl_805D61A0 = 0; lbl_805D61A4 = 0; lbl_805D61A8 = 0; lbl_805D61AC = 0; memset(lbl_80513DE8, (void*)0, (void*)60); memset(lbl_80513E24, (void*)0, (void*)60); lbl_805D6198 = 0; lbl_805D619C = 0; lbl_805D61B0 = 0; lbl_805D61B4 = 0; }
}
