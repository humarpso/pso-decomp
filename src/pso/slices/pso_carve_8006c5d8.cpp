extern "C" {
    int fn_80068714(void);
    extern unsigned char lbl_80488B68[];
    extern int lbl_805D4E18;
    extern int lbl_805D4E1C;
    extern const float lbl_805D9028;
void* fn_8006C5D8(void* a0) { fn_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488B68; *(int*)((char*)a0 + 0x38) = 0; lbl_805D4E1C = 0; lbl_805D4E18 = 0; *(unsigned char*)((char*)a0 + 0x99) = 0; *(unsigned char*)((char*)a0 + 0x98) = 0; *(short*)((char*)a0 + 0x9a) = 0; *(float*)((char*)a0 + 0x9c) = lbl_805D9028; *(float*)((char*)a0 + 0xa0) = lbl_805D9028; *(float*)((char*)a0 + 0x6c) = lbl_805D9028; *(float*)((char*)a0 + 0x70) = lbl_805D9028; *(float*)((char*)a0 + 0x74) = lbl_805D9028; *(float*)((char*)a0 + 0x78) = lbl_805D9028; *(float*)((char*)a0 + 0x7c) = lbl_805D9028; *(float*)((char*)a0 + 0x80) = lbl_805D9028; *(int*)((char*)a0 + 0x84) = 0; *(int*)((char*)a0 + 0x88) = 0; *(int*)((char*)a0 + 0x8c) = 0; *(int*)((char*)a0 + 0x90) = 0; *(int*)((char*)a0 + 0x94) = 0; return a0; }
}
