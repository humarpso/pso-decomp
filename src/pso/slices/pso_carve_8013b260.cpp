extern "C" {
    int fn_8013E0D8(void);
    extern unsigned char lbl_804A7290[];
    extern int lbl_805D2CBC;
void* fn_8013B260(void* a0) { fn_8013E0D8(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A7290; *(int*)((char*)a0 + 0x0) = lbl_805D2CBC; return a0; }
}
