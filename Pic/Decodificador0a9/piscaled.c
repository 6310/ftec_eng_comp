void main() {
            trisc =0; //portC como saida
            adcon1 =15; // portA e portB como digital
            cmcon = 7; //comparadores desabilitados
            
            while(1){//loop principal
            //programa principal

            portc=4;//liga led RC2
            delay_ms(500);
            portc=6;//liga o led RC2 e RC1
            delay_ms(500);
            portc=14;//liga o led RC2 e RC1
            delay_ms(500);
            portc=15;//liga todos
            delay_ms(500);
            portc=14;//liga o led RC2 e RC1
            delay_ms(500);
            portc=6;//liga o led RC2
            delay_ms(500);
            portc=0;//Apaga tudo
            portc=4;//liga led RC2
            delay_ms(500);

            }
            
}