#include "LinkedList/LinkedList.h"
#include <iostream>
#include <list>
#include <forward_list>

int main()
{
	LinkedList<int> list;
	list.Insert(20);
	list.Insert(30);
	list.Insert(10);

	// 출력
	std::cout << "노드 추가 후 출력\n";
	list.print();

	// 삭제
	list.Delete(30);
	list.Delete(10);
	
	// 출력
	std::cout << "삭제 후 출력\n";
	list.print();


	std::cin.get();
}