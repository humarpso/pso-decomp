#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdMultiChgGameModeGC__sub_8023EBB4(void);
void TAdMultiChgGameModeGC__sub_8023EBE4(void);
void TAdMultiChgGameModeGC__sub_8023EC14(void);
void TAdMultiChgGameModeGC__sub_8023EC44(void);
void TAdMultiChgGameModeGC__sub_8023EC74(void);
void TAdMultiChgGameModeGC__sub_8023ECA4(void);
void TAdMultiChgGameModeGC__sub_8023ECD4(void);
void TAdMultiChgGameModeGC__sub_8023ED04(void);
M2C_UNK TAdMultiChgGameModeGC__sub_8023F654();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void TAdMultiChgGameModeGC__sub_8023EBB4(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 0xA;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void TAdMultiChgGameModeGC__sub_8023EBE4(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 9;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void TAdMultiChgGameModeGC__sub_8023EC14(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 8;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void TAdMultiChgGameModeGC__sub_8023EC44(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 7;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void TAdMultiChgGameModeGC__sub_8023EC74(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 6;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void TAdMultiChgGameModeGC__sub_8023ECA4(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 5;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void TAdMultiChgGameModeGC__sub_8023ECD4(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 4;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void TAdMultiChgGameModeGC__sub_8023ED04(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 0;
    lbl_805D63C8 = 1;
}

}
