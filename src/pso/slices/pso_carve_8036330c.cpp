extern "C" {
    int fn_8012106C(void*, void*);
    int fn_8012A884(void);
    extern unsigned char lbl_804F28E0[];
    extern const float lbl_805E0268;
void* fn_8036330C(void* a0) { fn_8012A884(); *(int*)((char*)a0 + 0x18) = (int)lbl_804F28E0; fn_8012106C(a0, (void*)2); *(float*)((char*)a0 + 0x1fc) = lbl_805E0268; return a0; }
}
