#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void render__16TKeyBoardControlFv(void);
void render__16TKeyBoardControlFv(void);
int TKeyBoardControl__sub_80131FC8(void);
int TKeyBoardControl__sub_8013206C(void);
M2C_UNK TKeyBoardControl__sub_803F0E90(s32, M2C_UNK);
s32 TKeyBoardControl__sub_803F1604(s32, M2C_UNK *);
void disable_disconnected_ports__16TKeyBoardControlFv(void);
s32 TKeyBoardControl__sub_801321B4(s32);
s32 check_input_ready__16TKeyBoardControlFi(s32 arg0);
int TKeyBoardControl__sub_801322E4(s32 _w0);
s32 TKeyBoardControl__sub_80132310(s32 arg0);
int TKeyBoardControl__sub_80132368(void);
int TKeyBoardControl__sub_8013239C(void);
u8 get_key_state_2__16TKeyBoardControlFPv(void* p);
int TKeyBoardControl__sub_801323C8(void *, int);
u8 get_key_state__16TKeyBoardControlFPv(void* p);
int TKeyBoardControl__sub_801323C8(void *, int);
void reset_inactive_keys__16TKeyBoardControlFi(s32 arg0);
void reset_keys__16TKeyBoardControlFPv(void *arg0);
M2C_UNK TKeyBoardControl__sub_80132824(s32);
M2C_UNK TKeyBoardControl__sub_803F0C50();
M2C_UNK fn_803F1864(M2C_UNK *);
extern M2C_UNK TKeyBoardControl__sub_801320CC[];
void reset_input__16TKeyBoardControlFi(s32 arg0);
}

extern "C" {

void TKeyBoardControl__sub_80131F5C(void);
void TKeyBoardControl__sub_80131F60(void);
void *__dt__16TKeyBoardControlFv(void *arg0, s16 arg1);
void clear_flag60_bit200__16TKeyBoardControlFPv(void* p);
int is_active__16TKeyBoardControlFPv(void* p);
int is_key_active__16TKeyBoardControlFPv(void* p);
int is_key_held__16TKeyBoardControlFPv(void* p);
void set_flag60_bit200__16TKeyBoardControlFPv(void* p);
void set_flag62_bit2__16TKeyBoardControlFPv(void* p);
void set_flag62_bit8__16TKeyBoardControlFPv(void* p);
s32 TWindowKeyBoardSoft__sub_8025C974(s32, s32);
s32 TWindowKeyBoardSoft__sub_8025CA70(s32);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 alloc_buffer__11TOBoss4RockFPv();
int get_field_6c__19TWindowKeyBoardSoftFPv(void*);
int get_keyboard_field_6c__15TWindowMakeTeamFPv(void* p);
int is_keyboard_active__17TWindowSubComCardFPv(void* p);
int update_keyboard__17TWindowSubComCardFPv(void* p);

extern M2C_UNK __vt__16TKeyBoardControl[];

void render__16TKeyBoardControlFv(void) {  }

void *__dt__16TKeyBoardControlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TKeyBoardControl;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x28)); }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x24)); }
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x20)); }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TKeyBoardControl__sub_80131F5C(void) {  }
void TKeyBoardControl__sub_80131F60(void) {  }
void set_flag60_bit200__16TKeyBoardControlFPv(void* p) { *(u32*)((char*)p + 0x60) |= 0x200; }
void clear_flag60_bit200__16TKeyBoardControlFPv(void* p) { *(u32*)((char*)p + 0x60) &= 0xfffffdff; }
int is_key_held__16TKeyBoardControlFPv(void* p) { return (*(u32*)((char*)p + 0x60) >> 8) & 0x1; }
void set_flag62_bit2__16TKeyBoardControlFPv(void* p) { *(u16*)((char*)p + 0x62) |= 0x2; }
int is_active__16TKeyBoardControlFPv(void* p) { return (*(u16*)((char*)p + 0x60) >> 5) & 0x1; }
int is_key_active__16TKeyBoardControlFPv(void* p) { return *(u16*)((char*)p + 0x60) & 0x1; }
void set_flag62_bit8__16TKeyBoardControlFPv(void* p) { *(u16*)((char*)p + 0x62) |= 0x8; }
int TKeyBoardControl__sub_80131FC8(void) { return 0; }
int TKeyBoardControl__sub_8013206C(void) { return 0; }
void disable_disconnected_ports__16TKeyBoardControlFv(void) {
    M2C_UNK sp8;
    s32 temp_r3;
    s32 var_r31;
    var_r31 = 0;
    do {
        temp_r3 = TKeyBoardControl__sub_803F1604(var_r31, &sp8);
        if ((temp_r3 == -1) || (temp_r3 == -0x80)) {
            TKeyBoardControl__sub_803F0E90(var_r31, 0);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}
s32 check_input_ready__16TKeyBoardControlFi(s32 arg0) {
    if (TKeyBoardControl__sub_80132310((s32)(arg0)) != 0) {
        return 0;
    }
    if (TKeyBoardControl__sub_801322E4((s32)(arg0)) != 0) {
        return 0;
    }
    if (TKeyBoardControl__sub_801321B4(arg0) != 0) {
        return 0;
    }
    return 1;
}
int TKeyBoardControl__sub_801322E4(s32 _w0) { return 0; }
s32 TKeyBoardControl__sub_80132310(s32 arg0) {
    if ((TKeyBoardControl__sub_801323C8((void *)(arg0), (int)(0x54U)) != 0) || (TKeyBoardControl__sub_801323C8((void *)(arg0), (int)(0x55U)) != 0)) {
        return 1;
    }
    return 0;
}
int TKeyBoardControl__sub_80132368(void) { return 0; }
int TKeyBoardControl__sub_8013239C(void) { return 0; }
u8 get_key_state_2__16TKeyBoardControlFPv(void* p) { return *(u8*)((char*)p + 0x2); }
int TKeyBoardControl__sub_801323C8(void *, int) { return 0; }
u8 get_key_state__16TKeyBoardControlFPv(void* p) { return *(u8*)((char*)p + 0x1); }
void reset_inactive_keys__16TKeyBoardControlFi(s32 arg0) {
    s32 var_r29;
    u8 *var_r28;
    var_r29 = 0;
    var_r28 = (unsigned char *) (arg0 + 0xA0);
    do {
        if (TKeyBoardControl__sub_801323C8((void *)((void *) (arg0)), (int)((int) (M2C_FIELD(var_r28, u8 *, 0)))) == 0) {
            M2C_FIELD(var_r28, u8 *, 0) = 0U;
            M2C_FIELD(var_r28, s8 *, 1) = 0x23;
        }
        var_r29 += 1;
        var_r28 += 2;
    } while (var_r29 < 8);
}
void reset_keys__16TKeyBoardControlFPv(void *arg0) {
    s32 i;
    ((u8 *)arg0)[4] = 0;
    ((u8 *)arg0)[3] = 0;
    for (i = 0; i < 128; i++) {
        ((u8 *)arg0)[i + 5] = 0;
    }
}
void reset_input__16TKeyBoardControlFi(s32 arg0) {
    TKeyBoardControl__sub_803F0C50();
    TKeyBoardControl__sub_80132824(arg0);
    fn_803F1864(TKeyBoardControl__sub_801320CC);
}

}
