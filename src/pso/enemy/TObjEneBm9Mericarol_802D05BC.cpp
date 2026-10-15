#include "types.h"
#include "pso/enemy/TObjEneBm9Mericarol.h"

extern "C" {

struct TBase_802d05bc { char pad[0x18]; };
struct TObj_802d05bc : TBase_802d05bc {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
};
struct SubBase_802d05bc { char pad[0x14]; };
struct SubObj_802d05bc : SubBase_802d05bc {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual s32 v5();
    virtual void v6();
};
struct Base_802D06E0_802D05BC { char pad[0x18]; };
struct VObj_802D06E0_802D05BC : Base_802D06E0_802D05BC {
#define VM(n) virtual void m##n();
    VM(0)VM(1)VM(2)VM(3)VM(4)VM(5)VM(6)VM(7)VM(8)VM(9)
    VM(10)VM(11)VM(12)VM(13)VM(14)VM(15)VM(16)VM(17)VM(18)VM(19)
    VM(20)VM(21)VM(22)VM(23)VM(24)VM(25)VM(26)VM(27)VM(28)VM(29)
    VM(30)VM(31)VM(32)VM(33)VM(34)VM(35)VM(36)VM(37)VM(38)VM(39)
    VM(40)VM(41)VM(42)VM(43)VM(44)VM(45)VM(46)VM(47)VM(48)VM(49)
    VM(50)VM(51)VM(52)VM(53)VM(54)VM(55)VM(56)VM(57)VM(58)VM(59)
    VM(60)VM(61)VM(62)VM(63)VM(64)VM(65)VM(66)VM(67)VM(68)VM(69)
    VM(70)VM(71)VM(72)VM(73)VM(74)VM(75)VM(76)VM(77)VM(78)VM(79)
    VM(80)VM(81)VM(82)VM(83)VM(84)VM(85)VM(86)VM(87)VM(88)VM(89)
    VM(90)VM(91)VM(92)
    virtual void m93();
#undef VM
};

void TObjEneBm9Mericarol__sub_802D05BC(u8 *arg0, s32 arg1);
s32 advance_animation_playback();
s32 play_area_sound_effect__12TBoss3VoloptFv(void *);
s32 TObjEneBm9Mericarol__sub_802D093C(void *);
s32 transition_enemy_state(void *, s32);
s32 TObjEneMe3SinowZoa__sub_800D758C(void *);
s32 enemy_clear_target(void *);
s32 set_field_378__9TObjEneDDFPvi(void *, s32);

void TObjEneBm9Mericarol__sub_802D05BC(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 2;
        ((TObj_802d05bc *)arg0)->v93();
        TObjEneBm9Mericarol__sub_802D093C(arg0);
        *(s32 *)((s8 *)arg0 + 0x438) = (s32) (*(s32 *)((s8 *)arg0 + 0x438) | 0x28);
        *(s32 *)((s8 *)arg0 + 0x438) = (s32) (*(s32 *)((s8 *)arg0 + 0x438) & 0xFFFFFFEF);
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        enemy_clear_target(arg0);
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x46C);
        play_area_sound_effect__12TBoss3VoloptFv(arg0 + 0x38);
        return;
    case 3:
        if (((SubObj_802d05bc *)(arg0 + 0x46C))->v5() != 0) {
            transition_enemy_state((void *)(arg0), (s32)(2));
        }
    case 1:
        return;
    case 0:
        advance_animation_playback();
        ((TObj_802d05bc *)arg0)->v100();
        ((TObj_802d05bc *)arg0)->v86();
        return;
    case 5:
        *(s32 *)((s8 *)arg0 + 0x438) = (s32) (*(s32 *)((s8 *)arg0 + 0x438) & ~0x28);
        break;
    }
}

void TObjEneBm9Mericarol::handle_action(s32 arg1) {
    switch (arg1) {
    case 4:
        ((VObj_802D06E0_802D05BC *)this)->m93();
        return;
    case 3:
        transition_enemy_state((void *)(this), (s32)(1));
    case 5:
    case 0:
        return;
    }
}

}
