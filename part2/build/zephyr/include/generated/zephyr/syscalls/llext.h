/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_LLEXT_H
#define Z_INCLUDE_SYSCALLS_LLEXT_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <stdarg.h>

#include <zephyr/syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern ssize_t z_impl_llext_get_fn_table(struct llext * ext, bool is_init, void * buf, size_t size);

__pinned_func
static inline ssize_t llext_get_fn_table(struct llext * ext, bool is_init, void * buf, size_t size)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; struct llext * val; } parm0 = { .val = ext };
		union { uintptr_t x; bool val; } parm1 = { .val = is_init };
		union { uintptr_t x; void * val; } parm2 = { .val = buf };
		union { uintptr_t x; size_t val; } parm3 = { .val = size };
		return (ssize_t) arch_syscall_invoke4(parm0.x, parm1.x, parm2.x, parm3.x, K_SYSCALL_LLEXT_GET_FN_TABLE);
	}
#endif
	compiler_barrier();
	return z_impl_llext_get_fn_table(ext, is_init, buf, size);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define llext_get_fn_table(ext, is_init, buf, size) ({ 	ssize_t syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_LLEXT_GET_FN_TABLE, llext_get_fn_table, ext, is_init, buf, size); 	syscall__retval = llext_get_fn_table(ext, is_init, buf, size); 	sys_port_trace_syscall_exit(K_SYSCALL_LLEXT_GET_FN_TABLE, llext_get_fn_table, ext, is_init, buf, size, syscall__retval); 	syscall__retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */
