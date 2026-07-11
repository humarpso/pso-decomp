extern "C" {
    int TLobby__sub_8001DC24(void);
    int fn_80104394(void*);
    int fn_801043C4(int, void*);
    int fn_8010C52C(void*);
    int fn_8025829C(void*, void*);
    int fn_80258518(void*, void*);
    int fn_802586FC(void*, void*, void*, void*, void*);
    int fn_80259268(void*, void*, void*, void*, void*);
    extern const float lbl_805DCF08;

void fn_8025903C(void* a0, void* a1, int a2, void* a3) {
    int temp_r31;
    int temp_r3;

    *(float*)((char*)a0 + 0x8) = lbl_805DCF08;
    *(unsigned char*)((char*)a0 + 0x1c) = 51;
    temp_r31 = fn_80104394(a1);
    temp_r3 = fn_8010C52C(a1);
    fn_802586FC(a0, (void*)temp_r31, (void*)(*(unsigned char*)((char*)a1 + 0x0)), (void*)(*(unsigned char*)((char*)a1 + 0x1)), (void*)temp_r3);
    fn_801043C4(TLobby__sub_8001DC24(), a1);
    *(int*)((char*)a0 + 0x20) = fn_80259268(a0, (void*)TLobby__sub_8001DC24(), (void*)(*(int*)((char*)a0 + 0x20)), (void*)8, (void*)1);
    fn_8025829C(a0, a3);
    fn_80258518(a0, a1);
    *(int*)((char*)a0 + 0x34) = *(int*)((char*)a0 + 0x30);
    *(int*)((char*)a0 + 0x18) = a2;
    *(short*)((char*)a0 + 0x0) = (*(unsigned short*)((char*)a0 + 0x0) | 0x45);
}
}
