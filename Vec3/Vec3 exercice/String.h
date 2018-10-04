#ifndef _STRING_
#define _STRING_
#include <assert.h>

class string
{
private:
	char* text = nullptr;
	unsigned int alloc_mem = 0u;

public:

	string() {}

	string(char c)
	{
		text = &c;
		alloc_mem = 1;
	}

	string(const char* c)
	{
		assert(c != nullptr);
		if (c)
		{
			unsigned int i = 0;
			while (c[i] != '\0')
				i++;

			text = new char[i];

			/*for (unsigned int j = i; j >= 0; j--)
				text[j] = c[j];*/
			for (unsigned int j = 0; j <= i; j++)
				text[j] = c[j];

			alloc_mem = i;
		}
		else
		{
			alloc_mem = 0;
			text = new char[0];
		}
	}

	string(const string &str) :text(str.text), alloc_mem(str.alloc_mem) {}

	string operator = (const char* c)
	{
		unsigned int i = 0;
		while (c[i] != '\0')
			i++;

		text = new char[i];
		for (unsigned int j = 0; j <= i; j++)
			text[j] = c[j];

		alloc_mem = i;

		return *this;
	}

	string operator= (const string &string)
	{
		text = string.text;
		alloc_mem = string.alloc_mem;
		return *this;
	}

	string operator += (const string &str)
	{
		text += *str.text;
		alloc_mem += str.alloc_mem;
		return *this;
	}

	~string()
	{
		if(text != nullptr)			
			text = nullptr;
			alloc_mem = 0u;
			delete[] text;
	}
};

#endif // !_STRING_