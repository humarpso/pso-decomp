extern "C" {
    int fn_80120D50(void);
    int fn_8012106C(void*, void*);
    extern unsigned char fn_80126460[];
    extern unsigned char lbl_804A2A58[];
    extern const float lbl_805DAD78;
void* fn_801266D8(void* a0) { fn_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2A58; fn_8012106C(a0, (void*)2); *(int*)((char*)a0 + 0x1f0) = (int)fn_80126460; *(int*)((char*)a0 + 0x1fc) = 0; *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x1e4) = lbl_805DAD78; return a0; }
}
