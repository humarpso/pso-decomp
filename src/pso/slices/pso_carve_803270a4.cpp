extern "C" {
    int fn_80120D50(void);
    extern unsigned char lbl_804ED390[];
    extern const float lbl_805DF680;
void* fn_803270A4(void* a0) { fn_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804ED390; *(float*)((char*)a0 + 0x1f8) = lbl_805DF680; return a0; }
}
