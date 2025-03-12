
/*
 * According to libatomic_i.h, here we should implement
 * - UWORD protect_start(void *ptr);
 * - void protect_end(void *ptr, UWORD token);
 * which are used by fop_n.c fop_n.c cas_n.c exch_n.c tas_n.c store_n.c for
 * 'small' operations.
 */

unsigned int libat_quick_lock_n(void *ptr);
void libat_quick_unlock_n(void *ptr, unsigned int token);

static inline UWORD protect_start(void *ptr)
{
	return libat_quick_lock_n(ptr);
}

static inline void protect_end(void *ptr, UWORD token)
{
	libat_quick_unlock_n(ptr, token);
}

#include_next <host-config.h>
