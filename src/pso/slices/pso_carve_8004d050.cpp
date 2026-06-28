extern "C" {
    int fn_8004B77C(void*);
    int fn_80052284(void);
    extern int lbl_805D4D68;
void fn_8004D050(void* a0) { *(int*)((char*)a0 + 0x380) = 30; lbl_805D4D68 = 1; *(int*)((char*)a0 + 0x394) = fn_80052284(); fn_8004B77C(a0); }
}
