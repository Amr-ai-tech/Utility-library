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


};

