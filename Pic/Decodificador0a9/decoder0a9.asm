
_main:

;decoder0a9.c,1 :: 		void main() {
;decoder0a9.c,2 :: 		trisd = 0; //portC como saida
	CLRF        TRISD+0 
;decoder0a9.c,3 :: 		trisa = 0 ; //potyA como saida
	CLRF        TRISA+0 
;decoder0a9.c,4 :: 		adcon1 =15; // portA e portB como digital
	MOVLW       15
	MOVWF       ADCON1+0 
;decoder0a9.c,5 :: 		cmcon = 7; //comparadores desabilitados
	MOVLW       7
	MOVWF       CMCON+0 
;decoder0a9.c,6 :: 		porta = 8;  //ativa transistor do segmento
	MOVLW       8
	MOVWF       PORTA+0 
;decoder0a9.c,7 :: 		while(1){//loop principal
L_main0:
;decoder0a9.c,9 :: 		portd=63 ;
	MOVLW       63
	MOVWF       PORTD+0 
;decoder0a9.c,10 :: 		delay_ms(500);
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
;decoder0a9.c,11 :: 		portd=6 ;
	MOVLW       6
	MOVWF       PORTD+0 
;decoder0a9.c,12 :: 		delay_ms(500);
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
;decoder0a9.c,13 :: 		portd=91 ;
	MOVLW       91
	MOVWF       PORTD+0 
;decoder0a9.c,14 :: 		delay_ms(500);
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
;decoder0a9.c,15 :: 		portd=79 ;
	MOVLW       79
	MOVWF       PORTD+0 
;decoder0a9.c,16 :: 		delay_ms(500);
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
;decoder0a9.c,17 :: 		portd=102 ;
	MOVLW       102
	MOVWF       PORTD+0 
;decoder0a9.c,18 :: 		delay_ms(500);
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
;decoder0a9.c,19 :: 		portd=109 ;
	MOVLW       109
	MOVWF       PORTD+0 
;decoder0a9.c,20 :: 		delay_ms(500);
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
;decoder0a9.c,21 :: 		portd=125 ;
	MOVLW       125
	MOVWF       PORTD+0 
;decoder0a9.c,22 :: 		delay_ms(500);
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
;decoder0a9.c,23 :: 		portd=7 ;
	MOVLW       7
	MOVWF       PORTD+0 
;decoder0a9.c,24 :: 		delay_ms(500);
	MOVLW       13
	MOVWF       R11, 0
	MOVLW       175
	MOVWF       R12, 0
	MOVLW       182
	MOVWF       R13, 0
L_main9:
	DECFSZ      R13, 1, 1
	BRA         L_main9
	DECFSZ      R12, 1, 1
	BRA         L_main9
	DECFSZ      R11, 1, 1
	BRA         L_main9
	NOP
;decoder0a9.c,25 :: 		portd=127 ;
	MOVLW       127
	MOVWF       PORTD+0 
;decoder0a9.c,26 :: 		delay_ms(500);
	MOVLW       13
	MOVWF       R11, 0
	MOVLW       175
	MOVWF       R12, 0
	MOVLW       182
	MOVWF       R13, 0
L_main10:
	DECFSZ      R13, 1, 1
	BRA         L_main10
	DECFSZ      R12, 1, 1
	BRA         L_main10
	DECFSZ      R11, 1, 1
	BRA         L_main10
	NOP
;decoder0a9.c,27 :: 		portd=111 ;
	MOVLW       111
	MOVWF       PORTD+0 
;decoder0a9.c,28 :: 		delay_ms(500);
	MOVLW       13
	MOVWF       R11, 0
	MOVLW       175
	MOVWF       R12, 0
	MOVLW       182
	MOVWF       R13, 0
L_main11:
	DECFSZ      R13, 1, 1
	BRA         L_main11
	DECFSZ      R12, 1, 1
	BRA         L_main11
	DECFSZ      R11, 1, 1
	BRA         L_main11
	NOP
;decoder0a9.c,31 :: 		}
	GOTO        L_main0
;decoder0a9.c,33 :: 		}
L_end_main:
	GOTO        $+0
; end of _main
