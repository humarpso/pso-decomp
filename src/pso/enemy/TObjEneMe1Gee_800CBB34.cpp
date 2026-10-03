#include "types.h"
struct Base_800CBB34 {
    u8 pad[0x18];
};

struct Obj_800CBB34 : Base_800CBB34 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67();
    virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
    virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75();
    virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
    virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83();
    virtual void v84(); virtual void v85(); virtual void v86(); virtual void v87();
    virtual void v88(); virtual void v89(); virtual void v90(); virtual void v91();
    virtual void v92(); virtual void v93(); virtual void v94(); virtual void v95();
    virtual void v96(); virtual void v97(); virtual void v98(); virtual void v99();
    virtual void v100(); virtual void v101(); virtual void v102(); virtual void v103();
    virtual void v104(); virtual void v105(); virtual void v106(); virtual void v107();
    virtual void v108(); virtual void v109(); virtual void v110(); virtual void v111();
    virtual void v112(); virtual void v113();
    virtual s32 v114(void *);
};

typedef struct Rec_800CBB34 {
    u16 id;
    f32 dist;
} Rec_800CBB34;

typedef struct Gee_800CBB34 {
    u8 pad0[0x390];
    void *target;
    u8 pad394[0x3C0 - 0x394];
    Obj_800CBB34 *owner;
    u8 pad3C4[0x48C - 0x3C4];
    u16 ownerIdx;
} Gee_800CBB34;

extern "C" {
f32 newton_sqrtf(f32);
void TBoss2DeRolLe__sub_800B98D8(void *, void *);
s32 collect_enemy_target_candidates(void *, Rec_800CBB34 *);
Obj_800CBB34 *find_entity_by_id(u16);
void *get_player_by_client_id(u16);
extern const f32 lbl_805DA110;
s32 TObjEneMe1Gee__sub_800CBB34(Gee_800CBB34 *arg0, f32 *out);
}

extern "C" {

s32 TObjEneMe1Gee__sub_800CBB34(Gee_800CBB34 *arg0, f32 *out) {
    Rec_800CBB34 recs[5];
    s32 found;
    s32 n;
    void *p;
    s32 i;
    found = 0;
    *out = lbl_805DA110;
    n = collect_enemy_target_candidates(arg0, recs);
    for (i = 0; i < n; i++) {
        p = get_player_by_client_id(recs[i].id);
        if (p != arg0->target) {
            arg0->owner = find_entity_by_id(arg0->ownerIdx);
            if (arg0->owner->v114(p) != 0) {
                *out = newton_sqrtf(recs[i].dist);
                found = 1;
                TBoss2DeRolLe__sub_800B98D8(arg0, p);
                break;
            }
        }
    }
    return found;
}

}
