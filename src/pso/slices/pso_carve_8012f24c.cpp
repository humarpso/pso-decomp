extern "C" {
    int fn_80120D50(void);
    extern unsigned char lbl_804A6200[];
    extern const float lbl_805DAF98;
void* fn_8012F24C(void* a0) { fn_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A6200; *(float*)((char*)a0 + 0x200) = lbl_805DAF98; *(float*)((char*)a0 + 0x1fc) = lbl_805DAF98; *(float*)((char*)a0 + 0x1f8) = lbl_805DAF98; return a0; }
}
