#include <iostream>
#include <string>
using namespace System;

class Controlador
{
private:
	int **MatrizOriginal;
	int **Matriz1;
	int **Matriz2;
	int **Matriz3;
	int N;
	int *Ruta;
	int Cant_ruta;

public:
	Controlador();
	~Controlador();

	int **GetMatrizOriginal();
	int **GetMatriz1();
	int **GetMatriz2();
	int **GetMatriz3();
	int GetN();
	int *GetRuta();
	int GetCant_ruta();

	void SetMatrizOriginal(int **M);
	void SetMatriz1(int **M);
	void SetMatriz2(int **M);
	void SetMatriz3(int **M);
	void SetN(int N);
	void SetRuta(int *ruta);
	void SetCant_ruta(int n);

	int **CrearMatrizOriginal(int N);
	int **CrearMatrizInfinito(int N);

	int **GenerarMatrizAleatoria(int **matrizn, int N);
	int **GenerarMatrizInfinita(int N);

	void SumarMatrices(int N);
	void MultiplicarMatrices(int N);
	int** BoolearMatriz(int **M, int N);

	void HallarRuta(int inicio, int llegada, int N);
	void LimpiarRuta(int N);

	int** GenerarMatrizCero(int N);
	void ModificarMatriz(int x, int y);
	int ContarUnos(int N);
};

Controlador::Controlador(){}
Controlador::~Controlador(){}

int **Controlador::GetMatrizOriginal()
{
	return this->MatrizOriginal;
}
int **Controlador::GetMatriz1()
{
	return this->Matriz1;
}
int **Controlador::GetMatriz2()
{
	return this->Matriz2;
}
int **Controlador::GetMatriz3()
{
	return this->Matriz3;
}
int Controlador::GetN()
{
	return this->N;
}
int *Controlador::GetRuta()
{
	return this->Ruta;
}
int Controlador::GetCant_ruta()
{
	return this->Cant_ruta;
}

void Controlador::SetMatrizOriginal(int **M)
{
	this->MatrizOriginal = M;
}
void Controlador::SetMatriz1(int **M)
{
	this->Matriz1 = M;
}
void Controlador::SetMatriz2(int **M)
{
	this->Matriz2 = M;
}
void Controlador::SetMatriz3(int **M)
{
	this->Matriz3 = M;
}
void Controlador::SetN(int N)
{
	this->N = N;
}
void Controlador::SetRuta(int *ruta)
{
	this->Ruta = ruta;
}
void Controlador::SetCant_ruta(int n)
{
	this->Cant_ruta = n;
}

int**Controlador::CrearMatrizOriginal(int N)
{
	MatrizOriginal = new int*[N];
	for (int i = 0; i<N; i++)
	{
		MatrizOriginal[i] = new int[N];
	}

	this->MatrizOriginal = (GenerarMatrizAleatoria(MatrizOriginal, N));

	return MatrizOriginal;
}

int **Controlador::GenerarMatrizAleatoria(int **matriz, int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			matriz[i][j] = 0;
	}

	int fila, columna, pares = 0;
	do {
		fila = Random().Next(0, N);
		_sleep(10);
		columna = Random().Next(0, N);

		if (matriz[fila][columna] != 1)
		{
			matriz[fila][columna] = 1;
			pares++;
		}
	} while (pares != 2 * N);

	return matriz;
}

int**Controlador::CrearMatrizInfinito(int N)
{
	Matriz1 = new int*[N];
	Matriz2 = new int*[N];
	Matriz3 = new int*[N];

	for (int i = 0; i<N; i++)
	{
		Matriz1[i] = new int[N];
		Matriz2[i] = new int[N];
		Matriz3[i] = new int[N];
	}

	for (int i = 0; i < N; i++)
	for (int j = 0; j < N; j++)
		Matriz1[i][j] = MatrizOriginal[i][j];

	this->Matriz3 = (GenerarMatrizInfinita(N));

	return Matriz3;
}

int **Controlador::GenerarMatrizInfinita(int N)
{
	bool encontrado = false;

	while (encontrado == false)
	{
		MultiplicarMatrices(N);
		SumarMatrices(N);
		if (Matriz3 == Matriz1)
			encontrado = true;
		else Matriz1 = Matriz3;
	}
	return Matriz3;
}

void Controlador::SumarMatrices(int N)
{
	for (int i = 0; i < N; i++)
	for (int j = 0; j < N; j++)
	{
		Matriz3[i][j] = Matriz1[i][j] + Matriz2[i][j];
	}
	Matriz3 = BoolearMatriz(Matriz3, N);
}
void Controlador::MultiplicarMatrices(int N)
{
	for (int i = 0; i < N; i++)
	for (int j = 0; j < N; j++)
	{
		Matriz2[i][j] = 0;
		for (int k = 0; k < N; k++)
		{
			Matriz2[i][j] += Matriz1[i][k] * Matriz1[k][j];
		}
	}
	Matriz2 = BoolearMatriz(Matriz2, N);
}

int** Controlador::BoolearMatriz(int **M, int N)
{
	for (int i = 0; i < N; i++)
	for (int j = 0; j < N; j++)
	{
		if (M[i][j]>1)
			M[i][j] = 1;
	}

	return M;
}

void Controlador::HallarRuta(int inicio, int llegada, int N)
{
	int **M_aux = new int*[N];
	for (int i = 0; i < N; i++)
	{
		M_aux[i] = new int[N];
	}
	for (int i = 0; i < N; i++)
	for (int j = 0; j < N; j++)
		M_aux[i][j] = MatrizOriginal[i][j];

	Ruta = new int[100];
	Cant_ruta = 1;
	int pos = 1, porsiaca;
	bool encontrado = false;

	Ruta[0] = inicio;

	while (encontrado == false)
	{
		int x = 0;
		while (x < N)
		{
			if (M_aux[llegada][inicio] == 1)
			{
				encontrado = true;
				Ruta[pos] = llegada;
				Cant_ruta++;
				break;
			}
			else
			{
				if (M_aux[x][inicio] == 1)
				{
					porsiaca = inicio;
					M_aux[x][inicio] = 0;
					Ruta[pos] = x;
					pos++;
					Cant_ruta++;
					inicio = x;
					x = 0;
				}
				else
				{
					bool op = false;
					int ceros = 0;
					for (int i = 0; i < N; i++)
					{
						if (M_aux[i][inicio] == 0)
							ceros++;
					}

					if (ceros == N)
						op = true;

					if (op == true)
					{
						inicio = porsiaca;
						pos--;
						Cant_ruta--;
						x = 0;
					}
					else x++;
				}
			}
		}
	}
	LimpiarRuta(Cant_ruta);
}
void Controlador::LimpiarRuta(int N)
{
	int valor;
	for (int i = 0; i < N; i++)
		Ruta[i]++;

	if (Ruta[0] != Ruta[N - 1])
	{
		for (int i = 0; i < N; i++)
		{
			valor = Ruta[i];
			if (valor != 0)
			{
				for (int j = N - 1; j>i; j--)
				{
					if (Ruta[j] == valor)
					{
						for (int x = i + 1; x <= j; x++)
						{
							Ruta[x] = 0;
						}
					}
				}
			}
		}
	}
	else
	{
		for (int i = 1; i < N; i++)
		{
			valor = Ruta[i];
			if (valor != 0)
			{
				for (int j = N - 1; j>i; j--)
				{
					if (Ruta[j] == valor)
					{
						for (int x = i + 1; x <= j; x++)
						{
							Ruta[x] = 0;
						}
					}
				}
			}
		}
	}
}

int **Controlador::GenerarMatrizCero(int N)
{
	MatrizOriginal = new int*[N];
	for (int i = 0; i<N; i++)
	{
		MatrizOriginal[i] = new int[N];
	}
	for (int i = 0; i< N;i++)
	for (int j = 0; j < N; j++)
	{
		MatrizOriginal[i][j] = 0;
	}

	return MatrizOriginal;
}
void Controlador::ModificarMatriz(int x, int y)
{
	if (MatrizOriginal[y - 1][x - 1] == 0)
	{
		MatrizOriginal[y - 1][x - 1] = 1;
	}

	else
	{
		MatrizOriginal[y - 1][x - 1] = 0;
	}
}
int Controlador::ContarUnos(int N)
{
	int unos = 0;

	for (int i = 0; i < N;i++)
	for (int j = 0; j < N;j++)
	if (MatrizOriginal[i][j] == 1)
		unos++;

	return unos;
}



