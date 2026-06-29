extern "C" {
    int fn_80068714(void);
    extern unsigned char lbl_80488B08[];
    extern int lbl_805D4E10;
void* TCameraCtrl__sub_8006BA68(void* a0) { fn_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488B08; *(int*)((char*)a0 + 0x38) = 4; lbl_805D4E10 = 0; return a0; }
}
