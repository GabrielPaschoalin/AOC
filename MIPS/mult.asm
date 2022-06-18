#s0 = linhas
#s1 = colunas
#s2 = matriz A - linha end base
#s3 = matriz B - linha end base
#s4 = matriz C - linha end base
#s5 = i
#s6 = j
#s7 = k
#t3 = soma dos produtos

main:
		
	add $s5, $0, $0 #i = 0
	add $s6, $0, $0 #j = 0
	add $s7, $0, $0 #k = 0
	add $t3, $0, $0 #sum = 0

for1: 
	slt $t0, $s5, $s0 #i < linhas? sim = 1	; não = 0
	beq $t0, $0, done
	j for2 

for1_fim:
	addi $s5, $s5, 1 #i++
	addi $s6, $0, 0 #j=0
	addi $s7, $0, 0 #k=0
	j for1
	
for2:
	slt $t0, $s6, $s1 #j < colunas? sim = 1	; não = 0
	beq $t0, $0, for1_fim 		
	j for3

for2_fim:
	sll $t0, $s5,1 #offset i
	add $t0, $t0,$s4 #Endereço da linha da matriz C
	lw $t0, 0($t0) #indica qual linha buscamos na matriz C

	sll $t1, $s6,1 #offset j
	add $t1, $t0, $t1 #coluna correta
	sw $t3, 0($t1) #Escrever a soma no elemento C[i][j]
	
	addi $t3, $0, 0 #sum=0
	addi $s6, $s6, 1 #j++
	addi $s7, $0, 0 #k=0
	

	j for2 	
	
for3: 
	slt $t0, $s7, $s0 #k < linhas? sim = 1	; não = 0
	beq $t0, $0, for2_fim 	
	
	sll $t0, $s5,1 #offset i
	add $t0, $t0,$s2 #Endereço da linha da matriz A
	lw $t0, 0($t0) #indica qual linha buscamos na matriz A

	sll $t1, $s7,1 #offset k
	add $t1, $t0, $t1 #coluna correta
	lw $t2, 0($t1) #elemento A[i][k]
	
	sll $t0, $s7,1 #offset k
	add $t0, $t0,$s3 #Endereço da linha da matriz B
	lw $t0, 0($t0) #indica qual linha buscamos na matriz B

	sll $t1, $s6,1 #offset j
	add $t1, $t0, $t1 #coluna correta
	lw $t0, 0($t1) #elemento B[k][j]
	
	mul $t2, $t2,$t0 #sum += A[i][k] * B[k][j];
	add $t3, $t2, $t3

	j for3
	
done: