extern "C" {
    int fn_802D5ECC(void);
    extern unsigned char fn_80109974[];
    extern unsigned char fn_80109BF8[];
    extern unsigned char lbl_804E20FC[];
    extern const float lbl_805DE78C;
void* fn_802D541C(void* a0) { fn_802D5ECC(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E20FC; *(float*)((char*)a0 + 0x200) = lbl_805DE78C; *(int*)((char*)a0 + 0x204) = (int)fn_80109974; *(int*)((char*)a0 + 0x208) = (int)fn_80109BF8; return a0; }
}
