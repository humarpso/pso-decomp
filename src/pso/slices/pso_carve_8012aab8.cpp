extern "C" {
    int fn_80120D50(void);
    int fn_8012106C(void*, void*);
    extern unsigned char fn_80109710[];
    extern unsigned char lbl_804A4A88[];
    extern const float lbl_805DAE70;
void* fn_8012AAB8(void* a0) { fn_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A4A88; fn_8012106C(a0, (void*)34); *(int*)((char*)a0 + 0x1f0) = (int)fn_80109710; *(float*)((char*)a0 + 0x1e4) = lbl_805DAE70; *(int*)((char*)a0 + 0x1f8) = 0; return a0; }
}
