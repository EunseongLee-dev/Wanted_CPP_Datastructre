#include "Container/HashTable.h"
#include <iostream>

int main()
{
	// 해시 테이블 객체 생성
	HashTable table;

	// 데이터 추가
	table.Add("Ronnie", "010-12345678");
	table.Add("Ronnie", "010-54645678");
	table.Add("Kevin", "010-31345678");
	table.Add("Baker", "010-27345678");
	table.Add("Emily", "010-12323678");
	table.Add("Tae", "010-12377678");

	// 출력
	table.Print();

	// 검색
	Pair<std::string, std::string> outValue;
	if (table.Find("Baker", outValue))
	{
		std::cout << "검색 성공. Key: " << outValue.key
			<< "| Value: " << outValue.value << "\n";
	}

	// 삭제
	table.Delete("Ronnie");
	table.Delete("Kevin");

	table.Print();

	std::cin.get();
}