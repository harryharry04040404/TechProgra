#pragma once 
#include<functional>
#include<vector>

class Order
{
private:
	template<class T>
	static bool SortIncreasingOrder(const T& a, const T& b) 
	{ 
		return a < b; 
	}

	template<class T> static bool SortDecreasingOrder(const T& a, const T& b) 
	{ 
		return a > b; 
	}

	template<class T> static void Swap(T& a, T& b) 
	{ 
		int c = a; 
		a = b; 
		b = c; 
	}

	template<class T, class Func> static int FindPosBasedOnFunc(const std::vector<T>& v, int left, int right, Func func)
	{
		int pos = left; 
		for (int i = left + 1; i <= right; ++i) 
		{ 
			if (func(v[i], v[pos]))pos = i; 
		} 
		return pos;
	}

public: 
	template<class T> 
	static void SelectionSort(std::vector<T>& v, bool increasingOrder = true) 
	{ 
		std::function<bool(T, T)>Func = [increasingOrder](Ta, Tb) 
		{
			return (increasingOrder) ? Order::SortIncreasingOrder(a, b) : Order::SortDecreasingOrder(a, b); 
		}; 
		int last = v.size() - 1; 
		for (int i = 0; i < last; ++i) 
		{ 
			int k = FindPosBasedOnFunc(v, i, last, Func); Swap(v[k], v[i]); 
		} 
	} 
	template<class T> static void InsertionSort(std::vector<T>& v, bool increasingOrder = true) 
	{ 
		std::function<bool(T, T)>Func = [increasingOrder](Ta, Tb) 
		{
			return (increasingOrder) ? Order::SortIncreasingOrder(a, b) : Order::SortDecreasingOrder(a, b); 
		}; 
		for (int i = 1; i < v.size(); ++i) 
		{ 
			int x = v[i]; intj = i; while (j > 0 && Func(x, v[j - 1])) 
			{ 
				v[j] = v[j - 1]; --j; 
			} 
			v[j] = x; 
		} 
	} 
	template<class T> static void BubbleSort(std::vector<T>& v, bool increasingOrder = true) 
	{ 
		std::function<bool(T, T)>Func = [increasingOrder](Ta, Tb) 
		{
			return (increasingOrder) ? Order::SortIncreasingOrder(a, b) : Order::SortDecreasingOrder(a, b); 
		}; 
		int n = v.size(); 
		for (int i = 0; i < n - 1; ++i) 
		{ 
			for (int j = 0; j < n - i - 1; ++j) 
			{ 
				if (Func(v[j + 1], v[j])) Swap(v[j], v[j + 1]); 
			} 
		} 
	}
};