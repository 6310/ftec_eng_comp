//long tempo;
void tempo();
void main() {
            trisa = 0 ; //potyA como saida
            trisc=0;
            trisd = 0; //portC como saida
            trise=0;

            adcon1 =15; // portA e portB como digital
            cmcon = 7; //comparadores desabilitados
            porta=0;
            portc=0;
            portd=0;
            porte=0;

            while(1){//loop principal
            //programa principal

            portd=1;//liga segmento a

            rc5_bit=1;//ativa primeiro display
            tempo();
            rc5_bit=0;//desativa primeiro display

            rc4_bit=1;//ativa 2o display
            tempo();
            rc4_bit=0; //desativa o 2o display

            re2_bit=1;//ativa 3o display
            tempo();
            re2_bit=0;//desativa 3o disp

            ra3_bit=1;  //4o disp
            tempo();

            portd=2;//segmento b
            tempo();

            portd=4;//segmento c
            tempo();

            portd=8;//segmento d

            ra3_bit=0;//desativa 4o disp

            re2_bit=1;//ativa 3o display
            tempo();
            re2_bit=0;//desativa 3o disp
            
            rc4_bit=1;//ativa 2o display
            tempo();
            rc4_bit=0; //desativa o 2o display
            
            rc5_bit=1;//ativa primeiro display
            tempo();

            portd=16;//segmento e
            tempo();
            portd=32;//segmento f
            tempo();


            //rc5_bit=0;//desativa primeiro display

            }

}
void tempo(){
     int valor = 150;
     int a;
     for(a=0;a<valor;a++){
        delay_ms(1);
        }

}