#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

        long long int CODIGO,COD,D0,D1,D2,D3,D4,D5,D6,D7,D8,D9,D10,D11,D12,SOMA,RESULTADO;

    cout<< "Digite o código de barras, número por número, da esquerda para a direita"<<endl;
    cin>> CODIGO;

        //SEPARAR OS DÍGITOS
        //MULTIPLICAR OS ÍMPARES POR 3
        COD=CODIGO/10;
            D0=CODIGO%10;
            D1=(COD%10)*3;
            D2=(COD/10)%10;
            D3=((COD/100)%10)*3;
            D4=(COD/1000)%10;
            D5=((COD/10000)%10)*3;
            D6=(COD/100000)%10;
            D7=((COD/1000000)%10)*3;
            D8=(COD/10000000)%10;
            D9=((COD/100000000)%10)*3;
            D10=(COD/1000000000)%10;
            D11=((COD/10000000000)%10)*3;
            D12=(COD/100000000000)%10;
          //SOMAR RESULTADOS
            SOMA=D1+D2+D3+D4+D5+D6+D7+D8+D9+D10+D11+D12;

          //DIVIDIR POR 10, SOMAR 1, MULTIPLICAR POR 10
            RESULTADO=10*((SOMA/10)+1);

          //DIGITO VERIFICADOR= PASSO 6 - PASSO 3
            RESULTADO=RESULTADO-SOMA;

          //SE FOR MÚLTIPLO DE 10 = 0
            if (RESULTADO%10 ==0) {
                RESULTADO=0;
                cout<<" O dígito verificador é "<<RESULTADO;
            }

          //DÍGITO VERIFICADOR INCONSISTENTE
            else if (RESULTADO==0||RESULTADO!=D0){
                cout<<" O dígito verificador é inconsistente ";
            }

          //NÚMERO DE DÍGITOS INVÁLIDO
            else if (CODIGO<999999999999||CODIGO>10000000000000){
                cout<<" Número de dígitos inválido ";
            }
          //SE FOR CORRETO
            else {
                cout<<" O dígito verificador é "<<RESULTADO;
            }


    return 0;
}
