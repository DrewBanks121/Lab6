
#ifndef BinaryReader_h
#define BinaryReader_h

#include <string>

class BinaryReader
{

public:

	BinaryReader();
	~BinaryReader();

	
	void ReadFile();
	
	bool BadInputCheck(const std::string& str);

	void GetBinaryForm(const std::string& BinaryNumb);

private:

	int decimalNumber;
	bool badInput = false;
	

};

#endif // !BinaryReader_h
