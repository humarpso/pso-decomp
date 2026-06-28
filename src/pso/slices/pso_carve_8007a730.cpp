extern "C" {
    int fn_8007A770(void);
    extern const float lbl_805D9204;
void* fn_8007A730(void* a0) { fn_8007A770(); *(int*)((char*)a0 + 0x8) = -1; *(float*)((char*)a0 + 0xc) = lbl_805D9204; return a0; }
}
