extern "C" {
    int fn_802D5ECC(void);
    extern unsigned char lbl_804E1E08[];
    extern const float lbl_805DE790;
void* fn_802D5ABC(void* a0) { fn_802D5ECC(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E1E08; *(float*)((char*)a0 + 0x200) = lbl_805DE790; return a0; }
}
