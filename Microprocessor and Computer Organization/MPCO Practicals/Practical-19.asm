
; Calculate the sum of series of numbers (Data set-1) from the memory
; location listed below & store the result at 400AH location  

org 100h

MOV [4000H],12H
MOV [4001H],13H
MOV [4002H],10H
MOV [4003H],09H
MOV [4004H],08H  
              
MOV SI,4000H

ABC:  

MOV AL,[SI]
ADD [400AH],AL 

INC SI
CMP SI,4005H
JNE ABC

ret