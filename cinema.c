#include <stdio.h>
#include <cs50.h>

void k(void);
int m = 3;

//Chaque films dans sa catégorie respectif
string filmCategorieEnfant[3] = {"Marsupilami", "Nemo", "Henry Potdebeurre à l'école des batons"};
string filmCategorieAdo[3] = {"Soirée chez popol", "Cédric découvre la vie", "Bierut Mokop"};
string filmCategorieAdulte[3] = {"La chasse aux arbres", "Verdun, un combat sans fin", "Lili et ses copines"};

// Les différentes catégories de films
string cat1 = "Catégorie Enfant";
string cat2 = "Catégorie Ado";
string cat3 = "Catégorie Adulte";



int main(void)
{
    int ask = get_int("Quelle est ton âge ? (en années)\n");
    for (int i = 0; i < m; i++)
    {
        if (ask <= 11)
        {
            printf("Je te conseille la %s\nChoisi ton film : \n", cat1);
            printf("\n");
            for (int l = 0; l < m; l++)
            {
                printf("Film %i : %s\n", l + 1, filmCategorieEnfant[l]);
            }
            printf("\n");
            for (int t = 0; t < m; t++)
            {
                char dd = get_char("Veux-tu voir %s ?\n (Y or N)\n", filmCategorieEnfant[t]);
                if (dd == 'Y' || dd == 'y')
                {
                    printf("Place réservé pour %s\n", filmCategorieEnfant[t]);
                    return 0;
                }
                else if (t >= 2)
                {
                    k(); // renvoie vers la fonction k pour éviter de répéter
                    return 0;
                }
            }
        }
        else if (ask <= 17)
        {
            printf("Je te conseille la %s\nChoisi ton film : \n", cat2);
            printf("\n");
            for (int l = 0; l < m; l++)
            {
                printf("Film %i : %s\n", l + 1, filmCategorieAdo[l]);
            }
            printf("\n");
            for (int t = 0; t < m; t++)
            {
                char dd = get_char("Veux-tu voir %s ?\n (Y or N)\n", filmCategorieAdo[t]);
                if (dd == 'Y' || dd == 'y')
                {
                    printf("Place réservé pour %s\n", filmCategorieAdo[t]);
                    return 0;
                }
                else if (t >= 2)
                {
                    k();
                    return 0;
                }
            }
        }
        else if (ask >= 18)
        {
            printf("Je te conseille la %s\nChoisi ton film : \n", cat3);
            printf("\n");
            for (int l = 0; l < m; l++)
            {
                printf("Film %i : %s\n", l + 1, filmCategorieAdulte[l]);
            }
            printf("\n");
            for (int t = 0; t < m; t++)
            {
                char dd = get_char("Veux-tu voir %s ?\n (Y or N)\n", filmCategorieAdulte[t]);
                if (dd == 'Y' || dd == 'y')
                {
                    printf("Place réservé pour %s\n", filmCategorieAdulte[t]);
                    return 0;
                }
                else if (t >= 2)
                {
                    k();
                    return 0;
                }
            }
        }
        else
        {
            return 1;
        }
    }
}

void k(void)
{
    printf("Navré de vous décevoir\n");
}
