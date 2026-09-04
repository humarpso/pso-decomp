#include "types.h"

extern "C" {

int TWindowDD__sub_803482B0(void);
void init_layout__9TWindowDDFiPv(int a0, void* a1);
void play_se__9TWindowDDFv(void);
void play_sound__9TWindowDDFv(void);
void set_default_coords__9TWindowDDFiPv(int a0, void* a1);
void set_default_positions__9TWindowDDFiPv(int a0, void* a1);
void spawn_window__9TWindowDDFv(void);
int TBoss3Volopt__sub_8022675C(void*, void*, void*, void*);
int TWindowDD__sub_80340508(void*, int);
int refresh_sub__9TWindowDDFPvPv(void);
int test_input_flag_4__9TWindowDDFPv(void* p);
int update__9TWindowDDFPvPv(void);
int update__9TWindowDDFPvi(void);

    extern const float lbl_805DFB94;
    extern const float lbl_805DFB98;
    extern const float lbl_805DFB9C;
    extern const float lbl_805DFBA0;
void set_default_coords__9TWindowDDFiPv(int a0, void* a1) { refresh_sub__9TWindowDDFPvPv(); *(float*)((char*)a1 + 0x30) = lbl_805DFB94; *(float*)((char*)a1 + 0x40) = lbl_805DFB94; *(float*)((char*)a1 + 0x34) = lbl_805DFB98; *(float*)((char*)a1 + 0x44) = lbl_805DFB98; *(float*)((char*)a1 + 0x38) = lbl_805DFB9C; *(float*)((char*)a1 + 0x48) = lbl_805DFB9C; *(float*)((char*)a1 + 0x3c) = lbl_805DFBA0; *(float*)((char*)a1 + 0x4c) = lbl_805DFBA0; }

    extern const float lbl_805DFB80;
    extern const float lbl_805DFB84;
    extern const float lbl_805DFB88;
    extern const float lbl_805DFB8C;
void init_layout__9TWindowDDFiPv(int a0, void* a1) { update__9TWindowDDFPvPv(); *(float*)((char*)a1 + 0x30) = lbl_805DFB80; *(float*)((char*)a1 + 0x40) = lbl_805DFB80; *(float*)((char*)a1 + 0x34) = lbl_805DFB84; *(float*)((char*)a1 + 0x44) = lbl_805DFB84; *(float*)((char*)a1 + 0x38) = lbl_805DFB88; *(float*)((char*)a1 + 0x48) = lbl_805DFB88; *(float*)((char*)a1 + 0x3c) = lbl_805DFB8C; *(float*)((char*)a1 + 0x4c) = lbl_805DFB8C; }

    extern const float TWindowDD__data_805DFB6C;
    extern const float lbl_805DFB70;
    extern const float TWindowDD__data_805DFB74;
    extern const float lbl_805DFB78;
void set_default_positions__9TWindowDDFiPv(int a0, void* a1) { update__9TWindowDDFPvi(); *(float*)((char*)a1 + 0x30) = TWindowDD__data_805DFB6C; *(float*)((char*)a1 + 0x40) = TWindowDD__data_805DFB6C; *(float*)((char*)a1 + 0x34) = lbl_805DFB70; *(float*)((char*)a1 + 0x44) = lbl_805DFB70; *(float*)((char*)a1 + 0x38) = TWindowDD__data_805DFB74; *(float*)((char*)a1 + 0x48) = TWindowDD__data_805DFB74; *(float*)((char*)a1 + 0x3c) = lbl_805DFB78; *(float*)((char*)a1 + 0x4c) = lbl_805DFB78; }

void spawn_window__9TWindowDDFv(void) { TBoss3Volopt__sub_8022675C((void*)344320, (void*)0, (void*)0, (void*)0); }
void play_se__9TWindowDDFv(void) { TBoss3Volopt__sub_8022675C((void*)339734, (void*)0, (void*)0, (void*)0); }
void play_sound__9TWindowDDFv(void) { TBoss3Volopt__sub_8022675C((void*)339201, (void*)0, (void*)0, (void*)0); }

int TWindowDD__sub_803482B0(void) { return 0; }

}
