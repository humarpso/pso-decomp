#ifndef PSO_MISC_TSHOPKEEPITEMWINDOW_H
#define PSO_MISC_TSHOPKEEPITEMWINDOW_H

#include "types.h"
#include "pso/TShopWindowBase.h"

struct TShopKeepItemWindow : public TShopWindowBase {
    virtual ~TShopKeepItemWindow();
    virtual void vfunc_11();
    virtual void vfunc_7();
    virtual void vfunc_6();
    u8 _pad1C[0x4];
    u32 m_20;
    u32 m_24;
    void* m_28;
    u8 _pad2C[0x344];
    u32 m_370;
    u32 m_374;
    u32 m_378;
    u32 m_37c;
    u32 m_380;
    u32 m_384;
    u32 m_388;
    u32 m_38c;
    u32 m_390;
    u32 m_394;
    u32 m_398;
    s32 close_with_cancel_callback();
    s32 close_with_ok_callback();
    s32 close();
    void handle_deposit_confirm();
    void update_number_input();
    s32 rebuild_item_list();
};

typedef char TShopKeepItemWindow_size[sizeof(TShopKeepItemWindow) == 0x39C ? 1 : -1];

extern "C" {
void *TShopKeepItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void *__dt__19TShopKeepItemWindowFv(void *arg0, s16 arg1);
}

#endif
