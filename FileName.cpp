#include<iostream>
#include"Utility.h"
using namespace std;

int main()
{
	Utility::Srand();
	string arr[6];
	Utility::Fill_Array_With_Random_Keys(arr, 6,Utility::mix);
	Utility::Print_Array(arr,6);
	
}