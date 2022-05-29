#include <stdio.h>

#define SAIR 5

int main()
{
  int escolha = 0;
  float primeiroValor = 0;
  float segundoValor = 0;
  
  do{
    printf("Bem vindo a Calculadora!\n\n");
    printf("Digite a operação que irá realizar: \n");
    printf("1 - Adição.\n");
    printf("2 - Subtração.\n");
    printf("3 - Multiplicação.\n");
    printf("4 - Divisão.\n");
    printf("5 - Sair.\n\n");
    
    printf("Escolha: ");
    scanf("%d", &escolha);
    
    switch(escolha) {
      case 1:
        printf("\n\nVocê escolheu Adição!\n\n");
        printf("Digite o primeiro valor: ");
        scanf("%f", &primeiroValor);
        
        printf("Digite o segundo valor: ");
        scanf("%f", &segundoValor);
        
        printf("\nO resultado da soma entre %.2f e %.2f é: %.2f\n\n", primeiroValor, segundoValor, (primeiroValor + segundoValor));
        
        printf("0 - Continuar.\n");
        printf("5 - Sair.\n");
        printf("Escolha: ");
        scanf("%d", &escolha);
        
        break;
          
      case 2:
        printf("\n\nVocê escolheu Subtração!\n\n");
        printf("Digite o primeiro valor: ");
        scanf("%f", &primeiroValor);
        
        printf("Digite o segundo valor: ");
        scanf("%f", &segundoValor);
        
        printf("\nO resultado da diferença entre %.2f e %.2f é: %.2f\n\n", primeiroValor, segundoValor, (primeiroValor - segundoValor));
        
        printf("0 - Continuar.\n");
        printf("5 - Sair.\n");
        printf("Escolha: ");
        scanf("%d", &escolha);
        
        break;
          
      case 3:
        printf("\n\nVocê escolheu Multiplicação!\n\n");
        printf("Digite o primeiro valor: ");
        scanf("%f", &primeiroValor);
        
        printf("Digite o segundo valor: ");
        scanf("%f", &segundoValor);
        
        printf("\nO resultado do produto entre %.2f e %.2f é: %.2f\n\n", primeiroValor, segundoValor, (primeiroValor * segundoValor));
        
        printf("0 - Continuar.\n");
        printf("5 - Sair.\n");
        printf("Escolha: ");
        scanf("%d", &escolha);
        
        break;
          
      case 4:
        printf("\n\nVocê escolheu Divisão!\n\n");
        printf("Digite o primeiro valor: ");
        scanf("%f", &primeiroValor);
        
        printf("Digite o segundo valor: ");
        scanf("%f", &segundoValor);
        
        if(segundoValor == 0){
            printf("O divisor não pode ser igual a 0!\n\n");
            break;
        }
        
        printf("\nO resultado do dividendo entre %.2f e %.2f é: %.2f\n\n", primeiroValor, segundoValor, (primeiroValor / segundoValor));
        
        printf("0 - Continuar.\n");
        printf("5 - Sair.\n");
        printf("Escolha: ");
        scanf("%d", &escolha);
        
        break;
          
      default: 
        printf("\n\nDigite uma opção válida!\n\n");
    }
      
  }while (escolha != SAIR);
  
  printf("\n\nAté mais!\n\n");

  return 0;
}
