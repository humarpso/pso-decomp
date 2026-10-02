#include "types.h"

extern "C" {

void set_item_info__20TWindowSubStatusDispFPvPviPv(void* a0, void* a1, int a2, void* a3);
int TItemData__sub_8010C52C(void*);
int TLobby__sub_8001DC24(void);
int update_stat_line_if_positive__20TWindowSubStatusDispFPvi(void*, void*);
int update_item_colors__20TWindowSubStatusDispFPvi(void*, void*);
int select_item_icon__20TWindowSubStatusDispFPviUcUci(void*, void*, void*, void*, void*);
int TWindowSubStatusDisp__sub_80259268(void*, void*, void*, void*, void*);
int forward_message__6TLobbyFiUi(int, void*);
int get_item_data__6TLobbyFUi(void*);

    extern const float lbl_805DCF08;

void set_item_info__20TWindowSubStatusDispFPvPviPv(void* a0, void* a1, int a2, void* a3) {
    int temp_r31;
    int temp_r3;

    *(float*)((char*)a0 + 0x8) = lbl_805DCF08;
    *(unsigned char*)((char*)a0 + 0x1c) = 51;
    temp_r31 = get_item_data__6TLobbyFUi(a1);
    temp_r3 = TItemData__sub_8010C52C(a1);
    select_item_icon__20TWindowSubStatusDispFPviUcUci(a0, (void*)temp_r31, (void*)(*(unsigned char*)((char*)a1 + 0x0)), (void*)(*(unsigned char*)((char*)a1 + 0x1)), (void*)temp_r3);
    forward_message__6TLobbyFiUi(TLobby__sub_8001DC24(), a1);
    *(int*)((char*)a0 + 0x20) = TWindowSubStatusDisp__sub_80259268(a0, (void*)TLobby__sub_8001DC24(), (void*)(*(int*)((char*)a0 + 0x20)), (void*)8, (void*)1);
    update_stat_line_if_positive__20TWindowSubStatusDispFPvi(a0, a3);
    update_item_colors__20TWindowSubStatusDispFPvi(a0, a1);
    *(int*)((char*)a0 + 0x34) = *(int*)((char*)a0 + 0x30);
    *(int*)((char*)a0 + 0x18) = a2;
    *(short*)((char*)a0 + 0x0) = (*(unsigned short*)((char*)a0 + 0x0) | 0x45);
}

}
