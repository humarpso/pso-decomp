#ifndef PSO_BOSS_TBOSS1DRAGON_H
#define PSO_BOSS_TBOSS1DRAGON_H

#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"

struct DragonModelVector { f32 x, y, z; };
struct DragonModelAngles { s32 x, y, z; };
struct DragonModelNode {
    u32 flags;
    void* model;
    DragonModelVector position;
    DragonModelAngles rotation;
    DragonModelVector scale;
    DragonModelNode* child;
    DragonModelNode* sibling;
    f32 unknown34;
};

struct DragonEffectResource { u32 unknown00[2]; void* data; };

struct DragonMotion { u32 unknown00; u32 frameCount; };
struct DragonMotionEntry { u32 unknown00; DragonMotion* motion; };
struct DragonAnimationEntry { u32 unknown00; s32 motionIndex; u8 unknown08[8]; };

struct TBoss1Dragon : public TObjEneDD_ST {
    virtual ~TBoss1Dragon();
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
    void render_low_detail();
    static bool isV2Mode();
    static DragonModelNode* cloneModelHierarchy(DragonModelNode* source, DragonModelNode* output, void* model);
    static s32 countModelNodes(DragonModelNode* source);
    void updateFacingPosition();
    void handleFallState(u32 reason);
    int setState1();
    int initDefault();
    void saveCurrentDestination();
    void setDestinationX(int x);
    void saveTargetDestination();
    void restorePosition();
    void copySavedX(int* x);
    void restoreTargetPosition();
    void beginHeightTransition();
    void setPhase2();
    void setActive();
    void clearState();
    s32 isHpPhaseComplete();
    s32 isHpPhasePending();
    void setHpPhaseValue(int complete);
    void resetHpPhase();
    static void clearControlOverride();
    static void setControlOverride(s16 controlId);
    static void requestActionRefresh();
    u8 unk_374[0x20];
    f32 targetX;
    f32 targetY;
    f32 targetZ;
    u8 unknown3A0[0x3C0 - 0x3A0];
    u32 flags;
    u8 unknown3C4[0x3E4 - 0x3C4];
    s32 phase;
    u8 unknown3E8[0x5D8 - 0x3E8];
    f32 height;
    f32 heightOffset;
    f32 defaultHeightOffset;
    u8 unknown5E4[0x67C - 0x5E4];
    s32 hpPhaseValue;
    s16 hpThreshold;
    s16 finalHpThreshold;
    u8 unknown684[0x690 - 0x684];
    f32 destinationX;
    f32 destinationZ;
    f32 savedX;
    f32 savedZ;
    u8 unknown6A0[0x768 - 0x6A0];
    s32 controlTimer;
    s32 facingAngle;
    u8 unknown770[0x778 - 0x770];
    DragonEffectResource* effectResource;
    u8 unknown77C[0x864 - 0x77C];
    s32 stateStep;
    s32 impactAge;
    u8 unknown86C[0x87C - 0x86C];
    f32 fallVelocity;
    f32 rootHeight;
    u8 unknown884[0x8BC - 0x884];
    void action(s32 arg1);
    void update_appearance_state(u32 reason);
    void update_wander_state(s32 arg1);
    void handle_fall_state(u32 arg1);
    void state_circle_flight(u32 arg1);
    void handle_state(u32 arg1);
    void update_fade_state(u32 arg1);
    void update_burrow_outward_run(u32 arg1);
    void update_roar_state(u32 arg1);
    void update_stretch_state(u32 arg1);
    void update_head_down_attack_state(u32 arg1);
    void update_flight_state(u32 arg1);
    void update_lift_state(u32 arg1);
    void update_tail_attack_state(u32 arg1);
    void update_breath_attack_state(u32 arg1);
    void update_walking_state(u32 arg1);
    s32 check_can_attack();
    void hold_captured_player();
    static u16 find_player_on_floor(void *arg0);
    void update_switch_attack();
    void apply_ground_impact_attack();
    void apply_head_fall_attack();
    void spawn_impact_crater(s32 arg1);
    s32 check_phase_advance();
    s32 update_max_hp_phase();
    void set_params(void *arg1);
    void copy_params(void *arg1);
    void reload_impact_stats();
    void reload_stats_for_phase(int _w1);
    void reset_tail_hp();
    void reload_difficulty_stats();
    s32 advance_air_turn();
    void set_result_flag(s32 arg1, s32 arg2);
    void play_nearby_se();
    s32 select_air_fire_target(void *out_);
    f32 sample_root_height();
    void calc_forward_point(f32 *arg1, f32 *arg2);
    static void update_linked_epsilon_position();
    void update_position_history();
    void check_death();
    void choose_next_action();
    static void free_resources();
    static u8 *create(s32 arg0);
    static s32 get_instance();
    void set_child_motion(u8 *arg1);
    void *dt(s16 arg1);
    static void select_fireball_particle_table();
    static void init_gravity_globals();
    int get_position();};

#include <stddef.h>
#define DRAGON_OFFSET(member, offset) \
    typedef char DragonOffset_##member[(offsetof(TBoss1Dragon, member) == offset) ? 1 : -1]
typedef char DragonModelNodeSize[(sizeof(DragonModelNode) == 0x38) ? 1 : -1];
typedef char DragonModelNodeChild[(offsetof(DragonModelNode, child) == 0x2C) ? 1 : -1];
DRAGON_OFFSET(controlTimer, 0x768);
DRAGON_OFFSET(effectResource, 0x778);
DRAGON_OFFSET(stateStep, 0x864);
DRAGON_OFFSET(impactAge, 0x868);
DRAGON_OFFSET(fallVelocity, 0x87C);
DRAGON_OFFSET(rootHeight, 0x880);
DRAGON_OFFSET(targetX, 0x394);
DRAGON_OFFSET(flags, 0x3C0);
DRAGON_OFFSET(phase, 0x3E4);
DRAGON_OFFSET(height, 0x5D8);
DRAGON_OFFSET(hpPhaseValue, 0x67C);
DRAGON_OFFSET(hpThreshold, 0x680);
DRAGON_OFFSET(destinationX, 0x690);
DRAGON_OFFSET(savedX, 0x698);
DRAGON_OFFSET(facingAngle, 0x76C);
typedef char DragonSize[(sizeof(TBoss1Dragon) == 0x8BC) ? 1 : -1];
#undef DRAGON_OFFSET

#endif
