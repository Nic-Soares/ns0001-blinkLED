/*
 * File:   main.c
 * Author: 19180077
 *
 * Created on 9 de Março de 2020, 09:38
 */


#include <xc.h>                 // Inclui biblioteca padrão do compilador XC8 
#include "config.h"             // Inclui arq. de config. (biblioteca) local.

void main(void)                 // Função principal = main.
{                               // Início do bloco da função main.
    PORTDbits.RD0 = 0;          // Inicia RD0 com o valor 0.
    TRISDbits.TRISD0 = 0;       // Configura RD0 como Saída.
    
    while( 1 )                  // Laço de repetição infinito.
    {                           // Inicio do laço de repetição.
        PORTDbits.RD0 = 1;      // Liga RD0.
        __delay_ms(500);        // Espera 500 ms.
        PORTDbits.RD0 = 0;      // Desliga RD0.
        __delay_ms(500);        // Espera 500 ms.
    }                           // Fim do laço de repetição.
    return;                     // Caracteriza main como uma função sem retorno.
}                               // Fim do bloco da função main.
