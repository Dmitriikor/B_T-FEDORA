#pragma once

#include <utility>
#include <memory>

template <typename T>
struct Node
{
	T data;

	std::shared_ptr	<Node<T>> right;
	std::shared_ptr	<Node<T>> left;
	std::weak_ptr	<Node<T>> parent;

	size_t height = 1;

	explicit Node(const T& value) : data(value)/*, prev(this)*/
	{

	}

	Node(const T& value, std::weak_ptr<Node<T>> parent) : data(value), parent(parent)/*, parent(this)*/
	{

	}

	~Node()
	{

	}
};