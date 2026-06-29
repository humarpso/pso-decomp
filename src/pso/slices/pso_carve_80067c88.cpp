extern "C" {
    int fn_8006E714(void);
    extern unsigned char lbl_804887F8[];
    extern const float lbl_805D8F60;
void* TCameraCtrl__sub_80067C88(void* a0) { fn_8006E714(); *(int*)((char*)a0 + 0x18) = (int)lbl_804887F8; *(int*)((char*)a0 + 0x38) = 21; *(float*)((char*)a0 + 0x58) = lbl_805D8F60; *(int*)((char*)a0 + 0x114) = 0; *(int*)((char*)a0 + 0x110) = 0; return a0; }
}
