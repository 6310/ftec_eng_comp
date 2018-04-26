void main() {
            trisd = 0; //portC como saida
            trisa = 0 ; //potyA como saida
            adcon1 =15; // portA e portB como digital
            cmcon = 7; //comparadores desabilitados
            porta = 8;  //ativa transistor do segmento
            while(1){//loop principal
            //programa principal
            portd=63 ;
            delay_ms(500);
            portd=6 ;
            delay_ms(500);            
            portd=91 ;
            delay_ms(500);            
            portd=79 ;
            delay_ms(500);            
            portd=102 ;
            delay_ms(500);            
            portd=109 ;
            delay_ms(500);            
            portd=125 ;
            delay_ms(500);            
            portd=7 ;
            delay_ms(500);
            portd=127 ;
            delay_ms(500);
            portd=111 ;
            delay_ms(500);
            //porta=4;

            }

}