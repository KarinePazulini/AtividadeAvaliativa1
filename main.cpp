#include <iostream>
#include <string>

using namespace std;

string termo;
//termo recebe a palavra desejada

int main() {
  cout << "Digite: \n";
  cin >> termo;

  int tecla; int qtde; int linha; int coluna;
  //tecla é a qual deve ser pressionada
  //qtde é a quantidade de vezes que a tecla deve ser pressionada


  char letras [4][8] = {{'a','d','g','j','m','p','t','w'}, {'b','e','h','k','n','q','u','x'}, {'c','f','i','l','o','r','v','y'}, {' ',' ',' ',' ',' ','s',' ','z'}};

  for(int t=0;t<size(termo);t++){
    if(size(termo) > 50){
      cout << "Inválida" << endl;
      break;
    }else{
      for(int linha=0; linha<4; linha++){
        for(int coluna=0; coluna<8;coluna++){
          if(termo[t] == letras[linha][coluna]){
            tecla=coluna+2; qtde=linha+1;
            cout << "#" << tecla << "=" << qtde << endl;
          }

        }
      }
    }
  }
  return 0;
}