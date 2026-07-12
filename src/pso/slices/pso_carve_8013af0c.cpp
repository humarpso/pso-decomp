extern "C" {
    int TLockOnCursor__sub_8013E0D8(void);
    extern unsigned char lbl_804A71C4[];
    extern int lbl_805D2CC4;
void* fn_8013AF0C(void* a0) { TLockOnCursor__sub_8013E0D8(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A71C4; *(int*)((char*)a0 + 0x0) = lbl_805D2CC4; return a0; }
}
