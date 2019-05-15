#include <iostream>

class RCString {
	struct StringVal {
		int nRef;
		char* val;
		StringVal(const char* str);
		~StringVal();
	};
	StringVal* value; //compartido por todos
public:
	RCString(const char* str);
	~RCString();
	RCString(const RCString& rhs);
};

RCString::StringVal::StringVal(const char * str)
{
	*val = *str;
	nRef = 0;
}

RCString::StringVal::~StringVal()
{
	*val = NULL;
	nRef--;
}

RCString::RCString(const char * str)
{
	StringVal temp(str);
}

RCString::~RCString()
{
}

RCString::RCString(const RCString & rhs)
{
	this->value->val = rhs.value->val;
	rhs.value->nRef++;
}


void main() {
	RCString str1("hello");
	RCString str2(str1);
	RCString str3(str1);
}