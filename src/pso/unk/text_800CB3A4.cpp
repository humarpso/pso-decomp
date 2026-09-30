#include "types.h"
struct Base_800CB3A4 {
    u8 pad[0x18];
};

struct Ene_800CB3A4 : Base_800CB3A4 {
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
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108(s32);
    virtual void v109(s32);
    virtual void v110(s32);
};

extern "C" {
void state_attack_loop__13TObjEneMe1GeeFPvi(void *, s32);
void state_move__13TObjEneMe1GeeFPvi(void *, s32);
void TObjEneMe1Gee__sub_800CAFD8(void *, s32);
void state_hover__13TObjEneMe1GeeFPvi(void *, s32);
void state_attack__13TObjEneMe1GeeFPvi(void *, s32);
void TObjEneMe1Gee__sub_800CA454(void *, s32);
void TObjEneMe1Gee__sub_800C9DF8(void *, s32);
void TObjEneMe1Gee__sub_800C9A94(void *, s32);
void run_task__13TObjEneMe1GeeFPvi(void *, s32);
void TObjEneMe1Gee__sub_800C9580(void *, s32);
void TObjEneMe1Gee__sub_800C96B4(void *, s32);
void state_return_home__13TObjEneMe1GeeFPvi(void *, s32);
void handle_event__13TObjEneMe1GeeFPvi(void *, s32);
void state_orbit__13TObjEneMe1GeeFPvi(void *, s32);
void TObjEneMe1Gee__vt85(Ene_800CB3A4 *arg0, u32 arg1, s32 arg2);
}

extern "C" {

void TObjEneMe1Gee__vt85(Ene_800CB3A4 *arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        state_attack_loop__13TObjEneMe1GeeFPvi(arg0, arg2);
        break;
    case 1:
        state_move__13TObjEneMe1GeeFPvi(arg0, arg2);
        break;
    case 2:
        TObjEneMe1Gee__sub_800CAFD8(arg0, arg2);
        break;
    case 3:
        state_hover__13TObjEneMe1GeeFPvi(arg0, arg2);
        break;
    case 4:
        arg0->v108(arg2);
        break;
    case 5:
        arg0->v109(arg2);
        break;
    case 6:
        state_attack__13TObjEneMe1GeeFPvi(arg0, arg2);
        break;
    case 7:
        TObjEneMe1Gee__sub_800CA454(arg0, arg2);
        break;
    case 8:
        TObjEneMe1Gee__sub_800C9DF8(arg0, arg2);
        break;
    case 9:
        TObjEneMe1Gee__sub_800C9A94(arg0, arg2);
        break;
    case 10:
        run_task__13TObjEneMe1GeeFPvi(arg0, arg2);
        break;
    case 12:
        TObjEneMe1Gee__sub_800C9580(arg0, arg2);
        break;
    case 13:
        TObjEneMe1Gee__sub_800C96B4(arg0, arg2);
        break;
    case 14:
        arg0->v110(arg2);
        break;
    case 15:
        state_return_home__13TObjEneMe1GeeFPvi(arg0, arg2);
        break;
    case 17:
        handle_event__13TObjEneMe1GeeFPvi(arg0, arg2);
        break;
    case 18:
        state_orbit__13TObjEneMe1GeeFPvi(arg0, arg2);
        break;
    }
}

}
