extern "C" {
    int fn_8012106C(void*, void*);
    int fn_8012A884(void);
    extern unsigned char fn_8011B620[];
    extern unsigned char lbl_804A444C[];
    extern const float lbl_805DAE40;
void* fn_80129A4C(void* a0) { fn_8012A884(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A444C; *(int*)((char*)a0 + 0x200) = 8192; fn_8012106C(a0, (void*)2); *(int*)((char*)a0 + 0x1f0) = (int)fn_8011B620; *(float*)((char*)a0 + 0x1e4) = lbl_805DAE40; return a0; }
}
