#ifndef _H_INDEXBUFFER_
#define _H_INDEXBUFFER_
#include <vector>

class IndexBuffer {
public:
	unsigned int mHandle;
	unsigned int mCount;
private:
	IndexBuffer(const IndexBuffer& other);
	IndexBuffer& operator=(const IndexBuffer& other);
public:
	IndexBuffer();
	~IndexBuffer();

	void Set(unsigned int* inputArray, unsigned int arrayLength);
	void Set(std::vector<unsigned int>& input);

	unsigned int Count();
	unsigned int GetHandle();

};


#endif // !_H_INDEXBUFFER_

