extern "C" {
    int fn_800EAB04(void*);
    int fn_800EACFC(void*, void*);
    int fn_800EAD84(void);
    int fn_800EC7F4(void*, void*);
    extern const float lbl_805DA6B4;
    extern const float lbl_805DA708;
void fn_800EAA88(void* a0) { fn_800EAD84(); *(float*)((char*)a0 + 0x3a4) = lbl_805DA708; *(float*)((char*)a0 + 0x3b0) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3ac) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a8) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a0) = lbl_805DA6B4; *(int*)((char*)a0 + 0x3c8) = 0; fn_800EC7F4((void*)(*(int*)((char*)a0 + 0x388)), (void*)7); fn_800EACFC(a0, (void*)0); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) | 0x40000); fn_800EAB04(a0); }
}
