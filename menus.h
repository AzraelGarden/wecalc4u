void menu1(){
    printf("WE CALC 4 U\n\n");
    printf("Menu\n");
    printf("\t1 - Fun��o\n");
    printf("\t2 - Derivada Num�rica\n");
    printf("\t3 - Integral Num�rica\n");
    printf("\t4 - Sair\n");
    printf("\nEscolha uma op��o: ");
}

void menu2(int opt){
    char menu[30];
    char func[] = "Menu Fun��o";
    char derivada[] = "Menu Derivada Num�rica";
    char integral[] = "Menu Integral Num�rica";
    if(opt==1)
            {
                strcpy(menu, func);
            }
            else if(opt==2)
            {
                strcpy(menu, derivada);
            }
            else
            {
                strcpy(menu, integral);
            }

            system("cls");
            printf("%s\n", menu);
            printf("\t0. Voltar\n");
            printf("\t1. f(x) = k\n");
            printf("\t2. f(x) = x^k\n");
            printf("\t3. f(x) = k^x\n");
            printf("\t4. f(x) = e^x\n");
            printf("\t5. f(x) = log k(x)\n");
            printf("\t6. f(x) = ln (x)\n");
            printf("\t7. f(x) = 1/x\n");
            printf("\t8. f(x) = sen(x)\n");
            printf("\t9. f(x) = cos(x)\n");
            printf("\t10. f(x) = tg(x)\n");
            printf("\nEscolha Uma op��o: ");

}
