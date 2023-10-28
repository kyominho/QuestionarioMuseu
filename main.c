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
    printf("Olá bem vindo ao quiz mutitematico !\n");
    printf("Pressione qualquer tecla para iniciar\n");
  system("pause > NULL");
    system("cls");
        topoM:


    printf("Qual Sessão vc está?\n");
    printf("(1)Sessão 1 - 100 ANOS DE SANTOS DUMONT\n(2)Sessão 2 - OLIMPIADAS DE 2024\n(3)Sessão 3 - OLIMPIADAS NA ANTIGUIDADE\n(4)Sessão 4 - ARTE MODERNA\n");
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
    printf("1-) Qual invenção de santos Dumont com mais relevância dentre aquelas que ele criou?\n\n");
    printf("(a) Balão Inflado a Hidrogênio\n(b) 14-Bis\n(c) Hangares\n");
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
    printf("2-) A invenção 14-Bis foi utilizada em conflitos armados fazendo com que Santos Dumont ficasse abalado e perturbado, fazendo assim com que seus últimos anos de vida fossem marcados pela depressão. Escolha a alternativa que indique quais conflitos foram responsáveis por utilizarem uma de suas maiores invenções:\n\n");
    printf("(a) Primeira Guerra Mundial, Segunda Guerra Mundial\n(b) Segunda Guerra Mundial, Revolução Constitucionalista\n(c) Primeira Guerra Mundial, Revolução Constitucionalista\n");
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
    fprintf(arquivo,"Sessão 1->Acertos: %d\t",acer);
}
else{
    printf("Arquivo não encontrado");
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
    printf("1-) Onde será a Sede das Olimpiadas de 2024?\n\n");
    printf("(a) Paris, França\n(b) Inglaterra\n(c) Hungria\n");
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
    printf("2-) Quantas modalidades e esportes estarão presentes nesta Olimpiadas\n\n");
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
    printf("3-) Qual será o novo esporte olímpico que entrará para as Olimpiadas de 2024?\n\n");
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
    fprintf(arquivo,"Sessão 2->Acertos: %d\t",acer);
}
else{
    printf("Arquivo não encontrado");
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
    printf("1-) Onde ocorriam os jogos olímpicos na antiguidade?\n\n");
    printf("(a) Roma\n(b) Grécia\n(c) Egito\n");
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
    printf("2-) Por que os jogos olímpicos na antiguidade eram celebrados a cada quinto ano?\n\n");
    printf("(a) Pois após Hercules de Ida derrotar os seus 4 irmãos numa disputa de corrida, as olimpíadas começaram a serem feitas a cada quinto ano, pois eram cinco irmãos no total (Héracles, Peoneu, Epímedes, Iáusio e Idas)\n(b) Pois o número 5 tem uma simbologia do homem, universo, ordem, perfeição e dos 5 sentidos.\n(c) Pois o número 5 representava na época muitas coisas boas, possibilidades etc.\n");
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
    printf("3-) Quem podia participar dos primeiros Jogos Olímpicos?\n\n");
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
    fprintf(arquivo,"Sessão 3->Acertos: %d\t",acer);
}
else{
    printf("Arquivo não encontrado");
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
    printf("1-) Qual período se encontra a presença da arte moderna?\n\n");
    printf("(a) Meados do século XIX e XX\n(b) Meados do século 21\n(c) Século XX\n");
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
    printf("(a) Pablo Picasso, Piet Mondrian, George Braque, Salvador Dalí.\n(b) Leonardo da Vinci, Michelangelo, Claude Monet.\n(c) Van Gogh, Sandro Botticeli, Claude Monet.\n");
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
    printf("(a) Cubismo, Expressionismo, Fauvismo, Abstracionismo, Futurismo, Dadaísmo, Surrealismo\n(b) Socialismo, Capitalismo, Cubismo, Anarquismo\n(c) Patriarquismo, Socialismo, Cubismo.\n");
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
    fprintf(arquivo,"Sessão 4->Acertos: %d\t",acer);
}
else{
    printf("Arquivo não encontrado");
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

    printf("Obrigado pela sua participação %s, adoramos te receber !", nome);

if(arquivo!=NULL){
    fprintf(arquivo,"%s avaliou %d\n----------------------------------------------------------------------------------------------------------------------------------\n",nome, p1);
}
else{
    printf("Arquivo não encontrado");
}
fclose(arquivo);



Sleep(5000);
system("cls");
main();
return 5;

}




