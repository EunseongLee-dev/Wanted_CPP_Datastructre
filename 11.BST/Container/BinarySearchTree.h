#pragma once

#include "Node.h"

// 이진 탐색 트리 클래스
template<typename T>
class BinarySearchTree
{
public:
	BinarySearchTree()
	{
	}

	~BinarySearchTree()
	{
		//Todo: 트리 제거 함수 구현 후 호출
	}

	// 삽입
	// 규칙
	// 0. 중복된 값 허용 안함
	// 1. 루트 노드부터 비교 시작
	// 1-1. 루트가 null 이면 루트 생성
	// 2. 추가할 값이 작으면 왼쪽에 저장
	// 3. 추가할 값이 크면 오른쪽에 저장
	bool InsertNode(const T& newData)
	{
		// 중복 여부 확인
		// Todo: 검색 함수 구현 후 호출

		// 루트가 없으면 루트 노드 생성
		if (!root)
		{
			root = new Node<T>(newData);
			return true;
		}

		// Todo: 2/3을 처리하기 위해 재귀 함수 호출
	}
	// 삭제

	// 검색

	// 순회

private:
	// 재귀 함수

	// 삽입 재귀 함수
	Node<T>* InsertNodeRecursive(
		Node<T>* node,
		Node<T>* parent,
		const T& newData)
	{
		// node가 null이면 노드 생성 후 반환
		if (!node)
		{
			return new Node<T>(newData, parent);
		}

		// 추가하려는 값이 비교 노드 보다 작으면
		// 왼쪽 하위 트리로 탐색 진행
		if (node->data > newData)
		{
			node->left = InsertNodeRecursive(
				node->left, node, newData);
		}
		// 추가하려는 값이 비교 노드 보다 크면
		// 오른쪽 하위 트리로 탐색 진행
		else
		{
			node->right = InsertNodeRecursive(
				node->right, node, newData);
		}

		// 트리 구조 유지를 위해 반환
		return node;
	}

	// 파괴 함수
private:
	// 루트 노드
	Node<T>* root = nullptr;
};