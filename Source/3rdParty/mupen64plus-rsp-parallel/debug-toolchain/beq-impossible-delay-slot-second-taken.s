.text
.set noreorder
.global main
main:
	li $t0, 1
	li $t1, 1
	li $t2, 2
	li $t3, 0
	beq $t0, $t2, taken0 # This will not be taken, should be ignored.
	beq $t0, $t1, taken1 # This will be taken.
	li $t3, 3

taken0:
	li $t4, 5
	break
taken1:
	li $t4, 4
	break
