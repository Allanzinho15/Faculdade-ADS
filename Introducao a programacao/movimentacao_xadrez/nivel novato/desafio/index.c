#include <stdio.h>

int main(){
    int torre = 0 , bispo , rainha = 0;
    int casatorre, casabispo, casarainha;

    //usamos variavel como torre, bispo para inicializar a contagem das peças e variavel como casastorre e casabispo para determinar quantas vezes as peças iria andar no xadrex

    //Usamos o printf para pedir ao usuario quantas casas cada peça do xadrex vão se mover

    //sacanf usamos para coletar o dados de quantas casas a peça do xadrez vai andar

    /*Usamos também atribuição com subtração, para quando o usuario colocasse quantas casas que ele queria que a peça andasse, contasse aparte do 1 e não do 0, ja que em programação o número ele sempre inicia do zero, porque usei isso,  porque se o usuario escolher que a peça deve andar 5 casas ele ande apenas as 5 e não 6 contando com 0, ex: sem atribuição com subtarção se o usuario pedir para que ele ande 5 casas o programa contaria asimm (0,1,2,3,4,5,) formando assim 6 casas, agora com atribuição com subtração se o usuario pedir para que ele ande 5 casas o programa ele anda apenas as 5 casas assim (1,2,3,4,5), explicando como funciona: quando o usuario pede para que a peça ande 5 casas, o que aconteçe, aconteçe que a variavel que recebe o numero de casas que a peça vai andar, a variavel recebe ela mesmo menos 1, exemplo: (casarainha = casarainha - 1 )
    */

    printf("Escolha quantas casas a Rainha vai andar Para a esquerda\n");
    scanf("%d", &casarainha);
    casarainha -= 1;

    while (rainha <= casarainha){

    printf("Rainha (esquerda)\n");
    rainha++;

    }
    

    printf("Escolha quantas casas a Torre vai andar Para a direita\n");
    scanf("%d", &casatorre);
    casatorre -= 1;

    do{ 
        
        printf("Torre (direita)\n");
        torre++;
    } while (torre <= casatorre);


    printf("Escolha quantas casas a Bispo vai andar Para diagona (cima e á direita)\n");
    scanf("%d", &casabispo);
    casabispo -= 1;

    for (bispo = 0; bispo <= casabispo; bispo++){
        
        printf("Bispo (cima/direita)\n");
    }
    


    
}