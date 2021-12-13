template <class T>
class Matrice
{
private:
	T** matr;
public:
	Matrice(int, int);
	void print();
	unsigned int nbL, nbC;
};

template<class T>
Matrice<T>::Matrice(int nbL, int nbC)
{
	this->nbL = nbL;
	this->nbC = nbC;
	this->matr = new T[nbL][nbC];
}

template<class T>
void Matrice<T>::print()
{
	for (int i = 0; i < nbL; i++)
	{
		for (int j = 0; j < nbC; j++)
		{

		}
	}
}
