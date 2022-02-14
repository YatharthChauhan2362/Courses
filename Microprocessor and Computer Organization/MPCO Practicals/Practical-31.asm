
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

mov dh,48h
mov al,46h
mov bl,86h
mov cx,10h

l1:
mov ah,06
mov dl,al
int 21h
dec al
mov bl,60

l2:
dec bl
jnz l2
cmp dh,al
jz l3
loop l1

l3:
mov al,39h
loop l1


ret




