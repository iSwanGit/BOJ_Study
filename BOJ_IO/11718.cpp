// 그대로 출력하기
// getline 의 도움을 받음

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

	string s;

	while (getline(cin,s)) {
		cout << s << endl;
	}

	return 0;

}