extern "C" {
    int TObjPlayer__sub_801569F4(void);
    extern unsigned char lbl_804AFBF8[];
    extern const float lbl_805DB2EC;
    extern const float lbl_805DB2F0;
    extern const float lbl_805DB2F4;
    extern const float lbl_805DB2F8;
void* init_map_object_base(void* a0) { TObjPlayer__sub_801569F4(); *(int*)((char*)a0 + 0x18) = (int)lbl_804AFBF8; *(int*)((char*)a0 + 0xac) = 0; *(float*)((char*)a0 + 0xb0) = lbl_805DB2F0; *(float*)((char*)a0 + 0xb4) = lbl_805DB2F0; *(float*)((char*)a0 + 0xb8) = lbl_805DB2F4; *(int*)((char*)a0 + 0xbc) = 0; *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) | 0x40000000); *(float*)((char*)a0 + 0xc0) = lbl_805DB2F8; *(float*)((char*)a0 + 0xc4) = lbl_805DB2EC; return a0; }
}
