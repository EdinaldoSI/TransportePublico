#include "Onibus.h"

class MicroOnibus : public Onibus
{
	public:
		MicroOnibus();
		MicroOnibus(string);
		virtual int mover(int);
		virtual parar();
	private:
		int temperatura;
		float comprimento;
};

