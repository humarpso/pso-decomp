extern "C" {
    int fn_800D9718(void);
    extern unsigned char lbl_80494938[];
    extern const float lbl_805DA348;
void* fn_800D764C(void* a0) { fn_800D9718(); *(int*)((char*)a0 + 0x14) = (int)lbl_80494938; *(float*)((char*)a0 + 0x18) = lbl_805DA348; return a0; }
}
