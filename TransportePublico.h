#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class TransportePublico{
	public:
		TransportePublico(int=0,int=0,const string & ="");
		virtual int mover(int)=0;
		virtual parar()=0;
	
	private:
		int lotacao;
		int velocidade;
		string nome;	
	
};


