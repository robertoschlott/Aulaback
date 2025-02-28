//Exercicio 1

#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero (a): ");
    scanf("%d", &a);
    printf("Digite o segundo numero (b): ");
    scanf("%d", &b);

    
    printf("A adicao de a + b = %d\n", a + b);
    printf("A subtracao de a - b = %d\n", a - b);

    return 0;
}

//Exercicio 2

#include <stdio.h>

int main() {
    float largura, comprimento, perimetro, area;

    printf("Digite a largura do retangulo: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do retangulo: ");
    scanf("%f", &comprimento);

    
    perimetro = 2 * (largura + comprimento);
    area = largura * comprimento;

    
    printf("Perimetro do retangulo: %.2f\n", perimetro);
    printf("Area do retangulo: %.2f\n", area);

    return 0;
}

//Exercicio 3

#include <stdio.h>

int main() {
    int a, b;
    int divisao_inteira;
    float divisao_float;

    
    printf("Digite o primeiro numero (a): ");
    scanf("%d", &a);
    printf("Digite o segundo numero (b): ");
    scanf("%d", &b);

    
    if (b == 0) {
        printf("Erro: Divisao por zero!\n");

    } else {

        printf("Multiplicacao de a * b = %d\n", a * b);

        divisao_inteira = a / b;
        divisao_float = (float)a / b;

        printf("Divisao inteira de a / b = %d\n", divisao_inteira);
        printf("Divisao em ponto flutuante de a / b = %.2f\n", divisao_float);
    }

    return 0;
}

//Exercicio 4

#include <stdio.h>

int main() {
    const float PI = 3.14159;  
    float graus, radianos;

    
    printf("Digite o valor em graus: ");
    scanf("%f", &graus);

    
    radianos = graus * PI / 180;

    
    printf("%.2f graus equivalem a %.4f radianos\n", graus, radianos);

    return 0;
}

//Exercicio 5

#include <stdio.h>

int main() {
    const float PI = 3.141593;  
    float raio, diametro, circunferencia, area;

   
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    
    diametro = 2 * raio;
    circunferencia = 2 * PI * raio;
    area = PI * raio * raio;

    
    printf("Diametro: %.2f\n", diametro);
    printf("Circunferencia: %.2f\n", circunferencia);
    printf("Area: %.2f\n", area);

    return 0;
}

//Exercicio 6

#include <stdio.h>

void escrever_por_extenso(int numero) {
    
    const char *unidades[] = {"", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};
    const char *dezenas[] = {"", "dez", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
    const char *dezenas_especiais[] = {"", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
    const char *centenas[] = {"", "cento", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"};

    
    if (numero < 0) {
        printf("menos ");
        numero = -numero; 
        
    }

    
    int c = numero / 100; // Centenas
    int d = (numero % 100) / 10; // Dezenas
    int u = numero % 10; // Unidades

    
    if (c > 0) {
        if (c == 1 && d == 0 && u == 0) {
            printf("cem");
        } else {
            printf("%s", centenas[c]);
            if (d > 0 || u > 0) {
                printf(" e ");
            }
        }
    }

    
    if (d > 1) {
        printf("%s", dezenas[d]);
        if (u > 0) {
            printf(" e ");
        }
    } else if (d == 1) {
       
        printf("%s", dezenas_especiais[u]);
        return;
    }

    
    if (u > 0) {
        printf("%s", unidades[u]);
    }
}

int main() {
    int numero;

    
    printf("Digite um numero de ate 4 digitos: ");
    scanf("%d", &numero);

    
    escrever_por_extenso(numero);

    printf("\n");

    return 0;
}

//Exercicio 7

#include <stdio.h>
#include <ctype.h>  

int main() {
    char caractere;
  
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    
    if (isalpha(caractere)) {
        
        caractere = toupper(caractere);
        printf("A letra digitada em maiúsculo é: %c\n", caractere);
    } else {
        printf("O caractere digitado não é uma letra.\n");
    }

    return 0;
}

//Exercicio 8

#include <stdio.h>

int main() {
    int N;

    printf("Informe o numero de linhas: ");
    scanf("%d", &N);

    
    for (int i = N; i >= 1; i--) {
        printf("Linha %d\n", i);
    }

    return 0;
}

//Exercicio 9

#include <stdio.h>

int main() {
    int a, b, resultado = 0;

    
    printf("Informe a x b: ");
    scanf("%d %d", &a, &b);

    
    int positivo = (b >= 0) ? 1 : -1;
    b = (b >= 0) ? b : -b; 

    
    for (int i = 0; i < b; i++) {
        resultado += a; 
    }

    
    if (positivo == -1) {
        resultado = -resultado;
    }

    
    printf("%d x %d = %d\n", a, b * positivo, resultado);

    return 0;
}




