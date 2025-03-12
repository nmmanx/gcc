
/*
 * According to libatomic_i.h, here we should implement
 * - void libat_lock_n(void *ptr, size_t n);
 * - void libat_unlock_n(void *ptr, size_t n);
 * which are used by gexch.c gcas.c gload.c gstore.c for 'large' operations.
 *
 * Except, we don't. These function may be directly implemented in Miosix should
 * the need arise, or intentionally left as undefined references if large
 * locking intrinsics are to be disallowed.
 */

#include "libatomic_i.h"
