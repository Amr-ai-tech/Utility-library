#pragma once
#include<iostream>
#include<cstdlib>
using namespace std;

class Utility
{

public:
	enum type
	{
		small,large,diget,mix,sp
	};

	static void Srand()
	{
		srand((unsigned)time(NULL));
	}

	static int random_number(int from, int to)
	{
		return (rand() % (to - from + 1)) + from;
	}

	static char random_char(type t)
	{
		if (t == type::mix)
		{
			t = type(random_number(0,2));
		}
		switch (t)
		{

		case type::small:
		{
			return char(random_number(97, 122));
			break;
		}
		case type::large:
		{
			return char(random_number(65, 90));
			break;
		}
		case type::sp:
		{
			return char(random_number(33, 47));
			break;
		}
		case type::diget:
		{
			return char(random_number(48, 57));
			break;
		}
		default:
		{
			return 'E';
		}
		}
	}
	
	static string gen_word(type t, int length)
	{
		string word = "";
		switch (t)
		{
		case type::large:
			for (int i = 0; i < length; i++)
			{
				word += random_char(t);
			}
			break;
		case type::small:
			for (int i = 0; i < length; i++)
			{
				word += random_char(t);
			}
			break;
		case type::mix:
			for (int i = 0; i < length; i++)
			{
				word += random_char(t);
			}
			break;
		default:
			word = "Error";
			break;

		}

		return word;
	}

	static string gen_key(type t)
	{
		string key = gen_word(t, 4) + " - " + gen_word(t, 4) + " - " + gen_word(t, 4) + " - " + gen_word(t, 4) ;
		return key;
	}

	static void gen_keys(type t,int num)
	{
		for (int i = 0; i < num; i++)
		{
			cout << gen_key(t) << endl;
		}
	}

	static void Fill_Array_With_Random_Numbers(int arr[],int size)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = random_number(0, 1000);
		}
	}

	static void Print_Array(int arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << endl;
		}
	}

	static void Print_Array(string arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << endl;
		}
	}

	static void Fill_Array_With_Random_Words(string arr[], int size, type t)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = gen_word(t, 4);
		}
	}

	static void Fill_Array_With_Random_Keys(string arr[], int size, type t)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = gen_key(t);
		}
	}


};

