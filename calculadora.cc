//ADAM ROY FREDERICK WILLIAM READING
#include <iostream>
#include <libintl.h>
#include <locale.h>
#include <stdio.h>
#define _(x) gettext(x)
using namespace std;

int main(){
	string localedir;
    
	localedir = "po";
     

	setlocale(LC_ALL,""); // si el segundo argumento está vacío, coge el lenguaje del entorno
	bindtextdomain("calculadora",localedir.c_str()); //segundo argumento es la carpeta raiz de donde se encuentra el .mo. Para la entrega creamos una carpeta po/en_GB/LC_MESSAGES/archivo.mo
	textdomain("calculadora");
	int n1, n2;
	char op;
	do{
		//he quitado el ; para provocar fallo
		printf(_("Introduce el primer numero:"))
		cin>> n1;
		printf(_("Introduce la operacion a realizar: "));
		cin>>op;
		printf(_("Introduce el segundo numero:"));
		cin>> n2;
		//otro comentario
	}while(op!='+' && op!='*' && op!='-' && op!='/');

	switch(op){
		case '+':
			printf(_("EL resultado de la suma es: "));
			cout<<( n1 + n2);
			break;
		case '-':
			printf(_("EL resultado de la resta es: "));
			cout<<( n1 - n2);
			break;
		case '*':
			printf(_("EL resultado de la multiplicacion es: "));
			cout<<( n1 * n2);
			break;
		case '/':
			printf(_( "EL resultado de la division es: "));
			
			if(n2 == 0){
				cout<<0;
			}else{
				cout<<( n1/n2)<<endl;
			}
			break;
	}

	return 0;
	
}


//xgettext -d intlapp -k_ -o po/intlapp.pot ./calcuadora.cc
//se guardan en intlapp.pot las frases marcadas con printf y _

//hay que hacer una copia por cada idioma llamado en_GB.po y rellenamos msgstr con las traducciones

//msgfmt -c -v -o intlapp.mo en_GB.mo -> COnvierte el archivo .po en un .mo

// /usr/share/locale/en_GB/LC_MESSAGES/ -> Hay que guardar el .mo en el archivo

//PONER MAS FRASES Y MAS IDIOMAS


