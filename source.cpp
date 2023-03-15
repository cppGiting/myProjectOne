#include <vector>
#include <iostream>
#include <limits.h>
#include <ctime>

using namespace std;

static int array_static[10];

int main(int argc, char *argv[])
{
	srand(time(NULL));
	
	int size;
	
	vector<vector<int>> array;
	array.resize(10);
	array.reserve(0);
	cout << "Enter size plz: ";
	cin >> size;
	
	for(size_t x = 0; x < 10; ++x){
		array[x].resize(size);
		for(size_t i = 0; i < size; ++i){
      array[x][i] = rand() % 10000000;
    }
	}
	
	int max;
  
  for(size_t i = 0; i < 10; ++i){
    max = INT_MIN;
    for(size_t x = 0; x < size; ++x){
      if(array[i][x] > max){
        max = array[i][x];
      }
    }
    array_static[i] = max;
  }
	
  for(size_t i = 0; i < 10; ++i){
    cout << (i +  1) << "# " << array_static[i] << endl;
  }
  
	return 0;
}
