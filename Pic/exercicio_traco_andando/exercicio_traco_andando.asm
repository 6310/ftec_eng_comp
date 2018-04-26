
_main:

;exercicio_traco_andando.c,3 :: 		void main() {
;exercicio_traco_andando.c,4 :: 		trisa = 0 ; //potyA como saida
	CLRF        TRISA+0 
;exercicio_traco_andando.c,5 :: 		trisc=0;
	CLRF        TRISC+0 
;exercicio_traco_andando.c,6 :: 		trisd = 0; //portC como saida
	CLRF        TRISD+0 
;exercicio_traco_andando.c,7 :: 		trise=0;
	CLRF        TRISE+0 
;exercicio_traco_andando.c,9 :: 		adcon1 =15; // portA e portB como digital
	MOVLW       15
	MOVWF       ADCON1+0 
;exercicio_traco_andando.c,10 :: 		cmcon = 7; //comparadores desabilitados
	MOVLW       7
	MOVWF       CMCON+0 
;exercicio_traco_andando.c,11 :: 		porta=0;
	CLRF        PORTA+0 
;exercicio_traco_andando.c,12 :: 		portc=0;
	CLRF        PORTC+0 
;exercicio_traco_andando.c,13 :: 		portd=0;
	CLRF        PORTD+0 
;exercicio_traco_andando.c,14 :: 		porte=0;
	CLRF        PORTE+0 
;exercicio_traco_andando.c,16 :: 		while(1){//loop principal
L_main0:
;exercicio_traco_andando.c,19 :: 		portd=1;//liga segmento a
	MOVLW       1
	MOVWF       PORTD+0 
;exercicio_traco_andando.c,21 :: 		rc5_bit=1;//ativa primeiro display
	BSF         RC5_bit+0, BitPos(RC5_bit+0) 
;exercicio_traco_andando.c,22 :: 		tempo();
	CALL        _tempo+0, 0
;exercicio_traco_andando.c,23 :: 		rc5_bit=0;//desativa primeiro display
	BCF         RC5_bit+0, BitPos(RC5_bit+0) 
;exercicio_traco_andando.c,25 :: 		rc4_bit=1;//ativa 2o display
	BSF         RC4_bit+0, BitPos(RC4_bit+0) 
;exercicio_traco_andando.c,26 :: 		tempo();
	CALL        _tempo+0, 0
;exercicio_traco_andando.c,27 :: 		rc4_bit=0; //desativa o 2o display
	BCF         RC4_bit+0, BitPos(RC4_bit+0) 
;exercicio_traco_andando.c,29 :: 		re2_bit=1;//ativa 3o display
	BSF         RE2_bit+0, BitPos(RE2_bit+0) 
;exercicio_traco_andando.c,30 :: 		tempo();
	CALL        _tempo+0, 0
;exercicio_traco_andando.c,31 :: 		re2_bit=0;//desativa 3o disp
	BCF         RE2_bit+0, BitPos(RE2_bit+0) 
;exercicio_traco_andando.c,33 :: 		ra3_bit=1;  //4o disp
	BSF         RA3_bit+0, BitPos(RA3_bit+0) 
;exercicio_traco_andando.c,34 :: 		tempo();
	CALL        _tempo+0, 0
;exercicio_traco_andando.c,36 :: 		portd=2;//segmento b
	MOVLW       2
	MOVWF       PORTD+0 
;exercicio_traco_andando.c,37 :: 		tempo();
	CALL        _tempo+0, 0
;exercicio_traco_andando.c,39 :: 		portd=4;//segmento c
	MOVLW       4
	MOVWF       PORTD+0 
;exercicio_traco_andando.c,40 :: 		tempo();
	CALL        _tempo+0, 0
;exercicio_traco_andando.c,42 :: 		portd=8;//segmento d
	MOVLW       8
	MOVWF       PORTD+0 
;exercicio_traco_andando.c,44 :: 		ra3_bit=0;//desativa 4o disp
	BCF         RA3_bit+0, BitPos(RA3_bit+0) 
;exercicio_traco_andando.c,46 :: 		re2_bit=1;//ativa 3o display
	BSF         RE2_bit+0, BitPos(RE2_bit+0) 
;exercicio_traco_andando.c,47 :: 		tempo();
	CALL        _tempo+0, 0
;exercicio_traco_andando.c,48 :: 		re2_bit=0;//desativa 3o disp
	BCF         RE2_bit+0, BitPos(RE2_bit+0) 
;exercicio_traco_andando.c,50 :: 		rc4_bit=1;//ativa 2o display
	BSF         RC4_bit+0, BitPos(RC4_bit+0) 
;exercicio_traco_andando.c,51 :: 		tempo();
	CALL        _tempo+0, 0
;exercicio_traco_andando.c,52 :: 		rc4_bit=0; //desativa o 2o display
	BCF         RC4_bit+0, BitPos(RC4_bit+0) 
;exercicio_traco_andando.c,54 :: 		rc5_bit=1;//ativa primeiro display
	BSF         RC5_bit+0, BitPos(RC5_bit+0) 
;exercicio_traco_andando.c,55 :: 		tempo();
	CALL        _tempo+0, 0
;exercicio_traco_andando.c,57 :: 		portd=16;//segmento e
	MOVLW       16
	MOVWF       PORTD+0 
;exercicio_traco_andando.c,58 :: 		tempo();
	CALL        _tempo+0, 0
;exercicio_traco_andando.c,59 :: 		portd=32;//segmento f
	MOVLW       32
	MOVWF       PORTD+0 
;exercicio_traco_andando.c,60 :: 		tempo();
	CALL        _tempo+0, 0
;exercicio_traco_andando.c,65 :: 		}
	GOTO        L_main0
;exercicio_traco_andando.c,67 :: 		}
L_end_main:
	GOTO        $+0
; end of _main

_tempo:

;exercicio_traco_andando.c,68 :: 		void tempo(){
;exercicio_traco_andando.c,69 :: 		int valor = 150;
	MOVLW       150
	MOVWF       tempo_valor_L0+0 
	MOVLW       0
	MOVWF       tempo_valor_L0+1 
;exercicio_traco_andando.c,71 :: 		for(a=0;a<valor;a++){
	CLRF        R1 
	CLRF        R2 
L_tempo2:
	MOVLW       128
	XORWF       R2, 0 
	MOVWF       R0 
	MOVLW       128
	XORWF       tempo_valor_L0+1, 0 
	SUBWF       R0, 0 
	BTFSS       STATUS+0, 2 
	GOTO        L__tempo8
	MOVF        tempo_valor_L0+0, 0 
	SUBWF       R1, 0 
L__tempo8:
	BTFSC       STATUS+0, 0 
	GOTO        L_tempo3
;exercicio_traco_andando.c,72 :: 		delay_ms(1);
	MOVLW       3
	MOVWF       R12, 0
	MOVLW       151
	MOVWF       R13, 0
L_tempo5:
	DECFSZ      R13, 1, 1
	BRA         L_tempo5
	DECFSZ      R12, 1, 1
	BRA         L_tempo5
	NOP
	NOP
;exercicio_traco_andando.c,71 :: 		for(a=0;a<valor;a++){
	INFSNZ      R1, 1 
	INCF        R2, 1 
;exercicio_traco_andando.c,73 :: 		}
	GOTO        L_tempo2
L_tempo3:
;exercicio_traco_andando.c,75 :: 		}
L_end_tempo:
	RETURN      0
; end of _tempo
