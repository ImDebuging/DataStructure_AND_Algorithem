#include<iostream>
#include<map>
#include<vector>
using namespace std;
template<typename T>
T test(T t1)
{
	cout << t1;
	return t1;
}
int main()
{
	int a;
	test(1);
	return a;
}