extern "C" {
    int fn_80039DE0(void);
    extern const float lbl_805D8530;
    extern const float lbl_805D8534;
    extern const float lbl_805D8544;
void fn_80039CC8(void* a0) { *(int*)((char*)a0 + 0x11c) = 0; *(int*)((char*)a0 + 0x120) = 0; *(int*)((char*)a0 + 0x24) = 0; fn_80039DE0(); *(float*)((char*)a0 + 0x138) = lbl_805D8544; *(int*)((char*)a0 + 0x14c) = 0; *(float*)((char*)a0 + 0x13c) = lbl_805D8534; *(float*)((char*)a0 + 0x150) = lbl_805D8530; }
}
