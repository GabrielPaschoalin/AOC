#s0 = linhas
#s1 = colunas
#s2 = matriz A - linha end base
#s3 = matriz B - linha end base
#s4 = matriz C - linha end base
#s5 = i
#s6 = j
#s7 = k

main:
		
	add $s5, $0, $0 #i = 0
	add $s6, $0, $0 #j = 0

for1: 
	slt $t0, $s5, $s0 #i < linhas? sim = 1	; não = 0
	beq $t0, $0, done
	j for2 

for1_fim:
	addi $s5, $s5, 1 #i++
	addi $s6, $s6, 0 #j=0
	j for1
	
for2:
	slt $t0, $s6, $s1 #j < colunas? sim = 1	; não = 0
	beq $t0, $0, for1_fim 
		
	sll $t0, $s5,1 #offset i
	add $t0, $t0,$s2 #Endereço da linha da matriz A
	lw $t0, 0($t0) #indica qual linha buscamos na matriz A

	sll $t1, $s6,1 #offset j
	add $t1, $t0, $t1 #coluna correta
	lw $t2, 0($t1) #elemento A[i][j]
	
	sll $t0, $s5,1 #offset i
	add $t0, $t0,$s4 #Endereço da linha da matriz C
	lw $t0, 0($t0) #indica qual linha buscamos na matriz C

	sll $t1, $s6,1 #offset j
	add $t1, $t0, $t1 #coluna correta
	sw $t2, 0($t1) #Escrever a soma no elemento C[i][j]
		
	addi $t1, $t1, 1 #j++	
	j for2
	
done:
















