#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/TObject.h"
#include "pso/misc/TQuestVmDownLoadServer.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TWindowSubTradeMain.h"
#include "pso/ui/TAdVIConfigGC.h"

struct Base_80307F6C_80307DEC { char pad[0x18]; };
struct VObj_80307F6C_80307DEC : Base_80307F6C_80307DEC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
};
struct Base_803080B0_80307DEC { char pad[0x18]; };
struct VObj_803080B0_80307DEC : Base_803080B0_80307DEC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
};

struct Name_80307D00 { char s[0x18]; };

struct Cfg_80307D00 {
    u8 pad0[0x24];
    u32 win;
    Name_80307D00 names[4];
};

extern "C" {
void TAdVIConfigGC__vt5(void* p);
void TAdVIConfigGC__vt5(void* p);
void *VIGetDTVStatus(void *);
void TAdVIConfigGC__vt4(void *arg0);
s32 allow_rendering__7TObjectFv(u32);
void disallow_rendering__7TObjectFv(void *);
s32 update_players_in_range(void *);
u8 *get_player_by_client_id(s32);
s32 TWindow__close(u32);
s32 get_window_layout_position(s32);
char *strncpy(char *, const char *, u32);
extern u8 player_names_window_pos[];
extern s32 local_client_id;
}

extern "C" {

void *TAdVIConfigGC__ct(void *arg0);
void TAdVIConfigGC__vt8(void);
void *__dt__13TAdVIConfigGCFv(void *arg0, s16 arg1);
void *destroy__13TAdVIConfigGCFPvs(void *arg0, s16 arg1);
int OSSetProgressiveMode(void*);
int get_localized_text_entry(void*, void*);
void TAdYesNoBaseGC__ct(void *);
void __dt__14TAdYesNoBaseGCFv(void *, int);
s32 TWindow__close(u32);
s32 VecCopy__FP3VecPC3Vec(void *);
void __dl__7TObjectFPv(void *);
s32 __dl__FPv(void *);
s32 allow_rendering__7TObjectFv(u32);
int VIWaitForRetrace(void);
int VIConfigure(void*);
int VIFlush(void);
s32 memset(void *, int, int);

void TAdVIConfigGC::open_player_names_window() {
    s32 i;
    u8 *p;
    if (((Cfg_80307D00 *)this)->win != 0) {
        TWindow__close(((Cfg_80307D00 *)this)->win);
        ((Cfg_80307D00 *)this)->win = 0;
    }
    ((Cfg_80307D00 *)this)->win = TAdVIConfigGC::draw_with_layer((s32)(get_window_layout_position(0x5A)), (s32)player_names_window_pos, (s32)local_client_id);
    if (((Cfg_80307D00 *)this)->win != 0) {
        ((TWindowSubTradeMain *)(((Cfg_80307D00 *)this)->win))->set_visible();
        ((TWindowSubTradeMain *)(((Cfg_80307D00 *)this)->win))->set_close_flag();
        for (i = 0; i < 4; i++) {
            p = get_player_by_client_id(i);
            if (p != 0) {
                strncpy(((Cfg_80307D00 *)this)->names[i].s, (char *)(p + 0x85C), 0x17);
                ((Cfg_80307D00 *)this)->names[i].s[0x17] = 0;
                TWindowSubStatusDisp::dispatch_without_flags((s32)(((Cfg_80307D00 *)this)->win), (s32)(((Cfg_80307D00 *)this)->names[i].s), (s32)i);
            } else {
                ((Cfg_80307D00 *)this)->names[i].s[0] = 0;
                TWindowSubStatusDisp::dispatch_without_flags((s32)(((Cfg_80307D00 *)this)->win), (s32)(((Cfg_80307D00 *)this)->names[i].s), (s32)i);
            }
        }
    }
}

s32 TAdVIConfigGC::get_field_14() { return *(s32 *)&this->m_down; }

void TAdVIConfigGC::update_visibility() {
    s32 temp_r3;
    u8 *temp_r3_2;
    temp_r3 = TLobby::count_members();
    if ((s32) *(s32 *)&this->m_flags != temp_r3) {
        *(s32 *)&this->m_flags = temp_r3;
        open_player_names_window();
    }
    update_players_in_range((void *) (((u8 *)this)));
    temp_r3_2 = (u8 *)(*(u8 * *)&this->m_24);
    if (temp_r3_2 != NULL) {
        if ((s32) *(s32 *)((s8 *)((u8 *)this) + 0x18) != 0) {
            ((TQuestVmDownLoadServer *)temp_r3_2)->clear_flag4_bit4();
            allow_rendering__7TObjectFv((u32)(*(u8 * *)&this->m_24));
            return;
        }
        ((TObject *)temp_r3_2)->set_flag_4();
        disallow_rendering__7TObjectFv(*(u8 * *)&this->m_24);
    }
}

void *destroy__13TAdVIConfigGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x24) != 0U) {
            ((TQuestVmDownLoadServer *)(*(void **)((s8 *)arg0 + 0x24)))->clear_flag4_bit4();
            allow_rendering__7TObjectFv(*(u32 *)((s8 *)arg0 + 0x24));
            TWindow__close(*(u32 *)((s8 *)arg0 + 0x24));
            *(u32 *)((s8 *)arg0 + 0x24) = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

#include "types.h"
#include "pso/ui/TAdVIConfigGC.h"
extern "C" {

u8 *TAdVIConfigGC::init(f32 farg0) {
    u8 *arg0 = (u8 *)this;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 8));
    *(f32 *)&this->m_name = (f32) (farg0 * farg0);
    *(s32 *)&this->m_24 = 0;
    memset((void *) (arg0 + 0x28), (int) (0), (int) (0x60));
    *(s32 *)&this->m_flags = TLobby::count_members();
    *(s32 *)&this->m_down = 0;
    *(s32 *)((s8 *)arg0 + 0x18) = 0;
    ((TAdVIConfigGC *)arg0)->open_player_names_window();
    *(s32 *)&this->m_1c = 0;
    return arg0;
}

}

void TAdVIConfigGC::render() {
    struct VObj_80307F6C_80307DEC *o = (struct VObj_80307F6C_80307DEC *)this;
    o->m10();
}

extern s32 logo_clear_flag;

void TAdVIConfigGC::set_field48_clear_global() {
    *(s32 *)&this->m_48 = 1;
    logo_clear_flag = 0;
}

    extern unsigned char GXNtsc480Prog[];
    extern int active_gx_render_mode;
void TAdVIConfigGC::enable_progressive_mode(void * _w0) { OSSetProgressiveMode((void*)1); active_gx_render_mode = (int)GXNtsc480Prog; VIConfigure(GXNtsc480Prog); VIFlush(); VIWaitForRetrace(); VIWaitForRetrace(); }

int TAdVIConfigGC::disable_progressive_mode(void* _w0) { return OSSetProgressiveMode((void*)(0)); }
void TAdVIConfigGC__vt8(void) { get_localized_text_entry((void*)29, (void*)0); }

void TAdVIConfigGC__vt5(void* p) { TAdVIConfigGC::disable_progressive_mode((void*)((void*)(p))); ((TAdVIConfigGC *)p)->set_field48_clear_global(); }

void TAdVIConfigGC__vt4(void *arg0) {
    void *x;
    x = VIGetDTVStatus(arg0);
    if (x != NULL) {
        TAdVIConfigGC::enable_progressive_mode((void *)(arg0));
    }
    ((TAdVIConfigGC *)arg0)->set_field48_clear_global();
}

void TAdVIConfigGC::run_task() {
    struct VObj_803080B0_80307DEC *o = (struct VObj_803080B0_80307DEC *)this;
    o->m9();
}

extern s32 __vt__13TAdVIConfigGC[];

void *__dt__13TAdVIConfigGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TAdVIConfigGC;
        __dt__14TAdYesNoBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__13TAdVIConfigGC[];
extern void *TAdVIConfigGC__class_name;

void *TAdVIConfigGC__ct(void *arg0) {
    TAdYesNoBaseGC__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TAdVIConfigGC;
    *(void **)((s8 *)arg0 + 0x0) = TAdVIConfigGC__class_name;
    ((TAdVIConfigGC *)arg0)->set_field_2c(0);
    *(u32 *)((s8 *)arg0 + 0x48) = 0;
    return arg0;
}

}
