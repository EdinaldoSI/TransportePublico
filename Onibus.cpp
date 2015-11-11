#include "Onibus.h"

Onibus::Onibus(int lotacao, int velocidade, const string & nome, float preco)
:TransportePublico(lotacao, velocidade, nome)
{
	preco <0 ? this->preco = 0 : this->preco = preco;
}
