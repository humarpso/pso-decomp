extern "C" {
    int fn_80068714(void);
    extern unsigned char lbl_80488DA0[];
    extern const float lbl_805D9044;
void* fn_8006CC30(void* a0) { fn_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488DA0; *(float*)((char*)a0 + 0x6c) = lbl_805D9044; *(int*)((char*)a0 + 0x38) = 0; return a0; }
}
