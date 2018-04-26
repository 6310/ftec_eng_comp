#line 1 "C:/Rogerio/ProjPiscaLed/piscaled.c"
void main() {
 trisc =0;
 adcon1 =15;
 cmcon = 7;

 while(1){


 portc=4;
 delay_ms(500);
 portc=6;
 delay_ms(500);
 portc=14;
 delay_ms(500);
 portc=15;
 delay_ms(500);
 portc=14;
 delay_ms(500);
 portc=6;
 delay_ms(500);
 portc=0;
 portc=4;
 delay_ms(500);

 }

}
