#include <stdio.h>
#include <stdlib.h>


void menu(int c)
{
    double r = 1;
    int  i = 0;
    (c == 0 ? printf("un nombre errone\n"): 0);
    printf("choisir un capital\n");
    printf("1-MAD TO DOLLAR AMERIC \n 2-MAD TO EURO \n 3 DOLLAR TO EURO \n  4-DOLLAR TO MAD \n 5-EURO TO MAD \n ");
    scanf("%i",&i);
    switch (i)
    {
        case 1:
            printf("donner un monter\n");
            scanf("%i",&r);
            r = r * 0.11;
            break;
        case 2:
            printf("donner un monter\n");
            scanf("%i",&r);
            r = r * 0.093f;
            break;
        case 3:
            printf("donner un monter\n");
            scanf("%i",&r);
            r = r * 0.82f;
            break;
        case 4:
            printf("donner un monter\n");
            scanf("%i",&r);
            r = r * 8.2f;
            break;
        case 5:
            printf("donner un monter\n");
            scanf("%i",&r);
            r = r * 9.3f;
            break;
        default:
            menu(0);
        break;
    }
    printf("le montan est : %f\n",r);
}

void programme()
{
    char repeat = '0';
    menu(1);   
    printf("pouvez-vous choisir une autre converture? Y,N\n");
    scanf(" %c",&repeat);
    if(repeat == 'Y'||repeat =='y')
        programme();
}

int main(void)
{
    programme();   
}