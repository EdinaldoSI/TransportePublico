#include "Taxi.h"

class Uber : public Taxi
{
	public:
		Uber();
		Uber(string);
		virtual int mover(int);
		virtual parar();
	private:
		long int nCartao;
};
