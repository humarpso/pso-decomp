#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 get_card_window_value__16TObjOnlineEndingFv(void);
void *get_card_window__17TWindowSubComCardFUi(M2C_UNK);

s16 get_card_window_value__16TObjOnlineEndingFv(void) {
    if (get_card_window__17TWindowSubComCardFUi(0xFFFF) == NULL) {
        return 0x3E7;
    }
    return M2C_FIELD(get_card_window__17TWindowSubComCardFUi(0xFFFF), s16 *, 0x2228);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802E4B80
#include "types.h"

extern "C" {

int get_instance__16TObjOnlineEndingFv(void);

    extern int lbl_805D5878;
int get_instance__16TObjOnlineEndingFv(void) {  return lbl_805D5878; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E4B88
#include "types.h"

extern "C" {

void* get_attack_entry__16TObjOnlineEndingFi(int a0);

    extern unsigned char lbl_8050DAD0[];
void* get_attack_entry__16TObjOnlineEndingFi(int a0) {  return (char*)lbl_8050DAD0 + a0 * 8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E4B9C
#include "types.h"

extern "C" {

void close_window__16TObjOnlineEndingFPv(void* p);
int TWindow__close(void*);

void close_window__16TObjOnlineEndingFPv(void* p) { if (*(unsigned int*)((char*)p + 0x154) != 0) { TWindow__close(*(void**)((char*)p + 0x154)); *(int*)((char*)p + 0x154) = 0; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E4BDC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_result_window__16TObjOnlineEndingFPv(void *arg0);
s32 get_card_window_value__16TObjOnlineEndingFv();
s32 TWindowChallengeResult__ct(s32, s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 TLobby__sub_8006F00C();
s32 get_layout_id__20TWindowSubStatusDispFv(M2C_UNK);
s32 is_flag_set__6TLobbyFv();
s32 TLobby__sub_80070ACC();
s32 TWindowSubStatusDisp__sub_800718D0();

void create_result_window__16TObjOnlineEndingFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r30_2;
    s32 temp_r30;
    s32 var_r29;

    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    if (is_flag_set__6TLobbyFv() != 0) {
        temp_r30 = get_layout_id__20TWindowSubStatusDispFv(-1) - 1;
        {
        s32 t = TLobby__sub_8006F00C();
        if (t == temp_r30) {
            var_r29 = __nw__7TObjectFUl(0x68);
            if (var_r29 != 0) {
                temp_r30_2 = get_card_window_value__16TObjOnlineEndingFv();
                temp_r31 = TWindowSubStatusDisp__sub_800718D0();
                var_r29 = TWindowChallengeResult__ct(var_r29, TLobby__sub_80070ACC(), temp_r31, temp_r30_2);
            }
            M2C_FIELD(arg0, s32 *, 0x154) = var_r29;
        }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E4F98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy__16TObjOnlineEndingFPvs(void *arg0, s16 arg1);
M2C_UNK TCameraCtrl__sub_80069DA8();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK close_window__16TObjOnlineEndingFPv(void *);
M2C_UNK destroy_particle__13TParticleCtrlFPvs(void *, M2C_UNK);

extern const M2C_UNK lbl_804E3A64[];

void *destroy__16TObjOnlineEndingFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, const M2C_UNK **, 0x18) = lbl_804E3A64;
        close_window__16TObjOnlineEndingFPv(arg0);
        TCameraCtrl__sub_80069DA8();
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E522C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TObjOnlineEndingFPv(void *arg0);
void *TObjOnlineEnding__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__16TObjOnlineEndingFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x158);
    if (o != NULL) {
        o = TObjOnlineEnding__ct(o, arg0);
    }
    return o;
}

}
#endif
#endif
