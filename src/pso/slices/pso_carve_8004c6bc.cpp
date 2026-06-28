extern "C" {
    int fn_8004AB90(void*, void*);
    int fn_8004B7DC(void);
    extern int lbl_805D4D68;
void fn_8004C6BC(void* a0) { *(int*)((char*)a0 + 0x380) = 126; lbl_805D4D68 = 2; fn_8004B7DC(); fn_8004AB90(a0, (void*)2); }
}
