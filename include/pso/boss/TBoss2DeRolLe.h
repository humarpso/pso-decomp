#ifndef PSO_BOSS_TBOSS2DEROLLE_H
#define PSO_BOSS_TBOSS2DEROLLE_H

#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"

struct TBoss2DeRolLe : public TObjEneDD_ST {
    virtual ~TBoss2DeRolLe();
    virtual int vfunc_105();
    virtual void render_body();
    virtual void clear_harmful_statuses();
    virtual void apply_shock_status();
    virtual void apply_movement_ailment(s32);
    virtual void apply_confusion_status();
    virtual void apply_slow_status();
    virtual void apply_paralysis();
    virtual void apply_poison_status();
    virtual void vfunc_28();
    virtual void vfunc_63();
    virtual void vfunc_61();
    void clear_play_flags();
    u8 unk_374[0x30];
    u32 m_3c0;
    u32 m_3c4;
    u32 m_3c8;
    u32 m_3cc;
    u32 m_3d0;
    u32 m_3d4;
    void* m_3d8;
    u8 _pad3DC[0x18];
    u32 m_3f4;
    u8 _pad3F8[0xC];
    void* m_404;
    u8 _pad408[0x68];
    void* m_470;
    u8 _pad474[0xC8];
    u32 m_53c;
    u8 _pad540[0xD8];
    u32 m_618;
    u32 m_61c;
    u8 _pad620[0x30];
    u32 m_650;
    u32 m_654;
    u32 m_658;
    u32 m_65c;
    u32 m_660;
    void* m_664;
    u8 _pad668[0x1C];
    void* m_684;
    u8 _pad688[0x20];
    u32 m_6a8;
    u32 m_6ac;
    u32 m_6b0;
    u32 m_6b4;
    u32 m_6b8;
    void* m_6bc;
    u8 _pad6C0[0x8];
    u32 m_6c8;
    u32 m_6cc;
    u32 m_6d0;
    u8 _pad6D4[0x8];
    u32 m_6dc;
    u32 m_6e0;
    u32 m_6e4;
    u32 m_6e8;
    u32 m_6ec;
    u32 m_6f0;
    u32 m_6f4;
    u32 m_6f8;
    u8 _pad6FC[0x40];
    u32 m_73c;
    u8 _pad740[0x18];
    u32 m_758;
    void set_target_player(void *player);
    u8 unk_740[0x1C];
};

typedef char TBoss2DeRolLe_size[sizeof(TBoss2DeRolLe) == 0x75C ? 1 : -1];
#endif
