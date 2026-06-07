#include "types.h"

extern u32 glob_8003EAE0;
extern u32 glob_8003EB08;
extern u32 glob_8003EC5C;
extern u32 glob_8003ECCC;
extern u32 glob_8003ECD8;
extern u32 glob_8003ECDC;
extern u32 glob_8003ECF0;
extern f32 glob_8003ECF4;
extern f32 glob_8003ECF8;
extern u8  glob_8003ED00;

void func_800221DC(void) {
}

void func_80024478(void) {
}

void func_800296E4(void) {
}

void func_80031EC0(void) {
}

void func_80031EC4(void) {
}

void func_80031EE0(void) {
}

void func_80031EE4(void) {
}

void func_80031EF8(void) {
}

void func_80031EFC(void) {
}

void func_800291F0(void) {
}

void func_80036A88(void) {
}

void func_800385D4(void) {
}

s32 func_80016968(void) {
    return 3;
}

s32 func_80018C40(void) {
    return 29;
}

s32 func_800191B4(void) {
    return 0;
}

s32 func_8001A6FC(void) {
    return 0;
}

s32 func_800240AC(void) {
    return 0;
}

s32 func_800276C0(void) {
    return 0;
}

s32 func_800276C8(void) {
    return 0;
}

s32 func_800276D0(void) {
    return 0;
}

s32 func_80029610(void) {
    return 84;
}

s32 func_8002BBEC(void) {
    return -1;
}

s32 func_80030010(void) {
    return 1;
}

s32 func_80030018(void) {
    return -1;
}

s32 func_80031EC8(void) {
    return 0;
}

s32 func_80031ED0(void) {
    return 0;
}

s32 func_80031ED8(void) {
    return 0;
}

s32 func_80031EE8(void) {
    return 1;
}

s32 func_80031EF0(void) {
    return 0;
}

s32 func_80033D98(void) {
    return 0;
}

s32 func_80035F30(void) {
    return 0;
}

s32 func_80036CB4(void) {
    return 0;
}

u32 func_8001A694(void) {
    return glob_8003EB08;
}

void func_80035930(u32 val) {
    glob_8003EC5C = val;
}

void func_800380DC(u32 val) {
    glob_8003ECCC = val;
}

void func_80038404(u32 val) {
    glob_8003ECF0 = val;
}

void func_800104A4(void* ptr) {
    *(u32*)ptr = 0;
}

extern u32 glob_8003EA08;
void func_80012DA0(void) {
    glob_8003EA08 = 1;
}

u32 func_80010BA8(u32 a, u32 b) {
    return b;
}

void func_80012FE8(u32 val, u32* ptr) {
    ptr[2] = val;
}

s32 func_80016934(u32 a, u32 b) {
    glob_8003EAE0 = b;
    return 2;
}

u32 func_8001872C(void) {
    return 0x80000000;
}

void func_8001D4E8(u32* ptr, u32 a, u32 b) {
    ptr[3] = a;
    ptr[4] = b;
}

u32 func_80020580(u32* ptr) {
    return ptr[5];
}

asm u32 func_800278A4(void) {
#include "orig_asm/game/stubs/func_800278A4.inc"
}

asm void func_800278AC(register u32 val) {
#include "orig_asm/game/stubs/func_800278AC.inc"
}

void func_800375B8(u32 val) {
    glob_8003ECDC = val;
    glob_8003ECD8 = val;
}

void func_800383B8(void) {
    glob_8003ED00 = 1;
}

void func_800383F8(f32 a, f32 b) {
    glob_8003ECF8 = a;
    glob_8003ECF4 = b;
}

void func_8001407C(u32* ptr) {
    ptr[1] = 0;
    ptr[0] = 0;
}

extern u32 glob_8004002C;
u32 func_80013D90(void) {
    return glob_8004002C;
}

void* func_8001915C(void* a, void* b, u8* c) {
    return c + 0x26;
}

void* func_80019164(void* a, void* b, u8* c) {
    return c + 0x4c;
}

void* func_8001916C(void* a, void* b, u8* c) {
    return c + 0x72;
}

void* func_80019174(void* a, void* b, void* c) {
    return c;
}

void* func_8001917C(void* a, void* b, u8* c) {
    return c + 0x26;
}

void* func_80019184(void* a, void* b, u8* c) {
    return c + 0x98;
}

void* func_8001918C(void* a, void* b, u8* c) {
    return c + 0xbe;
}

void* func_80019194(void* a, void* b, u8* c) {
    return c + 0xe4;
}

void* func_8001919C(void* a, void* b, u8* c) {
    return c + 0x10a;
}

void* func_800191A4(void* a, void* b, u8* c) {
    return c + 0x4c;
}

void* func_800191AC(void* a, void* b, u8* c) {
    return c + 0x72;
}

void func_8001F944(u8* ptr, f32 x, f32 y, f32 z) {
    *(f32*)(ptr + 0x1c) = x;
    *(f32*)(ptr + 0x20) = y;
    *(f32*)(ptr + 0x24) = z;
}

void func_8001F954(u8* ptr, f32 x, f32 y, f32 z) {
    *(f32*)(ptr + 0x28) = x;
    *(f32*)(ptr + 0x2c) = y;
    *(f32*)(ptr + 0x30) = z;
}

asm void func_80029140(void) {
#include "orig_asm/game/stubs/func_80029140.inc"
}

asm void func_80029148(void) {
#include "orig_asm/game/stubs/func_80029148.inc"
}

asm void func_80029150(void) {
#include "orig_asm/game/stubs/func_80029150.inc"
}

asm void func_80029158(void) {
#include "orig_asm/game/stubs/func_80029158.inc"
}

extern void func_8001218C(void);
extern void func_800121B4(void);
extern void func_80014DF4(void);
extern void func_8000F9B4(void);
extern void func_8001437C(void);

asm void func_800102C0(void) {
#include "orig_asm/game/stubs/func_800102C0.inc"
}

asm void func_80012BB8(void) {
#include "orig_asm/game/stubs/func_80012BB8.inc"
}

asm void func_800129F8(void) {
#include "orig_asm/game/stubs/func_800129F8.inc"
}

asm u32 func_80013320(void) {
#include "orig_asm/game/stubs/func_80013320.inc"
}

asm void func_80013ED0(void) {
#include "orig_asm/game/stubs/func_80013ED0.inc"
}

asm void func_80014098(void) {
#include "orig_asm/game/stubs/func_80014098.inc"
}

asm s32 func_800140A0(void) {
#include "orig_asm/game/stubs/func_800140A0.inc"
}

asm void func_800140D8(void) {
#include "orig_asm/game/stubs/func_800140D8.inc"
}

asm s32 func_800140E0(void) {
#include "orig_asm/game/stubs/func_800140E0.inc"
}

asm void func_8001457C(void) {
#include "orig_asm/game/stubs/func_8001457C.inc"
}

asm void func_80014584(void) {
#include "orig_asm/game/stubs/func_80014584.inc"
}

asm void func_80014DD4(void) {
#include "orig_asm/game/stubs/func_80014DD4.inc"
}

asm void func_80014DDC(void) {
#include "orig_asm/game/stubs/func_80014DDC.inc"
}

asm void func_80014E48(void) {
#include "orig_asm/game/stubs/func_80014E48.inc"
}

asm void func_80014E50(void) {
#include "orig_asm/game/stubs/func_80014E50.inc"
}

asm void func_8000FB24(void) {
#include "orig_asm/game/stubs/func_8000FB24.inc"
}

asm void func_8000FC88(void) {
#include "orig_asm/game/stubs/func_8000FC88.inc"
}

asm void func_80010040(void) {
#include "orig_asm/game/stubs/func_80010040.inc"
}

asm void func_800104B0(void) {
#include "orig_asm/game/stubs/func_800104B0.inc"
}

asm void func_80010700(void) {
#include "orig_asm/game/stubs/func_80010700.inc"
}

asm void func_80010768(void) {
#include "orig_asm/game/stubs/func_80010768.inc"
}

asm void func_80010884(void) {
#include "orig_asm/game/stubs/func_80010884.inc"
}

asm void func_80010E34(void) {
#include "orig_asm/game/stubs/func_80010E34.inc"
}

asm void func_800112CC(void) {
#include "orig_asm/game/stubs/func_800112CC.inc"
}

asm void func_8001132C(void) {
#include "orig_asm/game/stubs/func_8001132C.inc"
}

asm void func_800113C4(void) {
#include "orig_asm/game/stubs/func_800113C4.inc"
}

asm void func_80011524(void) {
#include "orig_asm/game/stubs/func_80011524.inc"
}

asm void func_80011A50(void) {
#include "orig_asm/game/stubs/func_80011A50.inc"
}

asm void func_80011D7C(void) {
#include "orig_asm/game/stubs/func_80011D7C.inc"
}

asm void func_80011E44(void) {
#include "orig_asm/game/stubs/func_80011E44.inc"
}

asm void func_80011F8C(void) {
#include "orig_asm/game/stubs/func_80011F8C.inc"
}

asm void func_80012208(void) {
#include "orig_asm/game/stubs/func_80012208.inc"
}

asm void func_80012554(void) {
#include "orig_asm/game/stubs/func_80012554.inc"
}

asm void func_800125DC(void) {
#include "orig_asm/game/stubs/func_800125DC.inc"
}

asm void func_80012664(void) {
#include "orig_asm/game/stubs/func_80012664.inc"
}

asm void func_80012BD0(void) {
#include "orig_asm/game/stubs/func_80012BD0.inc"
}

asm void func_80012CF0(void) {
#include "orig_asm/game/stubs/func_80012CF0.inc"
}

asm void func_80012D60(void) {
#include "orig_asm/game/stubs/func_80012D60.inc"
}

asm void func_80012DAC(void) {
#include "orig_asm/game/stubs/func_80012DAC.inc"
}

asm void func_80013060(void) {
#include "orig_asm/game/stubs/func_80013060.inc"
}

asm void func_800130A8(void) {
#include "orig_asm/game/stubs/func_800130A8.inc"
}

asm void func_80013350(void) {
#include "orig_asm/game/stubs/func_80013350.inc"
}

asm void func_80013444(void) {
#include "orig_asm/game/stubs/func_80013444.inc"
}

asm void func_80013EF0(void) {
#include "orig_asm/game/stubs/func_80013EF0.inc"
}

asm void func_800141BC(void) {
#include "orig_asm/game/stubs/func_800141BC.inc"
}

asm void func_800145AC(void) {
#include "orig_asm/game/stubs/func_800145AC.inc"
}

asm void func_80014768(void) {
#include "orig_asm/game/stubs/func_80014768.inc"
}

asm void func_800149F0(void) {
#include "orig_asm/game/stubs/func_800149F0.inc"
}

asm void func_80014B60(void) {
#include "orig_asm/game/stubs/func_80014B60.inc"
}

asm void func_80014C4C(void) {
#include "orig_asm/game/stubs/func_80014C4C.inc"
}

asm void func_80014D70(void) {
#include "orig_asm/game/stubs/func_80014D70.inc"
}

asm void func_80014DF4(void) {
#include "orig_asm/game/stubs/func_80014DF4.inc"
}

asm void func_80014EBC(void) {
#include "orig_asm/game/stubs/func_80014EBC.inc"
}

asm void func_80015E34(void) {
#include "orig_asm/game/stubs/func_80015E34.inc"
}

asm void DVDConvertPathToEntrynum(void) {
#include "orig_asm/game/stubs/DVDConvertPathToEntrynum.inc"
}

asm void func_800161A4(void) {
#include "orig_asm/game/stubs/func_800161A4.inc"
}

asm void func_800163CC(void) {
#include "orig_asm/game/stubs/func_800163CC.inc"
}

asm void func_80016490(void) {
#include "orig_asm/game/stubs/func_80016490.inc"
}

asm void func_80016550(void) {
#include "orig_asm/game/stubs/func_80016550.inc"
}

asm void func_80017288(void) {
#include "orig_asm/game/stubs/func_80017288.inc"
}

asm void func_80018370(void) {
#include "orig_asm/game/stubs/func_80018370.inc"
}

asm void func_800183B4(void) {
#include "orig_asm/game/stubs/func_800183B4.inc"
}

asm void func_80018400(void) {
#include "orig_asm/game/stubs/func_80018400.inc"
}

asm void func_800184BC(void) {
#include "orig_asm/game/stubs/func_800184BC.inc"
}

asm void func_80018734(void) {
#include "orig_asm/game/stubs/func_80018734.inc"
}

asm void func_80018818(void) {
#include "orig_asm/game/stubs/func_80018818.inc"
}

asm void func_8001896C(void) {
#include "orig_asm/game/stubs/func_8001896C.inc"
}

asm void func_800189D4(void) {
#include "orig_asm/game/stubs/func_800189D4.inc"
}

asm void func_80018A74(void) {
#include "orig_asm/game/stubs/func_80018A74.inc"
}

asm void func_80018ACC(void) {
#include "orig_asm/game/stubs/func_80018ACC.inc"
}

asm void func_800191BC(void) {
#include "orig_asm/game/stubs/func_800191BC.inc"
}

asm void func_8001982C(void) {
#include "orig_asm/game/stubs/func_8001982C.inc"
}

asm void func_8001A490(void) {
#include "orig_asm/game/stubs/func_8001A490.inc"
}

asm void func_8001A704(void) {
#include "orig_asm/game/stubs/func_8001A704.inc"
}

asm void func_8001A7AC(void) {
#include "orig_asm/game/stubs/func_8001A7AC.inc"
}

asm void func_8001A844(void) {
#include "orig_asm/game/stubs/func_8001A844.inc"
}

asm void func_8001AFEC(void) {
#include "orig_asm/game/stubs/func_8001AFEC.inc"
}

asm void func_8001B120(void) {
#include "orig_asm/game/stubs/func_8001B120.inc"
}

asm void func_8001B430(void) {
#include "orig_asm/game/stubs/func_8001B430.inc"
}

asm void func_8001BF1C(void) {
#include "orig_asm/game/stubs/func_8001BF1C.inc"
}

asm void func_8001C0B0(void) {
#include "orig_asm/game/stubs/func_8001C0B0.inc"
}

asm void func_8001C164(void) {
#include "orig_asm/game/stubs/func_8001C164.inc"
}

asm void func_8001C1E0(void) {
#include "orig_asm/game/stubs/func_8001C1E0.inc"
}

asm void func_8001C280(void) {
#include "orig_asm/game/stubs/func_8001C280.inc"
}

asm void func_8001CA4C(void) {
#include "orig_asm/game/stubs/func_8001CA4C.inc"
}

asm void func_8001D2D0(void) {
#include "orig_asm/game/stubs/func_8001D2D0.inc"
}

asm void func_8001D478(void) {
#include "orig_asm/game/stubs/func_8001D478.inc"
}

asm void func_8001D4F4(void) {
#include "orig_asm/game/stubs/func_8001D4F4.inc"
}

asm void func_8001D604(void) {
#include "orig_asm/game/stubs/func_8001D604.inc"
}

asm void func_8001E790(void) {
#include "orig_asm/game/stubs/func_8001E790.inc"
}

asm void func_8001E7EC(void) {
#include "orig_asm/game/stubs/func_8001E7EC.inc"
}

asm void func_8001E9AC(void) {
#include "orig_asm/game/stubs/func_8001E9AC.inc"
}

asm void func_8001EB38(void) {
#include "orig_asm/game/stubs/func_8001EB38.inc"
}

asm void func_8001EBD8(void) {
#include "orig_asm/game/stubs/func_8001EBD8.inc"
}

asm void func_8001F41C(void) {
#include "orig_asm/game/stubs/func_8001F41C.inc"
}

asm void func_80020130(void) {
#include "orig_asm/game/stubs/func_80020130.inc"
}

asm void func_800203A4(void) {
#include "orig_asm/game/stubs/func_800203A4.inc"
}

asm void func_80020730(void) {
#include "orig_asm/game/stubs/func_80020730.inc"
}

asm void func_800208EC(void) {
#include "orig_asm/game/stubs/func_800208EC.inc"
}

asm void func_80020A28(void) {
#include "orig_asm/game/stubs/func_80020A28.inc"
}

asm void func_80022340(void) {
#include "orig_asm/game/stubs/func_80022340.inc"
}

asm void func_8002237C(void) {
#include "orig_asm/game/stubs/func_8002237C.inc"
}

asm void func_800223BC(void) {
#include "orig_asm/game/stubs/func_800223BC.inc"
}

asm void func_800223F8(void) {
#include "orig_asm/game/stubs/func_800223F8.inc"
}

asm void func_8002247C(void) {
#include "orig_asm/game/stubs/func_8002247C.inc"
}

asm void func_80022598(void) {
#include "orig_asm/game/stubs/func_80022598.inc"
}

asm void func_80031F00(void) {
#include "orig_asm/game/stubs/func_80031F00.inc"
}

asm void func_80032160(void) {
#include "orig_asm/game/stubs/func_80032160.inc"
}

asm void func_800322DC(void) {
#include "orig_asm/game/stubs/func_800322DC.inc"
}

asm void func_80032A6C(void) {
#include "orig_asm/game/stubs/func_80032A6C.inc"
}

asm void func_80032CC8(void) {
#include "orig_asm/game/stubs/func_80032CC8.inc"
}

asm void func_80032D68(void) {
#include "orig_asm/game/stubs/func_80032D68.inc"
}

asm void func_800330D4(void) {
#include "orig_asm/game/stubs/func_800330D4.inc"
}

asm void func_80033248(void) {
#include "orig_asm/game/stubs/func_80033248.inc"
}

asm void func_80033374(void) {
#include "orig_asm/game/stubs/func_80033374.inc"
}

asm void func_80033940(void) {
#include "orig_asm/game/stubs/func_80033940.inc"
}

asm void func_80033A34(void) {
#include "orig_asm/game/stubs/func_80033A34.inc"
}

asm void func_80033B10(void) {
#include "orig_asm/game/stubs/func_80033B10.inc"
}

asm void func_80033B80(void) {
#include "orig_asm/game/stubs/func_80033B80.inc"
}

asm void func_800344B4(void) {
#include "orig_asm/game/stubs/func_800344B4.inc"
}

asm void func_80034580(void) {
#include "orig_asm/game/stubs/func_80034580.inc"
}

asm void func_80034924(void) {
#include "orig_asm/game/stubs/func_80034924.inc"
}

asm void func_80034A20(void) {
#include "orig_asm/game/stubs/func_80034A20.inc"
}

asm void func_80034ABC(void) {
#include "orig_asm/game/stubs/func_80034ABC.inc"
}

asm void func_80034D4C(void) {
#include "orig_asm/game/stubs/func_80034D4C.inc"
}

asm void func_80034EB8(void) {
#include "orig_asm/game/stubs/func_80034EB8.inc"
}

asm void func_80035150(void) {
#include "orig_asm/game/stubs/func_80035150.inc"
}

asm void func_80035314(void) {
#include "orig_asm/game/stubs/func_80035314.inc"
}

asm void func_80035450(void) {
#include "orig_asm/game/stubs/func_80035450.inc"
}

asm void func_80035534(void) {
#include "orig_asm/game/stubs/func_80035534.inc"
}

asm void func_8000FC4C(void) {
#include "orig_asm/game/stubs/func_8000FC4C.inc"
}

asm void func_80011F70(void) {
#include "orig_asm/game/stubs/func_80011F70.inc"
}

asm void func_80012D8C(void) {
#include "orig_asm/game/stubs/func_80012D8C.inc"
}

asm void func_80014180(void) {
#include "orig_asm/game/stubs/func_80014180.inc"
}

asm void func_80015908(void) {
#include "orig_asm/game/stubs/func_80015908.inc"
}

asm void func_80015E08(void) {
#include "orig_asm/game/stubs/func_80015E08.inc"
}

asm void func_80015E1C(void) {
#include "orig_asm/game/stubs/func_80015E1C.inc"
}

asm void func_80015E78(void) {
#include "orig_asm/game/stubs/func_80015E78.inc"
}

asm void func_800184AC(void) {
#include "orig_asm/game/stubs/func_800184AC.inc"
}

asm void func_80018934(void) {
#include "orig_asm/game/stubs/func_80018934.inc"
}

asm void func_8001C25C(void) {
#include "orig_asm/game/stubs/func_8001C25C.inc"
}

asm void func_8001D7C8(void) {
#include "orig_asm/game/stubs/func_8001D7C8.inc"
}

asm void func_8001D7F0(void) {
#include "orig_asm/game/stubs/func_8001D7F0.inc"
}

asm void func_8001E3F0(void) {
#include "orig_asm/game/stubs/func_8001E3F0.inc"
}

asm void func_8001E778(void) {
#include "orig_asm/game/stubs/func_8001E778.inc"
}

asm void func_8001E86C(void) {
#include "orig_asm/game/stubs/func_8001E86C.inc"
}

asm void func_8001E880(void) {
#include "orig_asm/game/stubs/func_8001E880.inc"
}

asm void func_8001E894(void) {
#include "orig_asm/game/stubs/func_8001E894.inc"
}

asm void func_8001E938(void) {
#include "orig_asm/game/stubs/func_8001E938.inc"
}

asm void func_8001E954(void) {
#include "orig_asm/game/stubs/func_8001E954.inc"
}

asm void func_8001E968(void) {
#include "orig_asm/game/stubs/func_8001E968.inc"
}

asm void func_8001E984(void) {
#include "orig_asm/game/stubs/func_8001E984.inc"
}

asm void func_8001EEF4(void) {
#include "orig_asm/game/stubs/func_8001EEF4.inc"
}

asm void func_8001F13C(void) {
#include "orig_asm/game/stubs/func_8001F13C.inc"
}

asm void func_8001F780(void) {
#include "orig_asm/game/stubs/func_8001F780.inc"
}

asm void func_8001F90C(void) {
#include "orig_asm/game/stubs/func_8001F90C.inc"
}

asm void func_8001F964(void) {
#include "orig_asm/game/stubs/func_8001F964.inc"
}

asm void func_8001FC04(void) {
#include "orig_asm/game/stubs/func_8001FC04.inc"
}

asm void func_8001FD6C(void) {
#include "orig_asm/game/stubs/func_8001FD6C.inc"
}

asm void func_80020934(void) {
#include "orig_asm/game/stubs/func_80020934.inc"
}

asm void func_80020948(void) {
#include "orig_asm/game/stubs/func_80020948.inc"
}

asm void func_80021054(void) {
#include "orig_asm/game/stubs/func_80021054.inc"
}

asm void func_80021194(void) {
#include "orig_asm/game/stubs/func_80021194.inc"
}

asm void func_80021A60(void) {
#include "orig_asm/game/stubs/func_80021A60.inc"
}

asm void func_80021E48(void) {
#include "orig_asm/game/stubs/func_80021E48.inc"
}

asm void func_80021E88(void) {
#include "orig_asm/game/stubs/func_80021E88.inc"
}

asm void func_80021F40(void) {
#include "orig_asm/game/stubs/func_80021F40.inc"
}

asm void func_80022090(void) {
#include "orig_asm/game/stubs/func_80022090.inc"
}

asm void func_80022124(void) {
#include "orig_asm/game/stubs/func_80022124.inc"
}

asm void func_800226B0(void) {
#include "orig_asm/game/stubs/func_800226B0.inc"
}

asm void func_80022FF4(void) {
#include "orig_asm/game/stubs/func_80022FF4.inc"
}

asm void func_80023120(void) {
#include "orig_asm/game/stubs/func_80023120.inc"
}

asm void func_80023E70(void) {
#include "orig_asm/game/stubs/func_80023E70.inc"
}

asm void func_80023F44(void) {
#include "orig_asm/game/stubs/func_80023F44.inc"
}

asm void func_800240B4(void) {
#include "orig_asm/game/stubs/func_800240B4.inc"
}

asm void func_80024588(void) {
#include "orig_asm/game/stubs/func_80024588.inc"
}

asm void func_80026DE4(void) {
#include "orig_asm/game/stubs/func_80026DE4.inc"
}

asm void func_80026DF0(void) {
#include "orig_asm/game/stubs/func_80026DF0.inc"
}

asm void func_800277B0(void) {
#include "orig_asm/game/stubs/func_800277B0.inc"
}

asm void func_800278B4(void) {
#include "orig_asm/game/stubs/func_800278B4.inc"
}

asm void func_80027C38(void) {
#include "orig_asm/game/stubs/func_80027C38.inc"
}

asm void func_80027E64(void) {
#include "orig_asm/game/stubs/func_80027E64.inc"
}

asm void func_80027E7C(void) {
#include "orig_asm/game/stubs/func_80027E7C.inc"
}

asm void func_80027E8C(void) {
#include "orig_asm/game/stubs/func_80027E8C.inc"
}

asm void func_800280E0(void) {
#include "orig_asm/game/stubs/func_800280E0.inc"
}

asm void func_800286C8(void) {
#include "orig_asm/game/stubs/func_800286C8.inc"
}

asm void func_80029240(void) {
#include "orig_asm/game/stubs/func_80029240.inc"
}

asm void func_8002985C(void) {
#include "orig_asm/game/stubs/func_8002985C.inc"
}

asm void func_80029B3C(void) {
#include "orig_asm/game/stubs/func_80029B3C.inc"
}

asm void func_80029B4C(void) {
#include "orig_asm/game/stubs/func_80029B4C.inc"
}

asm void func_80029EAC(void) {
#include "orig_asm/game/stubs/func_80029EAC.inc"
}

asm void func_8002A3E8(void) {
#include "orig_asm/game/stubs/func_8002A3E8.inc"
}

asm void func_8002A610(void) {
#include "orig_asm/game/stubs/func_8002A610.inc"
}

asm void func_8002A634(void) {
#include "orig_asm/game/stubs/func_8002A634.inc"
}

asm void func_8002A658(void) {
#include "orig_asm/game/stubs/func_8002A658.inc"
}

asm void func_8002BB8C(void) {
#include "orig_asm/game/stubs/func_8002BB8C.inc"
}

asm void func_8002BBF4(void) {
#include "orig_asm/game/stubs/func_8002BBF4.inc"
}

asm void func_8002D158(void) {
#include "orig_asm/game/stubs/func_8002D158.inc"
}

asm void func_8002D19C(void) {
#include "orig_asm/game/stubs/func_8002D19C.inc"
}

asm void func_8002D978(void) {
#include "orig_asm/game/stubs/func_8002D978.inc"
}

asm void func_8002DB30(void) {
#include "orig_asm/game/stubs/func_8002DB30.inc"
}

asm void func_8002DB5C(void) {
#include "orig_asm/game/stubs/func_8002DB5C.inc"
}

asm void func_8002DF34(void) {
#include "orig_asm/game/stubs/func_8002DF34.inc"
}

asm void func_8002FD8C(void) {
#include "orig_asm/game/stubs/func_8002FD8C.inc"
}

asm void func_8002FEB8(void) {
#include "orig_asm/game/stubs/func_8002FEB8.inc"
}

asm void func_80033DA0(void) {
#include "orig_asm/game/stubs/func_80033DA0.inc"
}

asm void func_800349A0(void) {
#include "orig_asm/game/stubs/func_800349A0.inc"
}

asm void func_80035690(void) {
#include "orig_asm/game/stubs/func_80035690.inc"
}

asm void func_800356A4(void) {
#include "orig_asm/game/stubs/func_800356A4.inc"
}

asm void func_800356C0(void) {
#include "orig_asm/game/stubs/func_800356C0.inc"
}

asm void func_800358D0(void) {
#include "orig_asm/game/stubs/func_800358D0.inc"
}

asm void func_80036564(void) {
#include "orig_asm/game/stubs/func_80036564.inc"
}

asm void func_80036574(void) {
#include "orig_asm/game/stubs/func_80036574.inc"
}

asm void func_800368E0(void) {
#include "orig_asm/game/stubs/func_800368E0.inc"
}

asm void func_80036CBC(void) {
#include "orig_asm/game/stubs/func_80036CBC.inc"
}

asm void func_80037370(void) {
#include "orig_asm/game/stubs/func_80037370.inc"
}

asm void func_80037580(void) {
#include "orig_asm/game/stubs/func_80037580.inc"
}

asm void func_800375C4(void) {
#include "orig_asm/game/stubs/func_800375C4.inc"
}

asm void func_800375F0(void) {
#include "orig_asm/game/stubs/func_800375F0.inc"
}

asm void func_80037600(void) {
#include "orig_asm/game/stubs/func_80037600.inc"
}

asm void func_80037610(void) {
#include "orig_asm/game/stubs/func_80037610.inc"
}

asm void func_8003762C(void) {
#include "orig_asm/game/stubs/func_8003762C.inc"
}

asm void func_80037F7C(void) {
#include "orig_asm/game/stubs/func_80037F7C.inc"
}

asm void func_80037FF0(void) {
#include "orig_asm/game/stubs/func_80037FF0.inc"
}

asm void func_800383C4(void) {
#include "orig_asm/game/stubs/func_800383C4.inc"
}

extern void __OSSetExceptionHandler(void);
extern void __OSGetExceptionHandler(void);
extern void __OSFPUExceptionHandler(void);
extern void OSReport(void);
extern void DVDConvertPathToEntrynum(void);
extern void ICFlashInvalidate(void);
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void OSReport_prologue(void);
extern void func_8000C2A8(void);
extern void func_8000E334(void);
extern void func_8000F908(void);
extern void func_8000FAAC(void);
extern void func_80010458(void);
extern void func_80010BB0(void);
extern void func_80010CAC(void);
extern void func_80010DA8(void);
extern void func_80013A40(void);
extern void func_800155DC(void);
extern void func_80015934(void);
extern void func_800159D8(void);
extern void func_80015A64(void);
extern void func_80015CB0(void);
extern void func_80015D4C(void);
extern void func_8001D8F0(void);
extern void func_80020DE4(void);
extern void func_800222B4(void);
extern void func_800222E8(void);
extern void func_800226D8(void);
extern void func_80023EE0(void);
extern void func_8002965C(void);
extern void func_800296E8(void);
extern void func_80029964(void);
extern void func_8002A74C(void);
extern void func_8002BBC0(void);
extern void func_8002BD84(void);
extern void func_8002D1B0(void);
extern void func_8002D6F4(void);
extern void func_8002DB88(void);
extern void func_80031E24(void);
extern void func_80035C70(void);
extern void func_80036A8C(void);
extern void func_80036B24(void);
extern void func_80036C2C(void);
extern void func_80036D18(void);
extern void func_80036F04(void);
extern void func_800372A8(void);
extern void func_80037BD0(void);
extern void func_800385D8(void);
extern void func_800386F0(void);
extern void func_80038714(void);

asm void func_8000F8B0(void) {
#include "orig_asm/game/stubs/func_8000F8B0.inc"
}

asm void func_8000F954(void) {
#include "orig_asm/game/stubs/func_8000F954.inc"
}

asm void func_80010464(void) {
#include "orig_asm/game/stubs/func_80010464.inc"
}

asm void __OSFPUExceptionHandler(void) {
#include "orig_asm/game/stubs/__OSFPUExceptionHandler.inc"
}

asm void func_80012A1C(void) {
#include "orig_asm/game/stubs/func_80012A1C.inc"
}

asm void func_80012D68(void) {
#include "orig_asm/game/stubs/func_80012D68.inc"
}

asm void func_80013D54(void) {
#include "orig_asm/game/stubs/func_80013D54.inc"
}

asm void func_80013D78(void) {
#include "orig_asm/game/stubs/func_80013D78.inc"
}

asm void func_80015038(void) {
#include "orig_asm/game/stubs/func_80015038.inc"
}

asm void func_80015E3C(void) {
#include "orig_asm/game/stubs/func_80015E3C.inc"
}

asm void func_80016690(void) {
#include "orig_asm/game/stubs/func_80016690.inc"
}

asm void func_800168A4(void) {
#include "orig_asm/game/stubs/func_800168A4.inc"
}

asm void func_80016D14(void) {
#include "orig_asm/game/stubs/func_80016D14.inc"
}

asm void func_80016F78(void) {
#include "orig_asm/game/stubs/func_80016F78.inc"
}

asm void func_80016FB0(void) {
#include "orig_asm/game/stubs/func_80016FB0.inc"
}

asm void func_800173AC(void) {
#include "orig_asm/game/stubs/func_800173AC.inc"
}

asm void func_80017448(void) {
#include "orig_asm/game/stubs/func_80017448.inc"
}

asm void func_80018378(void) {
#include "orig_asm/game/stubs/func_80018378.inc"
}

asm void func_8001DDBC(void) {
#include "orig_asm/game/stubs/func_8001DDBC.inc"
}

asm void func_800203AC(void) {
#include "orig_asm/game/stubs/func_800203AC.inc"
}

asm void func_800208F4(void) {
#include "orig_asm/game/stubs/func_800208F4.inc"
}

asm void func_80021094(void) {
#include "orig_asm/game/stubs/func_80021094.inc"
}

asm void func_80022348(void) {
#include "orig_asm/game/stubs/func_80022348.inc"
}

asm void func_80022384(void) {
#include "orig_asm/game/stubs/func_80022384.inc"
}

asm void func_800223C4(void) {
#include "orig_asm/game/stubs/func_800223C4.inc"
}

asm void func_800225A0(void) {
#include "orig_asm/game/stubs/func_800225A0.inc"
}

asm void func_800230FC(void) {
#include "orig_asm/game/stubs/func_800230FC.inc"
}

asm void func_80023324(void) {
#include "orig_asm/game/stubs/func_80023324.inc"
}

asm void func_8002334C(void) {
#include "orig_asm/game/stubs/func_8002334C.inc"
}

asm void func_80023EA0(void) {
#include "orig_asm/game/stubs/func_80023EA0.inc"
}

asm void func_80027E9C(void) {
#include "orig_asm/game/stubs/func_80027E9C.inc"
}

asm void func_80029280(void) {
#include "orig_asm/game/stubs/func_80029280.inc"
}

asm void func_800296E8(void) {
#include "orig_asm/game/stubs/func_800296E8.inc"
}

asm void func_80029AD0(void) {
#include "orig_asm/game/stubs/func_80029AD0.inc"
}

asm void func_8002A15C(void) {
#include "orig_asm/game/stubs/func_8002A15C.inc"
}

asm void func_8002A754(void) {
#include "orig_asm/game/stubs/func_8002A754.inc"
}

asm void func_8002A788(void) {
#include "orig_asm/game/stubs/func_8002A788.inc"
}

asm void func_8002D4BC(void) {
#include "orig_asm/game/stubs/func_8002D4BC.inc"
}

asm void func_8002D6D4(void) {
#include "orig_asm/game/stubs/func_8002D6D4.inc"
}

asm void func_80031E9C(void) {
#include "orig_asm/game/stubs/func_80031E9C.inc"
}

asm void func_8003553C(void) {
#include "orig_asm/game/stubs/func_8003553C.inc"
}

asm void func_80035C9C(void) {
#include "orig_asm/game/stubs/func_80035C9C.inc"
}

asm void func_80035D24(void) {
#include "orig_asm/game/stubs/func_80035D24.inc"
}

asm void func_80035F38(void) {
#include "orig_asm/game/stubs/func_80035F38.inc"
}

asm void func_80036980(void) {
#include "orig_asm/game/stubs/func_80036980.inc"
}

asm void func_80036C84(void) {
#include "orig_asm/game/stubs/func_80036C84.inc"
}

asm void func_80036EE4(void) {
#include "orig_asm/game/stubs/func_80036EE4.inc"
}

asm void func_80037288(void) {
#include "orig_asm/game/stubs/func_80037288.inc"
}

asm void func_80037B58(void) {
#include "orig_asm/game/stubs/func_80037B58.inc"
}

asm void func_80037B78(void) {
#include "orig_asm/game/stubs/func_80037B78.inc"
}

asm void func_80037B9C(void) {
#include "orig_asm/game/stubs/func_80037B9C.inc"
}

asm void func_80037C28(void) {
#include "orig_asm/game/stubs/func_80037C28.inc"
}

asm void func_80037C50(void) {
#include "orig_asm/game/stubs/func_80037C50.inc"
}

asm void func_80038124(void) {
#include "orig_asm/game/stubs/func_80038124.inc"
}

asm void func_8003858C(void) {
#include "orig_asm/game/stubs/func_8003858C.inc"
}

asm void func_800385B0(void) {
#include "orig_asm/game/stubs/func_800385B0.inc"
}

asm void func_800386F0(void) {
#include "orig_asm/game/stubs/func_800386F0.inc"
}

asm void func_80038714(void) {
#include "orig_asm/game/stubs/func_80038714.inc"
}

void* func_80036444(void* a, void* b, void* c, void* d, void* e) {
    return e;
}

void* func_8003644C(void* a, void* b, void* c, void* d, void* e) {
    return e;
}

extern void func_80010884(void);
asm void func_80010AFC(void) {
#include "orig_asm/game/stubs/func_80010AFC.inc"
}

extern void func_80012664(void);
asm void func_800129F0(void) {
#include "orig_asm/game/stubs/func_800129F0.inc"
}
