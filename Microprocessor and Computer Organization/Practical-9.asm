
; 20DCE019 - YATHARTH CHAUHAN

; Substract Two 32-bit numbers stored in consecutive memory locations and store the result in memory locations starting from 7000H

ORG 100H

MOV AX, 5050H   
MOV BX, 2020H
MOV CX, 4000H
MOV DX, 4002H 

SUB AX,CX
SUB BX,DX
   
MOV [7000H],AX
MOV [7002H],BX  

RET