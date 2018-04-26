void main() {
   trisb = 0;
   trisc = 0;
   trisd = 0;
   
   portb = 0;
   portc = 0;
   portd = 0;
   
   while(1){
            portd = 1;
            portc = 0;
            portb = 2;
            delay_ms(200);
            portd = 2;
            delay_ms(200);
            portd = 4;
            delay_ms(200);
            portd = 8;
            delay_ms(200);
            
            portb = 4;
            delay_ms(200);
            portd = 8;
            delay_ms(200);
            
            portb = 8;
            delay_ms(200);
            portd = 8;
            delay_ms(200);
            
            portb = 0;
            portc = 16;
            delay_ms(200);
            portd = 8;
            delay_ms(200);
            portd = 16;
            delay_ms(200);
            portd = 32;
            delay_ms(200);
            portd = 1;
            delay_ms(200);
            
            portc = 0;
            portb = 8;
            delay_ms(200);
            portd = 1;
            delay_ms(200);
            
            portb = 4;
            delay_ms(200);
            portd = 1;
            delay_ms(200);
            

   
   }
   

}