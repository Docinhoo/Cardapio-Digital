//Inclusão de biblioteca necessárias!
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Criação de uma função integrada ao código!
int aviso(int rn);
void verifica(int ver, char ver2[]);

//Inicio da função principal!
int main(void) {
  
  //Declaração de variaveis para armazenamento das respostas do usuarios e controle do programa
    int loopInicial, loopBebidas, loopComidas, loopSobremesas, rn, qntBebida, qntBebida2,sup2,sup3,sup4, qntComida, qntComida2, qntSobre, qntSobre2, k;

  //Strings que dinamificam o programa
  
    char nome[25], bebida[20], bebida2[20],comida[20], comida2[20], sim[3], sobre[20], sobre2[20];
    char nao[] = "nao";
    k = 0;
  //LOOP CASO CLIENTE QUEIRA REFAZER O PEDIDO
  while(k == 0){
    
  //Atribuindo valores para o funcionamento do programa

    rn = 0;
    sup2 = 0,sup3 = 0,sup4 = 0;
    loopInicial = 0;

  
  //Estrutura Condicional para painel inicial do Cardapio Digital
    while(loopInicial == 0){
      
      //Header do programa
      printf("**************************************************\n");
      printf("*                 CARDAPIO DIGITAL               *\n");
      printf("**************************************************\n\n");
      printf("Bem vindo ao serviço de Garçom digital \n\n");
      printf("Utilize do menu a seguir para realizar seu pedido!\n\nNo final confirme o pedido!\n\n");

      //intimidade com o cliente
      printf("Nos diga qual seu primeiro nome: \n");
      scanf("%s",nome);
      printf("\n%s,\n", nome);
      //Chamando Funcao de Aviso
      rn = aviso(rn);

      //limpa tela
      system("clear");

      //Condicional para escolha do usuario de prosseguir ou nao
      if(rn == 1){
        
        //loading...
        printf("Prosseguindo para menu do Cardápio...\n");
        system("sleep 03");
        system("clear");
        loopInicial ++;
      }
    }

  //Atribuindo valores para o funcionamento do programa
    loopSobremesas = 0;
    loopComidas = 0;
    loopBebidas = 0;
    rn = 0;
  //Novas Variaveis para realização do programa  
    int A, B, C;
    int y = 1;
    
  //Estrutura Condicional para painel de Bebidas
  while(loopBebidas == 0){
    
    //Header Bebidas
      printf("**************************************************\n");
      printf("*                      BEBIDAS                   *\n");
      printf("**************************************************\n\n");
      
        printf(" 1 - Água Voss \n 2 - Bombay Sapphire \n 3 - Passion Azteca \n 4 - Royal Sallute\n 0 - Nenhuma\n");

        printf("\nQual opção para esta noite? (Digite o numero da op- \nção escolhida)\n");
      
      //Atribuindo valores
        qntBebida = 0;
        qntBebida2 = 0;
      
    //Looping de controle

      for(int i=0;i<=1;i++){
        
        if(i>0){
          printf("Qual a segunda opção: ");
          scanf("%d", &B);
        }else{
        printf("Digite o numero da opção desejada: ");
        scanf("%d", &B);
        y = 1;
        }

        //Switch para escolha - Menu
        switch(B){
        //Todos cases atribuem valores a determinadas variaveis, em prol do Pedido.
          case 1:
            if(qntBebida > 0){
              printf("Quantas Garrafas? ");
              scanf("%d", &qntBebida2);
              strcpy(bebida2,"Água Voss");
            }else{ 
              printf("Quantas Garrafas? ");
              scanf("%d", &qntBebida);
              strcpy(bebida,"Água Voss");
            }
          break;
          case 2:
            if(qntBebida > 0){
              printf("Quantas taças? ");
              scanf("%d", &qntBebida2);
              strcpy(bebida2,"Bombay Sapphire");
            }else{ 
              printf("Quantas taças? ");
              scanf("%d", &qntBebida);
              strcpy(bebida,"Bombay Sapphire");
            }
          break;
          case 3:
            if(qntBebida > 0){
              printf("Quantas taças? ");
              scanf("%d", &qntBebida2);
              strcpy(bebida2,"Passion Azteca");
            }else{ 
              printf("Quantas taças? ");
              scanf("%d", &qntBebida);
              strcpy(bebida,"Passion Azteca");
            }
          break;
          case 4:
            if(qntBebida > 0){
              printf("Quantas taças? ");
              scanf("%d", &qntBebida2);
              strcpy(bebida2,"Royal Sallute");
            }else{ 
              printf("Quantas taças? ");
              scanf("%d", &qntBebida);
              strcpy(bebida,"Royal Sallute");
            }
          break;
          default:
            printf("Você não escolheu nenhuma bebida!\n");
            y = 0;
            i = 2;
          break;
        }
        //Opção do segundo item.
        if( y != 0){
          while( sup2 == 0 ){
            char alt[3];
            int resp;
            printf("Você deseja mais uma bebida? (sim ou não): ");
            scanf("%3s", alt);
            resp = strcmp(alt,nao);
            if(resp == 0){i=2;}
            sup2++;
          }
        }
      }

  //Fim do Menu de Bebidas.
    //limpa tela
      rn = aviso(rn);
    //limpa tela
      system("clear");
    //Condicional para escolha do usuario de prosseguir ou nao
      if(rn == 1){
        //loading...
          printf("Prosseguindo para menu de Comidas...\n");
          system("sleep 03");
          system("clear");
          loopBebidas ++;
        }else{
          sup2--;
        }     
  }

  while(loopComidas == 0){

    //Header Comidas
      printf("**************************************************\n");
      printf("*                     COMIDAS                    *\n");
      printf("**************************************************\n\n");

      printf(" 1 - Risoto de Shittake \n 2 - Lagosta Grelhada \n 3 - Terrine de Alho Poró \n 4 - Canapé de Salmão \n 0 - Nenhuma\n");

      printf("\nQual opção para esta noite? (Digite o numero da op- \nção escolhida)\n");

    //Atribuindo valores
      int s = 1;
      qntComida = 0;
      qntComida2 = 0;

  //Looping de controle

      for(int i=0;i<=1;i++){
        if(i>0){
          printf("Qual a segunda opção: ");
          scanf("%d", &A);
        }else{
          printf("Digite o numero da opção desejada: ");
          scanf("%d", &A);
          s = 1;
        }
      //Switch para escolha - Menu
      //Todos cases atribuem valores a determinadas variaveis, em prol do Pedido.
      switch(A){
        case 1:
          if(qntComida > 0){
            printf("\nQuantidade: ");
            scanf("%d", &qntComida2);
            strcpy(comida2,"Risoto de Shittake");
          }else{ 
            printf("\nQuantidade: ");
            scanf("%d", &qntComida);
            strcpy(comida,"Risoto de Shittake");
          }
        break;
        case 2:
          if(qntComida > 0){
            printf("\nQuantidade: ");
            scanf("%d", &qntComida2);
            strcpy(comida2,"Lagosta Grelhada");
          }else{ 
            printf("\nQuantidade: ");
            scanf("%d", &qntComida);
            strcpy(comida,"Lagosta Grelhada");
          }
        break;
        case 3:
          if(qntComida > 0){
            printf("\nQuantidade: ");
            scanf("%d", &qntComida2);
            strcpy(comida2,"Terrine de Alho Poró");
          }else{ 
            printf("\nQuantidade: ");
            scanf("%d", &qntComida);
            strcpy(comida,"Terrine de Alho Poró");
          }
        break;
        case 4:
          if(qntComida > 0){
            printf("\nQuantidade: ");
            scanf("%d", &qntComida2);
            strcpy(comida2,"Canapé de Salmão");
          }else{ 
            printf("\nQuantidade: ");
            scanf("%d", &qntComida);
            strcpy(comida,"Canapé de Salmão");
          }
        break;
        default:
          printf("Vc não escolheu uma comida \n");
          s = 0;
          i = 2;         
        break;
      }
      //Opção do segundo item.
      if( s == 1){
        while(sup3 == 0){
          char alt[3];
          int resp;
          printf("Você deseja mais uma comida? (sim ou não): ");
          scanf("%3s", alt);
          resp = strcmp(alt,nao);
          if(resp == 0){i=2;}
          sup3++;
        }
      }
    }

  //Fim do Menu de Comidas.
    //limpa tela
      rn = aviso(rn);
    //limpa tela
      system("clear");
    //Condicional para escolha do usuario de prosseguir ou nao
      if(rn == 1){
        //loading...
          printf("Prosseguindo para menu de Sobremesas...\n");
          system("sleep 03");
          system("clear");
          loopComidas ++;
        }else{
          sup3--;
        }    
  }

  while(loopSobremesas == 0){
    
    //Header Bebidas
      printf("**************************************************\n");
      printf("*                   SOBREMESAS                   *\n");
      printf("**************************************************\n\n");
    
      printf(" 1 - Panna Cotta \n 2 - Petit Gateau \n 3 - Mousse de Pitaya \n 0 - Nenhuma\n");

      printf("\nQual opção para esta noite? (Digite o numero da op- \nção escolhida)\n");

    //Atribuindo Valores
      int r = 1;
      qntSobre = 0;
      qntSobre2 = 0;

  //Looping de Controle
    for(int i=0;i<=1;i++){
      if(i>0){
        printf("Qual a segunda opção: ");
        scanf("%d", &C);
      }else{
        printf("Digite o numero da opção desejada: ");
        scanf("%d", &C);
        r = 1;
      }
    //Switch para escolha - Menu
      switch(C){
      //Todos cases atribuem valores a determinadas variaveis, em prol do Pedido.
        case 1:
          if(qntSobre > 0){
            printf("\nQuantidade: ");
            scanf("%d", &qntSobre2);
            strcpy(sobre2,"Panna Cotta");
          }else{ 
            printf("\nQuantidade: ");
            scanf("%d", &qntSobre);
            strcpy(sobre,"Panna Cotta");
          }
        break;
        case 2:
          if(qntSobre > 0){
            printf("\nQuantidade: ");
            scanf("%d", &qntSobre2);
            strcpy(sobre2,"Petit Gateau");
          }else{ 
            printf("\nQuantidade: ");
            scanf("%d", &qntSobre);
            strcpy(sobre,"Petit Gateau");
          }
        break;
        case 3:
          if(qntSobre > 0){
            printf("\nQuantidade: ");
            scanf("%d", &qntSobre2);
            strcpy(sobre2,"Mousse de Pitaya");
          }else{ 
            printf("\nQuantidade: ");
            scanf("%d", &qntSobre);
            strcpy(sobre,"Mousse de Pitaya");
          }
        break;
        default:
          printf("Vc não escolheu nenhuma Sobremesa \n");
          r = 0;
          i = 2;
        break;
      }
      //Opção do segundo item.
      if( r == 1){
        while(sup4 == 0){
          char alt[3];
          int resp;
          printf("Você deseja mais uma Sobremesa? (sim ou não): ");
          scanf("%3s", alt);
          resp = strcmp(alt,nao);
          if(resp == 0){i=2;}
        sup4++;
        }
      }
    }
    //Fim do Menu de Sobremesa.
      rn = aviso(rn);
    //limpa tela
      system("clear");
    //Condicional para escolha do usuario de prosseguir ou nao
      if(rn == 1){
        //loading...
          printf("Prosseguindo para revisão do Pedido...\n");
          system("sleep 03");
          system("clear");
          loopSobremesas++;
        }else{
          sup4--;
        }  
  }
  //IMPRESSÃO DO PEDIDO:
    //Header Bebidas
      printf("**************************************************\n");
      printf("*               PEDIDO COMPLETO                  *\n");
      printf("**************************************************\n\n");
    //Dados do Pedido
    //Foi tentado usar um loop de repetição com vetor de string, porém tentativa falha


      printf("Nome do Cliente: %s \n", nome);
    
        verifica(qntBebida,bebida);
        verifica(qntBebida2,bebida2);
        verifica(qntComida,comida);
        verifica(qntComida2,comida2);
        verifica(qntSobre,sobre);
        verifica(qntSobre2,sobre2);

      printf("\nDeseja refazer o pedido? \n");
        char alt[3];
        int resp;
          scanf("%3s", alt);
          resp = strcmp(alt,nao);
        if(resp == 0){k++;}
  }
  system("clear");

  printf("\nBOA REFEIÇÃO E AGRADECEMOS A SUA PREFERÊNCIA!\n");
}

//Funcao de restart no geral  
int aviso(int rn){   
  int sup;
    printf("Para prosseguir digite 1, se não digite 0 para \nrecomeçar\n");
    scanf("%d", &sup);
    rn = sup;   
  //printf("%d\n", rn);
  return sup;
}
//Funcao de limpeza do pedido
void verifica(int ver, char ver2[]){
  if(ver > 0){
    printf("\n %d -> %s", ver, ver2);
  }
}
