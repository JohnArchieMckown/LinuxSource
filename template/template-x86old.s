	.global main		#; name for LIBC must be "main"
	.text
main:	mov	%rax, 1		#; syscall # for write
	mov	%rdi, 1		#; stdout (file descriptor 1)
	mov	%rsi, message	#; what to write (address of, actually)
	mov	%rdx, 13	#; number of bytes to write
	syscall			#; do the write
	mov	%rax, 60	#; exit syscall, to terminate
	xor	%rdi, %rdi	#; zero register (fast) for exit code
	syscall			#; and we are finished

	.data
message: .asciz	"Hello World\n"

