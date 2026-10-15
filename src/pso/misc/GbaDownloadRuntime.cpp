#include "pso/network/GbaJoybootState.h"

extern "C" {
void TLobby__sub_8032CB6C(void);
extern s32 TLobby__data_805D6CCC;
extern const f32 TLobby__data_805DF7A4;

void destroy_singleton__6TLobbyFv(void);
void free_buffer__6TLobbyFv(void);
void init_graph__6TLobbyFv(void);
u32 create__8TDLGraphFv();
int queue_destruction__7TObjectFv(void*);
s32 set_graph_param__8TDLGraphFl(s32, s32);
void xfree__FPv(void*);
void alloc_buffer__6TLobbyFv(void);
s32 xmalloc__FUl(s32);
int TLobby__sub_8032C91C(void* p);
u8 get_selected_slot__6TLobbyFv(void);
void send_data__6TLobbyFi(s32 arg0);
void update_alloc_size__6TLobbyFv(void);
s32 load_from_aram_sync__16TAdWarningBaseGCFi(void*);
u32 TAdWarningBaseGC__sub_8032D020();
s32 update_graph__8TDLGraphFll(s32, s32);
s32 read_disc_file(s32, u32);
s32 TLobby__sub_801F34F8();
int GBAInit(void*);
s32 GBAGetProcessStatus(s32, u8 *);
u32 get_alloc_size__16TAdWarningBaseGCFv();
u32 update_lobby_scene__6TSceneFv();

extern u32 gba_download_data_buffer;
extern u32 gba_download_graph;
extern u32 gba_download_data_size;

void destroy_singleton__6TLobbyFv(void) {
    if ((u32) gba_download_graph != 0U) {
        queue_destruction__7TObjectFv((void*)gba_download_graph);
        gba_download_graph = 0U;
    }
    *(s8 *)((s8 *)TLobby__data_805434A8 + 7) = 0;
}

void init_graph__6TLobbyFv(void) {
    u32 temp_r3;

    if ((u32) gba_download_graph == 0U) {
        temp_r3 = create__8TDLGraphFv();
        gba_download_graph = temp_r3;
        if (temp_r3 != 0U) {
            set_graph_param__8TDLGraphFl(temp_r3, 2);
        }
    }
}

void free_buffer__6TLobbyFv(void) {
    if ((u32) gba_download_data_buffer != 0U) {
        xfree__FPv((void*)gba_download_data_buffer);
        gba_download_data_buffer = 0U;
    }
    gba_download_data_size = 0;
}

void alloc_buffer__6TLobbyFv(void) {
    gba_download_data_buffer = 0;
    gba_download_data_size = 0;
    gba_download_data_buffer = xmalloc__FUl(0x40000);
    gba_download_data_size = 0;
}

void gba_joyboot_transfer_callback(s32 arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        TLobby__data_805D6CCC = 4;
        break;
    case 1:
    case 3:
    case 4:
        TLobby__data_805D6CCC = 1;
        break;
    default:
        TLobby__data_805D6CCC = 1;
        break;
    }
    GbaJoybootState* q = TLobby__data_805434A8;
    q->timeout_counter = q->timeout_counter + 1;
    if ((f32)q->timeout_counter >= TLobby__data_805DF7A4) {
        TLobby__data_805434A8[0].timeout_counter = 0x78;
        TLobby__data_805D6CCC = 2;
    }
}

void send_data__6TLobbyFi(s32 arg0) {
    u32 temp_r3;

    temp_r3 = update_lobby_scene__6TSceneFv();
    gba_download_data_size = temp_r3;
    if (temp_r3 > 0x40000U) {
        gba_download_data_size = 0U;
        return;
    }
    if ((u32) gba_download_data_buffer != 0U) {
        read_disc_file(arg0, gba_download_data_buffer);
        return;
    }
    gba_download_data_size = 0U;
}

void update_alloc_size__6TLobbyFv(void) {
    u32 temp_r3;

    temp_r3 = TAdWarningBaseGC__sub_8032D020();
    gba_download_data_size = temp_r3;
    if (temp_r3 > 0x40000U) {
        gba_download_data_size = 0U;
        return;
    }
    if ((u32) gba_download_data_buffer != 0U) {
        load_from_aram_sync__16TAdWarningBaseGCFi((void*)gba_download_data_buffer);
        gba_download_data_size = get_alloc_size__16TAdWarningBaseGCFv();
        return;
    }
    gba_download_data_size = 0U;
}

int TLobby__sub_8032C91C(void* p) { return GBAInit(p); }

u8 get_selected_slot__6TLobbyFv(void) {
    u8 sp8;

    if (TLobby__sub_801F34F8() == 3) {
        if (GBAGetProcessStatus(3, &sp8) == 0) {
            return 0U;
        }
        if ((u32) gba_download_graph != 0U) {
            update_graph__8TDLGraphFll(sp8 + 1, 0x65);
        }
        return sp8;
    }
    return 0U;
}

}

#include "pso/network/GbaJoybootState.h"
#include "pso/misc/TLobby.h"
#include "pso/ui/TAdWarningBaseGC.h"

struct DateStamp_8032C9A8 { s32 days; s32 mins; s32 ticks; };

struct Rec_8032C9A8 { u32 a; u32 b; u32 c; };

extern "C" {
s32 SIProbe(s32);
s32 TLobby__sub_801F34F8(void);
extern const f32 TLobby__data_805DF7A4;
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
void gba_joyboot_transfer_callback(s32, s32);
extern s32 TLobby__data_805D6CCC;
extern s32 gba_joyboot_send_buffer;
extern u8 *TLobby__gba_joyboot_send_buffer;
extern u8 gba_joyboot_status;
void TLobby__sub_8032CDD0(void* p);
extern s32 TLobby__data_805D6CCC;
extern s32 gba_joyboot_send_buffer;
extern u8 *TLobby__gba_joyboot_send_buffer;
extern u8 gba_joyboot_status;
extern u8 *TLobby__gba_joyboot_send_buffer;
extern const u8 lbl_805DF7A0[4];
}

extern "C" {

void TLobby__sub_8032CDC0(void);
void TLobby__sub_8032CDD0(void* p);
void TLobby__sub_8032CDEC(void);
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

void TLobby::calc_joyboot_checksum() {
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

s32 TLobby::start_gba_joyboot() {
    if (GBAJoyBootAsync(3, 0, 4, TLobby__gba_joyboot_send_buffer, gba_joyboot_send_buffer, &gba_joyboot_status, gba_joyboot_transfer_callback) == 0) {
        TLobby__data_805D6CCC = 3;
        return 1;
    }
    TLobby__data_805D6CCC = 1;
    return 0;
}

void update_gba_joyboot_transfer(void) {
    TLobby__sub_8032CB6C();
    if (TLobby__sub_801F34F8() == 2) {
        TLobby__data_805434A8[0].phase = 0;
    }
    switch (TLobby__data_805434A8[0].phase) {
    case 0:
        if (TLobby__data_805434A8[0].device_present != 0) {
            TLobby__data_805434A8[0].phase = 1;
        }
        break;
    case 1:
        TLobby__sub_8032C9A8(*(u16 *)&lbl_805D6CDA - 1, lbl_805D6CD9);
        TLobby__sub_8032CDC0();
        TLobby::calc_joyboot_checksum();
        TLobby__data_805434A8[0].phase = 2;
        break;
    case 2:
        if (TLobby__data_805434A8[0].device_present != 0) {
            TLobby::start_gba_joyboot();
            if (TLobby__sub_801F34F8() != 1) {
                TLobby__data_805434A8[0].phase = 3;
            }
            GbaJoybootState *q = TLobby__data_805434A8;
            q->timeout_counter = q->timeout_counter + 1;
            if ((f32)q->timeout_counter >= TLobby__data_805DF7A4) {
                TLobby__data_805434A8[0].timeout_counter = 0x78;
                TLobby__data_805D6CCC = 2;
            }
        }
        break;
    case 3:
        if (TLobby__sub_801F34F8() != 4 && TLobby__sub_801F34F8() != 3) {
            TLobby__data_805434A8[0].phase = 0;
        }
        break;
    }
}

#pragma push
#pragma optimization_level 1
#pragma dont_inline on
void TLobby::set_send_buffer(u8 *arg0, s32 arg1) {
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

int TAdWarningBaseGC::destroy() { return queue_destruction__7TObjectFv(this); }

}
