/* Autogenerated, don't edit */
#ifndef ASM_SYSCALL_PROTO_H_64__
#define ASM_SYSCALL_PROTO_H_64__
#include <compel/plugins/std/syscall-codes-64.h>
#include <compel/plugins/std/syscall-types.h>
extern long sys_read (int fd, void *buf, unsigned long count) ;
extern long sys_write (int fd, const void *buf, unsigned long count) ;
extern long sys_open (const char *filename, unsigned long flags, unsigned long mode) ;
extern long sys_close (int fd) ;
extern long sys_lseek (int fd, unsigned long offset, unsigned long origin) ;
extern long sys_mmap (void *addr, unsigned long len, unsigned long prot, unsigned long flags, unsigned long fd, unsigned long offset) ;
extern long sys_mprotect (const void *addr, unsigned long len, unsigned long prot) ;
extern long sys_munmap (void *addr, unsigned long len) ;
extern long sys_brk (void *addr) ;
extern long sys_sigaction (int signum, const rt_sigaction_t *act, rt_sigaction_t *oldact, size_t sigsetsize) ;
extern long sys_sigprocmask (int how, k_rtsigset_t *set, k_rtsigset_t *old, size_t sigsetsize) ;
extern long sys_rt_sigreturn (void) ;
extern long sys_ioctl (unsigned int fd, unsigned int cmd, unsigned long arg) ;
extern long sys_pread (unsigned int fd, char *buf, size_t count, loff_t pos) ;
extern long sys_mremap (unsigned long addr, unsigned long old_len, unsigned long new_len, unsigned long flags, unsigned long new_addr) ;
extern long sys_mincore (void *addr, unsigned long size, unsigned char *vec) ;
extern long sys_madvise (unsigned long start, size_t len, int behavior) ;
extern long sys_shmat (int shmid, void *shmaddr, int shmflag) ;
extern long sys_dup2 (int oldfd, int newfd) ;
extern long sys_nanosleep (struct timespec *req, struct timespec *rem) ;
extern long sys_getitimer (int which, const struct itimerval *val) ;
extern long sys_setitimer (int which, const struct itimerval *val, struct itimerval *old) ;
extern long sys_getpid (void) ;
extern long sys_socket (int domain, int type, int protocol) ;
extern long sys_connect (int sockfd, struct sockaddr *addr, int addrlen) ;
extern long sys_sendto (int sockfd, void *buff, size_t len, unsigned int flags, struct sockaddr *addr, int addr_len) ;
extern long sys_recvfrom (int sockfd, void *ubuf, size_t size, unsigned int flags, struct sockaddr *addr, int *addr_len) ;
extern long sys_sendmsg (int sockfd, const struct msghdr *msg, int flags) ;
extern long sys_recvmsg (int sockfd, struct msghdr *msg, int flags) ;
extern long sys_shutdown (int sockfd, int how) ;
extern long sys_bind (int sockfd, const struct sockaddr *addr, int addrlen) ;
extern long sys_setsockopt (int sockfd, int level, int optname, const void *optval, socklen_t optlen) ;
extern long sys_getsockopt (int sockfd, int level, int optname, const void *optval, socklen_t *optlen) ;
extern long sys_clone (unsigned long flags, void *child_stack, void *parent_tid, void *child_tid, unsigned long new_tls) ;
extern long sys_exit (unsigned long error_code) ;
extern long sys_wait4 (int pid, int *status, int options, struct rusage *ru) ;
extern long sys_kill (long pid, int sig) ;
extern long sys_fcntl (int fd, int type, long arg) ;
extern long sys_flock (int fd, unsigned long cmd) ;
extern long sys_mkdir (const char *name, int mode) ;
extern long sys_rmdir (const char *name) ;
extern long sys_unlink (char *pathname) ;
extern long sys_umask (int mask) ;
extern long sys_gettimeofday (struct timeval *tv, struct timezone *tz) ;
extern long sys_ptrace (long request, pid_t pid, void *addr, void *data) ;
extern long sys_getgroups (int gsize, unsigned int *groups) ;
extern long sys_setgroups (int gsize, unsigned int *groups) ;
extern long sys_setresuid (int uid, int euid, int suid) ;
extern long sys_getresuid (int *uid, int *euid, int *suid) ;
extern long sys_setresgid (int gid, int egid, int sgid) ;
extern long sys_getresgid (int *gid, int *egid, int *sgid) ;
extern long sys_getpgid (pid_t pid) ;
extern long sys_setfsuid (int fsuid) ;
extern long sys_setfsgid (int fsgid) ;
extern long sys_getsid (void) ;
extern long sys_capget (struct cap_header *h, struct cap_data *d) ;
extern long sys_capset (struct cap_header *h, struct cap_data *d) ;
extern long sys_rt_sigqueueinfo (pid_t pid, int sig, siginfo_t *info) ;
extern long sys_sigaltstack (const void *uss, void *uoss) ;
extern long sys_personality (unsigned int personality) ;
extern long sys_setpriority (int which, int who, int nice) ;
extern long sys_sched_setscheduler (int pid, int policy, struct sched_param *p) ;
extern long sys_prctl (int option, unsigned long arg2, unsigned long arg3, unsigned long arg4, unsigned long arg5) ;
extern long sys_arch_prctl (int option, unsigned long addr) ;
extern long sys_setrlimit (int resource, struct krlimit *rlim) ;
extern long sys_mount (char *dev_nmae, char *dir_name, char *type, unsigned long flags, void *data) ;
extern long sys_umount2 (char *name, int flags) ;
extern long sys_gettid (void) ;
extern long sys_futex (uint32_t *uaddr, int op, uint32_t val, struct timespec *utime, uint32_t *uaddr2, uint32_t val3) ;
extern long sys_set_thread_area (user_desc_t *info) ;
extern long sys_io_setup (unsigned nr_events, aio_context_t *ctx) ;
extern long sys_io_getevents (aio_context_t ctx, long min_nr, long nr, struct io_event *evs, struct timespec *tmo) ;
extern long sys_io_submit (aio_context_t ctx, long nr, struct iocb **iocbpp) ;
extern long sys_get_thread_area (user_desc_t *info) ;
extern long sys_set_tid_address (int *tid_addr) ;
extern long sys_restart_syscall (void) ;
extern long sys_timer_create (clockid_t which_clock, struct sigevent *timer_event_spec, kernel_timer_t *created_timer_id) ;
extern long sys_timer_settime (kernel_timer_t timer_id, int flags, const struct itimerspec *new_setting, struct itimerspec *old_setting) ;
extern long sys_timer_gettime (int timer_id, const struct itimerspec *setting) ;
extern long sys_timer_getoverrun (int timer_id) ;
extern long sys_timer_delete (kernel_timer_t timer_id) ;
extern long sys_clock_gettime (const clockid_t which_clock, const struct timespec *tp) ;
extern long sys_exit_group (int error_code) ;
extern long sys_openat (int dfd, const char *filename, int flags, int mode) ;
extern long sys_waitid (int which, pid_t pid, struct siginfo *infop, int options, struct rusage *ru) ;
extern long sys_readlinkat (int fd, const char *path, char *buf, int bufsize) ;
extern long sys_set_robust_list (struct robust_list_head *head, size_t len) ;
extern long sys_get_robust_list (int pid, struct robust_list_head **head_ptr, size_t *len_ptr) ;
extern long sys_seccomp (unsigned int op, unsigned int flags, const char *uargs) ;
extern long sys_vmsplice (int fd, const struct iovec *iov, unsigned long nr_segs, unsigned int flags) ;
extern long sys_fallocate (int fd, int mode, loff_t offset, loff_t len) ;
extern long sys_timerfd_settime (int ufd, int flags, const struct itimerspec *utmr, struct itimerspec *otmr) ;
extern long sys_signalfd (int fd, k_rtsigset_t *mask, size_t sizemask, int flags) ;
extern long sys_preadv_raw (int fd, struct iovec *iov, unsigned long nr, unsigned long pos_l, unsigned long pos_h) ;
extern long sys_rt_tgsigqueueinfo (pid_t tgid, pid_t pid, int sig, siginfo_t *info) ;
extern long sys_fanotify_init (unsigned int flags, unsigned int event_f_flags) ;
extern long sys_fanotify_mark (int fanotify_fd, unsigned int flags, uint64_t mask, int dfd, const char *pathname) ;
extern long sys_open_by_handle_at (int mountdirfd, struct file_handle *handle, int flags) ;
extern long sys_setns (int fd, int nstype) ;
extern long sys_kcmp (pid_t pid1, pid_t pid2, int type, unsigned long idx1, unsigned long idx2) ;
extern long sys_memfd_create (const char *name, unsigned int flags) ;
extern long sys_userfaultfd (int flags) ;
#endif /* ASM_SYSCALL_PROTO_H_64__ */