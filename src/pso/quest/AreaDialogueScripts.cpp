#include "pso/quest/AreaDialogueScripts.h"

extern "C" {
extern const char area_dialogue_file_city_off_j[] = "map_city_off_j.bin";
extern const char area_dialogue_file_city_on_j[] = "map_city_on_j.bin";
extern const char area_dialogue_file_forest_j[] = "map_forest_j.bin";
extern const char area_dialogue_file_cave_j[] = "map_cave_j.bin";
extern const char area_dialogue_file_machine_j[] = "map_machine_j.bin";
extern const char area_dialogue_file_ancient_j[] = "map_ancient_j.bin";
extern const char area_dialogue_file_labo_off_j[] = "map_labo_off_j.bin";
extern const char area_dialogue_file_labo_on_j[] = "map_labo_on_j.bin";
extern const char area_dialogue_file_ruin_j[] = "map_ruin_j.bin";
extern const char area_dialogue_file_space_j[] = "map_space_j.bin";
extern const char area_dialogue_file_jungle_j[] = "map_jungle_j.bin";
extern const char area_dialogue_file_seabed_j[] = "map_seabed_j.bin";
extern const char area_dialogue_file_city_off_e[] = "map_city_off_e.bin";
extern const char area_dialogue_file_city_on_e[] = "map_city_on_e.bin";
extern const char area_dialogue_file_forest_e[] = "map_forest_e.bin";
extern const char area_dialogue_file_cave_e[] = "map_cave_e.bin";
extern const char area_dialogue_file_machine_e[] = "map_machine_e.bin";
extern const char area_dialogue_file_ancient_e[] = "map_ancient_e.bin";
extern const char area_dialogue_file_labo_off_e[] = "map_labo_off_e.bin";
extern const char area_dialogue_file_labo_on_e[] = "map_labo_on_e.bin";
extern const char area_dialogue_file_ruin_e[] = "map_ruin_e.bin";
extern const char area_dialogue_file_space_e[] = "map_space_e.bin";
extern const char area_dialogue_file_jungle_e[] = "map_jungle_e.bin";
extern const char area_dialogue_file_seabed_e[] = "map_seabed_e.bin";
extern const char area_dialogue_file_city_off_g[] = "map_city_off_g.bin";
extern const char area_dialogue_file_city_on_g[] = "map_city_on_g.bin";
extern const char area_dialogue_file_forest_g[] = "map_forest_g.bin";
extern const char area_dialogue_file_cave_g[] = "map_cave_g.bin";
extern const char area_dialogue_file_machine_g[] = "map_machine_g.bin";
extern const char area_dialogue_file_ancient_g[] = "map_ancient_g.bin";
extern const char area_dialogue_file_labo_off_g[] = "map_labo_off_g.bin";
extern const char area_dialogue_file_labo_on_g[] = "map_labo_on_g.bin";
extern const char area_dialogue_file_ruin_g[] = "map_ruin_g.bin";
extern const char area_dialogue_file_space_g[] = "map_space_g.bin";
extern const char area_dialogue_file_jungle_g[] = "map_jungle_g.bin";
extern const char area_dialogue_file_seabed_g[] = "map_seabed_g.bin";
extern const char area_dialogue_file_city_off_f[] = "map_city_off_f.bin";
extern const char area_dialogue_file_city_on_f[] = "map_city_on_f.bin";
extern const char area_dialogue_file_forest_f[] = "map_forest_f.bin";
extern const char area_dialogue_file_cave_f[] = "map_cave_f.bin";
extern const char area_dialogue_file_machine_f[] = "map_machine_f.bin";
extern const char area_dialogue_file_ancient_f[] = "map_ancient_f.bin";
extern const char area_dialogue_file_labo_off_f[] = "map_labo_off_f.bin";
extern const char area_dialogue_file_labo_on_f[] = "map_labo_on_f.bin";
extern const char area_dialogue_file_ruin_f[] = "map_ruin_f.bin";
extern const char area_dialogue_file_space_f[] = "map_space_f.bin";
extern const char area_dialogue_file_jungle_f[] = "map_jungle_f.bin";
extern const char area_dialogue_file_seabed_f[] = "map_seabed_f.bin";
extern const char area_dialogue_file_city_off_s[] = "map_city_off_s.bin";
extern const char area_dialogue_file_city_on_s[] = "map_city_on_s.bin";
extern const char area_dialogue_file_forest_s[] = "map_forest_s.bin";
extern const char area_dialogue_file_cave_s[] = "map_cave_s.bin";
extern const char area_dialogue_file_machine_s[] = "map_machine_s.bin";
extern const char area_dialogue_file_ancient_s[] = "map_ancient_s.bin";
extern const char area_dialogue_file_labo_off_s[] = "map_labo_off_s.bin";
extern const char area_dialogue_file_labo_on_s[] = "map_labo_on_s.bin";
extern const char area_dialogue_file_ruin_s[] = "map_ruin_s.bin";
extern const char area_dialogue_file_space_s[] = "map_space_s.bin";
extern const char area_dialogue_file_jungle_s[] = "map_jungle_s.bin";
extern const char area_dialogue_file_seabed_s[] = "map_seabed_s.bin";
extern const char area_dialogue_file_forest_j_u[] = "map_forest_j_u.bin";
extern const char area_dialogue_file_cave_j_u[] = "map_cave_j_u.bin";
extern const char area_dialogue_file_machine_j_u[] = "map_machine_j_u.bin";
extern const char area_dialogue_file_ancient_j_u[] = "map_ancient_j_u.bin";
extern const char area_dialogue_file_labo_off_j_u[] = "map_labo_off_j_u.bin";
extern const char area_dialogue_file_labo_on_j_u[] = "map_labo_on_j_u.bin";
extern const char area_dialogue_file_ruin_j_u[] = "map_ruin_j_u.bin";
extern const char area_dialogue_file_space_j_u[] = "map_space_j_u.bin";
extern const char area_dialogue_file_jungle_j_u[] = "map_jungle_j_u.bin";
extern const char area_dialogue_file_seabed_j_u[] = "map_seabed_j_u.bin";
extern const char area_dialogue_file_forest_e_u[] = "map_forest_e_u.bin";
extern const char area_dialogue_file_cave_e_u[] = "map_cave_e_u.bin";
extern const char area_dialogue_file_machine_e_u[] = "map_machine_e_u.bin";
extern const char area_dialogue_file_ancient_e_u[] = "map_ancient_e_u.bin";
extern const char area_dialogue_file_labo_off_e_u[] = "map_labo_off_e_u.bin";
extern const char area_dialogue_file_labo_on_e_u[] = "map_labo_on_e_u.bin";
extern const char area_dialogue_file_ruin_e_u[] = "map_ruin_e_u.bin";
extern const char area_dialogue_file_space_e_u[] = "map_space_e_u.bin";
extern const char area_dialogue_file_jungle_e_u[] = "map_jungle_e_u.bin";
extern const char area_dialogue_file_seabed_e_u[] = "map_seabed_e_u.bin";
extern const char area_dialogue_file_forest_g_u[] = "map_forest_g_u.bin";
extern const char area_dialogue_file_cave_g_u[] = "map_cave_g_u.bin";
extern const char area_dialogue_file_machine_g_u[] = "map_machine_g_u.bin";
extern const char area_dialogue_file_ancient_g_u[] = "map_ancient_g_u.bin";
extern const char area_dialogue_file_labo_off_g_u[] = "map_labo_off_g_u.bin";
extern const char area_dialogue_file_labo_on_g_u[] = "map_labo_on_g_u.bin";
extern const char area_dialogue_file_ruin_g_u[] = "map_ruin_g_u.bin";
extern const char area_dialogue_file_space_g_u[] = "map_space_g_u.bin";
extern const char area_dialogue_file_jungle_g_u[] = "map_jungle_g_u.bin";
extern const char area_dialogue_file_seabed_g_u[] = "map_seabed_g_u.bin";
extern const char area_dialogue_file_forest_f_u[] = "map_forest_f_u.bin";
extern const char area_dialogue_file_cave_f_u[] = "map_cave_f_u.bin";
extern const char area_dialogue_file_machine_f_u[] = "map_machine_f_u.bin";
extern const char area_dialogue_file_ancient_f_u[] = "map_ancient_f_u.bin";
extern const char area_dialogue_file_labo_off_f_u[] = "map_labo_off_f_u.bin";
extern const char area_dialogue_file_labo_on_f_u[] = "map_labo_on_f_u.bin";
extern const char area_dialogue_file_ruin_f_u[] = "map_ruin_f_u.bin";
extern const char area_dialogue_file_space_f_u[] = "map_space_f_u.bin";
extern const char area_dialogue_file_jungle_f_u[] = "map_jungle_f_u.bin";
extern const char area_dialogue_file_seabed_f_u[] = "map_seabed_f_u.bin";
extern const char area_dialogue_file_forest_s_u[] = "map_forest_s_u.bin";
extern const char area_dialogue_file_cave_s_u[] = "map_cave_s_u.bin";
extern const char area_dialogue_file_machine_s_u[] = "map_machine_s_u.bin";
extern const char area_dialogue_file_ancient_s_u[] = "map_ancient_s_u.bin";
extern const char area_dialogue_file_labo_off_s_u[] = "map_labo_off_s_u.bin";
extern const char area_dialogue_file_labo_on_s_u[] = "map_labo_on_s_u.bin";
extern const char area_dialogue_file_ruin_s_u[] = "map_ruin_s_u.bin";
extern const char area_dialogue_file_space_s_u[] = "map_space_s_u.bin";
extern const char area_dialogue_file_jungle_s_u[] = "map_jungle_s_u.bin";
extern const char area_dialogue_file_seabed_s_u[] = "map_seabed_s_u.bin";

const char *area_dialogue_script_files[5][12] = {
    {
        area_dialogue_file_city_off_j,
        area_dialogue_file_city_on_j,
        area_dialogue_file_forest_j,
        area_dialogue_file_cave_j,
        area_dialogue_file_machine_j,
        area_dialogue_file_ancient_j,
        area_dialogue_file_labo_off_j,
        area_dialogue_file_labo_on_j,
        area_dialogue_file_ruin_j,
        area_dialogue_file_space_j,
        area_dialogue_file_jungle_j,
        area_dialogue_file_seabed_j,
    },
    {
        area_dialogue_file_city_off_e,
        area_dialogue_file_city_on_e,
        area_dialogue_file_forest_e,
        area_dialogue_file_cave_e,
        area_dialogue_file_machine_e,
        area_dialogue_file_ancient_e,
        area_dialogue_file_labo_off_e,
        area_dialogue_file_labo_on_e,
        area_dialogue_file_ruin_e,
        area_dialogue_file_space_e,
        area_dialogue_file_jungle_e,
        area_dialogue_file_seabed_e,
    },
    {
        area_dialogue_file_city_off_g,
        area_dialogue_file_city_on_g,
        area_dialogue_file_forest_g,
        area_dialogue_file_cave_g,
        area_dialogue_file_machine_g,
        area_dialogue_file_ancient_g,
        area_dialogue_file_labo_off_g,
        area_dialogue_file_labo_on_g,
        area_dialogue_file_ruin_g,
        area_dialogue_file_space_g,
        area_dialogue_file_jungle_g,
        area_dialogue_file_seabed_g,
    },
    {
        area_dialogue_file_city_off_f,
        area_dialogue_file_city_on_f,
        area_dialogue_file_forest_f,
        area_dialogue_file_cave_f,
        area_dialogue_file_machine_f,
        area_dialogue_file_ancient_f,
        area_dialogue_file_labo_off_f,
        area_dialogue_file_labo_on_f,
        area_dialogue_file_ruin_f,
        area_dialogue_file_space_f,
        area_dialogue_file_jungle_f,
        area_dialogue_file_seabed_f,
    },
    {
        area_dialogue_file_city_off_s,
        area_dialogue_file_city_on_s,
        area_dialogue_file_forest_s,
        area_dialogue_file_cave_s,
        area_dialogue_file_machine_s,
        area_dialogue_file_ancient_s,
        area_dialogue_file_labo_off_s,
        area_dialogue_file_labo_on_s,
        area_dialogue_file_ruin_s,
        area_dialogue_file_space_s,
        area_dialogue_file_jungle_s,
        area_dialogue_file_seabed_s,
    },
};

const char *area_dialogue_ultimate_script_files[5][12] = {
    {
        area_dialogue_file_city_off_j,
        area_dialogue_file_city_on_j,
        area_dialogue_file_forest_j_u,
        area_dialogue_file_cave_j_u,
        area_dialogue_file_machine_j_u,
        area_dialogue_file_ancient_j_u,
        area_dialogue_file_labo_off_j_u,
        area_dialogue_file_labo_on_j_u,
        area_dialogue_file_ruin_j_u,
        area_dialogue_file_space_j_u,
        area_dialogue_file_jungle_j_u,
        area_dialogue_file_seabed_j_u,
    },
    {
        area_dialogue_file_city_off_e,
        area_dialogue_file_city_on_e,
        area_dialogue_file_forest_e_u,
        area_dialogue_file_cave_e_u,
        area_dialogue_file_machine_e_u,
        area_dialogue_file_ancient_e_u,
        area_dialogue_file_labo_off_e_u,
        area_dialogue_file_labo_on_e_u,
        area_dialogue_file_ruin_e_u,
        area_dialogue_file_space_e_u,
        area_dialogue_file_jungle_e_u,
        area_dialogue_file_seabed_e_u,
    },
    {
        area_dialogue_file_city_off_g,
        area_dialogue_file_city_on_g,
        area_dialogue_file_forest_g_u,
        area_dialogue_file_cave_g_u,
        area_dialogue_file_machine_g_u,
        area_dialogue_file_ancient_g_u,
        area_dialogue_file_labo_off_g_u,
        area_dialogue_file_labo_on_g_u,
        area_dialogue_file_ruin_g_u,
        area_dialogue_file_space_g_u,
        area_dialogue_file_jungle_g_u,
        area_dialogue_file_seabed_g_u,
    },
    {
        area_dialogue_file_city_off_f,
        area_dialogue_file_city_on_f,
        area_dialogue_file_forest_f_u,
        area_dialogue_file_cave_f_u,
        area_dialogue_file_machine_f_u,
        area_dialogue_file_ancient_f_u,
        area_dialogue_file_labo_off_f_u,
        area_dialogue_file_labo_on_f_u,
        area_dialogue_file_ruin_f_u,
        area_dialogue_file_space_f_u,
        area_dialogue_file_jungle_f_u,
        area_dialogue_file_seabed_f_u,
    },
    {
        area_dialogue_file_city_off_s,
        area_dialogue_file_city_on_s,
        area_dialogue_file_forest_s_u,
        area_dialogue_file_cave_s_u,
        area_dialogue_file_machine_s_u,
        area_dialogue_file_ancient_s_u,
        area_dialogue_file_labo_off_s_u,
        area_dialogue_file_labo_on_s_u,
        area_dialogue_file_ruin_s_u,
        area_dialogue_file_space_s_u,
        area_dialogue_file_jungle_s_u,
        area_dialogue_file_seabed_s_u,
    },
};

}
