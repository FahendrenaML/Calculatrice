#include <stdio.h>

int main(){
    char op;
    float a;
    float b;
    float res;

    printf("=== Calculatrice Basique ===\n");
    
    printf("Entrez un nombre : \n");
    scanf("%f",&a);

    printf("Entrez un deuxieme nombre : \n");
    scanf("%f",&b);

    // Vider le tampon d'entrée
    while (getchar() != '\n');

    printf("Entrez une operation entre + , - , * , / = \n");
    scanf("%c",&op);


    if (op == '+'){
        res= a+b;
        printf("Le resultat de %.2f + %.2f = %.2f\n",a,b,res);
    }
    else if (op == '-'){
        res= a-b;
        printf("Le resultat de %.2f - %.2f = %.2f\n",a,b,res);
    }
    else if (op == '*'){
        res= a*b;
        printf("Le resultat de %.2f * %.2f = %.2f\n",a,b,res);
    }
    else if (op == '/'){
        if (b!=0){
            res= a/b;
            printf("Le resultat de %.2f / %.2f = %.2f\n",a,b,res);
        }
        else{
            printf("NON DEFINIE\n");
        }
    }
    else{
        printf("operateur Invalide\n");
    }

    return 0;
}