#ifndef SUPER_HEADER_H
#define SUPER_HEADER_H

#include <stdio.h>
#include <stdlib.h>

/* If NDEBUG is defined, make superHeader a no-op (just like standard assert) */
#if defined(NDEBUG)
#  define superHeader(condition, message) ((void)0)
#else

/* Turn optional flags into 0/1 constants the C code can use */
#  if defined(SUPER_HEADER_TRACE) && (SUPER_HEADER_TRACE+0)
#    define SH_TRACE_FLAG 1
#  else
#    define SH_TRACE_FLAG 0
#  endif

#  if defined(SUPER_HEADER_PERMISSIVE) && (SUPER_HEADER_PERMISSIVE+0)
#    define SH_PERM_FLAG 1
#  else
#    define SH_PERM_FLAG 0
#  endif

#  if defined(SUPER_HEADER_VERBOSE) && (SUPER_HEADER_VERBOSE+0)
#    define SH_VERB_FLAG 1
#  else
#    define SH_VERB_FLAG 0
#  endif

/* The macro itself: no preprocessor conditionals inside the body */
#  define superHeader(condition, message)                                      \
    do {                                                                       \
        int _ok = (condition);                                                 \
        if (!_ok) {                                                            \
            if (SH_VERB_FLAG) {                                                \
                printf("[%s:%d in %s] ", __FILE__, __LINE__, __func__);        \
            }                                                                   \
            printf("Assertion failed: %s\n", (message));                        \
            if (!SH_PERM_FLAG) {                                               \
                abort();                                                       \
            }                                                                   \
        } else {                                                                \
            if (SH_TRACE_FLAG) {                                               \
                if (SH_VERB_FLAG) {                                            \
                    printf("[%s:%d in %s] ", __FILE__, __LINE__, __func__);    \
                }                                                               \
                printf("Assertion passed: %s\n", (message));                    \
            }                                                                   \
        }                                                                       \
    } while (0)

#endif /* NDEBUG */

#endif /* SUPER_HEADER_H */
