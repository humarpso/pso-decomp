#include "types.h"

extern "C" {

    extern int TQuestListVM__decompression_capacity;
int TQuestListVM__sub_801F6530(void) {  return TQuestListVM__decompression_capacity; }

    extern int quest_bin_decompressed_size;
int get_quest_count__16TQuestListOnlineFv(void) {  return quest_bin_decompressed_size; }

    extern int online_quest_bin_data;
int TQuestListOnline__sub_801F6540(void) {  return online_quest_bin_data; }

}
