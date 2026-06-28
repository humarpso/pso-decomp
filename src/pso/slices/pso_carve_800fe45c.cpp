extern "C" {
    int __ct__7TObjectFP7TObject(void);
    int fn_800FE32C(void*);
    extern unsigned char lbl_8049DC8C[];
    extern int lbl_805D2B44;
void* fn_800FE45C(void* a0, int a1) { __ct__7TObjectFP7TObject(); *(int*)((char*)a0 + 0x18) = (int)lbl_8049DC8C; *(int*)((char*)a0 + 0x0) = lbl_805D2B44; *(int*)((char*)a0 + 0x20) = a1; *(int*)((char*)a0 + 0x1c) = fn_800FE32C((void*)(*(int*)((char*)a0 + 0x20))); return a0; }
}
