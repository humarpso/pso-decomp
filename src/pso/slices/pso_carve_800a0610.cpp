extern "C" {
    int fn_800D9718(void);
    extern unsigned char lbl_80490470[];
    extern const float lbl_805D9958;
void* fn_800A0610(void* a0) { fn_800D9718(); *(int*)((char*)a0 + 0x14) = (int)lbl_80490470; *(float*)((char*)a0 + 0x18) = lbl_805D9958; return a0; }
}
