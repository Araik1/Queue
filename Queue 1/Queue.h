/*******************************************Описание**************************************************************************

	* @autor Melumyan Araik

	* Класс queue является контейнерным адаптером,			
	  который дает программисту функциональность очереди - в частности, FIFO (первым вошел, первым вышел) структуру данных.
	
	* @version 1.0
-----------------------------------------------------------------------------------------------------------------------------*/
#pragma once
#include "list"

using namespace std;

template<class T>
class queue
{
	list<T> q_;
public:
	/*Создает новый пустой объект*/
	queue() {};

	/*Создает новый объект с элементом переданным ему в параметр*/
	queue(const T& ob)
	{
		this->push(ob);
	};

	/*Создает копию объекта переданного ему в параметр*/
	queue(const queue& copy)
	{
		*this = copy;
	};

	/*Вставляет элемент в конец */
	void push(const T& ob)
	{
		this->q_.push_back(ob);
	};

	/*Возвращает первый элемент с последующим удалением*/
	T& pop()
	{
		auto res = this->q_.front();
		this->q_.pop_front();
		return res;
	};

	/*Предоставляет доступ к первому элементу */
	const T& front() const
	{
		return this->q_.front();
	};

	/*Предоставляет доступ к последнему элементу */
	const T& back() const
	{
		return this->q_.back();
	};

	/*Возвращает количество элементов в контейнере */
	const unsigned int size() const
	{
		return this->q_.size();
	};

	/*Проверяет отсутствие элементов в контейнере*/
	const bool empty() const
	{
		return this->q_.empty();
	};

	/*Присваивание копированием*/
	queue& operator=(const queue &right)
	{
		if (this != &right)
		{
			this->q_ = right.q_;
		}

		return *this;
	}

};

