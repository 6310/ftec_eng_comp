
_main:

;piscaled.c,1 :: 		void main() {
;piscaled.c,2 :: 		trisc =0; //portC como saida
	CLRF        TRISC+0 
;piscaled.c,3 :: 		adcon1 =15; // portA e portB como digital
	MOVLW       15
	MOVWF       ADCON1+0 
;piscaled.c,4 :: 		cmcon = 7; //comparadores desabilitados
	MOVLW       7
	MOVWF       CMCON+0 
;piscaled.c,6 :: 		while(1){//loop principal
L_main0:
;piscaled.c,9 :: 		portc=4;//liga led RC2
	MOVLW       4
	MOVWF       PORTC+0 
;piscaled.c,10 :: 		delay_ms(500);
	MOVLW       13
	MOVWF       R11, 0
	MOVLW       175
	MOVWF       R12, 0
	MOVLW       182
	MOVWF       R13, 0
L_main2:
	DECFSZ      R13, 1, 1
	BRA         L_main2
	DECFSZ      R12, 1, 1
	BRA         L_main2
	DECFSZ      R11, 1, 1
	BRA         L_main2
	NOP
;piscaled.c,11 :: 		portc=6;//liga o led RC2 e RC1
	MOVLW       6
	MOVWF       PORTC+0 
;piscaled.c,12 :: 		delay_ms(500);
	MOVLW       13
	MOVWF       R11, 0
	MOVLW       175
	MOVWF       R12, 0
	MOVLW       182
	MOVWF       R13, 0
L_main3:
	DECFSZ      R13, 1, 1
	BRA         L_main3
	DECFSZ      R12, 1, 1
	BRA         L_main3
	DECFSZ      R11, 1, 1
	BRA         L_main3
	NOP
;piscaled.c,13 :: 		portc=14;//liga o led RC2 e RC1
	MOVLW       14
	MOVWF       PORTC+0 
;piscaled.c,14 :: 		delay_ms(500);
	MOVLW       13
	MOVWF       R11, 0
	MOVLW       175
	MOVWF       R12, 0
	MOVLW       182
	MOVWF       R13, 0
L_main4:
	DECFSZ      R13, 1, 1
	BRA         L_main4
	DECFSZ      R12, 1, 1
	BRA         L_main4
	DECFSZ      R11, 1, 1
	BRA         L_main4
	NOP
;piscaled.c,15 :: 		portc=15;//liga todos
	MOVLW       15
	MOVWF       PORTC+0 
;piscaled.c,16 :: 		delay_ms(500);
	MOVLW       13
	MOVWF       R11, 0
	MOVLW       175
	MOVWF       R12, 0
	MOVLW       182
	MOVWF       R13, 0
L_main5:
	DECFSZ      R13, 1, 1
	BRA         L_main5
	DECFSZ      R12, 1, 1
	BRA         L_main5
	DECFSZ      R11, 1, 1
	BRA         L_main5
	NOP
;piscaled.c,17 :: 		portc=14;//liga o led RC2 e RC1
	MOVLW       14
	MOVWF       PORTC+0 
;piscaled.c,18 :: 		delay_ms(500);
	MOVLW       13
	MOVWF       R11, 0
	MOVLW       175
	MOVWF       R12, 0
	MOVLW       182
	MOVWF       R13, 0
L_main6:
	DECFSZ      R13, 1, 1
	BRA         L_main6
	DECFSZ      R12, 1, 1
	BRA         L_main6
	DECFSZ      R11, 1, 1
	BRA         L_main6
	NOP
;piscaled.c,19 :: 		portc=6;//liga o led RC2
	MOVLW       6
	MOVWF       PORTC+0 
;piscaled.c,20 :: 		delay_ms(500);
	MOVLW       13
	MOVWF       R11, 0
	MOVLW       175
	MOVWF       R12, 0
	MOVLW       182
	MOVWF       R13, 0
L_main7:
	DECFSZ      R13, 1, 1
	BRA         L_main7
	DECFSZ      R12, 1, 1
	BRA         L_main7
	DECFSZ      R11, 1, 1
	BRA         L_main7
	NOP
;piscaled.c,21 :: 		portc=0;//Apaga tudo
	CLRF        PORTC+0 
;piscaled.c,22 :: 		portc=4;//liga led RC2
	MOVLW       4
	MOVWF       PORTC+0 
;piscaled.c,23 :: 		delay_ms(500);
	MOVLW       13
	MOVWF       R11, 0
	MOVLW       175
	MOVWF       R12, 0
	MOVLW       182
	MOVWF       R13, 0
L_main8:
	DECFSZ      R13, 1, 1
	BRA         L_main8
	DECFSZ      R12, 1, 1
	BRA         L_main8
	DECFSZ      R11, 1, 1
	BRA         L_main8
	NOP
;piscaled.c,25 :: 		}
	GOTO        L_main0
;piscaled.c,27 :: 		}
L_end_main:
	GOTO        $+0
; end of _main
