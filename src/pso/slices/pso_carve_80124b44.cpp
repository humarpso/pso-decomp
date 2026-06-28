extern "C" {
    int fn_80120D50(void);
    int fn_8012106C(void*, void*);
    extern unsigned char fn_8012484C[];
    extern unsigned char lbl_804A2164[];
    extern const float lbl_805DAD30;
void* fn_80124B44(void* a0) { fn_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2164; *(int*)((char*)a0 + 0x1f0) = (int)fn_8012484C; *(float*)((char*)a0 + 0x1e4) = lbl_805DAD30; fn_8012106C(a0, (void*)34); *(int*)((char*)a0 + 0x1f8) = 1; *(int*)((char*)a0 + 0x1fc) = 0; *(int*)((char*)a0 + 0x200) = 0; return a0; }
}
