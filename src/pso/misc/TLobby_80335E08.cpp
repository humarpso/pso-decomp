#include "types.h"

extern "C" {

void* init_camera_state__6TLobbyFPvi(void* a0, int a1);
int __ct__7TObjectFP7TObject(void);

    extern unsigned char lbl_804EE458[];
    extern const float lbl_805DF8B4;
    extern const float lbl_805DF8C0;
void* init_camera_state__6TLobbyFPvi(void* a0, int a1) { __ct__7TObjectFP7TObject(); *(int*)((char*)a0 + 0x18) = (int)lbl_804EE458; *(int*)((char*)a0 + 0x1c) = a1; *(int*)((char*)a0 + 0x20) = 0; *(int*)((char*)a0 + 0x24) = 0; *(float*)((char*)a0 + 0x28) = lbl_805DF8C0; *(float*)((char*)a0 + 0x2c) = lbl_805DF8B4; *(float*)((char*)a0 + 0x30) = lbl_805DF8B4; *(float*)((char*)a0 + 0x34) = lbl_805DF8B4; *(int*)((char*)a0 + 0x38) = 0; return a0; }

}
