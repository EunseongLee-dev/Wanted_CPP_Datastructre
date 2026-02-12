//#define WIN32_LEAN_AND_MEAN

#include <iostream>
//#include <Windows.h>
//#include <WinSock2.h>

// 템플릿으로 배열 만들기
template<typename T, size_t size> // size_t size = 10 도 가능
class Array
{
public:
	size_t Size() const
	{
		return size;
	}

	// 배열 연산자 오버로딩
	T& operator[](size_t index)
	{
		return data[index];
	

	const T& operator[](size_t index) const
	{
		return data[index];
	}

private:
	// 배열 변수
	T data[size] = {};
};

int main()
{
	// 배열 변수 선언
	Array<int, 5> array;
	array[3] = 20;

	// 템플릿에 기본값을 설정해뒀을 경우
	/*Array<int> array;*/
	
	// const 접근
	const auto& arrayReference = array;

	std::cin.get();
}