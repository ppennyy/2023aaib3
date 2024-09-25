///week03-1.cpp
///因為range-based for迴圈必須在c+11 (2011之後)才能用
///如果使用c++98 (1998年版c++)會無法正確編譯
#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for(char c : s){
		if(c!='2')cout << c;
	}
	return 0;
}

