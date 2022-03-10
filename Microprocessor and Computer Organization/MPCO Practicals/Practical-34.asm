
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

mov AX,2000H
mov BX,2020H

ADD AX,BX   

MOV [4000H],AX 

PUSHF
POP CX   

MOV [5000H],CX

ret




