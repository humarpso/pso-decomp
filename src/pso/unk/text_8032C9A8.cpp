#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct DateStamp_8032C9A8 { s32 days; s32 mins; s32 ticks; };

struct Rec_8032C9A8 { u32 a; u32 b; u32 c; };

extern "C" {
s32 get_global_state__23TAdSinglePlyChrSelectGCFv();
void DateToSeconds__FP9DateStampPi(DateStamp_8032C9A8 *, u32 *);
void getDateStamp__FP9DateStamp(DateStamp_8032C9A8 *);
void *memmove(void *, const void *, u32);
s32 rand();
void *memset(void *, int, u32);
extern s32 current_language;
extern u8 *TLobby__gba_joyboot_send_buffer;
extern const f32 lbl_805DF7A8;
extern const f32 lbl_805DF7AC;
void TLobby__sub_8032C9A8(s32 arg0, s32 arg1);
s32 GBAJoyBootAsync(s32, s32, s32, u8 *, s32, u8 *, void (*)(s32, s32));
void TLobby__sub_8032C7A8(s32, s32);
extern s32 TLobby__data_805D6CCC;
extern s32 gba_joyboot_send_buffer;
extern u8 *TLobby__gba_joyboot_send_buffer;
extern u8 gba_joyboot_status;
s32 start_gba_joyboot__6TLobbyFv(void);
void TLobby__sub_8032CDD0(void* p);
extern u8 TLobby__data_805434A8[];
extern s32 TLobby__data_805D6CCC;
extern s32 gba_joyboot_send_buffer;
extern u8 *TLobby__gba_joyboot_send_buffer;
extern u8 gba_joyboot_status;
void set_send_buffer__6TLobbyFPvi(u8 *arg0, s32 arg1);
extern u8 *TLobby__gba_joyboot_send_buffer;
extern const u8 lbl_805DF7A0[4];
void TLobby__sub_8032CAAC(void);
}

extern "C" {

void TLobby__sub_8032CDC0(void);
void TLobby__sub_8032CDD0(void* p);
void TLobby__sub_8032CDEC(void);
int TLobby__sub_8032CDFC(void* p);
int queue_destruction__7TObjectFv(void*);

    extern unsigned char lbl_805D6CD9;
    extern short lbl_805D6CDA;

#pragma push
#pragma fp_contract on
void TLobby__sub_8032C9A8(s32 arg0, s32 arg1) {
    u32 secs;
    Rec_8032C9A8 rec;
    DateStamp_8032C9A8 ds;
    u8 *obj;
    s32 st;
    memset(&rec, 0, 0xC);
    obj = TLobby__gba_joyboot_send_buffer;
    st = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (st != 0) {
        if (arg1 != 0) {
            getDateStamp__FP9DateStamp(&ds);
            DateToSeconds__FP9DateStampPi(&ds, &secs);
            secs = lbl_805DF7A8 * (lbl_805DF7AC * rand()) + secs;
            memmove(&rec.a, (void *) (st + 0x118), 4);
            memmove(&rec.b, &secs, 4);
            memmove(obj + 0x2C0, &rec, 8);
        }
        memset(obj + 0xCC, (u8) current_language, 1);
    }
}
#pragma pop

void TLobby__sub_8032CAAC(void) {
    u8 *q;
    s32 i;
    u8 *data = TLobby__gba_joyboot_send_buffer;
    s32 k;
    u8 c;
    for (i = 0; i < 4; i++) {
        data[0xAC + i] = lbl_805DF7A0[i];
    }
    q = data + 0xA0;
    c = 0xE7;
    k = 0xA0;
    for (i = 0; i < 0x1D; i++) {
        k++;
        c -= *q++;
    }
    data[k] = c;
}

s32 start_gba_joyboot__6TLobbyFv(void) {
    if (GBAJoyBootAsync(3, 0, 4, TLobby__gba_joyboot_send_buffer, gba_joyboot_send_buffer, &gba_joyboot_status, TLobby__sub_8032C7A8) == 0) {
        TLobby__data_805D6CCC = 3;
        return 1;
    }
    TLobby__data_805D6CCC = 1;
    return 0;
}

#pragma push
#pragma optimization_level 1
#pragma dont_inline on
void set_send_buffer__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    TLobby__gba_joyboot_send_buffer = arg0;
    gba_joyboot_send_buffer = arg1;
    gba_joyboot_status = 0;
    TLobby__sub_8032CDD0(TLobby__data_805434A8);
    TLobby__data_805D6CCC = 0;
}
#pragma pop

void TLobby__sub_8032CDC0(void) { lbl_805D6CD9 = 0; lbl_805D6CDA = 0; }

void TLobby__sub_8032CDD0(void* p) { *(s16*)((char*)p + 0x0) = 0; *(s16*)((char*)p + 0x2) = 0; *(s16*)((char*)p + 0x4) = 0; *(u8*)((char*)p + 0x6) = 0; *(u8*)((char*)p + 0x7) = 0; }

    extern int warning_aram_load_done_flag;
    extern int TAdWarningBaseGC__aram_alloc_size;
void TLobby__sub_8032CDEC(void) { TAdWarningBaseGC__aram_alloc_size = 0; warning_aram_load_done_flag = 0; }

int TLobby__sub_8032CDFC(void* p) { return queue_destruction__7TObjectFv(p); }

}
