
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt


org 100h	

MOV AL, 00H
MOV SI, 3000H
MOV [SI], AL

ADD SI, 1
ADD AL, 1

MOV [SI], AL

L1:
MOV AL, [SI-1]
ADD AL, [SI]
ADD SI, 1
MOV [SI], AL
	
LOOP L1:
HLT

ret
