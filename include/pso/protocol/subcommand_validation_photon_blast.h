#ifndef PSO_PROTOCOL_SUBCOMMAND_VALIDATION_PHOTON_BLAST_H
#define PSO_PROTOCOL_SUBCOMMAND_VALIDATION_PHOTON_BLAST_H

#include "types.h"

extern "C" {
s32 validate_6x48_cast_technique_complete(G_ClientIDHeader *packet);
s32 validate_6x8D_set_technique_level_override(G_ClientIDHeader *packet);
}
s32 validate_photon_blast_parameters(void *parameters);

#endif
