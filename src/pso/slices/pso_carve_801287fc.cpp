extern "C" {
    int fn_8012A884(void);
    extern unsigned char lbl_804A3E20[];
    extern const float lbl_805DADF4;
void* fn_801287FC(void* a0) { fn_8012A884(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A3E20; *(float*)((char*)a0 + 0x204) = lbl_805DADF4; *(float*)((char*)a0 + 0x200) = lbl_805DADF4; *(float*)((char*)a0 + 0x1fc) = lbl_805DADF4; return a0; }
}
