#ifndef PSO_BOSS_TBOSS7DEROLLEC_H
#define PSO_BOSS_TBOSS7DEROLLEC_H

#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"

struct TBoss7DeRolLeC : public TObjEneDD_ST {
    virtual ~TBoss7DeRolLeC();
    virtual void render_shadows();
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void vfunc_50();
    void vfunc_49();
    void vfunc_48(s32);
    void vfunc_47();
    void vfunc_46();
    void vfunc_45();
    void vfunc_44();
    void vfunc_28();
    u8 unk_374[0x30];
    void* m_3c0;
    u8 _pad3C4[0x25C];
    u32 m_620;
    u32 m_624;
    u32 m_628;
    u32 m_62c;
    void* m_630;
    u8 _pad634[0x1C];
    void* m_650;
    u8 _pad654[0x1C];
    void* m_670;
    u8 _pad674[0x1C];
    void* m_690;
    u8 _pad694[0x18];
    u32 m_6ac;
    u32 m_6b0;
    u32 m_6b4;
    u32 m_6b8;
    u32 m_6bc;
    u32 m_6c0;
    u32 m_6c4;
    u32 m_6c8;
    u32 m_6cc;
    u32 m_6d0;
    u32 m_6d4;
    u32 m_6d8;
    u8 _pad6DC[0x1C];
    u32 m_6f8;
    u32 m_6fc;
    u32 m_700;
    u32 m_704;
    u32 m_708;
    void* m_70c;
    u8 _pad710[0x8];
    u32 m_718;
    u32 m_71c;
    u32 m_720;
    u32 m_724;
    u32 m_728;
    u32 m_72c;
    u32 m_730;
    u32 m_734;
    u32 m_738;
    u32 m_73c;
    u32 m_740;
    u8 _pad744[0x40];
    u32 m_784;
    u8 _pad788[0x18];
    u32 m_7a0;
    u32 m_7a4;
    u32 m_7a8;
    u32 m_7ac;
    u32 m_7b0;
    u8 _pad7B4[0x18];
    u16 m_7cc;
    u16 m_7ce;
    u16 m_7d0;
    u16 m_7d2;
    void set_field_38(s32 v);
    static void run_exit_callbacks();
    static void *create(void *arg0);
    u8 unk_7B8[0x1C];
};

typedef char TBoss7DeRolLeC_size[sizeof(TBoss7DeRolLeC) == 0x7D4 ? 1 : -1];
#endif
