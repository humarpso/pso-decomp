extern "C" {
    int OSSetProgressiveMode(void*);
    int fn_8037BC54(void);
    int fn_8037C11C(void*);
    int fn_8037C8B8(void);
    extern unsigned char lbl_804F4F98[];
    extern int lbl_805D7734;
void fn_80307FAC(void) { OSSetProgressiveMode((void*)1); lbl_805D7734 = (int)lbl_804F4F98; fn_8037C11C(lbl_804F4F98); fn_8037C8B8(); fn_8037BC54(); fn_8037BC54(); }
}
