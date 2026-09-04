#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__21TObjEneMe3ShinowaRealFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__17TObjEneMe3ShinowaFv(void *, int);

extern M2C_UNK __vt__21TObjEneMe3ShinowaReal[];

void *__dt__21TObjEneMe3ShinowaRealFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TObjEneMe3ShinowaReal;
        __dt__17TObjEneMe3ShinowaFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8002ADD8
#include "types.h"

extern "C" {

void bswap_6x12_packet__10TObjPlayerFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void bswap_dragon_boss_fields__10TObjPlayerFPv(void* p);
void bswap_stats__10TObjPlayerFPv(void* p);
void send_6x12_packet__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(void);
f64 TWindowSubComCard__sub_803A24E4();
int get_flag_b4__21TObjEneMe3ShinowaRealFPv(void* p);
int test_card_flag_2__12TBoss8DragonFPv(void* p);
void set_speed__12TBoss8DragonFPvf(void* p, f32 v);
void set_field_b8__14TObjEnePanarmsFPvs(void* p, s16 v);
void set_field_dc__10TObjPlayerFPvi(void* p, s32 v);
void set_field_d8__10TObjPlayerFPvi(void* p, s32 v);
void reset_lobby_model__10TObjPlayerFPv(void* p);
void reset_type__10TObjPlayerFPv(void* p);
void set_type__10TObjPlayerFPvi(void* p, s32 v);
void set_type_dragon__10TObjPlayerFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

int get_flag_b4__21TObjEneMe3ShinowaRealFPv(void* p) { return (*(u32*)((char*)p + 0xb0) >> 4) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8002ADE4
#include "types.h"

extern "C" {

void bswap_6x12_packet__10TObjPlayerFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void bswap_dragon_boss_fields__10TObjPlayerFPv(void* p);
void bswap_stats__10TObjPlayerFPv(void* p);
void send_6x12_packet__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(void);
f64 TWindowSubComCard__sub_803A24E4();
int get_flag_b4__21TObjEneMe3ShinowaRealFPv(void* p);
int test_card_flag_2__12TBoss8DragonFPv(void* p);
void set_speed__12TBoss8DragonFPvf(void* p, f32 v);
void set_field_b8__14TObjEnePanarmsFPvs(void* p, s16 v);
void set_field_dc__10TObjPlayerFPvi(void* p, s32 v);
void set_field_d8__10TObjPlayerFPvi(void* p, s32 v);
void reset_lobby_model__10TObjPlayerFPv(void* p);
void reset_type__10TObjPlayerFPv(void* p);
void set_type__10TObjPlayerFPvi(void* p, s32 v);
void set_type_dragon__10TObjPlayerFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

f32 get_random_float__21TObjEneMe3ShinowaRealFv(void) {
    return (f32) TWindowSubComCard__sub_803A24E4();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E4490
#include "types.h"

extern "C" {

int init_mirage__23TObjEneMe3ShinowaMirageFPv(void);
int TObjEneMe3ShinowaReal__sub_800E4554(void* a0 = 0, void* a1 = 0);
void spawn_mirages__21TObjEneMe3ShinowaRealFPv(void* p);
int TObjEneMe3Shinowa__vt60(void*);
int TObjEneMe3Shinowa__vt61(void*);
int TObjEneMe3ShinowaReal__sub_800E45D4(void* a0 = 0);
void TObjEneMe3ShinowaReal__vt109(void* p);
void TObjEneMe3ShinowaReal__vt60(void* p);
void TObjEneMe3ShinowaReal__vt61(void* p);
u16 TObjEneMe3ShinowaReal__sub_800E45CC(void* p);

void spawn_mirages__21TObjEneMe3ShinowaRealFPv(void* p) { { int i; for (i = 0; i < 4; i++) { TObjEneMe3ShinowaReal__sub_800E4554(p, (void*)i); init_mirage__23TObjEneMe3ShinowaMirageFPv(); } } }
void TObjEneMe3ShinowaReal__vt109(void* p) { TObjEneMe3ShinowaReal__sub_800E45D4(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E45CC
#include "types.h"

extern "C" {

int init_mirage__23TObjEneMe3ShinowaMirageFPv(void);
int TObjEneMe3ShinowaReal__sub_800E4554(void* a0 = 0, void* a1 = 0);
void spawn_mirages__21TObjEneMe3ShinowaRealFPv(void* p);
int TObjEneMe3Shinowa__vt60(void*);
int TObjEneMe3Shinowa__vt61(void*);
int TObjEneMe3ShinowaReal__sub_800E45D4(void* a0 = 0);
void TObjEneMe3ShinowaReal__vt109(void* p);
void TObjEneMe3ShinowaReal__vt60(void* p);
void TObjEneMe3ShinowaReal__vt61(void* p);
u16 TObjEneMe3ShinowaReal__sub_800E45CC(void* p);

u16 TObjEneMe3ShinowaReal__sub_800E45CC(void* p) { return *(u16*)((char*)p + 0x38c); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E4614
#include "types.h"

extern "C" {

int init_mirage__23TObjEneMe3ShinowaMirageFPv(void);
int TObjEneMe3ShinowaReal__sub_800E4554(void* a0 = 0, void* a1 = 0);
void spawn_mirages__21TObjEneMe3ShinowaRealFPv(void* p);
int TObjEneMe3Shinowa__vt60(void*);
int TObjEneMe3Shinowa__vt61(void*);
int TObjEneMe3ShinowaReal__sub_800E45D4(void* a0 = 0);
void TObjEneMe3ShinowaReal__vt109(void* p);
void TObjEneMe3ShinowaReal__vt60(void* p);
void TObjEneMe3ShinowaReal__vt61(void* p);
u16 TObjEneMe3ShinowaReal__sub_800E45CC(void* p);

void TObjEneMe3ShinowaReal__vt60(void* p) { TObjEneMe3ShinowaReal__sub_800E45D4(p); TObjEneMe3Shinowa__vt60(p); }
void TObjEneMe3ShinowaReal__vt61(void* p) { TObjEneMe3ShinowaReal__sub_800E45D4(p); TObjEneMe3Shinowa__vt61(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E4790
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__21TObjEneMe3ShinowaRealFPv(void *arg0);
void *TObjEneMe3ShinowaReal__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *create__21TObjEneMe3ShinowaRealFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x434);
    if (o != NULL) {
        o = TObjEneMe3ShinowaReal__ct(o, tl_04, arg0);
    }
    return o;
}

}
#endif
#endif
