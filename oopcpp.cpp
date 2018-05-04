/*
*======= Implementasi penggunaan Pemrograman berorientasi objek =======*
*======= Pemberi soal: Abiyoga Bayu Primadi 										=======*
*======= Studi kasus:																						=======*
*======= buatlah sebuah program C++ sederhana menggunakan konsep OOP ==*
*======= dengan ketentuan sebagai berikut												=======*
*======= *Program harus dikerjakan dalam satu folder working directory 																					>>>
*======= *Dilarang mengerjakan menggunakan IDE.												 																					>>>
*======= *Program memiliki tiga class dengan nama Triangle, MathNow, dan ShortNow.															>>>
*======= *Buatlah sebuah method yang melakukan pengerjaan seperti nama classnya.																>>>
*======= *Untuk class ShortNow buatlah sebuah method untuk melakukan pengurutan secara Ascending dan Descending.>>>
*======= *
*/


#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

class Triangle //create class instance named Triangle
{
public:
	void sideTriangle()
	{
		int innum = 20;
		for (int i = 0; i <= innum; i++)
		{
			for(int j = 0; j <= i; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}

	void fullTriangle()
	{
		int innum = 23;
		for (int i = 0; i <= innum; i++)
		{
			for(int j = innum; j >= i; j--)
			{
				cout << "*";
			}
			for(int k = 1; k <= i; k++)
			{
				cout << "+";
			}
			for(int l = 1; l <= i; l++)
			{
				cout << "/";
			}
			for(int m = innum; m >= i; m--)
			{
				cout << "-";
			}
			cout << endl;	
		}
	}

	void sideReverseTriangle()
	{
		int innum = 20;
		for (int i = 0; i <= innum; i++)
		{
			for (int j = innum; j >= i; j--)
			{
				cout << "*";
			}
			cout << endl;
		}
	}

};

class MathNow //create class instance named MathNow
{
public:
	int Paktorial(int fakNum = 7)
	{
		int i, f;
		f = 1;
		for(i = 2; i <= fakNum; i++){
			f = f*i;
		}

		return (f);
	}

	int ganjilGenap(int num1 = 4)
	{
		if (num1 % 2 == 0)
		{
			cout << "angka yang anda masukan adalah genap" << endl;
		} else {
			cout << "angka yang anda masukan adalah ganjil" << endl;
		}

		return (num1);
	}

	void Fibonaci(){

		int seed = 10;
		int a = 0;
		int b = 1;

		for(int i = 0; i <= seed; i++)
		{
			a = a + b;
			b = a - b;
		}
	}

	void PrimaOr(){
		int prima = 1;
		int pembagi = 11;
		int c = pembagi;

		cout << "angka inputnya adalah sepuluh 10" << endl;

		for(int i = 1; i < pembagi; i++)
		{
			if((pembagi % c) == 0){
				if(pembagi != c){
					cout << "bukan bilangan prima";
					prima = 0;
				}
			}
			c--;
		}
		if(prima == 1){
			cout << "bilangan prima" << endl;
		}
	}

	void PrimaryNumber(){
		int c;

		for(int i = 0; i <= 100; i++){
			for(int j = 1; j <= i; j++){
				if(i % j == 0){
					c++;
				}
			}

			if(c == 2) printf("%d\n", i);
			c = 0;
		}
	}
};

class ShortNow //create class instance named ShortNow
{
public:
	void AscendShort(){
		int temp;
		int array[] = {3,9,4,8,5,7,2,0,1};

		for( int i = 0; i <= 8; i++ ){
			for( int j = i + 1; j <= 8; j++ )
			{
				if(array[i] > array[j])
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}	
			}
			cout << array[i] << "\n";
		}
	}

	void DescendShort(){
		int temp;
		int array[] = {0,1,9,2,8,3,7,4};

		for( int i = 0; i <= 7; i++ ){
			for( int j = i + 1; j <= 7; j++ )
			{
				if(array[i] < array[j])
				{
					temp = array[j];
					array[j] = array[i];
					array[i] = temp;
				}
			}
			cout << array[i] << "\n";
		}
	}
};

int main()
{
	MathNow simple;
	simple.PrimaryNumber();
	return 0;
}
		
