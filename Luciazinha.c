#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int senha1, senha2=1234, cont=0, cont2=1,i=0,r200=2,r100=4,r50=6,r10=10,r5=10,r1=20,r05=20, caixa, troco_100, transi;
    float val=0, soma=0, val2=0, val3=0, preco,troco=0, total=0;
    char resp;

//----------------------------------------------------------------------------//
    do
    {
        printf("\n\tDigite a senha para abrir o caixa:\n\t");
        scanf("%d",&senha1);
        cont++;
        if(senha1!=senha2)
        {
            printf("\n\tSenha incorreta.\n\tVocê tem %d tentativas ", 3-cont);
        }
        else
        {
            cont=10;
        }
    }while(cont<3);


    if(cont==10)
    {
        printf("\n\tSenha Correta.\n\tCaixa Aberto!\n\n");
    }
    else{
        return 0;
    }
//----------------------------------------------------------------------------//
    do{
    printf("\n\tDigite Valor do Item%d:R$",cont2);
    scanf("%f",&val);
    soma+=val;
    cont2++;
    if(val==-1){
        printf("\n\tDigite Valor correto do Item%d:R$",cont2-2);
        scanf("%f",&val3);
        soma+=val3-val2+1;
        cont2-2;
    }
    val2=val;
    }while(val!=0);
//----------------------------------------------------------------------------//
        printf("\n\tDeseja finalizar? (S=Sim e N=Não):");
        fflush(stdin);
        scanf("%c",&resp);
        tolower(resp)=='s';
        tolower(resp)=='n';
        if(resp=='s'){
            printf("\n\tValor Total:%.2f",soma);
            printf("\n\tInsira o valor pago:");
            scanf("%f",&val);
            troco=val-soma;
            troco_100=100*troco;
            printf("\n\tTROCO:%.2f",troco);
                if(troco_100/20000>=1){
                    transi=troco_100/20000;
                    printf("\n\t%d NOTAS DE 200",transi);
                    troco_100%=20000;
                    r200--;
                    }
                if(troco_100/10000>=1){
                    transi=troco_100/10000;
                    printf("\n\t%d NOTAS DE 100",transi);
                    troco_100%=10000;
                    r100--;
                    }
                if(troco_100/5000>=1){
                    transi=troco_100/5000;
                    printf("\n\t%d NOTAS DE 50",transi);
                    troco_100%=5000;
                    r50--;
                    }
                if(troco_100/1000>=1){
                    transi=troco_100/1000;
                    printf("\n\t%d NOTAS DE 10",transi);
                    troco_100%=1000;
                    r10--;
                    }
                if(troco_100/500>=1){
                    transi=troco_100/500;
                    printf("\n\t%d NOTAS DE 5",transi);
                    troco_100%=500;
                    r5--;
                    }
                if(troco_100/100>=1){
                    transi=troco_100/100;
                    printf("\n\t%d MOEDAS DE 1",transi);
                    troco_100%=100;
                    r1--;
                    }
                if(troco_100/50>=1){
                    transi=troco_100/50;
                    printf("\n\t%d MOEDAS DE 50 CENTAVOS",transi);
                    troco_100%=50;
                    r05--;
                    }
//----------------------------------------------------------------------------//;

            total=200*r200+100*r100+50*r50+10*r10+5*r5+1*r1+1/2*r05;
            printf("\n\tNúmero de clientes atendidos:%d",cont2-2);
            printf("\n\tValor Total:%.2f",soma);
            printf("\n\tValor Existente no Caixa:%.2f",total);
            printf("\n\tATÉ BREVE");
        }
    }
