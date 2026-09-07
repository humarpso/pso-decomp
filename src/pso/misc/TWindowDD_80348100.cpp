#include "pso/misc/TWindowDD.h"

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 TWindowDD__sub_803482B0(u8 *arg0);
}

extern "C" {

void init_layout__9TWindowDDFiPv(int a0, void* a1);
void play_se__9TWindowDDFv(void);
void play_sound__9TWindowDDFv(void);
void set_default_coords__9TWindowDDFiPv(int a0, void* a1);
void set_default_positions__9TWindowDDFiPv(int a0, void* a1);
void spawn_window__9TWindowDDFv(void);
int TBoss3Volopt__sub_8022675C(void*, void*, void*, void*);
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
u8 TWindowDD__sub_803482B0(u8 *arg0) {
    s32 var_r31;
    var_r31 = 0;
    if ((((s32)TWindowDD_check_input_mask((void*)((void *) (arg0 + 0x1C)), (int)((int) (2)))) != 0) || (M2C_FIELD(arg0, s32 *, 0x94) & 2)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

}
