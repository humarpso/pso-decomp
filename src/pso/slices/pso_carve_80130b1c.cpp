extern "C" {
    int TObjPlayer__sub_80120D50(void);
    int TObjPlayer__sub_8012106C(void*, void*);
    extern unsigned char fn_80109440[];
    extern unsigned char lbl_804A6AD8[];
    extern const float lbl_805DB00C;
    extern const float lbl_805DB018;
void* fn_80130B1C(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A6AD8; *(int*)((char*)a0 + 0x1f0) = 0; *(int*)((char*)a0 + 0x1ec) = (int)fn_80109440; *(float*)((char*)a0 + 0x1e4) = lbl_805DB018; TObjPlayer__sub_8012106C(a0, (void*)515); *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x204) = lbl_805DB00C; *(float*)((char*)a0 + 0x200) = lbl_805DB00C; *(float*)((char*)a0 + 0x1fc) = lbl_805DB00C; return a0; }
}
