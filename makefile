main:	main.o Usuario.o Cliente.o Personal.o Administrador.o Chef.o Lavaplatos.o Meseros.o
		g++ main.o Usuario.o Cliente.o Personal.o Administrador.o Chef.o Lavaplatos.o Meseros.o -o main

main.o:	main.cpp Usuario.cpp Cliente.cpp Personal.cpp Administrador.cpp Chef.cpp Lavaplatos.cpp Meseros.cpp

Usuario.o:	Usuario.cpp Usuario.h
	g++ -c Usuario.cpp

Cliente.o:	Cliente.cpp Cliente.h Usuario.h
	g++ -c Cliente.cpp

Personal.o:	Personal.cpp Personal.h Usuario.h
	g++ -c Personal.cpp

Administrador.o:	Administrador.cpp Administrador.h Usuario.h Personal.h
	g++ -c Administrador.cpp

Chef.o:	Chef.cpp Chef.h Usuario.h Personal.h
	g++ -c Chef.cpp

Lavaplatos.o:	Lavaplatos.cpp Lavaplatos.h Usuario.h Personal.h
	g++ -c Lavaplatos.cpp

Meseros.o:	Meseros.cpp Meseros.h Usuario.h Personal.h
	g++ -c Meseros.cpp
