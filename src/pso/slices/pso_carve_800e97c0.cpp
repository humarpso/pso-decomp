extern "C" {
    int fn_800EACFC(void*, void*);
    int fn_800EC7F4(void*, void*);
    extern const float lbl_805DA67C;
void fn_800E97C0(void* a0) { *(float*)((char*)a0 + 0x3b0) = lbl_805DA67C; *(float*)((char*)a0 + 0x3ac) = lbl_805DA67C; *(float*)((char*)a0 + 0x3a8) = lbl_805DA67C; *(int*)((char*)a0 + 0x394) = 0; fn_800EC7F4((void*)(*(int*)((char*)a0 + 0x388)), (void*)4); fn_800EACFC(a0, (void*)2); }
}
