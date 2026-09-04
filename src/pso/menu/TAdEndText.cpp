#ifndef PSO_CLASS_PACKAGE
#include "pso/TAdEndText.h"

TAdEndText::~TAdEndText() {}
#else
#if PSO_CLASS_PACKAGE == 0x8001B41C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdEndText__sub_8001B41C(void);

extern s32 lbl_805D6A58;

s32 TAdEndText__sub_8001B41C(void) {
    return lbl_805D6A58;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80307A34
#include "types.h"

extern "C" {

void cleanup__10TAdEndTextFv(void);
int TLobby__sub_800FC3CC(void);
int delete_all_task_children__9TMainTaskFv(void*);
int free_keyboard_soft_resources__6TLobbyFv(void);
int free_resources__10TAdEndTextFv(void);
int render_tick__Fv(void);

    extern unsigned char main_task[];
    extern int lbl_805D6A58;
void cleanup__10TAdEndTextFv(void) { lbl_805D6A58 = 0; delete_all_task_children__9TMainTaskFv(main_task); TLobby__sub_800FC3CC(); free_keyboard_soft_resources__6TLobbyFv(); free_resources__10TAdEndTextFv(); render_tick__Fv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803997FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdEndText__sub_803997FC(s32 arg0);

s32 TAdEndText__sub_803997FC(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 >> 0x1F;
    return (temp_r4 ^ arg0) - temp_r4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8039A298
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdEndText__sub_8039A298(void);
M2C_UNK fn_8039A2B8();

void TAdEndText__sub_8039A298(void) {
    fn_8039A2B8();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803A2C8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start__10TAdEndTextFv(void);
M2C_UNK TAdEndText__sub_8039FD70();

void start__10TAdEndTextFv(void) {
    TAdEndText__sub_8039FD70();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803A2CCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void stop__10TAdEndTextFv(void);
M2C_UNK TAdEndText__sub_803A027C();

void stop__10TAdEndTextFv(void) {
    TAdEndText__sub_803A027C();
}

}
#endif
#endif
