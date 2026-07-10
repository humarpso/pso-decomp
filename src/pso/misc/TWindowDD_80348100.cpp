#include "types.h"

extern "C" {

void set_default_coords__9TWindowDDFiPv(int a0, void* a1);
void init_layout__9TWindowDDFiPv(int a0, void* a1);
void set_default_positions__9TWindowDDFiPv(int a0, void* a1);
int TWindowDD__sub_80347FD8(void);
int TWindowDD__sub_80348048(void);
int update__9TWindowDDFPvi(void);

    extern const float lbl_805DFB94;
    extern const float lbl_805DFB98;
    extern const float lbl_805DFB9C;
    extern const float lbl_805DFBA0;
void set_default_coords__9TWindowDDFiPv(int a0, void* a1) { TWindowDD__sub_80347FD8(); *(float*)((char*)a1 + 0x30) = lbl_805DFB94; *(float*)((char*)a1 + 0x40) = lbl_805DFB94; *(float*)((char*)a1 + 0x34) = lbl_805DFB98; *(float*)((char*)a1 + 0x44) = lbl_805DFB98; *(float*)((char*)a1 + 0x38) = lbl_805DFB9C; *(float*)((char*)a1 + 0x48) = lbl_805DFB9C; *(float*)((char*)a1 + 0x3c) = lbl_805DFBA0; *(float*)((char*)a1 + 0x4c) = lbl_805DFBA0; }

    extern const float lbl_805DFB80;
    extern const float lbl_805DFB84;
    extern const float lbl_805DFB88;
    extern const float lbl_805DFB8C;
void init_layout__9TWindowDDFiPv(int a0, void* a1) { TWindowDD__sub_80348048(); *(float*)((char*)a1 + 0x30) = lbl_805DFB80; *(float*)((char*)a1 + 0x40) = lbl_805DFB80; *(float*)((char*)a1 + 0x34) = lbl_805DFB84; *(float*)((char*)a1 + 0x44) = lbl_805DFB84; *(float*)((char*)a1 + 0x38) = lbl_805DFB88; *(float*)((char*)a1 + 0x48) = lbl_805DFB88; *(float*)((char*)a1 + 0x3c) = lbl_805DFB8C; *(float*)((char*)a1 + 0x4c) = lbl_805DFB8C; }

    extern const float lbl_805DFB6C;
    extern const float lbl_805DFB70;
    extern const float lbl_805DFB74;
    extern const float lbl_805DFB78;
void set_default_positions__9TWindowDDFiPv(int a0, void* a1) { update__9TWindowDDFPvi(); *(float*)((char*)a1 + 0x30) = lbl_805DFB6C; *(float*)((char*)a1 + 0x40) = lbl_805DFB6C; *(float*)((char*)a1 + 0x34) = lbl_805DFB70; *(float*)((char*)a1 + 0x44) = lbl_805DFB70; *(float*)((char*)a1 + 0x38) = lbl_805DFB74; *(float*)((char*)a1 + 0x48) = lbl_805DFB74; *(float*)((char*)a1 + 0x3c) = lbl_805DFB78; *(float*)((char*)a1 + 0x4c) = lbl_805DFB78; }

}
