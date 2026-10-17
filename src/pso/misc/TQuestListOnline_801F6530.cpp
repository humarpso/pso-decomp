#include "types.h"
#include "pso/misc/TQuestListOnline_801F6530.h"
#include "pso/misc/TQuestListOnline.h"

    extern int TQuestListVM__decompression_capacity;
int TQuestListVM__sub_801F6530(void) {  return TQuestListVM__decompression_capacity; }

    extern int quest_bin_decompressed_size;
int TQuestListOnline::get_quest_count() {  return quest_bin_decompressed_size; }

    extern int online_quest_bin_data;
int TQuestListOnline__sub_801F6540(void) {  return online_quest_bin_data; }
