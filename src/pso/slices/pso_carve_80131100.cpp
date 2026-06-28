extern "C" {
    int fn_80120D50(void);
    extern unsigned char fn_80109440[];
    extern unsigned char lbl_804A6CC8[];
    extern const float lbl_805DB038;
    extern const float lbl_805DB044;
    extern const float lbl_805DB04C;
void* fn_80131100(void* a0) { fn_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A6CC8; *(int*)((char*)a0 + 0x1f0) = 0; *(int*)((char*)a0 + 0x1ec) = (int)fn_80109440; *(float*)((char*)a0 + 0x1e4) = lbl_805DB04C; *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x204) = lbl_805DB038; *(float*)((char*)a0 + 0x200) = lbl_805DB038; *(float*)((char*)a0 + 0x1fc) = lbl_805DB038; *(int*)((char*)a0 + 0x208) = 0; *(float*)((char*)a0 + 0x214) = lbl_805DB044; *(float*)((char*)a0 + 0x210) = lbl_805DB044; *(float*)((char*)a0 + 0x20c) = lbl_805DB044; return a0; }
}
