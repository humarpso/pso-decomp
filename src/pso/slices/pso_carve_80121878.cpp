extern "C" {
    int fn_80120D50(void);
    int fn_8012106C(void*, void*);
    extern unsigned char fn_8012175C[];
    extern unsigned char lbl_804A0AC4[];
    extern const float lbl_805DACC4;
void* fn_80121878(void* a0) { fn_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A0AC4; fn_8012106C(a0, (void*)34); *(int*)((char*)a0 + 0x1f0) = (int)fn_8012175C; *(float*)((char*)a0 + 0x1e4) = lbl_805DACC4; return a0; }
}
