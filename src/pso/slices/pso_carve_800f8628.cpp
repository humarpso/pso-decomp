extern "C" {
    int fn_80048BC8(void);
    extern unsigned char lbl_804999A0[];
    extern const float lbl_805DA8E8;
void* fn_800F8628(void* a0, int a1, int a2, int a3) { fn_80048BC8(); *(int*)((char*)a0 + 0x18) = (int)lbl_804999A0; *(int*)((char*)a0 + 0x28) = a2; *(float*)((char*)a0 + 0x1c) = lbl_805DA8E8; *(unsigned char*)((char*)a0 + 0x21) = 0; *(unsigned char*)((char*)a0 + 0x22) = 0; *(unsigned char*)((char*)a0 + 0x20) = 255; *(int*)((char*)a0 + 0x24) = a3; return a0; }
}
