#include <stdio.h>

//movimento Basica....................................

void moverdireita(int casas){
    if (casas > 0)
    {
        printf("Direita\n");
    moverdireita(casas - 1);
}
    }

    void moveresquerda(int casas){
        if (casas > 0)
        {
            printf("Esquerda\n");
        moveresquerda(casas - 1);
    }
        }

        void movercima(int casas){
            if (casas > 0)
            {
                printf("Cima\n");
            moveresquerda(casas - 1);
        }
            }
        
            void moverbaixo(int casas){
                if (casas > 0)
                {
                    printf("Baixo\n");
                moverbaixo(casas - 1);
            }
                }
    ///////////////////////////////////////////////////////////////////////////////
//movi diagonais

                void moverdiagonalSdireita(int casas){
                    if (casas > 0)
                    {
                        printf("Cima\n");
                        printf("Direita\n");
                        moverdiagonalSdireita(casas - 1);
                    }
                    
                }

                void moverdiagonalSesquerda(int casas){
                    if (casas > 0)
                    {
                        printf("Cima\n");
                        printf("Esquerda\n");
                        moverdiagonalSesquerda(casas - 1);
                    }
                    
                }

                void moverdiagonalIesquerda(int casas){
                    if (casas > 0)
                    {
                        printf("Baixo\n");
                        printf("Esquerda\n");
                        moverdiagonalIesquerda(casas - 1);
                    }
                    
                }

                void moverdiagonalIdireita(int casas){
                    if (casas > 0)
                    {
                        printf("Baixo\n");
                        printf("Direita\n");
                        moverdiagonalIdireita(casas - 1);
                    }
                    
                }




int main(){
//1rei
//2rainha
//3bispo
//6cavalo
int menu1;

printf("*******MOVIMENTACAO PECAS DE XADREZ*******\n");
printf("1. Peao\n");
printf("2. Torre\n");
printf("3. Bispo\n");
printf("4. Cavalo\n");
printf("5. Rei\n");
printf("6. Rainha\n");
scanf("%d", &menu1);
    int direcaomenu;
    unsigned int numerodevezes;
switch (menu1)
{
    //movi peao
    case 1:

    printf("O peao move-se apenas no maximo duas, Para qual direcao voce quer mover?\n");
    printf("1. Cima\n");
    printf("2. Baixo\n");
    printf("3. Esquerda\n");
    printf("4. Direita\n");
    scanf("%d", &direcaomenu);
    switch (direcaomenu)
    {
    case 1:
  printf("Quantas Vezes?\n");
    scanf("%u", &numerodevezes);

       if (numerodevezes >= 1 && numerodevezes < 3)
    {
      
    

    for (int peao = 0; peao <= numerodevezes - 1; peao++)
    {
        printf("Cima \n");
    } 
 }else{
        printf("voce digitou um numero de vezes que o peao nao anda.");
     }
   
    break;

    case 2:

   
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
    if (numerodevezes >= 1 && numerodevezes < 3)
    {
       
    for (int peao = 0; peao <= numerodevezes - 1; peao++)
    {
        printf("Baixo \n");
    }  
}else{
        printf("voce digitou um numero de vezes que o peao nao anda.");
     }
    break;

    case 3:
 
        
   
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
   if (numerodevezes >= 1 && numerodevezes < 3)
    {
    for (int peao = 0; peao <= numerodevezes - 1; peao++)
    {
        printf("Esquerda \n");
    } 
     }else{
        printf("voce digitou um numero de vezes que o peao nao anda.");
     }
    
    break;

    case 4:

        printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
    if (numerodevezes >= 1 && numerodevezes < 3)
    {
    for (int peao = 0; peao <= numerodevezes - 1; peao++)
    {
        printf("Direita \n");
    } 
  }else{
        printf("voce digitou um numero de vezes que o peao nao anda.");
     }
    break;
    
    default:
    printf("Opcao invalida!");

        break;

    }

    break;

////////Torre movi
    case 2:
 printf("A Torre move-se quantas vezes quiser para qualquer lado, Para qual direcao voce quer mover?\n");
    printf("1. Cima\n");
    printf("2. Baixo\n");
    printf("3. Esquerda\n");
    printf("4. Direita\n");
    scanf("%d", &direcaomenu);
    switch (direcaomenu)
    {
    case 1:
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);

    if (numerodevezes >= 1 && numerodevezes < 9)
    {
       
    movercima(numerodevezes);

    }else{
        printf("Sua torre saiu do TABULEIRO.");
     }
   
    break;

    case 2:
   
   
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
 if (numerodevezes >= 1 && numerodevezes < 9)
    {
    
        moverbaixo(numerodevezes);

}else{
        printf("Sua torre saiu do TABULEIRO.");
     }
    break;

    case 3:
 
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
   if (numerodevezes >= 1 && numerodevezes < 9)
    {
        
        moveresquerda(numerodevezes);

     }else{
        printf("Sua torre saiu do TABULEIRO.");
     }
    
    break;

    case 4:
 

    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
   if (numerodevezes >= 1 && numerodevezes < 9)
    {
      
   
        moverdireita(numerodevezes);
    
  }else{
        printf("Sua torre saiu do TABULEIRO.");
     }
    break;
    
    default:
    printf("Opcao invalida!");
        break;
    }

 
    break;
    case 3:
    //Bispo movi
    printf("O Bispo move-se na diagonal para qualquer lado, Para qual direcao voce quer mover?\n");
    printf("1. Cima Direita\n");
    printf("2. Baixo Direita\n");
    printf("3. Cima Esquerda \n");
    printf("4. Baixo Esquerda\n");
    scanf("%d", &direcaomenu);
    switch (direcaomenu)
    {
    case 1:
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);

    if (numerodevezes >= 1 && numerodevezes < 9)
    {
       
    moverdiagonalSdireita(numerodevezes);

    
 }else{
        printf("Seu Bispo saiu do TABULEIRO.");
     }
   
    break;

    case 2:
   
   
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
 if (numerodevezes >= 1 && numerodevezes < 9)
    {
    
        moverdiagonalIdireita(numerodevezes);

}else{
        printf("Seu Bispo saiu do TABULEIRO.");
     }
    break;

    case 3:
 
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
   if (numerodevezes >= 1 && numerodevezes < 9)
    {
        moverdiagonalSesquerda(numerodevezes);
    
     }else{
        printf("Seu Bispo saiu do TABULEIRO.");
     }
    
    break;

    case 4:
 

    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
   if (numerodevezes >= 1 && numerodevezes < 9)
    {
      
        moverdiagonalIesquerda(numerodevezes);
   
  }else{
        printf("Seu Bispo saiu do TABULEIRO.");
     }
    break;
  default:
    printf("Opcao invalida!");
        break;
    }
    break;
    //cavalo movi
    case 4:
    int cavalo = 1;
    printf("O Cavalo move-se em L para qualquer lado, Para qual direcao voce quer mover?\n");
    printf("1. Cima Direita\n");
    printf("2. Baixo Direita\n");
    printf("3. Cima Esquerda \n");
    printf("4. Baixo Esquerda\n");
    scanf("%d", &numerodevezes);
    switch (numerodevezes)
    {
    case 1:

    while (cavalo--)
    {
       for (int i = 0; i < 2; i++)
       {
        printf("Cima\n");
       }
       printf("Direita\n");
       
    }
    
break;

    case 2:
    while (cavalo--)
    {
       for (int i = 0; i < 2; i++)
       {
        printf("Cima\n");
       }
       printf("Esquerda\n");
       
    }
       break;
    case 3:
 
    while (cavalo--)
    {
       for (int i = 0; i < 2; i++)
       {
        printf("Baixo\n");
       }
       printf("Direita\n");
       
    }
    break;

    case 4:
 
      
    while (cavalo--)
    {
       for (int i = 0; i < 2; i++)
       {
        printf("Baixo\n");
       }
       printf("Esquerda\n");
       
    }
    break;
    
    default:
    printf("Opcao invalida!");
        break;
    }
   
    break;

    //Rei movi
    case 5:
    printf("O Rei move-se apenas Uma vez, Para qual direcao voce quer mover?\n");
    printf("1. Cima\n");
    printf("2. Baixo\n");
    printf("3. Esquerda\n");
    printf("4. Direita\n");
    scanf("%d", &direcaomenu);
    switch (direcaomenu)
    {
    case 1:
  printf("Quantas Vezes?\n");
    scanf("%u", &numerodevezes);

       if (numerodevezes >= 1 && numerodevezes < 3)
    {
      
    

    for (int peao = 0; peao <= numerodevezes - 1; peao++)
    {
        printf("Cima \n");
    } 
 }else{
        printf("voce digitou um numero de vezes que o Rei nao anda.");
     }
   
    break;

    case 2:

   
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
    if (numerodevezes >= 1 && numerodevezes < 3)
    {
       
    for (int peao = 0; peao <= numerodevezes - 1; peao++)
    {
        printf("Baixo \n");
    }  
}else{
        printf("voce digitou um numero de vezes que o Rei nao anda.");
     }
    break;

    case 3:
 
        
   
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
   if (numerodevezes >= 1 && numerodevezes < 3)
    {
    for (int peao = 0; peao <= numerodevezes - 1; peao++)
    {
        printf("Esquerda \n");
    } 
     }else{
        printf("voce digitou um numero de vezes que o Rei nao anda.");
     }
    
    break;

    case 4:

        printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
    if (numerodevezes >= 1 && numerodevezes < 3)
    {
    for (int peao = 0; peao <= numerodevezes - 1; peao++)
    {
        printf("Direita \n");
    } 
  }else{
        printf("voce digitou um numero de vezes que o Rei nao anda.");
     }
    break;
    
    default:
    printf("Opcao invalida!");

        break;

    }


    
    break;

    //Rainha movi
    case 6:
    printf("A Rainha move-se em Qualquer Direcao, Para qual direcao voce quer mover?\n");
    printf("1. Cima Direita\n");
    printf("2. Baixo Direita\n");
    printf("3. Cima Esquerda \n");
    printf("4. Baixo Esquerda\n");
    printf("5. Cima\n");
    printf("6. Baixo\n");
    printf("7. Esquerda\n");
    printf("8. Direita\n");
    scanf("%d", &direcaomenu);
    switch (direcaomenu)
    {
    case 1:
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);

    if (numerodevezes >= 1 && numerodevezes < 9)
    {
       
    moverdiagonalSdireita(numerodevezes);

 }else{
        printf("Sua Rainha saiu do TABULEIRO.");
     }
   
    break;

    case 2:
   
   
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
 if (numerodevezes >= 1 && numerodevezes < 9)
    {
    
        moverdiagonalIdireita(numerodevezes);
}else{
        printf("Sua Rainha saiu do TABULEIRO.");
     }
    break;

    case 3:
 
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
   if (numerodevezes >= 1 && numerodevezes < 9)
    {
        moverdiagonalSesquerda(numerodevezes);
     
     }else{
        printf("Sua Rainha saiu do TABULEIRO.");
     }
    
    break;

    case 4:
 

    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
   if (numerodevezes >= 1 && numerodevezes < 9)
    {
    
        moverdiagonalIesquerda(numerodevezes);

  }else{
        printf("Sua Rainha saiu do TABULEIRO.");
     }
    break;

    case 5:
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);

    if (numerodevezes >= 1 && numerodevezes < 9)
    {
       
    movercima(numerodevezes);

 }else{
        printf("Sua Rainha saiu do TABULEIRO.");
     }
   
    break;

    case 6:
    
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
 if (numerodevezes >= 1 && numerodevezes < 9)
    {
     
        moverbaixo(numerodevezes);

}else{
        printf("Sua Rainha saiu do TABULEIRO.");
     }
    break;
    case 7:
    
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
   if (numerodevezes >= 1 && numerodevezes < 9)
    {
        
        moveresquerda(numerodevezes);
   
     }else{
        printf("Sua Rainha saiu do TABULEIRO.");
     }
    
    break;

    case 8:
    
    printf("Quantas Vezes?\n");
    scanf("%d", &numerodevezes);
   if (numerodevezes >= 1 && numerodevezes < 9)
    {
      
        moverdireita(numerodevezes);
   
  }else{
        printf("Sua Rainha saiu do TABULEIRO.");
     }
    break;

  default:
    printf("Opcao invalida!");
        break;
        
    }
   
    break;

default:
printf("Numero invalido");
    break;
}

return 0;
}