#line 1 "C:/Rogerio/exercicio_traco_andando/exercicio_traco_andando.c"

void tempo();
void main() {
 trisa = 0 ;
 trisc=0;
 trisd = 0;
 trise=0;

 adcon1 =15;
 cmcon = 7;
 porta=0;
 portc=0;
 portd=0;
 porte=0;

 while(1){


 portd=1;

 rc5_bit=1;
 tempo();
 rc5_bit=0;

 rc4_bit=1;
 tempo();
 rc4_bit=0;

 re2_bit=1;
 tempo();
 re2_bit=0;

 ra3_bit=1;
 tempo();

 portd=2;
 tempo();

 portd=4;
 tempo();

 portd=8;

 ra3_bit=0;

 re2_bit=1;
 tempo();
 re2_bit=0;

 rc4_bit=1;
 tempo();
 rc4_bit=0;

 rc5_bit=1;
 tempo();

 portd=16;
 tempo();
 portd=32;
 tempo();




 }

}
void tempo(){
 int valor = 150;
 int a;
 for(a=0;a<valor;a++){
 delay_ms(1);
 }

}
