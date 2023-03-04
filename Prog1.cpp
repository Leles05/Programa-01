//Bem vindo ao programa 1 do Lucas!//

#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int
main ()
{
  string produto;
  string answer;
  string resposta;
  string pagamento;
  string confirmacao;
  int erro;
  string prodct;    
  
produto:
 
 cout << "Digite um produto: ";
  std::cin >> produto;
  cout << "Produto lido: " << produto << endl;
  cout << "Esse e o produto desejado?" << endl;
  cin >> answer;
      {
	if (answer == "s" || answer == "sim")
	  {
	 
	  pagamento:
	    
	    cout << "Sua compra pelo produto: " << produto;
	    cout << "\tira custar 100 reais!" <<endl;
	    cout << "Como ira querer fazer o pagamento?" << endl;
	    cin >> pagamento;
	 
	  confirmacao:
	    
	    cout << "Entao so para confirmar, o(a) senhor(a) quer o produto: "<< produto;
	    cout << " pelo preco de 100 reais e ira pagar pelo metodo de: " <<pagamento << endl;
	    cout << "Estou certo?" << endl;
	    cin >> resposta;
	    
	    if (resposta == "SIM" || resposta == "sim" || resposta == "s" || resposta == "Sim")
	      {
		cout << "Perfeito muito obrigado!";
		cout << "Fim do teste!!";
		return EXIT_SUCCESS;
	      }
	   
	    if (resposta == "NAO" || resposta == "nao" || resposta == "Nao"	|| resposta == "n")
	      {
		cout << "Onde foi que eu errei?" << endl;
		cout <<
		  "Porfavor digitar somente: 1 para erros com o produto / 2 para erros com o pagamento / 3 para caso tenha sido um erro seu!" << endl;
		cin >> erro;
		if (erro == 1)
		  goto produto;
		else (erro == 2);
		  goto pagamento;
		if (erro == 3)
		  goto confirmacao;
	      }
	  }
      {
	if (answer == "Nao" || answer == "nao" || answer == "NAO"
	    || answer == "n")
	  {
	    cout << "Voce Digitou: " << answer << endl;
	    cout << "Qual seria o produto ideal?" << endl;
	    cin >> produto;
	    goto produto;
	  }
      }
  }
}

