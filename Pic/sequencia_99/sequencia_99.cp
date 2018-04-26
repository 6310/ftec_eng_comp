#line 1 "C:/pic/sequencia_99/sequencia_99.c"
void multiplex();
void contador();
void decodificar(char digito);



char unidade, dezena;
char decodifica(char digita);

void main() {
 trisb = 0;
 trisc = 0;
 trisd = 0;

 portb = 0;
 portc = 0;
 portd = 0;
 unidade = 8;
 dezena = 0;

 while(1){
 multiplex();
 contador();
 delay_ms(500);
 }

}

void multiplex(){
 portd = decodifica(unidade);
 portd = 2;
 portc =0;
 delay_ms(1);

 portd = decodificar(dezena);
 portb = 4;
 portc = 0;
 delay_ms(1);
}

void contador(){
 unidade++;
 if(unidade == 10){
 unidade == 0;
 dezena++;
 }
 if(dezena == 10){
 dezena = 0;
 }
}

void decodificar(char digito){
 char saida;

 if(digito == 0) saida = 63;
 if(digito == 1) saida = 9;
 if(digito == 2) saida = 91;
 if(digito == 3) saida = 79;
 if(digito == 4) saida = 102;
 if(digito == 5) saida = 109;
 if(digito == 6) saida = 125;
 if(digito == 7) saida = 7;
 if(digito == 8) saida = 127;
 if(digito == 9) saida = 111;

 return saida;
}
