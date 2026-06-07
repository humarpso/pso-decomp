#ifndef PTMF_H
#define PTMF_H

typedef struct __ptmf {
	long this_delta;
	long v_offset;
	union {
		void* f_addr;
		long ve_offset;
	} f_data;
} __ptmf;

#endif
