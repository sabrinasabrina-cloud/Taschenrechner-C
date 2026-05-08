#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, r;
    char op;
    int fehler = 0;
    
    printf("-------------- TASCHENRECHNER --------------\n\n");
    printf("  MENU: \n\n");
    printf("        + : Addition \n");
    printf("        - : Subtraktion \n");
    printf("        * : Multiplikation \n");
    printf("        / : Division \n\n");
    printf("Bitte geben Sie den Operator ein: ");
    scanf(" %c", &op);
    
    if ((op == '+') || (op == '-') || (op == '*') || (op == '/'))
    {
        printf("Bitte geben Sie a ein: ");
        scanf("%f", &a);
        printf("Bitte geben Sie b ein: ");
        scanf("%f", &b);
        
        switch (op)
        {
            case '+': 
                r = a + b;
                break;
            case '-': 
                r = a - b;
                break;
            case '*': 
                r = a * b;
                break;
            case '/':
                if(b != 0)
                {
                    r = a / b;
                }
                else
                {
                    printf("***** !!!! ACHTUNG B ist null !!!! *****\n\n");
                    fehler = 1;
                }
                break;
        }
        if (fehler == 0)
        {
            printf("Das Ergebnis ist: %.2f \n\n", r);
        }
    }
    else
    {
        printf("     !!!! ACHTUNG Falscher Operator !!!!   \n\n");
    }
    
    return 0;
}