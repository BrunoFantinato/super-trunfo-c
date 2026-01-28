// Calculadora para descobrir preço ideal para vender impressão 3D na shopee

#include <stdio.h>
#include <stdlib.h>

int main(){

//    float taxaShopee = * 0.2 + 4;
    float precoProduto, KGfilamento, PrecoProducao, Lucro, PrecoIdeal, Energia, TempoImpressao, FilamentoUsado, Emabalagem, PrecoReceber;
    float saco = 0.3, caixa = 1.0;
    int shopee;

    printf("Digite o preço do KG do filamento: \n");
    scanf("%f", &KGfilamento);

    printf("Digite em gramas quanto foi usada de filamento: \n");
    scanf("%f", &FilamentoUsado);

    printf("Digite o tempo de impressão em minutos: \n");
    scanf("%f", &TempoImpressao);

    printf("Qual embalagem será usada?\n1.Saco\n2.Caixa\n3. Sem Embalagem\n");
    scanf("%f", &Emabalagem);

    if (Emabalagem == 1)
        {
            Emabalagem = saco;
        }
        else if (Emabalagem == 2)
        {
            Emabalagem = caixa;
        }
        else if (Emabalagem == 3)
        {
            Emabalagem = 0;
        };


        PrecoProducao = ((KGfilamento / 1000) * FilamentoUsado) + (TempoImpressao * 0.006) + Emabalagem;

    printf("O preço de produção é R$%.2f \n", PrecoProducao);

    printf("O preço sugerido mínimo para venda é R$%.2f \n", PrecoProducao * 6);

    printf("Você vai vender na shopee?\n1.Sim\n2.Não\n");
    scanf("%d", &shopee);

    if (shopee == 1)
    {
        printf("Digite por quanto irá anúnciar: \n");
        scanf("%f", &PrecoReceber);

        Lucro = ((PrecoReceber * 0.8) - 4) - PrecoProducao;
    } else 
    {
        Lucro = PrecoReceber - PrecoProducao;
    }
        printf("Anúnciando por R$%.2f voce irá ter de lucro R$%.2f \n", PrecoReceber, Lucro);








system("pause");

        return 0;
}
