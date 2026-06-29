extern "C" {
    int fn_803151D0(void*);
    int TObjEneDelDepth__sub_803152D4(void*, void*);
    int TObjEneDelDepth__sub_80315380(void);
    int fn_80316488(void*, void*);
    extern const float lbl_805DF258;
    extern const float lbl_805DF278;
void fn_80315154(void* a0) { TObjEneDelDepth__sub_80315380(); *(float*)((char*)a0 + 0x39c) = lbl_805DF278; *(float*)((char*)a0 + 0x3a8) = lbl_805DF258; *(float*)((char*)a0 + 0x3a4) = lbl_805DF258; *(float*)((char*)a0 + 0x3a0) = lbl_805DF258; *(float*)((char*)a0 + 0x398) = lbl_805DF258; *(int*)((char*)a0 + 0x3c0) = 0; fn_80316488((void*)(*(int*)((char*)a0 + 0x37c)), (void*)6); TObjEneDelDepth__sub_803152D4(a0, (void*)0); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) | 0x4040000); fn_803151D0(a0); }
}
