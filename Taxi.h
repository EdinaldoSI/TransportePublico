#include "TransportePublico.h"

class Taxi : public TransportePublico
{
	public:
		Taxi();
		Taxi(string);
		virtual int mover(int)=0;
		virtual parar()=0;
	private:
		int bandeira;
		float preco;
		const static string cor="azul";
		
		
};
