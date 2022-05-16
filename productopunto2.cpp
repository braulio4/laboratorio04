#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>
#include<time.h>

using std::cout;
using std::endl;
using std::vector;
using std::copy;
constexpr int WIDTH =  10;

int main(){
	for(int i=1;i<=1000000;i++){
		vector<float> *vec1 = new float[10];
	    vector<float> *vec2 = new float[10];
		srand(time(NULL));
		float numeroAleatorio = 0.00, imprimirAleatorio;
	    cout << "vector_of_pointers addresses:" << endl;
	    for(int i = 0; i < WIDTH; ++i) {
	    	numeroAleatorio = rand() / (float) RAND_MAX;
	    	vec1[i]= 1 + numeroAleatorio * ( 10 + 100);
	    	vec2[i]= 1 + numeroAleatorio * ( 10 + 100);
	    }
	
	    copy(*vec1.begin(),*vec1.end(),
	         std::ostream_iterator<float>(cout,"; "));
	    cout << endl;
	
	    copy(vec2.begin(), vec2.end(),
	         std::ostream_iterator<float>(cout,"; "));
	    cout << endl;
	
	    cout << "Scalar product is: "
	              << inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0);
	    cout << endl;
	}
	

    return EXIT_SUCCESS;
}