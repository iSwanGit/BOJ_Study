// pipe

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {

	string ex;
	cin >> ex;

	int lasercnt= 0;
	int pipecnt = 0;
	int pipestack = 0;
	int endpipe = 0;
	int result = 0;
	
	for (size_t i = 0; i < ex.length(); i++) {
		if (ex[i] == '(') {
			//pipecnt++;
			pipestack++;
		}
		else if (ex[i] == ')') {
			if (ex[i-1] == '(') {
				// laser
				pipestack--;
				lasercnt++;
				result += pipestack + endpipe;
				endpipe = 0;
			}
			else if (ex[i - 1] == ')') {
				pipestack--;
				//pipecnt--;
				endpipe++;
			}
		}
	}
	result += endpipe;

	cout << result << endl;



	return 0;
}
