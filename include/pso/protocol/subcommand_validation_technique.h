#ifndef PSO_PROTOCOL_SUBCOMMAND_VALIDATION_TECHNIQUE_H
#define PSO_PROTOCOL_SUBCOMMAND_VALIDATION_TECHNIQUE_H

#include "types.h"

extern "C" {
s32 validate_6x46_attack_finished(G_ClientIDHeader *packet);
}
s32 validate_cast_target_entry(void *parameters);
s32 validate_technique_parameters(void *parameters);

#endif
