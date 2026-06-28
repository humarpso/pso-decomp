extern "C" {
    int fn_80120D50(void);
    int fn_8012106C(void*, void*);
    extern unsigned char lbl_804A1570[];
    extern const float lbl_805DAD04;
void* fn_80122F94(void* a0) { fn_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A1570; fn_8012106C(a0, (void*)513); *(float*)((char*)a0 + 0x200) = lbl_805DAD04; *(float*)((char*)a0 + 0x1fc) = lbl_805DAD04; *(float*)((char*)a0 + 0x1f8) = lbl_805DAD04; return a0; }
}
