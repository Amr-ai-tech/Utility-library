#include<iostream>
#include"Utility.h"
using namespace std;

int main()
{
	Utility::Srand();
	cout<<Utility::gen_word(Utility::small, 5);
	
}