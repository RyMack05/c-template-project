#ifndef SUPER_HEADER_H
#define SUPER_HEADER_H

#include <stdio.h>
#include <stdlib.h>

/*
    Exercise 5.2 – super_assert (doc §5.2).
    Flags (set at compile time via -D or CMake):
      SUPER_HEADER_TRACE=1       → also print when condition is true
      SUPER_HEADER_PERMISSIVE=1  → don’t abort on failure
      SUPER_HEADER_VERBOSE=1     → print [file:line func]
      NDEBUG defined             → disable completely
*/

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
