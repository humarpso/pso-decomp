extern "C" {
    int fn_80120D50(void);
    int fn_8012106C(void*, void*);
    extern unsigned char fn_8011BEF0[];
    extern unsigned char lbl_804A5648[];
    extern const float lbl_805DAEF8;
void* fn_8012CDE8(void* a0) { fn_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A5648; fn_8012106C(a0, (void*)515); *(int*)((char*)a0 + 0x1f0) = (int)fn_8011BEF0; *(float*)((char*)a0 + 0x1e4) = lbl_805DAEF8; return a0; }
}
