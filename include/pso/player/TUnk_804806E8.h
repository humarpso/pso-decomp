#ifndef PSO_PLAYER_TUNK_804806E8_H
#define PSO_PLAYER_TUNK_804806E8_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_804806E8 : public TObjMotion {
public:
    virtual ~TUnk_804806E8();
    virtual void*vfunc_9();
    virtual void reset_motion_fields();
    virtual s32 vfunc_14(s32);
    virtual s32 vfunc_15(s32);
    virtual s32 vfunc_16();
    virtual u8 *vfunc_17();
    virtual u8 *vfunc_18(u8 *);
    virtual s32 vfunc_19(s32);
    virtual s32 vfunc_20(void *, f32);
    virtual int vfunc_21(void *, void *, void *, float);
    virtual f32 vfunc_22(void *, f32);
    virtual f32 vfunc_23(void *, void *, void *, s32, s32);
    virtual f32 vfunc_24(void *, void *);
    virtual void vfunc_25(u8 *);
    virtual s32 vfunc_26(s32, s32);
    virtual s32 vfunc_27(void *, s32, f32);
    virtual void vfunc_28();
    virtual bool vfunc_29();
    virtual s32 vfunc_30();
    virtual int test_flag_256();
    virtual int test_flag30_512();
    virtual int has_flag_0x800();
    virtual int test_flag_1000();
    virtual s32 vfunc_35();
    virtual s32 vfunc_36();
    virtual s32 vfunc_37();
    virtual s32 vfunc_38();
    virtual s32 vfunc_39();
    virtual s32 vfunc_40();
    virtual s32 vfunc_41();
    virtual s32 vfunc_42();
    virtual s32 vfunc_43();
    virtual void vfunc_44();
    virtual void vfunc_45();
    virtual void vfunc_46();
    virtual void vfunc_47();
    virtual void vfunc_48(s32);
    virtual void vfunc_49();
    virtual void vfunc_50();
    virtual void vfunc_51(void *);
    virtual void apply_defense_stat_status(void *);
    virtual void vfunc_53();
    virtual void vfunc_54();
    virtual void vfunc_55();
    virtual void vfunc_56(f32);
    virtual void vfunc_57(s32);
    virtual void vfunc_58();
    virtual void vfunc_59();
    virtual void vfunc_60();
    virtual void vfunc_61();
    virtual void vfunc_62();
    virtual void vfunc_63();
    virtual void vfunc_64();
    virtual void vfunc_65(s32, s32);
    virtual int vfunc_66();
    virtual int vfunc_67();
    virtual void vfunc_68(s32);
    virtual void vfunc_69();
    virtual void vfunc_70();
    virtual void vfunc_71();
    virtual void vfunc_72();
    virtual void vfunc_73();
    virtual s32 vfunc_74(s32);
    virtual void vfunc_75(f32);
    virtual void vfunc_76();
    virtual void vfunc_77();
    virtual void vfunc_78(s32);
    u8 unk_FC[0x1AC];
    u8 *target;
    u8 unk_2AC[0xC];
    s16 hpmax;
    u8 unk_2BA[0x6];
    s16 m_2c0;
    u8 unk_2C2[0x6];
    s16 m_2c8;
    u8 unk_2CA[0x5C];
    s16 mode;
    s16 phase;
    u8 unk_32A[0x2];
    s16 hp;
    u8 unk_32E[0x6];
};
typedef char TUnk_804806E8_size[sizeof(TUnk_804806E8) == 0x334 ? 1 : -1];

#endif
