#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>


int main(){
setlocale(LC_ALL,"portuguese");
int caso;

    system("color F4");
    caso=0;
    printf("------Quiz Multitematico-------\n");
    printf("Ol� bem vindo ao quiz mutitematico !\n");
    printf("Pressione qualquer tecla para iniciar\n");
  system("pause > NULL");
    system("cls");
        topoM:


    printf("Qual Sess�o vc est�?\n");
    printf("(1)Sess�o 1 - 100 ANOS DE SANTOS DUMONT\n(2)Sess�o 2 - OLIMPIADAS DE 2024\n(3)Sess�o 3 - OLIMPIADAS NA ANTIGUIDADE\n(4)Sess�o 4 - ARTE MODERNA\n");
    scanf("%d",& caso);

    switch(caso){

case 1:
    pergunta1();
    break;
    case 2:
    sessao2();
    break;
    case 3:
    sessao3();
    break;
    case 4:
    sessao4();
    break;
    default:
    system("cls");
    goto topoM;
    break;

        }


    printf("Pressione qualquer tecla para iniciar o quiz\n");
    system("pause > NULL");
    system("cls");
    pergunta1();
    return 0;

}





int pergunta1(){

char p1,p2,p3,p4,p5, volt=0;
int acer;
SetConsoleTitle("Quiz multitematico");

FILE*arquivo;

arquivo=fopen("acer.csv", "a+");



topo:
    p1=NULL;
    printf("1-) Qual inven��o de santos Dumont com mais relev�ncia dentre aquelas que ele criou?\n\n");
    printf("(a) Bal�o Inflado a Hidrog�nio\n(b) 14-Bis\n(c) Hangares\n");
    scanf("%c", &p1);

    switch(p1){
        case 'a':
        printf("Errado\n");
         Sleep(2000);

        break;

        case 'b':
        printf("Correta\n");
        acer=acer+1;
         Sleep(2000);

        break;


        case 'c':
        printf("Errado\n");
         Sleep(2000);

        break;

        default:
           system("cls");
          goto topo;
            break;
    }






topo1:
    p2=NULL;
    printf("2-) A inven��o 14-Bis foi utilizada em conflitos armados fazendo com que Santos Dumont ficasse abalado e perturbado, fazendo assim com que seus �ltimos anos de vida fossem marcados pela depress�o. Escolha a alternativa que indique quais conflitos foram respons�veis por utilizarem uma de suas maiores inven��es:\n\n");
    printf("(a) Primeira Guerra Mundial, Segunda Guerra Mundial\n(b) Segunda Guerra Mundial, Revolu��o Constitucionalista\n(c) Primeira Guerra Mundial, Revolu��o Constitucionalista\n");
    scanf("%c", &p2);

    switch(p2){
        case 'a':
        printf("Errado\n");

        break;

        case 'b':
        printf("Errado\n");


        break;


        case 'c':
        printf("Correta\n");
        acer=acer+1;
        break;

        default:
           system("cls");
          goto topo1;
            break;
    }



Sleep(2000);
system("cls");



//pergunta 3
topo2:
    p3=NULL;
    printf("3-) Qual a data de nascimento de Santos Dumont?\n\n");
    printf("(a) 21 de julho de 1878\n(b) 20 de julho de 1873\n(c) 10 de abril de 1910\n");
    scanf("%c", &p3);

    switch(p3){
        case 'a':
        printf("Errado\n");

        break;

        case 'b':
        printf("Correta\n");
        acer=acer+1;

        break;


        case 'c':
        printf("Errado\n");

        break;

        default:
           system("cls");
          goto topo2;
            break;
    }

if(arquivo!=NULL){
    fprintf(arquivo,"Sess�o 1->Acertos: %d\t",acer);
}
else{
    printf("Arquivo n�o encontrado");
}
fclose(arquivo);
Sleep(2000);
system("cls");
pergunta5();
return 1;

}


//pergunta2
int sessao2(){
int acer=0;
char p1,p2,p3,p4,p5, volt=0;
FILE*arquivo;

arquivo=fopen("acer.csv", "a+");
SetConsoleTitle("Quiz multitematico");

topo:
    p1=NULL;
    printf("1-) Onde ser� a Sede das Olimpiadas de 2024?\n\n");
    printf("(a) Paris, Fran�a\n(b) Inglaterra\n(c) Hungria\n");
    scanf("%c", &p1);

    switch(p1){
        case 'a':
        printf("Correta\n");
           acer=acer+1;
         Sleep(2000);

        break;

        case 'b':
        printf("Errado\n");
         Sleep(2000);

        break;


        case 'c':
        printf("Errado\n");
         Sleep(2000);

        break;

        default:
           system("cls");
          goto topo;
            break;
    }






topo1:
    p2=NULL;
    printf("2-) Quantas modalidades e esportes estar�o presentes nesta Olimpiadas\n\n");
    printf("(a) 48 modalidades, 32 esportes\n(b) 34 modalidades, 30 esportes\n(c) 48 esportes, 32 modalidades\n");
    scanf("%c", &p2);

    switch(p2){
        case 'a':
        printf("Correta\n");
           acer=acer+1;
        break;

        case 'b':
        printf("Errado\n");


        break;


        case 'c':
        printf("Errado\n");

        break;

        default:
           system("cls");
          goto topo1;
            break;
    }



Sleep(2000);
system("cls");




topo2:
    p3=NULL;
    printf("3-) Qual ser� o novo esporte ol�mpico que entrar� para as Olimpiadas de 2024?\n\n");
    printf("(a) Breaking Dance\n(b) Boliche\n(c) MMA\n");
    scanf("%c", &p3);

    switch(p3){
        case 'a':
        printf("Correta\n");
           acer=acer+1;
        break;

        case 'b':
        printf("Errado\n");


        break;


        case 'c':
        printf("Errado\n");

        break;

        default:
           system("cls");
          goto topo2;
            break;
    }





Sleep(2000);
system("cls");



if(arquivo!=NULL){
    fprintf(arquivo,"Sess�o 2->Acertos: %d\t",acer);
}
else{
    printf("Arquivo n�o encontrado");
}
fclose(arquivo);
pergunta5();
return 2;

}

//sessao3

int sessao3(){
int acer=0;
char p1,p2,p3,p4,p5, volt=0;

FILE*arquivo;

arquivo=fopen("acer.csv", "a+");
SetConsoleTitle("Quiz multitematico");

topo:
    p1=NULL;
    printf("1-) Onde ocorriam os jogos ol�mpicos na antiguidade?\n\n");
    printf("(a) Roma\n(b) Gr�cia\n(c) Egito\n");
    scanf("%c", &p1);

    switch(p1){
        case 'a':
        printf("Errado\n");
         Sleep(2000);

        break;

        case 'b':
        printf("Correta\n");
           acer=acer+1;
         Sleep(2000);

        break;


        case 'c':
        printf("Errado\n");
         Sleep(2000);

        break;

        default:
           system("cls");
          goto topo;
            break;
    }






topo1:
    p2=NULL;
    printf("2-) Por que os jogos ol�mpicos na antiguidade eram celebrados a cada quinto ano?\n\n");
    printf("(a) Pois ap�s Hercules de Ida derrotar os seus 4 irm�os numa disputa de corrida, as olimp�adas come�aram a serem feitas a cada quinto ano, pois eram cinco irm�os no total (H�racles, Peoneu, Ep�medes, I�usio e Idas)\n(b) Pois o n�mero 5 tem uma simbologia do homem, universo, ordem, perfei��o e dos 5 sentidos.\n(c) Pois o n�mero 5 representava na �poca muitas coisas boas, possibilidades etc.\n");
    scanf("%c", &p2);

    switch(p2){
        case 'a':
        printf("Correta\n");
           acer=acer+1;

        break;

        case 'b':
        printf("Errado\n");


        break;


        case 'c':
        printf("Errado\n");

        break;

        default:
           system("cls");
          goto topo1;
            break;
    }



Sleep(2000);
system("cls");



//pergunta 3
topo2:
    p3=NULL;
    printf("3-) Quem podia participar dos primeiros Jogos Ol�mpicos?\n\n");
    printf("(a) Somente Homens\n(b) Patriarcas e Sacerdotes\n(c) Deuses e filhos de deuses\n");
    scanf("%c", &p3);

    switch(p3){
        case 'a':
        printf("Correta\n");
           acer=acer+1;

        break;

        case 'b':
        printf("Errado\n");


        break;


        case 'c':
        printf("Errado\n");

        break;

        default:
           system("cls");
          goto topo2;
            break;
    }






Sleep(2000);
system("cls");
if(arquivo!=NULL){
    fprintf(arquivo,"Sess�o 3->Acertos: %d\t",acer);
}
else{
    printf("Arquivo n�o encontrado");
}
fclose(arquivo);
pergunta5();
return 3;

}

//sessao4


int sessao4(){
int  acer=0;
char p1,p2,p3,p4,p5, volt=0;
FILE*arquivo;

arquivo=fopen("acer.csv", "a+");
SetConsoleTitle("Quiz multitematico");

topo:
    p1=NULL;
    printf("1-) Qual per�odo se encontra a presen�a da arte moderna?\n\n");
    printf("(a) Meados do s�culo XIX e XX\n(b) Meados do s�culo 21\n(c) S�culo XX\n");
    scanf("%c", &p1);

    switch(p1){
        case 'a':
        printf("Correta\n");
           acer=acer+1;
         Sleep(2000);

        break;

        case 'b':
        printf("Errado\n");
         Sleep(2000);

        break;


        case 'c':
        printf("Errado\n");
         Sleep(2000);

        break;

        default:
           system("cls");
          goto topo;
            break;
    }






topo1:
    p2=NULL;
    printf("2-) Quais nomes dos principais artistas modernistas europeus?\n\n");
    printf("(a) Pablo Picasso, Piet Mondrian, George Braque, Salvador Dal�.\n(b) Leonardo da Vinci, Michelangelo, Claude Monet.\n(c) Van Gogh, Sandro Botticeli, Claude Monet.\n");
    scanf("%c", &p2);

    switch(p2){
        case 'a':
        printf("Correta\n");
           acer=acer+1;
        break;

        case 'b':
        printf("Errado\n");


        break;


        case 'c':
        printf("Errado\n");

        break;

        default:
           system("cls");
          goto topo1;
            break;
    }



Sleep(2000);
system("cls");



//pergunta 3
topo2:
    p3=NULL;
    printf("3-) Quais Principais Movimentos da Arte Moderna?\n");
    printf("(a) Cubismo, Expressionismo, Fauvismo, Abstracionismo, Futurismo, Dada�smo, Surrealismo\n(b) Socialismo, Capitalismo, Cubismo, Anarquismo\n(c) Patriarquismo, Socialismo, Cubismo.\n");
    scanf("%c", &p3);

    switch(p3){
        case 'a':
        printf("Correta\n");
           acer=acer+1;

        break;

        case 'b':
        printf("Errado\n");


        break;


        case 'c':
        printf("Errado\n");

        break;

        default:
           system("cls");
          goto topo2;
            break;
    }





Sleep(2000);
system("cls");
if(arquivo!=NULL){
    fprintf(arquivo,"Sess�o 4->Acertos: %d\t",acer);
}
else{
    printf("Arquivo n�o encontrado");
}
fclose(arquivo);
pergunta5();
return 4;

}


int pergunta5(){

int p1;
char nome[100];
SetConsoleTitle("Quiz multitematico");
FILE*arquivo;

arquivo=fopen("acer.csv", "a+");

topo:
    p1=NULL;
    printf("O que achou do nosso museu? Avalie de 0 a 10\n");
    scanf("%d", &p1);


      printf("Digite seu primeiro nome\n");
    scanf("%s", nome);

    printf("Obrigado pela sua participa��o %s, adoramos te receber !", nome);

if(arquivo!=NULL){
    fprintf(arquivo,"%s avaliou %d\n----------------------------------------------------------------------------------------------------------------------------------\n",nome, p1);
}
else{
    printf("Arquivo n�o encontrado");
}
fclose(arquivo);



Sleep(5000);
system("cls");
main();
return 5;

}




