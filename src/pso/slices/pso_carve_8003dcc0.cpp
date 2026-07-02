extern "C" {
    int fn_8003EA2C(void*);
    int fn_802274B8(void*);
    extern unsigned char lbl_80436328[];
    extern int lbl_805D4C14;
    extern int lbl_805D4C1C;
    extern int lbl_805D4C24;
    extern int lbl_805D4C2C;
void fn_8003DCC0(void* a0) {
    *(int*)((char*)a0 + 0x3a8) = 0;
    lbl_805D4C14 = -1;
    fn_8003EA2C((void*)0);
    *(int*)((char*)a0 + 0x3a4) = 4;
    *(short*)((char*)a0 + 0x3f0) = 0;
    *(short*)((char*)a0 + 0x3f2) = 0;
    *(short*)((char*)a0 + 0x3f4) = 0;
    *(short*)((char*)a0 + 0x3f8) = 0;
    *(short*)((char*)a0 + 0x3fa) = 0;
    lbl_805D4C1C = 0;
    *(int*)((char*)a0 + 0x400) = 1;
    *(short*)((char*)a0 + 0x3fc) = 2;
    lbl_805D4C24 = 0;
    fn_802274B8(lbl_80436328);
    lbl_805D4C2C = 1;
}
}
