#define TOBJECT_OUT_OF_LINE_HELPERS
#include "pso/misc/TOExplosiveMachine.h"
#include "pso/TMainTask.h"
#include "pso/misc/TLobby.h"
#include "pso/object/TObjChip.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/player/TObjPlayer_801AF2F0.h"
#include "pso/system/BmlResourceDescriptor.h"
#include "pso/system/GinjaMaterial.h"
#include "pso/unk/text_80087278.h"
#include "pso/unk/text_803D96A8.h"

extern "C" {
void *load_resource_from_descriptor(void *, s32, BmlResourceDescriptor *, s32, s32, s32);
extern BmlResourceDescriptor explosive_machine_resource_desc;
extern void *explosive_machine_model_archive;
extern const char *TOExplosiveMachine__class_name;
void TLobby__sub_8001FE7C(void *, s32);
f32 horizontal_distance_squared(const Vec *, const Vec *);
s32 post_translate_matrix(const Vec *);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
}

void TOExplosiveMachine::run_task() {
    for (s32 client = 0; client < TLobby::get_game_mode(); client++) {
        TObjPlayer *player = get_player_by_client_id(client);
        if (player != NULL && !player->obj_testFlags30(0x800) &&
            horizontal_distance_squared(&player->position, &position) <= trigger_radius * trigger_radius) {
            TObjChipParams first = {
                {0.5f, 0.03f, 0.2f}, {position.x, position.y, position.z}, {3, 5, 3},
                {0x800, 0x100, 0x800}, {7, 50}, {-100, 1},
                (s32)debris_models[0], debris_textures[0], 22
            };
            TObjChipParams second = {
                {0.5f, 0.03f, 0.2f}, {position.x, position.y, position.z}, {3, 5, 3},
                {0x800, 0x100, 0x800}, {7, 50}, {-100, 1},
                (s32)debris_models[1], debris_textures[1], 22
            };
            spawn_particle_effect(&position, 0x45);
            spawn_particle_effect(&position, 0x46);
            void *chip = TObject::operator new(0x234);
            if (chip != NULL) {
                construct_debris__8TObjChipFPvPvPv((u8 *)chip, (u8 *)tl_05, (u8 *)&first);
            }
            chip = TObject::operator new(0x234);
            if (chip != NULL) {
                construct_debris__8TObjChipFPvPvPv((u8 *)chip, (u8 *)tl_05, (u8 *)&second);
            }
            queue_destruction();
            break;
        }
    }
}

void TOExplosiveMachine::render() {
    if (update_object_view_visibility(view_distance, view_radius) != 0) {
        push_matrix();
        post_translate_matrix(&position);
        rotate_matrix_y(0, rotation_y);
        TObjFish::set_global_param(texlist);
        draw_ginja_object(model);
        pop_matrix();
    }
}

void TOExplosiveMachine::destroy_static_lobby() {
    if (explosive_machine_model_archive != NULL) {
        TLobby__sub_8001FE7C(explosive_machine_model_archive, 1);
        explosive_machine_model_archive = NULL;
    }
}

void TOExplosiveMachine::load_shared_resource() {
    void *resource = ::operator new(0x440);
    if (resource != NULL) {
        resource = load_resource_from_descriptor(resource, 1, &explosive_machine_resource_desc, 0, 0, 0);
    }
    explosive_machine_model_archive = resource;
}

TOExplosiveMachine::~TOExplosiveMachine() {
    for (s32 i = 0; i < 2; i++) {
        debris_models[i] = NULL;
        debris_textures[i] = 0;
    }
}

TOExplosiveMachine::TOExplosiveMachine() : TObjBase(tl_05) {
    m_name = TOExplosiveMachine__class_name;
    view_distance = 500.0f;
    view_radius = 0.0f;
    trigger_radius = 30.0f + scale.x;
    for (s32 i = 0; i < 2; i++) {
        debris_models[i] = NULL;
        debris_textures[i] = 0;
    }
}
