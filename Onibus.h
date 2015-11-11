#include "TransportePublico.h"

class Onibus : public TransportePublico {
	public:
		Onibus(int=0, int=0, const string & ="", float=0);
		Onibus(string);
		virtual int mover(int)=0;
		virtual parar()=0;
	private:
		float preco;
		
		
};

