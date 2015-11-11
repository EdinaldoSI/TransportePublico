#include "TansportePublico.h"

TrasportePublico::transportePublico(int lotacao, int velocidade, const string & nome){//defaut//
	lotacao >= 0 ? this->lotacao = lotacao : this->lotacao = 0;
	velocidade < 0 ? this->velocidade = 0 : this->velocidade = velocidade;
	nome = 	nome;
}




