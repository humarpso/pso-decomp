extern "C" {
    int init_map_object_base(void);
    extern unsigned char lbl_804B0BB8[];
    extern const float lbl_805DB3DC;
void* init_door_base(void* a0) { init_map_object_base(); *(int*)((char*)a0 + 0x18) = (int)lbl_804B0BB8; *(int*)((char*)a0 + 0xc8) = -1; *(int*)((char*)a0 + 0xcc) = 0; *(int*)((char*)a0 + 0xd0) = 0; *(int*)((char*)a0 + 0xac) = 0; *(float*)((char*)a0 + 0xb8) = lbl_805DB3DC; return a0; }
}
