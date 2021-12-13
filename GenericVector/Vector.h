#pragma once
#include <iostream>
#include <assert.h>
using namespace std;
template <class T>
class Vector
{
private:
	T vect[3];
public:
	Vector(T, T, T);
	void print() const;
	T& at(unsigned int) const;
	bool operator==(const Vector<T>& v);
	bool operator!=(const Vector<T>& v);
	T& operator[](unsigned int);


};

template<class T>
Vector<T>::Vector(T a, T b, T c)
{
	this->vect[0] = a;
	this->vect[1] = b;
	this->vect[2] = c;
}

template<class T>
void Vector<T>::print() const
{
	for (int i = 0; i < 3; i++)
	{
		cout << vect[i] << endl;
	}
}

template<class T>
T& Vector<T>::at(unsigned int indice) const
{
	assert(0 <= indice && indice < 3)
	return this->vect[indice];
}

template<class T>
bool Vector<T>::operator==(const Vector<T>& v)
{
	for (int i = 0; i < 3; i++)
	{
		if (this->vect[i] != v.at(i))
			return false;
	}
	return true;
}

template<class T>
bool Vector<T>::operator!=(const Vector<T>& v)
{
	for (int i = 0; i < 3; i++)
	{
		if (this->vect[i] != v.at(i))
			return true;
	}
	return false;
}

template<class T>
T& Vector<T>::operator[](unsigned int)
{
	assert(0 <= indice && indice < 3)
	return this->vect[indice];
}

