#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int VecCopy__FP3VecPC3Vec(void*, void* a1);
extern f32 lbl_805D9AA0;
int TBoss4DarkFalz__sub_8004C220(void* p, void* _w1);
int TBoss4DarkFalz__sub_8004BA70(void*);
M2C_UNK TBoss4DarkFalz__sub_8004D8C8(void *, void *, void *, void *);
M2C_UNK create__11TObjDFDemo5FPvPvPv(void *, void *, s32);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
M2C_UNK TLobby__sub_8022743C();
M2C_UNK check_ready__12TBoss4ThanksFv();
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK obj_setArrS16_FC(void *, s32, u16);
extern M2C_UNK lbl_80485454[];
extern int TBoss4DarkFalz__data_805D4D64;
void begin_defeat_sequence__14TBoss4DarkFalzFPv(u8 *arg0);
extern int TBoss4DarkFalz__data_805D4D64;
    extern int lbl_805D4D68;
void TBoss4DarkFalz__sub_8004C540(void);
s32 TBoss4DarkFalz__sub_8004B07C(s32);
M2C_UNK TBoss4DarkFalz__sub_8004B1BC(s32, M2C_UNK);
s32 get_action_state__14TBoss4DarkFalzFPv(void* p);
extern int TBoss4DarkFalz__data_805D4D64;
extern int lbl_805D4D68;
void request_action_e__14TBoss4DarkFalzFi(s32 arg0);
int TBoss4DarkFalz__sub_8004B77C(void*);
int TBoss4DarkFalz__sub_8004BA18(void*);
extern int TBoss4DarkFalz__data_805D4D64;
extern int lbl_805D4D68;
void start_phase__14TBoss4DarkFalzFPv(void* p);
int TBoss4DarkFalz__sub_8004AB90(void*, void*);
int TBoss4DarkFalz__sub_8004B7DC(void);
extern int TBoss4DarkFalz__data_805D4D64;
extern int lbl_805D4D68;
void enter_state_126__14TBoss4DarkFalzFPv(void* a0);
int TBoss4DarkFalz__sub_8004BA70(void*);
void TObjBgmColCtrl__sub_802274B8(void *);
void create__11TObjDFDemo4FPvPvPv(void *, void *, void *);
extern M2C_UNK lbl_80437298[];
extern s32 lbl_805D5550;
void init_state__14TBoss4DarkFalzFPv(void *arg0);
extern M2C_UNK lbl_80437298[];
extern s32 lbl_805D5550;
void TBoss4DarkFalz__sub_8004C8A8(void);
int TBoss4DarkFalz__sub_8004BA70(void*);
int create__11TObjDFDemo3FPvPvPv(void*, void*, void*);
extern M2C_UNK lbl_80437298[];
extern s32 lbl_805D5550;
void enter_state_142__14TBoss4DarkFalzFPv(void* p);
void TBoss4DarkFalz__sub_8004B20C(void*, M2C_UNK);
extern M2C_UNK lbl_80437298[];
extern s32 lbl_805D5550;
void update_timer__14TBoss4DarkFalzFPv(void *arg0);
void TBoss4DarkFalz__sub_8004B20C(void*, M2C_UNK);
s32 TBoss4DarkFalz__sub_8004B730(void *, f32, int);
extern const f32 TBoss4DarkFalz__data_805D893C;
extern const f32 lbl_805D8944;
void TBoss4DarkFalz__sub_8004C704(u8 *arg0);
}

extern "C" {

int TBoss4DarkFalz__sub_8004C1AC(void);
s32 TBoss4DarkFalz__sub_8004C1B4(void);
s32 get_action_state__14TBoss4DarkFalzFPv(void* p);
void* get_hit_data__14TBoss4DarkFalzFPv(void* p);
s32 get_instance__14TBoss4DarkFalzFv(void);
s32 get_phase__14TBoss4DarkFalzFPv(void* p);
s32 get_state__14TBoss4DarkFalzFPv(void* p);
int is_field378_zero__14TBoss4DarkFalzFPv(void* p);
void save_position__14TBoss4DarkFalzFi(s32 arg0);
void set_code_25_4__14TBoss4DarkFalzFPv(void* p);
void set_state__14TBoss4DarkFalzFPv(void* p);
void swap_and_send__14TBoss4DarkFalzFPv(void* p);
void swap_bytes__14TBoss4DarkFalzFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int create__16TObjOnlineEndingFPv(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

    extern int TBoss4DarkFalz__data_805D4D64;
int TBoss4DarkFalz__sub_8004C1AC(void) {  return TBoss4DarkFalz__data_805D4D64; }

extern s32 TBoss4DarkFalz__data_805D4D60;

s32 TBoss4DarkFalz__sub_8004C1B4(void) {
    return TBoss4DarkFalz__data_805D4D60;
}

extern s32 TBoss4DarkFalz__data_805D4D5C;

s32 get_instance__14TBoss4DarkFalzFv(void) {
    return TBoss4DarkFalz__data_805D4D5C;
}

int is_field378_zero__14TBoss4DarkFalzFPv(void* p) { return *(u32*)((char*)p + 0x378) == 0; }
s32 get_action_state__14TBoss4DarkFalzFPv(void* p) { return *(s32*)((char*)p + 0x374); }
s32 get_phase__14TBoss4DarkFalzFPv(void* p) { return *(s32*)((char*)p + 0x374); }
s32 get_state__14TBoss4DarkFalzFPv(void* p) { return *(s32*)((char*)p + 0x374); }
void* get_hit_data__14TBoss4DarkFalzFPv(void* p) { return (char*)p + 0x5c; }
void save_position__14TBoss4DarkFalzFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec((void*)((void*)(arg0 + 0x44)), (void*)((void*)(arg0 + 0x38)));
}

struct A7B00Base_800a7b00_800A7764 { char pad[0x14]; };
struct A7B00Obj_800a7b00_800A7764 : A7B00Base_800a7b00_800A7764 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};
int TBoss4DarkFalz__sub_8004C220(void* p, void* _w1) { return VecCopy__FP3VecPC3Vec((void*)((char*)p + 0x38), (void*)(_w1)); }

void swap_and_send__14TBoss4DarkFalzFPv(void* p) { swap_bytes__14TBoss4DarkFalzFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void swap_bytes__14TBoss4DarkFalzFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void set_code_25_4__14TBoss4DarkFalzFPv(void* p) { *(u8*)((char*)p + 0x0) = 25; *(u8*)((char*)p + 0x1) = 4; }

void set_state__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004BA70((void*)(p)); create__16TObjOnlineEndingFPv(p); *(int*)((char*)p + 0x380) = 454; }
void begin_defeat_sequence__14TBoss4DarkFalzFPv(u8 *arg0) {
    u16 sp8[4];
    s32 var_r29;
    TBoss4DarkFalz__sub_8004BA70((void*)(arg0));
    TLobby__sub_8022743C();
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x37);
    check_ready__12TBoss4ThanksFv();
    if ((void *) (*(u8 * *)&TBoss4DarkFalz__data_805D4D64) != NULL) {
        create__11TObjDFDemo5FPvPvPv(arg0, (*(u8 * *)&TBoss4DarkFalz__data_805D4D64) + 0x38, M2C_FIELD((*(u8 * *)&TBoss4DarkFalz__data_805D4D64), s32 *, 0x60));
    } else {
        create__11TObjDFDemo5FPvPvPv(arg0, lbl_80485454, 0);
    }
    if ((void *) (*(u8 * *)&TBoss4DarkFalz__data_805D4D64) != NULL) {
        TBoss4DarkFalz__sub_8004D8C8((*(u8 * *)&TBoss4DarkFalz__data_805D4D64), arg0 + 0x2D6, arg0 + 0x2D4, sp8);
        queue_destruction__7TObjectFv((*(u8 * *)&TBoss4DarkFalz__data_805D4D64));
        (*(u8 * *)&TBoss4DarkFalz__data_805D4D64) = NULL;
        var_r29 = 0;
        do {
            obj_setArrS16_FC(arg0, var_r29, sp8[var_r29]);
            var_r29 += 1;
        } while (var_r29 < 4);
    }
    M2C_FIELD(arg0, s32 *, 0x380) = 0x12E;
}
void TBoss4DarkFalz__sub_8004C540(void) {  }
void request_action_e__14TBoss4DarkFalzFi(s32 arg0) {
    if (((u32) (*(u32 *)&TBoss4DarkFalz__data_805D4D64) == 0U) || (get_action_state__14TBoss4DarkFalzFPv((void*)((*(u32 *)&TBoss4DarkFalz__data_805D4D64))) == 3) || (get_action_state__14TBoss4DarkFalzFPv((void*)((*(u32 *)&TBoss4DarkFalz__data_805D4D64))) == 2) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC(arg0, 0xE);
    }
}
void start_phase__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004BA18(p); TBoss4DarkFalz__sub_8004B77C(p); }
void enter_state_126__14TBoss4DarkFalzFPv(void* a0) { *(int*)((char*)a0 + 0x380) = 126; lbl_805D4D68 = 2; TBoss4DarkFalz__sub_8004B7DC(); TBoss4DarkFalz__sub_8004AB90(a0, (void*)2); }

void TBoss4DarkFalz__sub_8004C704(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    temp_f1 = TBoss4DarkFalz__data_805D893C - ((f32) M2C_FIELD(arg0, s32 *, 0x380) / lbl_805D8944);
    TBoss4DarkFalz__sub_8004B730((void *) (arg0), (f32) (temp_f1 * (temp_f1 * (temp_f1 * temp_f1))), (int) (0xFFFFFF));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x380) - 1;
    M2C_FIELD(arg0, s32 *, 0x380) = temp_r0;
    if (temp_r0 <= 0) {
        TBoss4DarkFalz__sub_8004B20C((void*)((void *) (arg0)), (M2C_UNK)((int) (0xC)));
    }
}

void init_state__14TBoss4DarkFalzFPv(void *arg0) {
    TBoss4DarkFalz__sub_8004BA70((void*)(arg0));
    create__11TObjDFDemo4FPvPvPv(arg0, (void *)((char *)arg0 + 924), M2C_FIELD(arg0, void **, 0x3A8));
    TObjBgmColCtrl__sub_802274B8(lbl_80437298);
    M2C_FIELD(arg0, u32 *, 0x380) = 114;
}
void TBoss4DarkFalz__sub_8004C8A8(void) {  }
void enter_state_142__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004BA70((void*)(p)); create__11TObjDFDemo3FPvPvPv(p, (char*)p + 0x39c, *(void**)((char*)p + 0x3a8)); *(int*)((char*)p + 0x380) = 142; }
void update_timer__14TBoss4DarkFalzFPv(void *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x380) - 1;
    M2C_FIELD(arg0, s32 *, 0x380) = temp_r0;
    if (temp_r0 < 0) {
        if ((s32) lbl_805D5550 == 0) {
            TBoss4DarkFalz__sub_8004B20C(arg0, 0xA);
            return;
        }
        TBoss4DarkFalz__sub_8004B20C(arg0, 0xB);
    }
}

}
